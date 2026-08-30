#include <iostream>
using namespace std;

int main(){
    char my_order;
    do{
        cout<<"Your Order is Placed! \n";
        cout<<"Order another item? (Y/n): ";
        cin>>my_order;
    }while(my_order == 'Y');
    cout<<"Thanks for placing your Order!";
    return 0;
}