#include <iostream>
using namespace std;

int main(){
    for(size_t i{0};i<5;i++){

        //var initialization in if statement is only possible in c++ 

        if(int mul=10;i<5){
            cout << i * mul<<endl;
        }
    }

    int  a[]{1,2,3,4,5};
    for(auto i:a){
        cout<<i<<endl;
    }

    // auto a[]{1,2,3,4,5,"String"};
    // for(auto i:a){
    //     cout<<i<<endl;
    // }


    //Range based for Loop:
    // for(int mul=2;auto i:{1,2,3,4,5}){
    //     cout<< mul*i;
    // }

    return 0;
}