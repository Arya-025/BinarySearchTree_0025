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

        
    }
};

