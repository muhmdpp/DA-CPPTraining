#include <iostream>
using namespace std;

// 
int main()
{
int v{200};
int w{540};

 
// 200/2= 100
// 100*4=400
// 540-400=140
// 140/2=70

int r1=v/2;
int r2=r1*4;
int r3=w-r2;
int r4=r3/2;

cout<<"Bike Count:"<<r4<<endl;


// 200*2=400
// 540-400=140/2=70
// 200-70 = 130

// int r1=v*2;
// int r2=w-r1;
// int r3=r2/2;
// int r4=v-r3;




// cout<<"TW: "<<r4<<endl;
// cout<<"FW: "<<200-r4<<endl;

return 0;
}