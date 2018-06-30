#include <iostream>
#include <string.h>

using namespace std;

class Animal
{
  protected:
    char *nome;

  public:
    Animal(const char *nome)
    {
        cout << "Construindo animal..." << endl;
        this->nome = new char[strlen(nome) + 1];
        strcpy(this->nome, nome);
    }

    ~Animal()
    {
        delete[] nome;
        nome = nullptr;
    }

    const char *getNome()
    {
        return nome;
    }
};

class Cachorro : public Animal
{
  protected:
    int idade;

  public:
    Cachorro(const char *nome) : Animal(nome)
    {
        cout << "Construindo cachorro..." << endl;
        idade = 0;
    }

    int getIdade()
    {
        return idade;
    }

    void setIdade(int idade)
    {
        this->idade = idade;
    }
};

int main()
{
    Cachorro c("yankee");
    c.setIdade(5);

    cout << "Nome: " << c.getNome() << endl;
    cout << "Idade: " << c.getIdade() << endl;

    return 0;
}