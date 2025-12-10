return {
  {
    "nsidorenco/neotest-vstest",
  },
  {
    "nvim-neotest/neotest",
    opts = {
      adapters = {
        ["neotest-vstest"] = {
          dap_settings = {
            type = "dotnet",
          },
        },
      },
    },
  },
}
