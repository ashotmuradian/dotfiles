# All the default Omarchy aliases and functions
# (don't mess with these directly, just overwrite them here!)
source ~/.local/share/omarchy/default/bash/rc

. "$HOME/.cargo/env"

export PATH="$PATH:$HOME/src/bin/roslyn-language-server"

export DOTNET_ROOT="$HOME/.dotnet"
DOTNET_TOOLS="$DOTNET_ROOT/tools"
export DOTNET_NOLOGO=1
export DOTNET_CLI_TELEMETRY_OPTOUT=0
export PATH="$PATH:$DOTNET_ROOT:$DOTNET_TOOLS"

