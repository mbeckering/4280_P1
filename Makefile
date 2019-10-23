all: main

main: main.cpp
	g++ main.cpp scanner.cpp testScanner.cpp -o scanner
	
clean:
	rm scanner input.fs19