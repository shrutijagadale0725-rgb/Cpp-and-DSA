#include <iostream>
using namespace std;

int calculate(int length,int breadth){
    int area=length * breadth;
    return area;
}

int main(){
    int len=20;
    int bread=15;
    int tot_area=calculate(len,bread);
    cout<<"The area is "<<tot_area<<" square meters.";
    return 0;
}