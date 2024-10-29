#include<bits/stdc++.h>
using namespace std;
int main(){
        vector<int> digits;
        int num = 3471;
        int sorted_num=0;
        while(num!=0)
        {
            digits.push_back(num%10);
            num = num/10;
        }
        sort(digits.begin(),digits.end(),greater<int>());

        for(int digit: digits){
            sorted_num = sorted_num * 10 + digit;
        }    
        cout<<sorted_num;
}