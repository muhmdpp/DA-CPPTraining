#include <iostream>
using namespace std;
int main()

//Program to swap the array
{
int a[]{1,2,3,4,5};
int b[]{6,7,8,9,10};

int *p1{a};
int *p2{b};

int *temp=p1;
p1=p2;
p2=temp;
// cout<<*a<<endl;


for(int i=0;i<5;i++){
    cout<<*(p1+i)<<" "<<endl;
}
for(int i=0;i<5;i++){
    cout<<*(p2+i)<<" "<<endl;
}

cout<<a[0];

    // for(int i:a){
    //     // *a=&b;
    //     cout<<i<<endl;
    // }
    // for(int i:b){
    //     cout<<i<<endl;
    // }
return 0;
}