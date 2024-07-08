#include <iostream>
using namespace std;
void insert();
void show();
void search();
void del();
void update();
string arr[20], arr2[100], arr3[100], arr4[100], arr5[100];
int total = 0;
int main()
{
    int value;
    while (true)
    {
        cout << "Press 1 to enter data" << endl;
        cout << "Press 2 to show data" << endl;
        cout << "Press 3 for search" << endl;
        cout << "Press 4 to delete data" << endl;
        cout << "Press 5 for update" << endl;
        cout << "Press 6 to exit" << endl;
        cin >> value;
        switch (value)
        {
        case 1:
            insert();
            break;
        case 2:
            show();
            break;
        case 3:
            search();
            break;
        case 4:
            del();
            break;
        case 5:
            update();
            break;
        }
    }
    return 0;
}
void insert()
{
    int choice;
    cout << "How many student do you  want to enter";
    cin >> choice;
    if (total == 0)
    {
        total = total + choice;
        for (int i = 0; i < choice; i++)
        {
            cout << "enter " << i + 1 << " student data" << endl
                 << endl;
            cout << "Enter name:- ";
            cin >> arr[i];
            cout << "Enter rollno:- ";
            cin >> arr2[i];
            cout << "Enter course:- ";
            cin >> arr3[i];
            cout << "Enter class:- ";
            cin >> arr4[i];
            cout << "Enter contact:- ";
            cin >> arr5[i];
        }
    }
    else
    {
        for (int i = total; i < total + choice; i++)
        {
            cout << "enter " << i + 1 << "   student data" << endl
                 << endl;
            cout << "Enter name:- ";
            cin >> arr[i];
            cout << "Enter rollno:- ";
            cin >> arr2[i];
            cout << "Enter course:- ";
            cin >> arr3[i];
            cout << "Enter class:- ";
            cin >> arr4[i];
            cout << "Enter contact:- ";
            cin >> arr5[i];
        }
        total = total + choice;
    }
}
void show()
{
    cout << "----:Data of student:----" << endl
         << endl
         << endl;
    for (int i = 0; i < total; i++)
    {
        cout << i + 1 << "st  student data" << endl
             << endl;
        cout << "Name: " << arr[i] << endl;
        cout << "RollNo: " << arr2[i] << endl;
        cout << "Course: " << arr3[i] << endl;
        cout << "Class: " << arr4[i] << endl;
        cout << "Contact: " << arr5[i] << endl;
    }
}
void search()
{
    string rollno;
    cout << "Enter rollno for search student data";
    cin >> rollno;
    for (int i = 0; i < total; i++)
    {
        if (rollno == arr2[i])
        {
            cout << i + 1 << "st  student data" << endl
                 << endl;
            cout << "Name: " << arr[i] << endl;
            cout << "RollNo: " << arr2[i] << endl;
            cout << "Course: " << arr3[i] << endl;
            cout << "Class: " << arr4[i] << endl;
            cout << "Contact: " << arr5[i] << endl;
        }
    }
}
void update()
{
    string rollno;
    cout << "Enter rollno for search student data";
    cin >> rollno;
    for (int i = 0; i < total; i++)
    {
        if (rollno == arr2[i])
        {
            cout << "Privious data if student\n\n";
            cout << i + 1 << "st  student data" << endl
                 << endl;
            cout << "Name: " << arr[i] << endl;
            cout << "RollNo: " << arr2[i] << endl;
            cout << "Course: " << arr3[i] << endl;
            cout << "Class: " << arr4[i] << endl;
            cout << "Contact: " << arr5[i] << endl;
            cout << "Enter New Data" << endl
                 << endl;
            cout << "Enter name:- ";
            cin >> arr[i];
            cout << "Enter rollno:- ";
            cin >> arr2[i];
            cout << "Enter course:- ";
            cin >> arr3[i];
            cout << "Enter class:- ";
            cin >> arr4[i];
            cout << "Enter contact:- ";
            cin >> arr5[i];
        }
    }
}
void del()
{
    int n;
    cout << "Press 1 for delete whole data" << endl;
    cout << "Press 2 for delete specific data" << endl;
    cin >> n;
    if (n == 1)
    {
        total = 0;
        cout << "All record is cleared" << endl
             << endl;
    }
    if (n == 2)
    {
        string rollno;
        cout << "Enter rollno which want to delete" << endl;
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {

            if (rollno == arr2[i])
            {
                for (int j = i; j < total; j++)
                {
                    arr[j] = arr[j + 1];
                    arr2[j] = arr2[j + 1];
                    arr3[j] = arr3[j + 1];
                    arr4[j] = arr4[j + 1];
                    arr5[j] = arr5[j + 1];
                }
                total--;
                cout << "..Your Required data is deleted!!......" << endl
                     << endl;
            }
        }
    }
}