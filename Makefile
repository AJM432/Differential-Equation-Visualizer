# Must add each class file in makefile as .cpp and .o
# wd = Working directory
wd = $(shell pwd)

all: main

main: main.o Slope.o Helper.o SlopeField.o
	g++ -o main main.o Slope.o Helper.o SlopeField.o -L "$(wd)/lib" -lsfml-graphics -lsfml-window -lsfml-system

main.o: src/main.cpp
	g++ -c src/main.cpp -o main.o -I "$(wd)/include"

Slope.o: src/Slope.cpp
	g++ -c src/Slope.cpp -o Slope.o -I "$(wd)/include"

SlopeField.o: src/SlopeField.cpp
	g++ -c src/SlopeField.cpp -o SlopeField.o -I "$(wd)/include"

Helper.o: src/Helper.cpp
	g++ -c src/Helper.cpp -o Helper.o -I "$(wd)/include"

clean:
	rm -f *.o main

