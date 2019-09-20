/***********************************************************
** Author: Greg Noetzel
** Date: 7/28/2019
** Description: Node definition for int-data-only doublely linked list
***********************************************************/

#include "Node.hpp"

//constructor
Node::Node(int valIn, Node* prevIn, Node* nextIn) {
	setVal(valIn);
	setPrev(prevIn);
	setNext(nextIn);
}

//setters
void Node::setVal(int valIn) {
	val = valIn;
}

void Node::setPrev(Node* prevIn) {
	prev = prevIn;
}

void Node::setNext(Node* nextIn) {
	next = nextIn;
}

//getters
int Node::getVal() {
	return val;
}

Node* Node::getPrev() {
	return prev;
}

Node* Node::getNext() {
	return next;
}