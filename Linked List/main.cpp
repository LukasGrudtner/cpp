#include <iostream>
#include "linked_list.h"

int main()
{
    LinkedList<string> l;

    l.push_back("python");
    l.push_back("c++");
    l.push_back("ruby");
    l.push_front("haskell");

    l.show();

    if (l.empty())
        cout << "Lista vazia!" << endl;
    else
        cout << "Lista não vazia!" << endl;

    cout << "Removendo elemento do final..." << endl;
    l.remove();
    l.show();

    return 0;
}