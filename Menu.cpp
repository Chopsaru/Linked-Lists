/***********************************************************
** Author: Greg Noetzel
** Date: 7/28/2019
** Description:
***********************************************************/

#include "Validators.hpp"
#include "Node.hpp"
#include "DoubleLinkList.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::endl;

int main() {
	List list;
	bool exit = false;
	int valIn;

	cout << "Welcome to my linked list!" << endl;
													//loops untill exit is selected
	while (exit == false) {
		bool reverse = false;

		cout << "Choose from the following options:" << endl;
		cout << "1. Add a new node to the head;" << endl;
		cout << "2. Add a new node to the tail;" << endl;
		cout << "3. Delete from head;" << endl;
		cout << "4. Delete from the tail;" << endl;
		cout << "5. Traverse the list reversely;" << endl;
		cout << "6. Exit." << endl;

		int menuC = intValidator(1, 6);


		switch (menuC) {
		case 1:
													//function 1: new head node
			cout << "Enter a positive integer." << endl;	
			valIn = intValidatorPositive();
			list.newHead(valIn);
			break;
		case 2:
													//function 2: new tail node
			cout << "Enter a positive integer." << endl;
			valIn = intValidatorPositive();
			list.newTail(valIn);
			break;
		case 3:
													//function 3: delete head node
			list.deleteHead();
			break;
		case 4:
													//function 4: delete tail node
			list.deleteTail();
			break;
		case 5:
			reverse = true;
			break;
													//exit
		case 6:
			exit = true;
			break;
		}

		if (exit) {
			return 0;
		}
		else {
			if (reverse == true) {
													//function 5: print reverse list
				list.printReverse();
			}
			else {
													//function 6: print list
				list.printList();
			}
		}
	}
}