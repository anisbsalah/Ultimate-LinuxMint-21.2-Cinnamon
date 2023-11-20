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
# CURRENT_DIR="$(pwd)"
##################################################################################################################

echo
tput setaf 3
echo "######################################################################################################"
echo "################# Adding Nix channel"
echo "######################################################################################################"
tput sgr0
echo

nix-channel --add https://nixos.org/channels/nixos-23.05 nixos

nix-channel --update

echo
tput setaf 2
echo "######################################################################################################"
echo "################# Channel added"
echo "######################################################################################################"
tput sgr0
echo
