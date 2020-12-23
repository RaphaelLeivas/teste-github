#include <iostream>
#include <string>

#ifndef PI
#define PI 3.14159

#endif

using namespace std;

struct Dados {
    int id;
    string nome;
};

int main() {
    cout << "Hello World" << endl;

    struct Dados pessoa;
    struct Dados* database = &pessoa;
    database->id = 100;
    database->nome = "help me";

    cout << database->nome << endl;
    cout << "Funcionando." << endl;

    return 0;
}

