/*convert upper triangular matrix to zero 
# take a matrix as input then convert the right upper trangular above the diagonal to 0. then print the input matrix also the output matrix after the operation 
"""
eg1:
    matrix = [[2,2],[2,2]]
    ans_matrix = [[2,0],[2,2]]
eg2:
    matrix = [[1,2,3],[7,6,8],[10,40,13]]
    ans_matrix = [[1,0,0],[7,6,0],[10,40,13]]
"""
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the matrix :";
    cin>>n;
    int m[n][n];
    cout<<"\nEnter the array elements :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m[i][j];
        }
    }
    cout<<"\nThe Input array is :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i){
                m[i][j]=0;
            }
        }
    }
    cout<<"\nAfter Converting the right upper trangular matrix to 0 :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
}