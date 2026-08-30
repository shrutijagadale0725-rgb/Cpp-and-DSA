#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    string valid_age_to_vote=(age>=18)?"This Person can vote":"This Person cannot vote";
    cout<<"Do this Person have eligible age? "<<valid_age_to_vote;
    return 0;
}