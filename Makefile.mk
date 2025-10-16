

base: main.o student.o date.o address.o
	g++ -std=c++11 -Wall -g main.o -o base
	
main.o: student.h date.h address.h main.cpp
	g++ -std=c++11 -c main.cpp

student.o: date.h address.h student.h student.cpp
	g++ -std=c++11 -c student.cpp

date.o: date.h date.cpp
	g++ -std=c++11 -c date.cpp

address.o: address.h address.cpp
	g++ -std=c++11 -c address.cpp

clean:
	rm -f *.o
	rm game
run: game
	./game
