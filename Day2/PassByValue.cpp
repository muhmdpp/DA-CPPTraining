#include <iostream>
using namespace std;
void swap(int*,int*);
int main()
{
int a{20};
int b{30};
cout<<"Before Swap - Pass by Value"<<endl;
cout<<"A:"<<a<<endl;
cout<<"B:"<<b<<endl;
cout<<"After Swap - Pass by Value"<<endl;
swap(&a,&b);
cout<<"After Situation - Global"<<endl;
cout<<"A:"<<a<<endl;
cout<<"B:"<<b<<endl;

return 0;
}

void swap(int *a,int *b){
    int *temp=a;
    a=b;
    b=temp;
    cout<<"A:"<<a<<endl;
    cout<<"B:"<<b<<endl;
}