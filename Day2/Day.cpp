#include <iostream>
#include <ctime>
using namespace std;
int main()
{

    srand(time(0));
// char str[][90]={
//     "Today is a good day",
//     "Ohh..  very bad day",
//     "ok ok day",
//     "wonderFul day",
//     "waste"
// };

//another day of declaring String

char *str[]={
    "Today is a good day",
    "Ohh..  very bad day",
    "ok ok day",
    "wonderFul day",
    "waste"
};

// in this , we dont need to add size of the array like previous 

char name[20];
// cin get>>

int var = rand()%5;
cout<<var;

cout<<"Enter your Name"<<endl;
cin.getline(name,sizeof(name));
cout<<"Dear "<<name<<" "<<str[var]<<endl;
return 0;
}