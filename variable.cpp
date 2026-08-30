#include <iostream>
using namespace std; /*if we define this then we don''t need to write std:: or std::endl*/ 
int main(){
    int item_count=500;
    double item_price=19.9999;
    //short score; //uses 2 bytes & store roughly:-32,768 to 32,767
    //long score; //store a larger range & size depends on the system/compiler.
    //long long score; //normally 8 bytes store approximately:-9.22 quintillion to +9.22 quintillion
    double total_cost= item_count * item_price;
    //std::cout<<"The score is :"<<score<<std:endl;
    cout<<"The Total cost : $"<<total_cost<<"\n";

    char grade='A';
    bool is_passing= true;
    cout<<"Grade:"<<grade<<"\n";
    cout<<"Is passing? "<<boolalpha<<is_passing<<"\n";//std::boolalpha. By default, C++ prints booleans as 1 or 0. Injecting std::boolalpha into the output stream changes the formatting to display literal true or false text.
    return 0;
}
