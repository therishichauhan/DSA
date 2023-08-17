#include <stdio.h>
#include <string.h>

#include<iostream>
using namespace std;

// write a recursive function to print sum of N numbers 

//---------- Using parameters----------------
// int print(int i,int n){
//    if(i<n){
//     return i+print(i+1,n);
//    }
//    else{
//     return n;
//    }
// }

//---------Using Function return--------------
void print2(int i,int n,int sum){
    if(i>n){
        cout<<sum;
        return;
    }

    print2(i+1,n,sum+i);
}




int main(){ 
//   cout<< print(1,10);
  print2(1,10,0);

    return 0;  
}