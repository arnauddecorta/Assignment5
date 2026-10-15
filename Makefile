main.o : main.cpp
	g++ -c -O2 main.cpp

slm : main.o
	g++ -o slm $^