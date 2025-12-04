# All the default Omarchy aliases and functions
# (don't mess with these directly, just overwrite them here!)
source ~/.local/share/omarchy/default/bash/rc

# set -o vi

. "$HOME/.cargo/env"

export DOTNET_ROOT="$HOME/.dotnet"
export DOTNET_NOLOGO=1
export DOTNET_CLI_TELEMETRY_OPTOUT=0
export PATH="$PATH:$DOTNET_ROOT:$DOTNET_ROOT/tools"

alias dotnet-install='~/dotnet-install.sh'
alias vsdbg-install='~/vsdbg-install.sh'

unset INPUT_METHOD
unset XMODIFIERS
unset SDL_IM_MODULE
unset QT_IM_MODULE

n() {
  if [ "$#" -eq 0 ]; then
    nvim .
  elif [ "$#" -eq 1 ] && [ -d "$1" ]; then
    pushd "$1"
    nvim .
    popd;
  else
    nvim "$@"
  fi
}

