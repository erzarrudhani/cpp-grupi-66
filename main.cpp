#include "library.h"  // funsionet e librave (do t’i shtojnë të tjerët)
#include <iostream>
using namespace std;

int main() {
    int choice;
    string title, author;

    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n2. List Books\n3. Search Book\n4. Delete Book\n0. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Title: "; getline(cin, title);
            cout << "Author: "; getline(cin, author);
            addBook(title, author);   // funksion që do ta shtojë Antari 2
            break;
        case 2:
            listBooks();             // funksion që do ta shtojë Antari 3
            break;
        case 3:
            searchBook();            // funksion që do ta shtojë Antari 3
            break;
        case 4:
            deleteBook();            // funksion që do ta shtojë Antari 2
            break;
        }
    } while (choice != 0);

    return 0;
}