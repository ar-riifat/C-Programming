#include <bits/stdc++.h>
#include <fstream>
#include<ctime>
#include<map>
#include<stdlib.h>
using namespace std;

map < string, string > passwrd ;


void userdata();
string Genpass();
void logIn();
void StudentInfo();
void SignUp();

int main()
{
    userdata();
    logIn();
    StudentInfo();
    return 0;
}

void userdata()
{
    fstream file;
    file.open ("Data.txt", ios :: app);

    if(file)
        {
        string username ,password;
        while (file >> username)
        {
            file >> passwrd[username];
        }
    }
    file.close();
}

string Genpass()
{
    string pass = " ";
    const string characters ="zxcvbnmasdfghjklpoiuytrewqZXCVBNMASDFGHJKLPOIUYTREWQ1234567890@#$%&*!?";
    cout << "How long you want the password to be (4-70)";
    int len, i;
    cin >> len;
    for ( i = 0; i< len; i++)
    {
        pass += characters[rand() % characters.size()];
    }
    return pass;
}
void logIn()
{
    string Username ,Password;
    cout <<"Enter Username: ";
    cin >> Username;
    if(passwrd.find(Username) == passwrd.end())
    {
        cout<<"Username dosn't exist! Please register."<< endl;
        SignUp();
        return;
    }
    cout << "Enter Password: ";
    cin >> Password;

    if (passwrd[Username]== Password)
    {
        cout << "Login Success" << endl;
        return;
    }
    else
    {
        cout << "Wrong Password.Try Again."<< endl;
        logIn();
    }
}
void StudentInfo()
{
    string data;
    fstream file;

    file.open("StudentA.txt", ios::app);

    cout << "Student Name: ";
    cin.ignore();
    getline(cin, data);
    file << "Name: " << data << endl;

    cout << "Assingment date: ";

    getline(cin, data);
    file << "Assingment date: " << data << endl;

    cout << "Exam date: ";

    getline(cin, data);
    file << "Exam date: " << data << endl;

    file.close();
}

void SignUp()
{
    string Username, Password;
    cout << "Enter Username: ";
    cin >> Username;
    cout << "Get random password or enter new one (1/2): ";
    int op;
    cin >> op;
    if (op==1)
    {
        Password = Genpass();
    }
    else

    {
        cout << "Enter Password: ";
        cin >> Password;
    }
    fstream file;
    file.open("Data.txt", ios::app);

    if(file)
    {
        file << Username << " " << Password << endl;
    }
    file.close();
}
