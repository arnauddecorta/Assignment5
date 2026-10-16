%.o : %.cpp
	g++ -c -O2 $<

slm : main.o model.o
	g++ -o slm $^