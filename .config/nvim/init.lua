-- bootstrap lazy.nvim, LazyVim and your plugins
require("config.lazy")

vim.diagnostic.enable(false)
vim.lsp.enable("roslyn_ls_lspconfig_based")

vim.o.splitright = true
vim.o.relativenumber = true

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
