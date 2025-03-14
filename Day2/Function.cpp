#include <iostream>
using namespace std;
void add(); //function prototype
void add(int ,int);
int add1();
//difference in the parameters are Function OverLoading.
int add1(int , int);
int main()
{

    add(1,2);
    add();
    // int res1=add1()

return 0;
}

void add(){ //no return , no arg.
    cout<<2+3;
}

void add(int a,int b){ ///a and b are parameters. 
    //if we passs value to this, it is the aruguments
    cout<<a+b;
}

int add1(int a,int b){
    return a+b;
}

int add1(){
    return 2+3;
}


