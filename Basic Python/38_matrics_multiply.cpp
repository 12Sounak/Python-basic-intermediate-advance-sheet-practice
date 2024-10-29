// 38. Write a Python Program to Multiply Two Matrices? 
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
    int mul[n][n];
    int t[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            t[i][j] = 0;
            for(int k=0;k<n;k++)
            {
                t[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    cout<<"The Multiplication is :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<t[i][j]<<" ";
        }
    }
}