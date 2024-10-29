#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c_letter,c_digit;
    cout<<"Enter a String :";
    getline(cin,s);
    cout<<s;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if((s[i]>'a' and s[i]<'z') or (s[i]>'A' and s[i]<'Z'))
        {
            c_letter++;
        }
        if(s[i]>'1' and s[i]<'9')
        {
            c_digit++;
        }
    }
    cout<<"LETTERS"<<c_letter;
    cout<<"DIGIT"<<c_digit;
}
