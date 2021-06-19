#Name: NEERAJ
#Description: Class BaseConversion

#This is a make file consisting of Label and Targets used to create obj files and clean them.

#dependencies:
all:E0
	
E0: 	baseConversion.o main.o
	g++ -std=c++17 -Wall baseConversion.o main.o -o E0


baseConversion.o:	baseConversion.cpp
			g++ -c -std=c++17 -Wall baseConversion.cpp

main.o:	main.cpp
		g++ -c -std=c++17 -Wall main.cpp 
# -c used toskip linker step and to produce an object file

clean:	
	rm -rf *o E0
#rm stands for removing file and -rf stands for remove the contents recursively and forcely(ignore nonexistent files) 
