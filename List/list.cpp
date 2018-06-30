#include <iostream>
#include <list>

using namespace std;

bool par(const int &n)
{
    return (n % 2 == 0);
}

bool comparar_tamanho(const string& s1, const string& s2) {
    // Se o tamanho da primeira string deve vir antes,
    // então retorna true
    if (s1.length() < s2.length())
        return true;
    return false;
}

int main()
{
    list<int> l1;        // lista de inteiros vazia
    list<int> l2(3, 10); // três inteiros com o valor 10
    list<int>::iterator it;

    l1.push_back(10);
    l1.push_front(20);
    l1.push_back(30);

    cout << "Mostrando os elementos de l1: \n";
    for (it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "\nMostrando os elementos de l2: \n";
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << endl;
    }

    // Acessando o primeiro e último elemento de l1 - front e back
    cout << "\nPrimeiro elemento de l1: " << l1.front();
    cout << "\nÚltimo elemento de l1: " << l1.back();

    cout << "\nTamanho de l1: " << l1.size() << endl;

    // Removendo o primeiro elemento de l1
    l1.pop_front(); // remove o 20
    // Removendo o último elemento de l1
    l1.pop_back(); // remove o 30

    cout << "Mostrando novamente os elementos de l1: \n";
    for (it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << endl;
    }

    // Removendo todos os elementos de l2
    while (!l2.empty())
        l2.pop_front();

    cout << "\nNovo tamanho de l2: " << l2.size() << endl;

    // Atribuindo elementos a l2 - função assign
    int vet[] = {1, 2, 3, 4};
    l2.assign(vet, vet + 4);

    cout << "\nMostrando novos elementos de l2:\n";
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << endl;
    }

    // Inserindo um elemento em l2 - função insert
    l2.insert(l2.begin(), 100);

    cout << "\nMostrando novamente os elementos de l2:\n";
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << endl;
    }

    // Inserindo duas vezes o valor 50 na primeira posição
    l2.insert(l2.begin(), 2, 50);

    cout << "\nMostrando novamente os elementos de l2:\n";
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << endl;
    }

    // Apagando os dois primeiros números
    list<int>::iterator it2 = l2.begin();
    it2++;
    it2++;
    l2.erase(l2.begin(), it2);

    cout << "\nMostrando novamente os elementos de l2:\n";
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << endl;
    }

    // Remover todos os elementos - função clear
    l2.clear();
    cout << "\nTamanho de l2: " << l2.size() << endl;

    // Função splice - transfere elementos de uma lista para outra
    list<int> lista1(2, 10), lista2(2, 20);
    it = lista1.begin();
    // Transfere elementos de lista2 para lista1
    lista1.splice(it, lista2);
    cout << "\nElementos de lista1:\n";

    for (it = lista1.begin(); it != lista1.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "\nTamanho de l2: " << l2.size() << endl;

    // Remover todos os elementos iguais a um valor
    // Função remove
    lista1.remove(20);

    cout << "\nElementos de lista1 sem o valor 20:\n";
    for (it = lista1.begin(); it != lista1.end(); it++)
    {
        cout << *it << endl;
    }

    // Função remove_if
    // Remove se ocorrer determinada condição
    int vet2[] = {6, 8, 10, 5, 20, 21};
    list<int> lista3(vet2, vet2 + 6);

    cout << "\nElementos de lista3 antes da remoção:\n";
    for (it = lista3.begin(); it != lista3.end(); it++)
    {
        cout << *it << " ";
    }

    // Removendo todos os elementos pares
    lista3.remove_if(par);

    cout << "\nElementos de lista3 depois da remoção:\n";
    for (it = lista3.begin(); it != lista3.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Ordenação de listas
    int vet3[] = {17, 60, 5, 30, 50};
    list<int> lista4(vet3, vet3 + 5);
    lista4.sort();

    cout << "\nElementos de lista4 ordenados crescentemente:\n";
    for (it = lista4.begin(); it != lista4.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Ordenando strings
    list<string> lista5;
    list<string>::iterator it5;
    lista5.push_back("python");
    lista5.push_back("c++");
    lista5.push_back("ruby");
    lista5.push_back("haskell");
    lista5.push_back("php");
    lista5.sort();

    cout << "\nElementos de lista5 ordenados:\n";
    for (it5 = lista5.begin(); it5 != lista5.end(); it5++)
    {
        cout << *it5 << " ";
    }
    cout << endl;

    // Ordenando usando algum critério
    // Exemplo: ordenando pelo tamanho da string
    lista5.sort(comparar_tamanho);

    cout << "\nElementos de lista5 ordenados pelo tamanho:\n";
    for (it5 = lista5.begin(); it5 != lista5.end(); it5++)
    {
        cout << *it5 << " - tamanho: " << it5->length() << endl;
    }
    cout << endl;

    return 0;
}