price_calc: src/calc.cpp src/price_calc.cpp include/calculus.h
	g++ -o price_calc src/price_calc.cpp src/calc.cpp -I ./include
clean:
	rm -f price_calc *.o
