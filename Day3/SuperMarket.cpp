#include <iostream>
using namespace std;

    class Shop{
        private:
        int itemId[100];
        int itemPrice[100];
        int counter;
    
        public:
        void initCounter(void) {
            counter=0;
        } 
        void setPrice(void);
        void displayPrice(void);
    };

void Shop::setPrice(void){
    cout<<"ENter the id of item "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"ENter the price of item "<<endl;
    cin>>itemPrice[counter];
    counter++;

}

void Shop::displayPrice(void){
    for(int i=0;i<counter;i++){
        cout<<"the price of item with id :"<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    Shop DMart;
    DMart.initCounter();
    DMart.setPrice();
    DMart.displayPrice();

return 0;
}