%.o : %.cpp
	g++ -c -O2 $<

slm : main.o model.o result.o
	g++ -o slm $^

clean:
	rm -f *.o slm