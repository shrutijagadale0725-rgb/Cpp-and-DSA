#include <iostream>
using namespace std;

void PassByValue(int score){
    score=score+1;
}
void PassByReference(int &score){
    score=score+1;
}
int main(){
    int scoreOne=20;
    int scoreTwo=20;

    PassByValue(scoreOne);
    cout<<"Score One Value:"<<scoreOne<<"\n";

    PassByReference(scoreTwo);
    cout<<"Score Two Value:"<<scoreTwo;

    return 0;
}