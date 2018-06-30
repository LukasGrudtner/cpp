#include <iostream>
using namespace std;

class Node
{
  private:
    Node *left, *right;
    int index;

  public:
    Node(int index)
    {
        this->index = index;
        left = nullptr;
        right = nullptr;
    }

    int getIndex()
    {
        return index;
    }

    Node *getLeft()
    {
        return left;
    }

    Node *getRight()
    {
        return right;
    }

    void setLeft(Node *node)
    {
        left = node;
    }

    void setRight(Node *node)
    {
        right = node;
    }
};

class BinaryTree
{
  private:
    Node *root;

  public:
    BinaryTree()
    {
        root = nullptr;
    }

    void insert(int index)
    {
        if (root == nullptr)
        {
            root = new Node(index);
        }
        else
        {
            insertAux(root, index);
        }
    }

    void insertAux(Node *node, int index)
    {
        if (index < node->getIndex())
        {
            if (node->getLeft() == nullptr)
            {
                Node *newNode = new Node(index);
                node->setLeft(newNode);
            }
            else
            {
                insertAux(node->getLeft(), index);
            }
        }
        else if (index > node->getIndex())
        {
            if (node->getRight() == nullptr)
            {
                Node *newNode = new Node(index);
                node->setRight(newNode);
            }
            else
            {
                insertAux(node->getRight(), index);
            }
        }
    }

    Node *getRoot()
    {
        return root;
    }

    void inOrder(Node *node)
    {
        if (node != nullptr)
        {
            inOrder(node->getLeft());
            cout << node->getIndex() << " ";
            inOrder(node->getRight());
        }
    }

    void preOrder(Node *node)
    {
        if (node != nullptr)
        {
            cout << node->getIndex() << " ";
            preOrder(node->getLeft());
            preOrder(node->getRight());
        }
    }

    void postOrder(Node *node)
    {
        if (node != nullptr)
        {
            postOrder(node->getLeft());
            postOrder(node->getRight());
            cout << node->getIndex() << " ";
        }
    }
};

int main()
{
    BinaryTree btree;

    btree.insert(8);
    btree.insert(10);
    btree.insert(14);
    btree.insert(13);
    btree.insert(3);
    btree.insert(1);
    btree.insert(6);
    btree.insert(4);
    btree.insert(7);

    cout << "Percorrendo em ordem...\n";
    btree.inOrder(btree.getRoot());

    cout << "Percorrendo em pré-ordem...\n";
    btree.preOrder(btree.getRoot());

    cout << "Percorrendo em pós-ordem...\n";
    btree.postOrder(btree.getRoot());
    
    cout << endl;
    return 0;
}