#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

    int randNumber=rand()%10;
    cout<<randNumber;

    return 0;
}