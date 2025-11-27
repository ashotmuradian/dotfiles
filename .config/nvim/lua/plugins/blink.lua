return {
  "saghen/blink.cmp",
  opts = {
    completion = {
      accept = {
        auto_brackets = {
          enabled = false,
          kind_resolution = {
            enabled = false,
          },
          semantic_token_resolution = {
            enabled = false,
          },
        },
      },
      documentation = {
        auto_show = false,
        window = {
          border = "rounded",
        },
      },
      ghost_text = {
        show_without_menu = false,
      },
      list = {
        selection = {
          auto_insert = false,
          preselect = false,
        },
      },
      menu = {
        auto_show = false,
        border = "rounded",
      },
    },
    signature = {
      enabled = false,
      window = {
        border = "rounded",
      },
    },
    sources = {
      transform_items = function(_, items)
        -- https://cmp.saghen.dev/configuration/snippets.html
        return vim.tbl_filter(function(item)
          return item.kind ~= require("blink.cmp.types").CompletionItemKind.Snippet
        end, items)
      end,
    },
  },
}
