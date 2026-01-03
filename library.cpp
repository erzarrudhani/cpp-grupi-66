#include "library.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Book { string title; string author; };
vector<Book> library;

void addBook(string title, string author) {
    library.push_back({ title, author });
    cout << "Book added successfully.\n";
}

void deleteBook() {
    string title;
    cout << "Enter title to delete: ";
    cin.ignore();
    getline(cin, title);

    auto it = remove_if(library.begin(), library.end(), [&](Book& b) { return b.title == title; });
    if (it != library.end()) {
        library.erase(it, library.end());
        cout << "Book deleted.\n";
    }
    else {
        cout << "Book not found.\n";
    }
}

void listBooks() {
    if (library.empty()) { cout << "Library is empty.\n"; return; }
    cout << "Books in library:\n";
    for (auto& b : library) cout << "- " << b.title << " by " << b.author << "\n";
}

void searchBook() {
    string title;
    cout << "Enter title to search: ";
    cin.ignore();
    getline(cin, title);

    auto it = find_if(library.begin(), library.end(), [&](Book& b) { return b.title == title; });
    if (it != library.end()) cout << "Found: " << it->title << " by " << it->author << "\n";
    else cout << "Book not found.\n";
}