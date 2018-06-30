#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    /* Iterador Reverso */
    // vector<int>::reverse_iterator rit;
    // int i = 0;

    // for (rit = v.rbegin(); rit != v.rend(); rit++)
    // {
    //     *rit = ++i;
    // }

    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // if (v.empty())
    // {
    //     cout << "Vetor vazio!\n";
    // }
    // else
    // {
    //     cout << "Vetor não vazio!\n";
    // }

    // v.push_back(10);

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    while (!v.empty())
    {
        v.pop_back();
    }

    if (v.empty())
    {
        cout << "Vetor vazio!\n";
    }
    else
    {
        cout << "Vetor não vazio!\n";
    }
}