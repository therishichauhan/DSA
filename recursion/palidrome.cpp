#include<bits/stdc++.h>
#include<string>
using namespace std;

bool palindrome(int i,char s[],int n){
 if(i>=n/2) return true;
 
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return palindrome(i+1,s,n);
 }


int main(){

char str[100]="madam";
int size=strlen(str);

 cout<<palindrome(0,str,size);

}