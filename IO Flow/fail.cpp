#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("saida.txt");
    char c;

    while (true) {
        in >> c;
        if (in.fail()) 
        {
            break;
        }   
        cout << c;
    }
}