#include <iostream>
using namespace std;

int main(){
    int submi_date=31;
    if(submi_date<1 || submi_date>31)
    {
        cout<<"Invalid date";
    }
    else if(submi_date>21)
    {
        cout<<"Your submission is rejected\n";
    }
    else if(submi_date==21){
        cout<<"Your submission is accepted on deadline\n";
    }
    else{
        cout<<"Your submission is early, but accepted";
    }
    return 0;
}