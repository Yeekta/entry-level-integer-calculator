#include <iostream>

using namespace std;

int main()
{
    string carpma;
    string bolme;
    string toplama;
    string cikarma;
    string input;

    int a, b;

    cout << "Hesap makinesine hosgeldin ( sadece tam sayilar)" << endl; // calculator for integers only
    cout << "Islemi Yaziniz" << endl;

    cin >> input;
    
    if (input == "carpma") // multiplication
    {
        cout << "1. sayiyi sec" << endl;
        cin >> a;
        
        cout << "2.sayiyi sec" << endl;
        cin >> b;

        cout << a * b;
    }
    else if (input == "bolme") // division
    {
        cout << "1. sayiyi sec" << endl;
        cin >> a;

        cout << "2.sayiyi sec" << endl;
        cin >> b;

        cout << a / b;
    }
    else if (input == "toplama") // addition
    {
        cout << "1. sayiyi sec" << endl;
        cin >> a;

        cout << "2.sayiyi sec" << endl;
        cin >> b;

        cout << a + b;
    }
    else if (input == "cikarma") // Subtraction process
    {
        cout << "1. sayiyi sec" << endl;
        cin >> a;

        cout << "2.sayiyi sec" << endl;
        cin >> b;

        cout << a - b;
    }
    else
    {
        cout << "Hatali islem sectiniz"; // If the action is selected incorrectly, print it on the screen
    }





}

