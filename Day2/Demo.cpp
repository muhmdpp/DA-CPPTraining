#include <iostream>
using namespace std;

class SuperMarket{
    public:
    SuperMarket(){
        cout<<"Welcome to SuperMarket"<<endl;
    }
    void set_profit(int Paramter_Profit){
        profit=Paramter_Profit;
    }
    void get_profit(){
        cout<<"Profit is :"<<profit<<endl;
    }
    string pro_name;
    int pro_quantity;
    string managerName;
    int pro_id;
    string location;
    private:
    int profit;
    int analytics;


};
int main()
{


    SuperMarket dmart;
    SuperMarket jiomart;
    jiomart.location="delhi";
    dmart.location="chennai";
    dmart.set_profit(100000);
    dmart.get_profit();



return 0;
}