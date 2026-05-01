#include <iostream>
using namespace std;

#define MAX_ITEMS 100

// ABSTRACT BASE CLASS
class LibraryItem {
private:
    string title;
    string author;
    string dueDate;

public:
    // Getters
    string getTitle() { return title; }
    string getAuthor() { return author; }
    string getDueDate() { return dueDate; }

    // Setters
    void setTitle(string t) { title = t; }
    void setAuthor(string a) { author = a; }
    void setDueDate(string d) { dueDate = d; }

    // Pure virtual functions
    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

    virtual ~LibraryItem() {} // destructor
};

// BOOK CLASS
class Book : public LibraryItem {
private:
    int pages;

public:
    Book(string t, string a, string d, int p) {
        setTitle(t);
        setAuthor(a);
        setDueDate(d);
        pages = p;
    }

    void checkOut() override {
        cout << "Book Checked Out: " << getTitle() << endl;
    }

    void returnItem() override {
        cout << "Book Returned: " << getTitle() << endl;
    }

    void displayDetails() override {
        cout << "\n[BOOK]";
        cout << "\nTitle: " << getTitle();
        cout << "\nAuthor: " << getAuthor();
        cout << "\nDue Date: " << getDueDate();
        cout << "\nPages: " << pages << endl;
    }
};

// DVD CLASS
class DVD : public LibraryItem {
private:
    int duration;

public:
    DVD(string t, string a, string d, int dur) {
        setTitle(t);
        setAuthor(a);
        setDueDate(d);
        duration = dur;
    }

    void checkOut() override {
        cout << "DVD Checked Out: " << getTitle() << endl;
    }

    void returnItem() override {
        cout << "DVD Returned: " << getTitle() << endl;
    }

    void displayDetails() override {
        cout << "\n[DVD]";
        cout << "\nTitle: " << getTitle();
        cout << "\nAuthor: " << getAuthor();
        cout << "\nDue Date: " << getDueDate();
        cout << "\nDuration: " << duration << " mins" << endl;
    }
};

// GLOBAL ARRAY
LibraryItem* libraryItems[MAX_ITEMS];
int count = 0;

// ADD ITEM
void addItem() {
    try {
        int choice;
        cout << "\n1. Book\n2. DVD\nChoose Type: ";
        cin >> choice;

        string title, author, dueDate;
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Author: ";
        cin >> author;
        cout << "Enter Due Date: ";
        cin >> dueDate;

        if (choice == 1) {
            int pages;
            cout << "Enter Pages: ";
            cin >> pages;

            if (pages <= 0)
                throw "Invalid Pages!";

            libraryItems[count++] = new Book(title, author, dueDate, pages);
        }
        else if (choice == 2) {
            int duration;
            cout << "Enter Duration: ";
            cin >> duration;

            if (duration <= 0)
                throw "Invalid Duration!";

            libraryItems[count++] = new DVD(title, author, dueDate, duration);
        }
        else {
            throw "Invalid Choice!";
        }

        cout << "Item Added Successfully!\n";
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
}

// DISPLAY
void displayItems() {
    for (int i = 0; i < count; i++) {
        libraryItems[i]->displayDetails();
    }
}

// CHECKOUT
void checkOutItem() {
    int index;
    cout << "Enter Item Index: ";
    cin >> index;

    if (index >= 0 && index < count) {
        libraryItems[index]->checkOut();
    } else {
        cout << "Invalid Index!\n";
    }
}

// RETURN
void returnItem() {
    int index;
    cout << "Enter Item Index: ";
    cin >> index;

    if (index >= 0 && index < count) {
        libraryItems[index]->returnItem();
    } else {
        cout << "Invalid Index!\n";
    }
}

// DELETE MEMORY
void cleanup() {
    for (int i = 0; i < count; i++) {
        delete libraryItems[i];
    }
}

// MAIN
int main() {
    int choice;

    do {
        cout << "\n===== LIBRARY SYSTEM =====";
        cout << "\n1. Add Item";
        cout << "\n2. Display Items";
        cout << "\n3. Check Out";
        cout << "\n4. Return Item";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addItem(); break;
            case 2: displayItems(); break;
            case 3: checkOutItem(); break;
            case 4: returnItem(); break;
            case 5: cleanup(); cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}