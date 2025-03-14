#include <iostream>
using namespace std;
int main()
{
    char const *c = "hello";

    c = "world";
    cout << c << endl;
    cout << *c << endl;
    cout << "Unicode Value of " << *c << " is " << wchar_t(*c) << endl;
    cout << *c + 1 << endl;
    cout << c + 1 << endl;
    cout << (c + 1) << endl;
    cout << "Unicode Value of " << *(c + 1) << " is " << wchar_t(*(c + 1)) << endl;
    cout << *(c + 1) << endl;

    cout << "\n\nNew Thing\n\n"
         << endl;
    int a[]{1, 2, 3, 4};
    // char c[]={'h','e','l','l','o','\0'};
    char str[][7] = {"ram", "gopal", "kumar", "ashifa"};

    cout << str << endl;  // address
    cout << str[0] << endl; //ram
    cout << str[0] + 1 << endl; //am,
    cout << *str << endl; //ram
    cout << *str + 1 << endl; //am
    cout << *(str + 1) << endl; //gopal
    cout << *(str + 2) << endl; //kumar
    return 0;
}