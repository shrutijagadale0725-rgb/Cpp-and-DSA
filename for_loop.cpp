#include <iostream>
using namespace std;

int main(){
    cout<<"Table of Seven:\n";
    for(int table=1;table<=70;table++){
        if(table%7==0){
            cout<<table<<"\n";
        }
    }
    return 0;
}