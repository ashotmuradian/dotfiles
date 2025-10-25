-- bootstrap lazy.nvim, LazyVim and your plugins
require("config.lazy")

vim.opt.relativenumber = true

vim.lsp.enable("roslyn_ls")
