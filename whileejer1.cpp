#include <iostream>
using namespace std;

int main()
{

    int password = 42;
    int digit;

    do
    {
        cout << "Ingress your password";
        cin >> digit;

        if (digit == password)
        {
            cout << "Your password is correct. Continue" << endl;
        }

    } while (password =! digit);

    cout << "The password is incorrect, try again" << endl;
    return 0;
}
