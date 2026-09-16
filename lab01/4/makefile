all: main.exe

main.exe: main.o hello.o goodbye.o message.o
	g++ main.o hello.o goodbye.o message.o -o main.exe

main.o: main.cpp hello.h goodbye.h
	g++ -c -std=c++11 -o main.o main.cpp

hello.o: hello.cpp hello.h message.h
	g++ -c -std=c++11 -o hello.o hello.cpp

goodbye.o: goodbye.cpp goodbye.h message.h
	g++ -c -std=c++11 -o goodbye.o goodbye.cpp

message.o: message.cpp message.h
	g++ -c -std=c++11 -o message.o message.cpp
