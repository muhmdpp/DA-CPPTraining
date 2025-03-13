#include <iostream>
#include <ctime>
using namespace std;

int main(){
    bool isTrue=true;
    while(isTrue){

        srand(time(0));
        int randomNumber=rand()%10;
        // cout<<randomNumber<<endl;
        cout<<"Guess the number"<<endl;
        int a{};
        cin>>a;

        if(randomNumber==a){
            isTrue=false;
            cout<<"You Won"<<endl;
        }else{
            cout<<"Try Again"<<endl;
        }
    }

    
    

}