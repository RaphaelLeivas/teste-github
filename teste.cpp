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

typedef enum {
    NO_ERROR = 0,
    SYSTEM_ERROR = 1,
    FATAL_ERROR = 2
} erro_t;

struct Dados* fillData(struct Dados* data) {
    cin >> data->nome;
    cin >> data->id;

    return data;
}

void errorHandler(erro_t index) {
    if (index == SYSTEM_ERROR) cout << "SYSTEM_ERROR" << endl;
    else if (index == FATAL_ERROR) cout << "FATAL_ERROR" << endl;

    exit(1);

    return;
}

int main() {
    erro_t error;
    struct Dados pessoa;
    struct Dados* database = &pessoa;
    database = fillData(database);

    if (database->nome == "joseavenca") {
        error = FATAL_ERROR;
        errorHandler(error);
    }

    cout << database->nome << endl << database->id << endl;


    return 0;
}

