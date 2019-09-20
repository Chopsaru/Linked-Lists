/***********************************************************
** Author: Greg Noetzel
** Date: 7/28/2019
** Description: Header for doubly linked list class
***********************************************************/

#ifndef DOUBLE_LINK_LIST_HPP
#define DOUBLE_LINK_LIST_HPP

#include "Node.hpp"

class List {
private:
	Node* head;
	Node* tail;
	Node* indexNode;
public:
	List();
	~List();

	void setHead(Node* headIn);
	void setTail(Node* tailIn);

	Node* getHead();
	Node* getTail();

	void newHead(int valIn);
	void newTail(int valIn);
	void deleteHead();
	void deleteTail();
	void printList();
	void printReverse();


};

#endif