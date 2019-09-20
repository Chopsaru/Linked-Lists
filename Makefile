lab6: DoubleLinkList.o Menu.o Node.o Validators.o
	g++ -std=c++11 DoubleLinkList.o Menu.o Node.o Validators.o -o lab6

DoubleLinkList.o:
	g++ -c -std=c++11 DoubleLinkList.cpp

Menu.o:
	g++ -c -std=c++11 Menu.cpp

Node.o:
	g++ -c -std=c++11 Node.cpp

Validators.o: 
	g++ -c -std=c++11 Validators.cpp

clean:
	rm *.o lab6