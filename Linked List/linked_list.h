#include <iostream>

using namespace std;

template <class T>
class Node
{
  private:
    T data;
    Node *next;

  public:
    Node(T data)
    {
        this->data = data;
        this->next = nullptr;
    }

    T getData()
    {
        return data;
    }

    Node *getNext()
    {
        return next;
    }

    void setNext(Node *next)
    {
        this->next = next;
    }
};

template <class T>
class LinkedList
{
  private:
    Node<T> *head;
    Node<T> *tail;

  public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    LinkedList(T data)
    {
        head = new Node<T>(data);
        tail = head;
    }

    virtual ~LinkedList()
    {
        delete head;
    }

    void show()
    {
        cout << "\nImprimindo todos os elementos...\n";
        Node<T> *c = head;

        if (empty())
            cout << "A lista não possui elementos!\n";
        else
        {
            while (c)
            {
                cout << c->getData() << endl;
                c = c->getNext();
            }
            cout << endl;
        }
    }

    bool empty()
    {
        return (head == nullptr);
    }

    void push_front(T data)
    {
        Node<T> *node = new Node<T>(data);
        node->setNext(head);
        head = node;
    }

    void push_back(T data)
    {
        Node<T> *node = new Node<T>(data);

        if (empty())
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->setNext(node);
            tail = node;
        }
    }

    int size()
    {
        if (empty())
            return 0;

        Node<T> *c = head;
        int size = 0;

        do
        {
            c = c->getNext();
            size++;
        } while (c);

        return size;
    }

    bool contains(T data)
    {
        Node<T> *c = head;
        while (c)
        {
            if (c->getData() == data)
                return true;
            c = c->getNext();
        }
        return false;
    }

    // Remoção do final
    void remove()
    {
        if (!empty())
        {
            // Se houver só 1 elemento
            if (head->getNext() == nullptr)
            {
                head = nullptr;
            }
            else if (head->getNext()->getNext() == nullptr) // 2 elementos
            {
                head->setNext(nullptr);
            }
            else // mais de 2 elementos
            {
                Node<T> *ant_ant = head;
                Node<T> *ant = head->getNext();
                Node<T> *current = head->getNext()->getNext();

                while (current)
                {
                    Node<T> *aux = ant;
                    ant = current;
                    ant_ant = aux;
                    current = current->getNext();
                }
                delete ant_ant->getNext();
                ant_ant->setNext(nullptr);
                tail = ant_ant;
            }
        }
    }
};