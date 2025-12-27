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

-- -- Disable netrw
-- pcall(vim.api.nvim_del_augroup_by_name, "FileExplorer")
-- -- Use snacks files picker instead of netrw
-- vim.api.nvim_create_autocmd("BufEnter", {
--   once = true,
--   group = vim.api.nvim_create_augroup("DirectoryExplorer", { clear = true }),
--   callback = function(ev)
--     if ev.file ~= "" and vim.fn.isdirectory(ev.file) == 1 then
--       local picker = Snacks.picker.files({
--         -- cmd = "fd",
--         -- args = {
--         --   "--type",
--         --   "f",
--         --   "--path-separator",
--         --   "/",
--         -- },
--         cmd = "tree",
--         args = {
--           "--gitignore",
--           "-aifF",
--         },
--       })
--       if picker and vim.v.vim_did_enter == 0 then
--         -- clear bufname so we don't try loading this one again
--         vim.api.nvim_buf_set_name(ev.buf, "")
--         picker:show()
--         local ref = picker:ref()
--         -- focus on UIEnter, since focusing before doesn't work
--         vim.api.nvim_create_autocmd("UIEnter", {
--           once = true,
--           group = group,
--           callback = function()
--             local p = ref()
--             if p then
--               p:focus()
--             end
--           end,
--         })
--       else
--         -- after vim has entered, we also need to delete the directory buffer
--         -- use bufdelete to keep the window layout
--         Snacks.bufdelete.delete(ev.buf)
--       end
--     end
--   end,
-- })
