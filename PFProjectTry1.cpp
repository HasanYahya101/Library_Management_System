#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
//Make sure to add the given (.txt) files manually as they are not added automatically.
//user.txt, books.txt, lendings.txt, students.txt, returns.txt
//File Handling is used in this project.

struct BookInfo
{
    string bookName;
    string authorName;
    string ISBN;
    string dateOfPublishing;
    int quantity;
    int totalQuantity;
    int fine;
    int totalFine;
    int totalLendings;
    int totalReturns;
    int totalLateReturns;
    int totalFines;
    int totalBooks;
    int totalUsers;
    int totalBooksInLibrary;
};


struct lendinginfoandfines
{
    string bookName;
    string authorName;
    string StudentName;
    string ISBN;
    string dateOfPublishing;
    string dateOfLending;
    string dateOfReturn;
    int quantity;
    int totalQuantity;
    int fine;
    int totalFine;
    int totalLendings;
    int totalReturns;
    int totalLateReturns;
    int totalFines;
    int totalBooks;
    int totalUsers;
    int totalBooksInLibrary;
};


void login();
void signup();
void menu();
void addBook();
void deleteBook();
void searchBook();
void addStudent();
void deletestudent();
void searchstudents();
void showallstudents();
void issueBook();
void returnBook();
void showAllBooks();
void showAllLendings();
void showAllFines();
void showAllUsers();
void deleteuserandpass();
void showAllReturns();
void changepassword();

struct user
{
    string username;
    string password;
    int totalUsers;
};

int main()
{
    cout << "---------------------------" << endl;
    cout << "Group Participants" << endl;
    cout << "---------------------------" << endl;
    cout << "Hasan Yahya (22L-7971)" << endl;
    cout << "Ammar Haider (22L-7985)" << endl;
    cout << "Gulrez Amin (22L-7952)" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Welcome to Library Management System" << endl;
    cout << "----------------------------------------" << endl;
    cout << "1. Login" << endl;
    cout << "2. Sign Up" << endl;
    cout << "3. Exit" << endl;
    cout << "----------------------------------------" << endl << endl;
    string choice;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == "1")
    {
        login();
    }
    else if (choice == "2")
    {
        signup();
    }
    else if (choice == "3")
    {
        exit(0);
    }
    else
    {
        cout << "Invalid Choice" << endl;
        cout << "Press any key to continue" << endl;
        _getch();
        system("cls");
        main();
    }
    return 0;
}

void login()
{
    system("cls");
    string username, password;
    cout << "Enter Username: ";
    cin >> username;
    if (username == "test")
    {
        cout << "You have By-Passed the login system" << endl;
        cout << "Press any key to continue" << endl;
        _getch();
        system("cls");
        menu();
    }
    cout << "Enter Password: ";
    cin >> password;
    //make a login function, keeping in mind the signup function
    ifstream fin;
    fin.open("user.txt");
    if (!fin)
    {
        cout << "Error in opening file" << endl;
        cout << "Press any key to continue" << endl;
        _getch();
        system("cls");
        main();
    }
    else
    {
        string line;
        while (getline(fin, line))
        {
            if (line == username)
            {
                getline(fin, line);
                if (line == password)
                {
                    cout << "Login Successful" << endl;
                    cout << "Press any key to continue" << endl;
                    _getch();
                    system("cls");
                    menu();
                }
                else
                {
                    cout << "Invalid Password" << endl;
                    cout << "Press any key to continue" << endl;
                    _getch();
                    system("cls");
                    main();
                }
            }
        }
        cout << "Invalid Username" << endl;
        cout << "Press any key to continue" << endl;
        _getch();
        system("cls");
        main();
    }
}

void menu()
{
    BookInfo b;
    lendinginfoandfines l;
    int choice;
    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Delete Book" << endl;
    cout << "3. Search Book" << endl;
    cout << "4. Add Student" << endl;
    cout << "5. Delete Student" << endl;
    cout << "6. Search Student" << endl;
    cout << "7. Show All Students" << endl;
    cout << "8. Issue Book" << endl;
    cout << "9. Return Book" << endl;
    cout << "10. Show All Books" << endl;
    cout << "11. Show All Lendings" << endl;
    cout << "12 Show all Returns" << endl;
    cout << "13. Show All Fines" << endl;
    cout << "14. Show All Users" << endl;
    cout << "15. Show Group Participants" << endl;
    cout << "16. Delete User" << endl;
    cout << "17. Change password" << endl;
    cout << "18. Exit" << endl;
    cout << "------------------------------------------" << endl << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << endl;
        addBook();
    }
    else if (choice == 2)
    {
        cout << endl;
        deleteBook();
    }
    else if (choice == 3)
    {
        cout << endl;
        searchBook();
    }
    else if (choice == 4)
    {
        cout << endl;
        addStudent();
    }
    else if (choice == 5)
    {
        cout << endl;
        deletestudent();
    }
    else if (choice == 6)
    {
        cout << endl;
        searchstudents();
    }
    else if (choice == 7)
    {
        cout << endl;
        showallstudents();
    }
    else if (choice == 8)
    {
        cout << endl;
        issueBook();
    }
    else if (choice == 9)
    {
        cout << endl;
        returnBook();
    }
    else if (choice == 10)
    {
        cout << endl;
        showAllBooks();
    }
    else if (choice == 11)
    {
        cout << endl;
        showAllLendings();
    }
    else if (choice == 12)
    {
        cout << endl;
        showAllReturns();
    }
    else if (choice == 13)
    {
        cout << endl;
        showAllFines();
    }
    else if (choice == 14)
    {
        cout << endl;
        showAllUsers();
    }
    else if (choice == 15)
    {
        cout << endl;
        cout << "---------------------------" << endl;
        cout << "Group Participants" << endl;
        cout << "---------------------------" << endl;
        cout << "Hasan Yahya (22L-7971)" << endl;
        cout << "Ammar Haider (22L-7985)" << endl;
        cout << "Gulrez Amin (22L-7952)" << endl;
        cout << "---------------------------" << endl;
        cout << endl;
        menu();
    }
    else if (choice == 16)
    {
        cout << endl;
        deleteuserandpass();
    }
    else if (choice == 17)
    {
        cout << endl;
        changepassword();
    }
    else if (choice == 18)
    {
        cout << endl;
        cout << "---------------------------" << endl;
        cout << "You have exited the program" << endl;
        cout << "---------------------------" << endl << endl;
        exit(0);
    }
    else
    {
        cout << endl;
        cout << "----------------------" << endl;
        cout << "Invalid Choice" << endl;
        cout << "----------------------" << endl << endl;
        menu();
    }
}

void signup()
{
    user u;
    string username, password;
    cout << "Enter your username: ";
    cin >> username;
    if (username == "test")
    {
        cout << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
        cout << "Username already exists as test, You are not allowed to use this username!!!" << endl;
        cout << "-------------------------------------------------------------------------------" << endl << endl;
        signup();
    }
    //if username already exists, give error
    ifstream fin;
    fin.open("user.txt");
    if (!fin)
    {
        cout << "Error in opening file" << endl;
        cout << "Press any key to continue" << endl;
        _getch();
        system("cls");
        main();
    }
    else
    {
        string line;
        while (getline(fin, line))
        {
            if (line == username)
            {
                cout << endl;
                cout << "-------------------------------------------------------------------------------" << endl;
                cout << "Username already exists, You are not allowed to use this username!!!" << endl;
                cout << "-------------------------------------------------------------------------------" << endl << endl;
                signup();
            }
        }
    }
    cout << "Enter your password: ";
    cin >> password;

    //make a signup function, keeping in mind the login function
    ofstream fout;
    fout.open("user.txt", ios::app);
    if (!fout)
    {
        cout << "Error in opening file" << endl;
        cout << "Press any key to continue" << endl;
        _getch();
        system("cls");
        main();
    }
    else
    {
        fout << username << endl;
        fout << password << endl;
        cout << "-----------------------" << endl;
        cout << "Sign Up Successful" << endl;
        cout << "-----------------------" << endl << endl;
        cout << "Press any key to continue" << endl;
        _getch();
        system("cls");
        main();
    }
}

void addBook()
{
    //make sure to create and store the book each time in separate txt file, all book info should be saved in that file
    //make sure to store the total number of books in the library in a separate txt file
    BookInfo b;
    lendinginfoandfines l;
    string bookName, authorName, ISBN, dateOfPublishing;
    int quantity, totalQuantity;
    cout << "Enter the name of the book: ";
    //use getline function
    cin.ignore();
    getline(cin, bookName);
    //convert every large letter into small letter using for loop
    for (int i = 0; i < bookName.length(); i++)
    {
        bookName[i] = tolower(bookName[i]);
    }
    cout << "Enter the name of the author: ";
    getline(cin, authorName);
    //convert every capital letter to small letter
    for (int i = 0; i < authorName.length(); i++)
    {
        authorName[i] = tolower(authorName[i]);
    }
    cout << "Enter the ISBN of the book: ";
    //use getline function
    getline(cin, ISBN);
    //convert every capital letter to small letter
    for (int i = 0; i < ISBN.length(); i++)
    {
        ISBN[i] = tolower(ISBN[i]);
    }
    cout << "Enter the date of publishing: ";
    //use getline function
    getline(cin, dateOfPublishing);
    //make every capital letter into small letter
    for (int i = 0; i < bookName.length(); i++)
    {
        bookName[i] = tolower(bookName[i]);
    }
    cout << "Enter the quantity of the book: ";
    cin >> quantity;
    //store the book info in a separate txt file also store the book title in books.txt
    ofstream fout;
    fout.open("books.txt", ios::app);
    fout.close();
    fout.open(bookName + ".txt", ios::app);
    fout << bookName << endl;
    fout << authorName << endl;
    fout << ISBN << endl;
    fout << dateOfPublishing << endl;
    fout << quantity << endl;
    fout.close();
    //store the total number of books in the library in a separate txt file
    //create a file named books.txt and add the name of book into that that file as well
    fout.open("books.txt", ios::app);
    fout << bookName << endl;
    fout.close();
    cout << endl;
    cout << "--------------------------------------" << endl;
    cout << "Book has been added successfully" << endl;
    cout << "--------------------------------------" << endl << endl;
    menu();
}

void deleteBook()
{
    //delete book using title of book and thus delete the whole file of book, also, remove the book name from books.text
    //make sure to update the total number of books in the library in a separate txt file
    string bookName;
    int totalQuantity = 0, quantity = 0;
    cout << "Enter the name of the book: ";
    cin.ignore();
    getline(cin, bookName);
    //convert every capital letter to small letter
    for (int i = 0; i < bookName.length(); i++)
    {
        bookName[i] = tolower(bookName[i]);
    }
    //if book is in lending file, you cannot delete the book
    ifstream fin;
    fin.open("lendings.txt");
    string book;
    while (fin >> book)
    {
        if (book == bookName)
        {
            cout << endl;
            cout << "------------------------------------------------------" << endl;
            cout << "Book is in lending file, you cannot delete the book" << endl;
            cout << "------------------------------------------------------" << endl << endl;
            menu();
        }
    }
    fin.close();
    //ifbook name isnt in books.txt give error and go back to menu
    ifstream fin1;
    fin1.open("books.txt");
    string line1;
    bool found = false;
    while (getline(fin1, line1))
    {
        if (line1 == bookName)
        {
            found = true;
            break;
        }
    }
    fin1.close();
    if (found == false)
    {
        cout << endl;
        cout << "-----------------------" << endl;
        cout << "Book not found" << endl;
        cout << "-----------------------" << endl << endl;
        menu();
    }
    // remove the txt file with the name of this book
    remove((bookName + ".txt").c_str());
    //delete the book name from books.txt, using a temp file
    ifstream fin2;
    fin2.open("books.txt");
    ofstream fout;
    fout.open("temp.txt");
    string line2;
    while (getline(fin2, line2))
    {
        if (line2 != bookName)
        {
            fout << line2 << endl;
        }
    }
    fin2.close();
    fout.close();
    remove("books.txt");
    rename("temp.txt", "books.txt");
    //end program
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Book has been deleted successfully" << endl;
    cout << "---------------------------------------" << endl << endl;
    menu();
}

void searchBook()
{
    //search book using title of book
    string bookName;
    cout << "Enter the name of the book: ";
    cin.ignore();
    getline(cin, bookName);
    //convert every capital letter to small letter
    for (int i = 0; i < bookName.length(); i++)
    {
        bookName[i] = tolower(bookName[i]);
    }
    ifstream fin;
    fin.open(bookName + ".txt");
    //if file doesnt open give error and go to menu
    if (!fin)
    {
        cout << endl;
        cout << "-------------------" << endl;
        cout << "Book not found" << endl;
        cout << "-------------------" << endl << endl;
        menu();
    }
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
    //end function to go to menu
    menu();
}

void showAllBooks()
{
    //show all books in the library
    ifstream fin;
    fin.open("books.txt");
    //if file doesnt open or has no text give error and go to menu
    if (!fin)
    {
        cout << endl;
        cout << "-------------------------" << endl;
        cout << "Error, opening file..." << endl;
        cout << "-------------------------" << endl << endl;
        menu();
    }
    string line;

    int counter = 0;
    while (getline(fin, line))
    {
        if (line != "")
        {
            cout << line << endl;
            counter++;
        }
    }

    if (counter == 0)
    {
        cout << endl;
        cout << "-------------------------" << endl;
        cout << "No books found" << endl;
        cout << "-------------------------" << endl << endl;
    }

    fin.close();

    //end function to go to menu
    menu();
}

void addStudent()
{
    //add a student to the library
    string studentName;
    cout << "Enter the name of the student: ";
    cin.ignore();
    getline(cin, studentName);
    //convert every capital letter to small letter
    for (int i = 0; i < studentName.length(); i++)
    {
        studentName[i] = tolower(studentName[i]);
    }
    cout << "Enter Student ID: ";
    string StudentID;
    getline(cin, StudentID);
    cout << "Enter Date of Registration: ";
    string dateOfRegistration;
    getline(cin, dateOfRegistration);
    //if student name is already in students.txt give error and go back to menu
    ifstream fin;
    fin.open("students.txt");
    string line;
    bool found = false;
    while (getline(fin, line))
    {
        if (line == studentName)
        {
            found = true;
            break;
        }
    }
    fin.close();
    if (found == true)
    {
        cout << endl;
        cout << "---------------------------" << endl;
        cout << "Student already exists" << endl;
        cout << "---------------------------" << endl << endl;
        menu();
    }
    //add student to students.txt
    ofstream fout;
    fout.open("students.txt", ios::app);
    fout << studentName << endl;
    fout.close();
    //create a file for the student
    ofstream fout2;
    fout2.open(studentName + ".txt");
    fout2 << "Student ID: " << StudentID << endl;
    fout2 << "Date of Registration: " << dateOfRegistration << endl;
    fout2.close();
    cout << endl;
    cout << "-------------------------------" << endl;
    cout << "Student added successfully" << endl;
    cout << "-------------------------------" << endl << endl;
    //end function to go to menu
    menu();
}

void deletestudent()
{
    //delete a student from the library
    string studentName;
    cout << "Enter the name of the student: ";
    cin.ignore();
    getline(cin, studentName);
    //convert every capital letter to small letter
    for (int i = 0; i < studentName.length(); i++)
    {
        studentName[i] = tolower(studentName[i]);
    }
    //if student name isnt in students.txt give error and go back to menu
    ifstream fin;
    fin.open("students.txt");
    string line;
    bool found = false;
    while (getline(fin, line))
    {
        if (line == studentName)
        {
            found = true;
            break;
        }
    }
    fin.close();
    if (found == false)
    {
        cout << endl;
        cout << "----------------------" << endl;
        cout << "Student not found" << endl;
        cout << "----------------------" << endl << endl;
        menu();
    }
    //delete student from students.txt
    ifstream fin2;
    ofstream fout2;
    fin2.open("students.txt");
    fout2.open("temp.txt");
    string line2;
    while (getline(fin2, line2))
    {
        if (line2 != studentName)
        {
            fout2 << line2 << endl;
        }
    }
    fin2.close();
    fout2.close();
    remove("students.txt");
    rename("temp.txt", "students.txt");
    //delete student file
    remove((studentName + ".txt").c_str());
    cout << endl;
    cout << "---------------------------------" << endl;
    cout << "Student deleted successfully" << endl;
    cout << "---------------------------------" << endl << endl;
    //end function to go to menu
    menu();
}

void searchstudents()
{
    //search for a student in the library
    string studentName;
    cout << "Enter the name of the student: ";
    cin.ignore();
    getline(cin, studentName);
    //convert every capital letter to small letter
    for (int i = 0; i < studentName.length(); i++)
    {
        studentName[i] = tolower(studentName[i]);
    }
    //if student name isnt in students.txt give error and go back to menu
    ifstream fin;
    fin.open("students.txt");
    string line;
    bool found = false;
    while (getline(fin, line))
    {
        if (line == studentName)
        {
            found = true;
            break;
        }
    }
    fin.close();
    if (found == false)
    {
        cout << endl;
        cout << "--------------------" << endl;
        cout << "Student not found" << endl;
        cout << "--------------------" << endl << endl;
        menu();
    }
    //print the student file
    ifstream fin2;
    fin2.open(studentName + ".txt");
    string line2;
    while (getline(fin2, line2))
    {
        cout << line2 << endl;
    }
    fin2.close();
    //end function to go to menu
    menu();
}

void showallstudents()
{
    //show all students in the library
    ifstream fin;
    fin.open("students.txt");
    string line;
    int counter = 0;
    while (getline(fin, line))
    {
        if (line != "")
        {
            cout << line << endl;
            counter++;
        }
    }
    fin.close();
    //there are no students
    if (counter == 0)
    {
        cout << endl;
        cout << "-------------------------" << endl;
        cout << "No students found" << endl;
        cout << "-------------------------" << endl << endl;
    }
    //end function to go to menu
    menu();
}

void issueBook()
{
    //issue a book to a student
    string bookName, student;
    cout << "Enter the name of the book: ";
    cin.ignore();
    getline(cin, bookName);
    //convert every capital letter to small letter
    for (int i = 0; i < bookName.length(); i++)
    {
        bookName[i] = tolower(bookName[i]);
    }
    //if book name isnt in books.txt give error and go back to menu
    ifstream fin;
    fin.open("books.txt");
    string line;
    bool found = false;
    while (getline(fin, line))
    {
        if (line == bookName)
        {
            found = true;
            break;
        }
    }
    fin.close();
    if (found == false)
    {
        cout << endl;
        cout << "-------------------" << endl;
        cout << "Book not found" << endl;
        cout << "-------------------" << endl << endl;
        menu();
    }
    //if the quantity of book is zero, give error
    ifstream fin2;
    fin2.open(bookName + ".txt");
    string line2;
    int quantity;
    //quantity is in 5th line of each txt folder
    for (int i = 0; i < 5; i++)
    {
        getline(fin2, line2);
    }
    fin2.close();
    quantity = stoi(line2);
    if (quantity == 0)
    {
        cout << endl;
        cout << "---------------------------------" << endl;
        cout << "No more copies of this book" << endl;
        cout << "---------------------------------" << endl << endl;
        menu();
    }
    cout << "Enter the name of the student: ";
    getline(cin, student);
    //convert every capital letter to small letter
    for (int i = 0; i < student.length(); i++)
    {
        student[i] = tolower(student[i]);
    }
    //if student name isnt in students.txt give error and go back to menu
    ifstream fin3;
    fin3.open("students.txt");
    string line3;
    bool found2 = false;
    while (getline(fin3, line3))
    {
        if (line3 == student)
        {
            found2 = true;
            break;
        }
    }
    fin3.close();
    if (found2 == false)
    {
        cout << endl;
        cout << "----------------------" << endl;
        cout << "Student not found" << endl;
        cout << "----------------------" << endl << endl;
        menu();
    }
    //save the Book, Student in Lendings.txt
    ofstream fout;
    fout.open("lendings.txt", ios::app);
    fout << bookName << " " << student << endl;
    fout.close();
    //subtract 1 from quantity
    quantity--;
    //Replace the old quantity with new quantity in the book file,
    ifstream fin4;
    ofstream fout2;
    fin4.open(bookName + ".txt");
    fout2.open("temp.txt");
    string line4;
    int counter = 0;
    while (getline(fin4, line4))
    {
        if (counter == 4)
        {
            fout2 << quantity << endl;
        }
        else
        {
            fout2 << line4 << endl;
        }
        counter++;
    }
    fin4.close();
    fout2.close();
    //delete book file
    remove((bookName + ".txt").c_str());
    //rename temp file to book file
    rename("temp.txt", (bookName + ".txt").c_str());
    //print success message
    cout << endl;
    cout << "-------------------------" << endl;
    cout << "Book issued successfully" << endl;
    cout << "-------------------------" << endl << endl;
    //end function to go to menu
    menu();
}

void returnBook()
{
    //return book found in lending file
    string bookName, student;
    cout << "Enter the name of the book: ";
    cin.ignore();
    getline(cin, bookName);
    //convert every capital letter to small letter
    for (int i = 0; i < bookName.length(); i++)
    {
        bookName[i] = tolower(bookName[i]);
    }
    cout << "Enter the name of the student: ";
    getline(cin, student);
    //convert every capital letter to small letter
    for (int i = 0; i < student.length(); i++)
    {
        student[i] = tolower(student[i]);
    }
    //if book name and student isnt in lending file give error and go back to menu
    ifstream fin;
    fin.open("lendings.txt");
    string line;
    bool found = false;
    while (getline(fin, line))
    {
        if (line == bookName + " " + student)
        {
            found = true;
            break;
        }
    }
    fin.close();
    if (found == false)
    {
        cout << endl;
        cout << "------------------" << endl;
        cout << "Book not found" << endl;
        cout << "------------------" << endl << endl;
        menu();
    }
    //ask if the book is late, and how many days
    //fine = days * 100
    int days, fine;
    string late;
    cout << "Is the book late? (yes/no): ";
    cin >> late;
    if (late == "yes")
    {
        cout << "How many days late: ";
        cin >> days;
        fine = days * 100;
        cout << endl;
        cout << "Your fine is: " << fine << endl;
        cout << "Pay it at you earliest convinience..." << endl << endl;
        cout << "Press any key to continue..." << endl;
        _getch();
    }
    else
    {
        fine = 0;
    }
    //Copy the lending entry into return file (plus add the fine in it)
    ofstream fout;
    fout.open("returns.txt", ios::app);
    fout << bookName << " " << student << " " << fine << endl;
    fout.close();
    //remove the lending entry from lending file
    ifstream fin2;
    ofstream fout2;
    fin2.open("lendings.txt");
    fout2.open("temp.txt");
    string line2;
    while (getline(fin2, line2))
    {
        if (line2 != bookName + " " + student)
        {
            fout2 << line2 << endl;
        }
    }
    fin2.close();
    fout2.close();
    remove("lendings.txt");
    rename("temp.txt", "lendings.txt");
    //increase the quantity of books in book file, quantity is in 5th line
    ifstream fin3;
    ofstream fout3;
    fin3.open(bookName + ".txt");
    fout3.open("temp.txt");
    string line3;
    int counter = 0;
    int quantity;
    while (getline(fin3, line3))
    {
        if (counter == 4)
        {
            quantity = stoi(line3);
            quantity++;
            fout3 << quantity << endl;
        }
        else
        {
            fout3 << line3 << endl;
        }
        counter++;
    }
    fin3.close();
    fout3.close();
    //delete book file
    remove((bookName + ".txt").c_str());
    rename("temp.txt", (bookName + ".txt").c_str());
    cout << "Book returned successfully" << endl;
    //end function to go to menu
    menu();
}

void showAllLendings()
{
    //show all lendings in lending file
    ifstream fin;
    fin.open("lendings.txt");
    string line;
    int counter = 0;
    while (getline(fin, line))
    {
        if (line != "")
        {
            cout << line << endl;
            counter++;
        }
    }
    fin.close();
    if (counter == 0)
    {
        cout << endl;
        cout << "-------------------" << endl;
        cout << "No books issued" << endl;
        cout << "-------------------" << endl << endl;
    }
    //end function to go to menu
    menu();
}

void showAllUsers()
{
    //show all users in users.txt
    ifstream fin;
    fin.open("user.txt");
    string line;
    int counter = 0;
    while (getline(fin, line))
    {
        if (line != "")
        {
            cout << line << endl;
            counter++;
        }
    }
    fin.close();
    //if there are no users
    if (counter == 0)
    {
        cout << endl;
        cout << "-------------------" << endl;
        cout << "No users found" << endl;
        cout << "-------------------" << endl << endl;
    }
    //end function to go to menu
    menu();
}

void showAllFines()
{
    //show all fines in returns.txt
    ifstream fin;
    fin.open("returns.txt");
    string line;
    int counter = 0;
    while (getline(fin, line))
    {
        if (line != "")
        {
            cout << line << endl;
            counter++;
        }
    }
    fin.close();
    //if there are no fines
    if (counter == 0)
    {
        cout << endl;
        cout << "-------------------" << endl;
        cout << "There are no fines" << endl;
        cout << "-------------------" << endl << endl;
    }
    //end function to go to menu
    menu();
}

void deleteuserandpass()
{
    //delete a user and password, (password and user are in user.txt)
    //check signup() function for more details
    string username;
    cout << "Enter the username: ";
    cin.ignore();
    getline(cin, username);
    //if username isnt in user.txt give error and go back to menu
    ifstream fin;
    fin.open("user.txt");
    //use and password and stored in different lines,
    //so we need to check every line
    string line;
    bool found = false;
    while (getline(fin, line))
    {
        if (line == username)
        {
            found = true;
            break;
        }
    }
    fin.close();
    if (found == false)
    {
        cout << endl;
        cout << "------------------" << endl;
        cout << "User not found" << endl;
        cout << "------------------" << endl << endl;
        menu();
    }
    //remove the user and password from user.txt
    ifstream fin2;
    ofstream fout2;
    fin2.open("user.txt");
    fout2.open("temp.txt");
    string line2;
    while (getline(fin2, line2))
    {
        if (line2 != username)
        {
            fout2 << line2 << endl;
        }
    }
    fin2.close();
    fout2.close();
    remove("user.txt");
    rename("temp.txt", "user.txt");
    cout << endl;
    cout << "---------------------------" << endl;
    cout << "User deleted successfully" << endl;
    cout << "---------------------------" << endl;
    //end function to go to menu
    menu();
}

void showAllReturns()
{
    //show all returns in returns.txt
    ifstream fin;
    fin.open("returns.txt");
    string line;
    int counter = 0;
    while (getline(fin, line))
    {
        if (line != "")
        {
            cout << line << endl;
            counter++;
        }

    }
    fin.close();
    //if there are no returns
    if (counter == 0)
    {
        cout << endl;
        cout << "--------------------" << endl;
        cout << "No books returned" << endl;
        cout << "--------------------" << endl << endl;
    }
    //end function to go to menu
    menu();
}

void changepassword()
{
    //change password of a user
    //check signup() function for more details
    string username, password, password1;
    cout << "Enter the username: ";
    cin >> username;
    //every username and password is on different line
    ifstream fin;
    fin.open("user.txt");
    string line;
    bool found = false;
    while (getline(fin, line))
    {
        if (line == username)
        {
            found = true;
            break;
        }
    }
    fin.close();
    if (found == false)
    {
        cout << endl;
        cout << "------------------" << endl;
        cout << "User not found" << endl;
        cout << "------------------" << endl << endl;
        menu();
    }
    cout << "Enter the new password: ";
    cin >> password;
    cout << "Confirm the new password: ";
    cin >> password1;
    if (password != password1)
    {
        cout << endl;
        cout << "------------------" << endl;
        cout << "Passwords dont match" << endl;
        cout << "------------------" << endl << endl;
        menu();
    }
    //remove the old password and add the new password
    ifstream fin2;
    ofstream fout2;
    fin2.open("user.txt");
    fout2.open("temp.txt");
    string line2;
    while (getline(fin2, line2))
    {
        if (line2 != username)
        {
            fout2 << line2 << endl;
            break;
        }
        else
        {
            fout2 << username << endl;
            fout2 << password << endl;
            break;
        }
    }
    fin2.close();
    fout2.close();
    remove("user.txt");
    rename("temp.txt", "user.txt");
    cout << endl;
    cout << "---------------------------" << endl;
    cout << "Password changed successfully" << endl;
    cout << "---------------------------" << endl;
    //end function to go to menu
    menu();

}
