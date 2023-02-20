#include <iostream>

using namespace std;

class Register{
  public:
    string username, password;
};

class Login{
  public:
    string inpUsername, inpPassword;
};

int main(){

  // Register
  Register newUser;

  cout << "Welcome Back please register ";

  cout << "\nEnter your desired username: ";
  cin >> newUser.username;

  cout << "\nEnter your desired password: ";
  cin >> newUser.password;

  cout << "\nSuccessfully Registered your account, Please login below.";

  // login

  Login newLogin;

  cout << "\nUsername: ";
  cin >> newLogin.inpUsername;

  cout << "\nPassword: ";
  cin >> newLogin.inpPassword;

  if(newLogin.inpUsername == newUser.username && newLogin.inpPassword == newUser.password){
    cout << "\nSuccessfully logged in, loading your dashboard...";
  } else {
    cout << "Login Failed Please try again later!";
  }


}
