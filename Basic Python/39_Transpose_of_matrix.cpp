#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter the matrix size :";
    cin>>n;
    int m1[n][n];
    cout<<"\nEnter the 1st matrics elements :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m1[i][j];
        }
    }
    int trans[n][n];
    cout<<"The Transpose is :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            trans[i][j] = m1[j][i];
        }
    }
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<trans[i][j]<<" ";

        }
        cout<<endl;
    }
}