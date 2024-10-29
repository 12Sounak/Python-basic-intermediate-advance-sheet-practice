// # 37. Write a Python Program to Add Two Matrices?
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter the matrix size :";
    cin>>n;
    int m1[n][n];
    int m2[n][n];
    cout<<"\nEnter the 1st matrics elements :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"\nEnter the 2nd matrics elements :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m2[i][j];
        }
    }
    int sum[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
        }
    }
    cout<<"The sum is :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<sum[i][j]<<" ";
        }
    }
}