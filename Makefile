all: sum_test

sum_test: main.o sum.o
	g++ -o sum_test sum.o main.o

sum.o: sum_test.cpp sum_test.h
	g++ -c -o sum.o sum_test.cpp

main.o: main.cpp sum_test.h
	g++ -c -o main.o main.cpp

clean:
	rm -f sum_test *.o

