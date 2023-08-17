
//Find the index of first 1 in a sorted array of 0’s and 1’s
#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[]={0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cout<<i;
            break;
        }
    }





}