return {
  "nvim-neo-tree/neo-tree.nvim",
  opts = {
    enable_git_status = false,
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
      filtered_items = {
        hide_dotfiles = false,
        hide_ignored = false,
      },
    },
  },
}
