# All the default Omarchy aliases and functions
# (don't mess with these directly, just overwrite them here!)
source ~/.local/share/omarchy/default/bash/rc

# Add your own exports, aliases, and functions here.
#
# Make an alias for invoking commands you use constantly
# alias p='python'
. "$HOME/.cargo/env"

export PATH="$PATH:$HOME/src/bin/roslyn-language-server"

export DOTNET_ROOT="$HOME/.dotnet"
DOTNET_TOOLS="$DOTNET_ROOT/tools"
export DOTNET_NOLOGO=1
export DOTNET_CLI_TELEMETRY_OPTOUT=0
# export DOTNET_GENERATE_ASPNET_CERTIFICATE=0
# export DOTNET_CLI_RUN_MSBUILD_OUTOFPROC=0
# export DOTNET_CLI_USE_MSBUILDNOINPROCNODE=0
# export MSBUILDNOINPROCNODE=0
export PATH="$PATH:$DOTNET_ROOT:$DOTNET_TOOLS"

