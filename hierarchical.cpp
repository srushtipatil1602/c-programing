#include <iostream>
using namespace std;

class LibraryItem
{
protected:
    int itemID;
    string title;

public:
    void getDetails()
    {
        cout << "Enter Item ID: ";
        cin >> itemID;

        cout << "Enter Title: ";
        cin >> title;
    }
};


class Book : public LibraryItem
{
public:
    void displayBook()
    {
        cout << "\n--- Book Details ---" << endl;
        cout << "Item ID: " << itemID << endl;
        cout << "Title: " << title << endl;
    }
};


class Magazine : public LibraryItem
{
public:
    void displayMagazine()
    {
        cout << "\n--- Magazine Details ---" << endl;
        cout << "Item ID: " << itemID << endl;
        cout << "Title: " << title << endl;
    }
};

int main()
{
    Book b;
    Magazine m;

    cout << "Enter Book Details:" << endl;
    b.getDetails();
    b.displayBook();

    cout << "\nEnter Magazine Details:" << endl;
    m.getDetails();
    m.displayMagazine();

    return 0;
}
