// Abrir arquivo para entrada
// Ler o conteúdo desse arquivo

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("teste.txt");

    string texto;
    char c = in.get();
    texto.push_back(c);

    cout << "\nMostrando cada caractere:\n";
    while (in.good())
    {
        cout << c;
        c = in.get();
        texto.push_back(c);
    }

    cout << "\n\nMostrando a string:\n" << texto << endl;

    return 0;
}