/***********************************************************
** Author: Greg Noetzel
** Date: 7/28/2019
** Description: Header for Node class
***********************************************************/

#ifndef NODE_HPP
#define NODE_HPP

class Node {
private:
	int val;
	Node* prev;
	Node* next;
public:
	Node(int valIn, Node* prevIn, Node* nextIn);

	void setVal(int valIn);
	void setPrev(Node* prevIn);
	void setNext(Node* nextIn);

	int getVal();
	Node* getPrev();
	Node* getNext();
};

#endif