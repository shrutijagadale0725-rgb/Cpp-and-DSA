#include <iostream>
using namespace std;

bool validSize(int r,int c)
{
    return r>=1&&r<=10&&c>=1&&c<=10;
}

void readMatrix(int m[10][10],int r,int c)
{
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>m[i][j];
}

void printMatrix(int m[10][10],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<m[i][j]<<"\t";
        cout<<endl;
    }
}

int main()
{
    int a[10][10],b[10][10];
    int add[10][10],mul[10][10],trans[10][10];
    int r1,c1,r2,c2;

    cout<<"Enter rows and columns of first matrix: ";
    cin>>r1>>c1;
    if(!validSize(r1,c1))
    {
        cout<<"Size must be between 1x1 and 10x10\n";
        return 1;
    }

    cout<<"Enter first matrix:\n";
    readMatrix(a,r1,c1);

    cout<<"Enter rows and columns of second matrix: ";
    cin>>r2>>c2;
    if(!validSize(r2,c2))
    {
        cout<<"Size must be between 1x1 and 10x10\n";
        return 1;
    }

    cout<<"Enter second matrix:\n";
    readMatrix(b,r2,c2);

    if(r1==r2&&c1==c2)
    {
        for(int i=0;i<r1;i++)
            for(int j=0;j<c1;j++)
                add[i][j]=a[i][j]+b[i][j];

        cout<<"\nAddition:\n";
        printMatrix(add,r1,c1);
    }
    else
        cout<<"\nAddition not possible\n";

    if(c1==r2)
    {
        for(int i=0;i<r1;i++)
            for(int j=0;j<c2;j++)
            {
                mul[i][j]=0;
                for(int k=0;k<c1;k++)
                    mul[i][j]+=a[i][k]*b[k][j];
            }

        cout<<"\nMultiplication:\n";
        printMatrix(mul,r1,c2);
    }
    else
        cout<<"\nMultiplication not possible\n";

    for(int i=0;i<c1;i++)
        for(int j=0;j<r1;j++)
            trans[i][j]=a[j][i];

    cout<<"\nTranspose of First Matrix:\n";
    printMatrix(trans,c1,r1);

    return 0;
}