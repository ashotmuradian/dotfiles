return {
  "nvim-neo-tree/neo-tree.nvim",
  -- enabled = false,
  -- keys = {
  --   { "<leader>e", "<cmd>Neotree reveal<cr>" },
  -- },
  opts = {
    enable_git_status = false,
    window = {
      -- position = "float",
      mappings = {
        ["Z"] = "expand_all_nodes",
      },
    },
    default_component_configs = {
      file_size = {
        enabled = false,
      },
      last_modified = {
        enabled = false,
      },
      type = {
        enabled = false,
      },
    },
    filesystem = {
      -- hijack_netrw_behavior = "disabled",
      filtered_items = {
        hide_dotfiles = false,
        hide_ignored = false,
        hide_gitignored = true,
      },
    },
  },
}
