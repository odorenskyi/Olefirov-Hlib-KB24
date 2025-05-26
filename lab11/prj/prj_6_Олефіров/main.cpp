#include "struct_type_project_6.h"
#include "modulesKovalova.h"
#include "modulesOlefirov.h"
#include "modulesSumar.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const string filename = "products.txt";
    Node* head = loadFromFile(filename);

    int choice;

 do {
    printMenu();
    cin >> choice;

    if (choice == 1) {
        searchByCode(head);
    }
    else if (choice == 2) {
        addProduct(head);
    }
    else if (choice == 3) {
        deleteByCode(head);
    }
    else if (choice == 4) {
        saveToFile(filename, head);
        cout << "💾 Довідник збережено.\n";
    }
    else if (choice == 5) {
        saveToFile(filename, head);
        cout << "👋 Програма завершується. Дані збережено.\n";
    }
    else {
        cout << "❌ Невірний вибір. Спробуйте ще раз.\n";
    }

} while (choice != 5);



    freeList(head);
    return 0;
}
