#include <iostream>
using namespace std;

void greetings(string name);//Function Prototype(declaration)

int main(){
    greetings("Shruti");
    greetings("Shubhada");
    return 0;
}

//function definition
void greetings(string name){
    cout<<"Hello, "<<name<<"! Welcome to New York.\n";
}