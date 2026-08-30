#include <iostream>
using namespace std;

int main(){
    cout<<"Odd numbers:";
    for(int i=1;i<=50;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        cout<<"\n"<<i;
    }
}