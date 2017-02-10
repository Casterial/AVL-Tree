#include "AVLTree.h"

//initializing function for insert
void BSTree::insert(int x, nodePtr &p)
{
	if (p == NULL)
	{
		p = new node;
		p->elem = x;
		p->left = NULL;
		p->right = NULL;
		p->height = 0;
		if (p == NULL)
			std::cout << "Out of space\n" << std::endl;
	}
	else
	{
		if (x < p->elem)
		{
			insert(x, p->left);
			if ((bHeight(p->left) - bHeight(p->right)) == 2)
			{
				if (x < p->left->elem)
					p = srl(p);
				else
					p = drl(p);
			}
		}
		else if (x > p->elem)
		{

		}
	}
	{

	}
}