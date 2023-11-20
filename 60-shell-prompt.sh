#!/bin/bash
#set -e
##################################################################################################################
# Author  :  anisbsalah
# Github  :  https://github.com/anisbsalah
##################################################################################################################
#
# DO NOT JUST RUN THIS. EXAMINE AND JUDGE. RUN AT YOUR OWN RISK.
#
##################################################################################################################
CURRENT_DIR="$(pwd)"
##################################################################################################################

echo
tput setaf 3
echo "######################################################################################################"
echo "################# Installing Oh My Posh..."
echo "######################################################################################################"
tput sgr0
echo

sudo apt install -y curl

curl -s https://ohmyposh.dev/install.sh | sudo bash -s

### Oh My Posh themes
mkdir -p "${HOME}/.config/oh-my-posh/themes" && cp -v "${CURRENT_DIR}/Personal/settings/oh-my-posh/"* "${HOME}/.config/oh-my-posh/themes/"

### Set up your shell to use Oh My Posh
[[ ! -f "${HOME}/.bashrc" ]] || echo '
### Oh My Posh
#eval "$(oh-my-posh init bash)"' | tee -a "${HOME}/.bashrc"

echo
tput setaf 3
echo "######################################################################################################"
echo "################# Installing Starship..."
echo "######################################################################################################"
tput sgr0
#echo

curl -sS https://starship.rs/install.sh | sh

### Starship configuration
cp -v "${CURRENT_DIR}/Personal/settings/starship/starship.toml" "${HOME}/.config/starship.toml"

### Set up your shell to use Starship
[[ ! -f "${HOME}/.bashrc" ]] || echo '
### Starship
eval "$(starship init bash)"' | tee -a "${HOME}/.bashrc"

echo
tput setaf 2
echo "######################################################################################################"
echo "################# Enjoy your new shell prompt"
echo "######################################################################################################"
tput sgr0
echo
