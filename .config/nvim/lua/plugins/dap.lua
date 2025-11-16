-- https://github.com/mfussenegger/nvim-dap/discussions/869

local utils = require("dap.utils")
local rpc = require("dap.rpc")
local locator = require("util.locator")

local function handshake(self, req)
	local sig = vim.trim(vim.fn.system("node ~/.config/nvim/lua/util/vsda.js '" .. req.arguments.value .. "'"))
	if sig == nil or sig == "" then
		utils.notify("Failed to create request signature", vim.log.levels.ERROR)
		return
	end
	self.client.write(rpc.msg_with_content_length(vim.json.encode({
		type = "response",
		seq = req.seq,
		command = "handshake",
		request_seq = req.seq,
		success = true,
		body = {
			signature = sig,
		},
	})))
end

return {
	"mfussenegger/nvim-dap",
	lazy = false,
	opts = function()
		local dap = require("dap")
		dap.adapters.dotnet = {
			id = "coreclr",
			type = "executable",
			command = vim.fs.joinpath(locator.vscode_csharp_ext_root, ".debugger/vsdbg"),
			args = {
				"--interpreter=vscode",
				"--engineLogging=" .. vim.fs.joinpath(vim.fn.getcwd(), "vsdbg.log"),
			},
			reverse_request_handlers = {
				handshake = handshake,
			},
		}
	end,
}
