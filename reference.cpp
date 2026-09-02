#include <iostream>
using namespace std;

int main(){
    string fruit="Gauva";
    string &fruitss=fruit;

    fruitss="Apple";
    cout<<fruit<<"\n";
    cout<<fruitss<<"\n";
    return 0;
}