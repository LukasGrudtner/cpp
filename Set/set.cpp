#include <iostream>
#include <set>

using namespace std;

int main()
{
    int vet[] = {10, 20, 10, 30, 40};
    set<int> myset(vet, vet + 5);

    set<int>::iterator it = myset.begin();

    cout << "Mostrando os elementos: ";
    while (it != myset.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // myset.clear();
    it = myset.begin();
    myset.erase(it);

    it = myset.begin();
    cout << "Mostrando os elementos: ";
    while (it != myset.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    cout << "Tamanho do conjunto: " << myset.size() << endl;

    return 0;
}