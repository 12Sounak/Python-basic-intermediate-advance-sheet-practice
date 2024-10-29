#include<bits/stdc++.h>
// #include<stdio.h>
using namespace std;
void area(int side)
{
    float a;
    a = (3*1.7320*side*side)/2;
    printf("%0.2f",a);
}
int main()
{
    int s;
    cout<<"Enter the side :";
    cin>>s;
    area(s);
}