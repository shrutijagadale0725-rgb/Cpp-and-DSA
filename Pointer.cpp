#include <iostream>
using namespace std;

int main(){
 int pointer_var=7;
 int* pointer_varPtr= &pointer_var;

 cout<<"Address stored in pointer_varptr: "<<pointer_varPtr<<"\n";
 cout<<"Value pointed by pointer_varPtr: "<< *pointer_varPtr;
 return 0;
}