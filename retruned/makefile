run : Testmain.o EightSideDie.o
	g++ -o run Testmain.o EightSideDie.o
Testmain.o : Testmain.cpp
	g++ -c Testmain.cpp
EightSideDie.o : EightSideDie.cpp
	g++ -c EightSideDie.cpp
clean : Testmain.o EightSideDie.o run
	rm Testmain.o EightSideDie.o run
