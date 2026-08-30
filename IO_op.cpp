#include <iostream>
using namespace std;

int main(){
    string name;
    short age;
    cout<<"Enter your name: ";
    //cin>>name;//reads one word meaning if i enter Shruti Jagadale then it will only print Shruti
    getline(cin, name); //Reads the entire line, including spaces.
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Hello "<<name<<", So you are "<<age<<" years old.";
    return 0;
}