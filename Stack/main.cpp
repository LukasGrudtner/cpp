#include "stack.h"

int main()
{
    Pilha<const char *> p(100);

    p.empilhar("python");
    p.empilhar("haskell");
    p.empilhar("c++");
    p.desempilhar();

    if (p.vazia())
    {
        cout << "Pilha vazia!" << endl;
    }
    else
    {
        cout << "Pilha não vazia!" << endl;
    }

    if (p.getTopo() != NULL)
    {
        cout << "Topo: " << p.getTopo() << endl;
    }
    else
    {
        cout << "A pilha está vazia!" << endl;
    }
};