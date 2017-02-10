#include "AVLTree.h"
/*
* Main Contains Menu
*/
int main()
{
	int choice, item;
	avlTree avl;
	while (1)
	{
		std::cout << "\n---------------------" << std::endl;
		std::cout << "AVL Tree Implementation" << std::endl;
		std::cout << "\n---------------------" << std::endl;
		std::cout << "1.Insert Element into the tree" << std::endl;
		std::cout << "2.Display Balanced AVL Tree" << std::endl;
		std::cout << "3.InOrder traversal" << std::endl;
		std::cout << "4.PreOrder traversal" << std::endl;
		std::cout << "5.PostOrder traversal" << std::endl;
		std::cout << "6.Exit" << std::endl;
		std::cout << "Enter your Choice: ";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "Enter value to be inserted: ";
			std::cin >> item;
			root = avl.insert(root, item);
			break;
		case 2:
			if (root == NULL)
			{
				std::cout << "Tree is Empty" << std::endl;
				continue;
			}
			std::cout << "Balanced AVL Tree:" << std::endl;
			avl.display(root, 1);
			break;
		case 3:
			std::cout << "Inorder Traversal:" << std::endl;
			avl.inorder(root);
			std::cout << std::endl;
			break;
		case 4:
			std::cout << "Preorder Traversal:" << std::endl;
			avl.preorder(root);
			std::cout << std::endl;
			break;
		case 5:
			std::cout << "Postorder Traversal:" << std::endl;
			avl.postorder(root);
			std::cout << std::endl;
			break;
		case 6:
			exit(1);
			break;
		default:
			std::cout << "Wrong Choice" << std::endl;
		}
	}
	return 0;
}