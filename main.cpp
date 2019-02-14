#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user_name;
    string user_Password;
    int loginAttempt = 0;

    while (loginAttempt < 3)
    {
        cout << "Please enter your user name: ";
        cin >> user_name;
        cout << "Please enter your user password: ";
        cin >> user_Password;

      if (user_name == "Goku" && user_Password == "ILoveFood")
    {
        cout << "Welcome Back GoKu\n";
        break;}
     else if (user_name == "Vegeta" && user_Password == "Ihategoku")
     {
         cout << "Welcome Back Vegeta\n";
         break;
     }
     else if (user_name == "Beerus" && user_Password == "Food")
     {
         cout << "Welcome Back Beerus\n";
         break;
     }
     else
     {
         cout << "Incorrect User name or Password. Please try again.\n"<<'\n';
         loginAttempt++;
        }
    }
    if (loginAttempt == 3)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }

    cout << "Thank you for logging in.\n";
}
