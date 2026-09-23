#include <iostream>
using namespace std;

struct Element
{
    int row,col,val;
};

void printSparse(Element s[],int r,int c,int n)
{
    cout<<"Row\tCol\tValue\n";
    cout<<r<<"\t"<<c<<"\t"<<n<<"\t(header)\n";
    for(int i=0;i<n;i++)
        cout<<s[i].row<<"\t"<<s[i].col<<"\t"<<s[i].val<<endl;
}

int main()
{
    int a[10][10];
    int r,c;

    cout<<"Enter rows and columns of matrix: ";
    cin>>r>>c;
    if(r<1||r>10||c<1||c>10)
    {
        cout<<"Size must be between 1x1 and 10x10\n";
        return 1;
    }

    cout<<"Enter matrix:\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];

    Element sp[100];
    int n=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j]!=0)
            {
                sp[n].row=i;
                sp[n].col=j;
                sp[n].val=a[i][j];
                n++;
            }

    cout<<"\nSparse matrix (triplet form):\n";
    printSparse(sp,r,c,n);
    cout<<"\nNon-zero elements: "<<n
        <<", Zero elements: "<<r*c-n<<endl;

    Element t[100];
    int k=0;
    for(int col=0;col<c;col++)
        for(int i=0;i<n;i++)
            if(sp[i].col==col)
            {
                t[k].row=sp[i].col;
                t[k].col=sp[i].row;
                t[k].val=sp[i].val;
                k++;
            }

    cout<<"\nTranspose of sparse matrix (triplet form):\n";
    printSparse(t,c,r,n);

    return 0;
}