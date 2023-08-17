#include<bits/stdc++.h>
using namespace std;
int max(int num1,int num2,int num3){
    int big=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);

}
int maxpieces(int l ,int a, int b,int c){
    int result=0;
     if(l==0)
     return 0;
     if(l<0)
     return -1;

     int temp1=maxpieces(l-a,a,b,c);
     int temp2=maxpieces(l-b,a,b,c);
     int temp3=maxpieces(l-c,a,b,c);
     result=max(temp1,temp2,temp3);

     if(result==-1)
     return -1;

     return result+1;
}

int main(){

   cout<< maxpieces(15,5,8,7);

    return 0;
}



