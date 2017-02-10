#ifndef _AVLTREE_H
#define _AVLTREE_H
#include <iostream>

struct node
{
	int elem;
	int *left;
	int *right;
	int height;
}; typedef struct node *nodePtr;

class BSTree
{
private:

public:
	//creating prototype functions
	//insert value into tree
	void insert(int, nodePtr &);
	//delete value from tree
	void del(int, nodePtr *&);
	//delete the smallest number from tree
	int deletemin(nodePtr &);
	//find a specific value in tree
	void find(int, nodePtr &);
	//find the smallest value
	nodePtr findMin(nodePtr);
	//find the largest value
	nodePtr findMax(nodePtr &);
	void makeEmp(nodePtr &);
	void copy(nodePtr &, nodePtr &);
	nodePtr nodeCopy(nodePtr &);
	void preOrder(nodePtr);
	void inOrder(nodePtr);
	void postOrder(nodePtr);
	int bHeight(nodePtr);
	nodePtr srl(nodePtr &);
	nodePtr drl(nodePtr &);
	nodePtr drr(nodePtr &);
	int max(int, int);
	int nodeNULL(nodePtr);
};

#endif