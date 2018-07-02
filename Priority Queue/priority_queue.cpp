#include <iostream>
#include <queue>

using namespace std;

int main()
{

    priority_queue<int> pq;
    // priority_queue<int, vector<int>, greater<int> > pq; // inverte a prioridade

    pq.push(10);
    pq.push(30);
    pq.push(50);

    cout << "Elemento do topo: " << pq.top() << endl;

    cout << "Mostrando os elementos: " << endl;
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    pq.push(10);
    pq.push(30);
    pq.push(50);

    cout << "\nTamanho da fila: " << pq.size() << endl;
}