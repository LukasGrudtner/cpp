#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> mapa = {
        {1, "pedro"},
        {2, "maria"},
        {3, "joão"},
    };

    cout << mapa[1] << endl;
    cout << mapa[2] << endl;
    cout << mapa[3] << endl;

    mapa[4] = "carlos";
    cout << mapa[4] << endl;

    /* Alterando o valor associado a uma chave. */
    mapa.at(1) = "carol";

    if (mapa.count(1) > 0)
        cout << "1 é elemento do mapa\n";
    else
        cout << "1 não é elemento do mapa\n";

    /* Mostrando todos os elementos. */
    map<int, string>::iterator it;
    for (it = mapa.begin(); it != mapa.end(); ++it)
    {
        cout << "A chave " << it->first << " => " << it->second << endl;
    }
    cout << endl;

    /* Apagando o elemento cuja chave é 2. */
    it = mapa.find(2);
    mapa.erase(it);

    /* Mostrando todos os elementos. */
    for (it = mapa.begin(); it != mapa.end(); ++it)
    {
        cout << "A chave " << it->first << " => " << it->second << endl;
    }

    /* Verificando se uma chave existe. */
    if (mapa.find(2) == mapa.end())
        cout << "\nChave 2 NÃO existe!\n\n";

    it = mapa.begin();
    mapa.insert({2, "maria"});

    /* Mostrando todos os elementos. */
    for (it = mapa.begin(); it != mapa.end(); ++it)
    {
        cout << "A chave " << it->first << " => " << it->second << endl;
    }

    /* Multimap */
    multimap<int, string> mm;
    mm.insert({1, "python 2"});
    mm.insert({1, "python 3"});
    mm.insert({2, "C"});
    mm.insert({2, "C++"});
    mm.insert({3, "ruby"});
    mm.insert({4, "haskell"});

    multimap<int, string>::iterator it2 = mm.find(1);
    
    while (it2 != mm.end())
    {
        cout << it2->first << " => " << it2->second << endl;
        it2++;
    }

    multimap<int, string>::iterator it_low, it_up;
    it_low = mm.lower_bound(2);
    it_up = mm.upper_bound(4);

    cout << endl;
    for (it2 = it_low; it2 != it_up; ++it2)
    {
        cout << it2->first << " => " << it2->second << endl;
    }
}