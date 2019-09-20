/***********************************************************
** Author: Greg Noetzel
** Date: 7/28/2019
** Description: Doubley linked list definition. Includes functions 
				to add and delete nodes from head side and tail side 
				as well as print a print function and reverse print function 
***********************************************************/

#include "DoubleLinkList.hpp"
#include <iostream>

using std::cout;
using std::endl;

/***********************************************************
** Description: default constructor, sets all pointers to null
***********************************************************/
List::List() {
	head = nullptr;
	tail = nullptr;
	indexNode = nullptr;
}

/***********************************************************
** Description: destructor, interates thru list and deletes nodes
***********************************************************/
List::~List() {
	indexNode = head;

	while (indexNode->getNext() != nullptr) {
		indexNode = indexNode->getNext();
		delete indexNode->getPrev();
	}
	delete indexNode;
}

//setters
void List::setHead(Node* headIn) {
	head = headIn;
}

void List::setTail(Node* tailIn) {
	tail = tailIn;
}

//getters
Node* List::getHead() {
	if (head != nullptr){
		return head;
	}
	else {
		cout << "empty!" << endl;
	}
}

Node* List::getTail() {
	if (tail != nullptr) {
		return tail;
	}
	else {
		cout << "empty!" << endl;
	}
}

/***********************************************************
** Description: creates a new node in the head position
***********************************************************/
void List::newHead(int valIn) {
													//if list has 1 or more nodes
	if (head != nullptr) {
		head->setPrev(new Node(valIn, nullptr, head));
		head = head->getPrev();
	}
													//if list has no nodes
	else {
		head = new Node(valIn, nullptr, nullptr);
		tail = head;
	}
}

/***********************************************************
** Description: creates a new node in the tail position
***********************************************************/
void List::newTail(int valIn) {
													//if list has one or more nodes
	if (tail != nullptr) {
		tail->setNext(new Node(valIn, tail, nullptr));
		tail = tail->getNext();
	}
													//if list has no nodes
	else {
		tail = new Node(valIn, nullptr, nullptr);
		head = tail;
	}
}

/***********************************************************
** Description:deletes the node in the head postion
***********************************************************/
void List::deleteHead() {
													//create a temp node to take the position of head while we move pointers
	Node* tempNode = head;
													//if no node in list
	if (head == nullptr) {
		cout << "No node in list." << endl;
	}
													//if more than 1 node in list
	else if (tempNode->getNext() != nullptr) {
		head = head->getNext();
		head->setPrev(nullptr);
	}
													//if only one node in list
	else {
		head = nullptr;
		tail = nullptr;
	}
	delete tempNode;
}

/***********************************************************
** Description: deletes the node in the tail positon
***********************************************************/
void List::deleteTail() {
													//create a temp node to take the postition of tail while we move pointers
	Node* tempNode = tail;
													//if no node in list
	if (tail == nullptr) {
		cout << "No node in list." << endl;
	}
													//if more than 1 node in list
	else if (tempNode->getPrev() != nullptr) {
		tail = tail->getPrev();
		tail->setNext(nullptr);
	}
													//if only one node in list
	else {
		head = nullptr;
		tail = nullptr;
	}
	delete tempNode;
}

/***********************************************************
** Description: prints list from head to tail
***********************************************************/
void List::printList() {
													//if no nodes
	if (head == nullptr) {
		cout << "No node in list" << endl;
	}
	else {
		cout << "Your linked list is: ";

		indexNode = head;
													//while loop iterates over nodes and prints value until a null pointer is hit
		while (indexNode != nullptr) {
			cout << indexNode->getVal() << " ";
			indexNode = indexNode->getNext();
		}

		cout << endl;
	}
}

/***********************************************************
** Description: prints list from tail to head
***********************************************************/
void List::printReverse() {
													//if no nodes
	if (tail == nullptr) {
		cout << "No node in list" << endl;
	}
	else {
		cout << "Your reversed list is: ";

		indexNode = getTail();
													//while loop iterates over nodes and prints value until a null pointer is hit
		while (indexNode != nullptr) {
			cout << indexNode->getVal() << " ";
			indexNode = indexNode->getPrev();
		}

		cout << endl;
	}
}