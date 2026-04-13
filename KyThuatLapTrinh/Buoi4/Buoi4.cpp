#include <iostream>
#include "Account.h"
#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList<Account> accounts = { NULL };
    do {
        system("cls");
        cout << "-------- ACCOUNT MANAGEMENT -------" << endl;
        cout << "1. Show all books" << endl;
        cout << "2. Add a book" << endl;
        cout << "3. Delete a book" << endl;
        cout << "4. Update a book" << endl;
        cout << "5. Find book" << endl;
        cout << "6. Export to file" << endl;
        cout << "7. Import to file" << endl;
        cout << "0. Exit" << endl;
        cout << "---------------------------------" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
      /*case 1: {
         accounts.show
            break;
        }
        case 2: {
         book b;
            cin >> b;
            Node* newNode = new Node;
            newNode->Create(b);
            books.AddFirst(newNode);
            break;
        }
        case 3: {
            int removeId;
            cout << "Enter book's id to remove: ";
            cin >> removeId;
            bool res = books.Remove(removeId);
            if (res)
                cout << "Remove book successfully" << endl;
            else
                cout << "Invalid book id" << endl;
            break;
        }
        case 4: {
            int updateId;
            cout << "Enter book's id to update: ";
            cin >> updateId;
            bool res = books.Updata(updateId);
            if (res)
                cout << "Update book successfully" << endl;
            else
                cout << "Invalid book id" << endl;
            break;
        }
        case 5: {
          string bookName;
            cout << "Enter book's name to find: ";
            cin.ignore();
            getline(cin, bookName);
          book* res = books.Find(bookName);
            if (res != NULL) {
                cout << res;
            }
            else {
                cout << "No book with name: " << bookName << endl;
            }
            break;
        }
        case 6: {
          books.Export("NKD.25TH1");
            cout << "Exported successfully" << endl;
            break;
        }
        case 7: {
          books.Import("NKD.25TH1");
            cout << "Imported successfully" << endl;
            break;
        }
        case 0: {
            return 0;
        }
        default:
            cout << "Invalid choice, try again" << endl;
            break;
        }
        system("pause");
        cout << "Press any key to continue...";
    } while (true);
}*/

