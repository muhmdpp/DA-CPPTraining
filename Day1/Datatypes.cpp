#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int dec{12};
    int oct{0123}; // 83

    // 3 * 8^0+ 2* 8^1+ 1*
    int hex{0xff};
    // int binary{0b00001};

    int b = 10;
    cout << bitset<4>(b) << endl;

    cout << dec << endl;
    cout << showbase << oct << endl;
    cout << hex << endl;
    // cout<<binary<<endl;
}