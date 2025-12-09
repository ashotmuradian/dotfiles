-- bootstrap lazy.nvim, LazyVim and your plugins
require("config.lazy")

vim.diagnostic.enable(false)
vim.lsp.enable("roslyn_ls_lspconfig_based")

vim.o.relativenumber = true

vim.o.backup = false
vim.o.swapfile = false
vim.o.undofile = true
vim.o.updatetime = 100

vim.o.list = false
vim.opt.listchars = {
  tab = ">-",
  trail = "·",
  space = "·",
  nbsp = "%",
  extends = ">",
  precedes = "<",
}

vim.api.nvim_create_autocmd("FileType", {
  callback = function()
    vim.opt.formatoptions:remove({ "r", "o" })
  end,
})

vim.api.nvim_create_autocmd("FileType", {
  pattern = { "cs" },
  callback = function()
    vim.opt_local.indentexpr = ""
  end,
})

vim.api.nvim_create_autocmd("FileType", {
  pattern = "help",
  command = "wincmd L",
})
