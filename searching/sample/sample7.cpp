/*Given a binary array arr[] of size N, which is sorted in non-decreasing order, count the number of 1’s in it.*/


#include<bits/stdc++.h>
 using namespace std;

int count(int* a,int ele,int s){
    int cnt=0;
    for(int i=0;i<s;i++){
        if(a[i]==ele){
            cnt++;
        }
    }
    return cnt;
}

 int main(){


    int arr[]={0,0, 0, 0, 0, 1, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=1;
    cout<<count(arr,x,n);







 }