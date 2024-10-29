/*
Question 2: 
Write a program which takes 2 digits, X,Y as input and generates a 2-dimensional array. The 
element value in the i-th row and j-th column of the array should be i*j. 
Note: i=0,1.., X-1; j=0,1,¡Y-1. 
Example 
Suppose the following inputs are given to the program: 
3,5 
Then, the output of the program should be: 
[[0, 0, 0, 0, 0], [0, 1, 2, 3, 4], [0, 2, 4, 6, 8]]
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // cout<<"hello world";
    int x,y;                   //x = row, y = colm
    int i,j;
    cout<<"\nEnter the Row and Column of the matrix :";
    cin>>x>>y;
    int mat[x][y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            mat[i][j]=i*j;
        }
    }
    for(i=0;i<y;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}