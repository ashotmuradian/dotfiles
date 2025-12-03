return {
  "folke/snacks.nvim",
  opts = {
    zen = {
      toggles = {
        dim = false,
        git_signs = true,
        mini_diff_signs = true,
        diagnostics = false,
        inlay_hints = false,
      },
      show = {
        statusline = true,
      },
    },
    styles = {
      terminal = {
        position = "right",
      },
      zen = {
        width = 160,
        backdrop = {
          transparent = false,
          blend = 99,
        },
      },
    },
  },
}
