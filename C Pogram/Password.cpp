#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
char characters[] =
"zxcvbnmasdfghjklpoiuytrewqZXCVBNMASDFGHJKLPOIUYTREWQ1234567890@#$ .";
 string password;
 int length, randomNumber;

 ofstream output_file;
 output_file.open("password.txt");

 cout<<"Enter the length you want your password!"<<endl;
 cin>>length;

 srand(time(NULL));

 for(int i = 1; i<=length; i++) {
 randomNumber = rand() % 67 + 1;
 output_file<<characters[randomNumber];
    }

    cout<<"password generated!"<<endl;

    return 0;
}
