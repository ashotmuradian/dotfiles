return {
  "folke/snacks.nvim",
  opts = {
    -- snack's explorer, neo-tree explorer is in the neo-tree.lua file
    -- explorer = {
    --   replace_netrw = true,
    -- },
    picker = {
      sources = {
        -- https://github.com/folke/snacks.nvim/blob/main/docs/picker.md#files
        files = {
          hidden = false,
          ignored = false,
          follow = true,
        },
        -- https://github.com/folke/snacks.nvim/blob/main/docs/picker.md#grep
        grep = {
          hidden = false,
          ignored = false,
          follow = true,
        },
      },
      layout = {
        -- copied below from https://github.com/folke/snacks.nvim/blob/main/docs/picker.md#vertical
        -- preset = "vertical"
        layout = {
          backdrop = false,
          width = 0.8,
          min_width = 80,
          height = 0.8,
          min_height = 30,
          box = "vertical",
          border = true,
          title = "{title} {live} {flags}",
          title_pos = "center",
          { win = "preview", height = 0.4, border = "none" },
          { win = "list", border = "top", title = "{preview}", title_pos = "center" },
          { win = "input", height = 1, border = "top" },
        },
      },
    },
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
        width = 120,
        backdrop = {
          transparent = false,
          blend = 99,
        },
      },
    },
  },
}
