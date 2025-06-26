#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    Node()
    {
        leftchild = nullptr;
        rightchild = nullptr;
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr;
    }

    void insert()
    {
        int X;
        cout << "masukan nilai :";
        cin >> X;
        // step 1: Allocate memory for the new node
        Node *newNode = new Node();
        // step 2: Assign value to the data field of new node
        newNode->info = X;

        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        Node *parent = nullptr;
        Node *currentNode = nullptr;
        Search(X, parent, currentNode);

        if (parent == nullptr)
        {
            ROOT = newNode;

            return;
        }

        if (X < parent->info)
        {
            parent->leftchild = newNode;

            return;
        }

        else if (X > parent->info)
        {
            parent->rightchild = newNode;

            return;
        }
    }
    void Search(int element, Node *&parent, Node *&currentNode)
    {
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }
    }

    void inorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is Empty" << endl;
            return;
        }
        if (ptr == nullptr)
            return;

        inorder(ptr->leftchild);
        cout << ptr->info << " ";
        inorder(ptr->rightchild);
    }
   
    }
};
