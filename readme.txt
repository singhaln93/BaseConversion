## Clang-format##
#Generate clang-format config file
clang-format -style=llvm -dump-config > .clang-format

execute
>clang-format -i file.cpp

ClangFormatEditor(ClangPowerTools)
https://leimao.github.io/blog/Clang-Format-Quick-Tutorial/
https://zed0.co.uk/clang-format-configurator/

//Clang-tidy is static analyzer from clang
