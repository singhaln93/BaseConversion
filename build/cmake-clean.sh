#! bin/sh
#shopt -s extglob
#rm !(cmake-build.sh|cmake-clean.sh)
GLOBIGNORE=*.sh
rm -v * | rmdir -rf *
unset GLOBIGNORE
