-- bootstrap lazy.nvim, LazyVim and your plugins
require("config.lazy")

vim.diagnostic.enable(false)

vim.lsp.enable("roslyn_ls_lspconfig_based")
-- vim.lsp.enable("roslyn_ls_source_based")
-- vim.lsp.enable("roslyn_ls_vscode_based")
