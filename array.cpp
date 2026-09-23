#include<iostream>
using namespace std;

int main(){
    int a[50],n,pos,val,key;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter position and value to insert: ";
    cin>>pos>>val;
    for(int i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=val;
    n++;
    cout<<"After insertion: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<"\nEnter position to delete: ";
    cin>>pos;
    for(int i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    cout<<"After deletion: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<"\nEnter element to search: ";
    cin>>key;
    int found=-1;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            found=i;
            break;
        }
    }
    if(found!=-1){
        cout<<key<<" found at position "<<found+1;
    }else{
        cout<<key<<" not found";
    }
    return 0;
}