#include <iostream>

using namespace std;

template<typename T>
T soma(T n1, T n2)
{
    return n1 + n2;
}

int main()
{
    cout << "Soma de inteiros: " << soma(10, 20) << endl;
    cout << "Soma de reais: " << soma(1.5, 3.4) << endl;

    return 0;
}