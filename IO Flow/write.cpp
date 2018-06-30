// Abrir um arquivo para saída

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream output("saida.txt");
    output << "Aprendendo C++\n";
    output << "gowther\n";
}