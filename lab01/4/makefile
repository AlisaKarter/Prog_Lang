all: main.exe
main.exe: message.o hello.o goodbye.o main.o
	g++ message.o hello.o goodbye.o main.o -o main.exe
message.o: message.cpp message.h
	g++ -c -std=c++11 -o message.o message.cpp
message.o: hello.cpp
	g++ -c -std=c++11 -o hello.o hello.cpp
message.o: goodbye.cpp
	g++ -c -std=c++11 -o goodbye.o goodbye.cpp
message.o: main.cpp hello.h goodbye.h
	g++ -c -std=c++11 -o main.o main.cpp