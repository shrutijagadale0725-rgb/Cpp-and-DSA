#include <iostream>
using namespace std;

int main(){
    cout<<"Welcome to Linkedin\n";
    cout<<"Choose an options\n";
    cout<<"1. Create a post\n";
    cout<<"2. Edit post\n";
    cout<<"3. Save post\n";
    cout<<"4. Delete post\n";
    cout<<"5. Schedule the post\n";
    cout<<"Enter Your Choice: ";
    int user_choice;
    cin>>user_choice;

    switch(user_choice){
        case 1:
            cout<<"Creating post...";
            break;
        case 2:
            cout<<"EditingC post...";
            break;
        case 3:
            cout<<"Saving post...";
            break;
        case 4:
            cout<<"Deleting post...";
            break;
        case 5:
            cout<<"Scheduling post...";
            break;
        default:
            cout<<"Invalid";
    }
    return 0;
}