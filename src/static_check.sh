#!/bin/bash

# BAT / CMD goto function
function goto
{
    label=$1
    cmd=$(sed -n "/^:[[:blank:]][[:blank:]]*${label}/{:a;n;p;ba};" $0 | 
          grep -v ':$')
    eval "$cmd"
    exit
}

### START ###
echo -e "Script starting....."
echo -e '\033[0;33m' "\n1>run clang formatting..." '\033[0m'
bash run_clang_format.sh;

echo -e '\033[0;33m' "\n2>Static code analysis using cppcheck" '\033[0m'
cppcheck --enable=all --suppress=missingIncludeSystem ./*.cpp;

read -r -p "Do you want to execute code in gcc/clang? [Y/N] " response
#Check for the response
if [[ "$response" =~ ^([yY][eE][sS]|[yY])$ ]]
then
    echo -e "\n executing code....."
	clear
    goto "$Start"
else
    echo -e "\n No, Exit..... "
	exit 1
fi

#Start Label
: Start
echo -e '\033[0;33m' "\n3> gcc compilation" '\033[0m'
#clang++ -std=c++17 -Wall test.cpp
#g++ -std=c++17 -Wall main.cpp baseConversion.cpp
make
echo -e "\nFile Exexuted!"

#clear
#Run the executable file
#./a.exe
#echo -e "\n"
#read -p "Press Enter to continue ..."

### END ###
