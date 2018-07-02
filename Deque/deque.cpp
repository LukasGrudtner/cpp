#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> fila;

    /* Inserir elementos ao final da fila */
    fila.push_back(10);
    fila.push_back(20);

    /* Inserir elementos no início da fila. */
    fila.push_front(30);

    deque<int>::iterator it = fila.begin();
    while (it != fila.end())
    {
        cout << *it++ << " ";
    }
    cout << endl;

    /* Limpar toda a fila. */
    fila.clear();

    /* Inserir elementos */
    fila.push_front(10);
    fila.push_front(20);
    fila.push_back(30);

    /* Removendo o segundo elemento. */
    fila.erase(fila.begin() + 1);

    it = fila.begin();
    while (it != fila.end())
    {
        cout << *it++ << " ";
    }
    cout << endl;

    cout << "Elemento da frente: " << fila.front() << endl;
    cout << "Elemento do final: " << fila.back() << endl;

    it = fila.begin() + 1;
    fila.insert(it, 10);

    it = fila.begin();
    while (it != fila.end())
    {
        cout << *it++ << " ";
    }
    cout << endl;

    /* Remover do início. */
    fila.pop_front();

    /* Remover do final. */
    fila.pop_back();

    /* Tamanho da fila */
    cout << "Tamanho da fila: " << fila.size() << endl;

    return 0;
}