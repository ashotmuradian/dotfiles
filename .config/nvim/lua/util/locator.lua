local M = {}

M.vscode_csharp_ext_root = vim.trim(
  vim.fn.system("find ~/.vscode/extensions/ -name 'ms-dotnettools.csharp-[0-9]*.[0-9]*.[0-9]*' | sort -V | tail -1")
)

if M.vscode_csharp_ext_root and M.vscode_csharp_ext_root ~= "" then
  vim.notify(
    "Initializing: found VSCode CSharp extension at " .. M.vscode_csharp_ext_root,
    vim.log.levels.TRACE,
    { title = "locator" }
  )
else
  vim.notify("Initializing: could not find VSCode CSharp extension", vim.log.levels.ERROR, { title = "locator" })
  return vim.NIL
end

return M
