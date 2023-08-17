//Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[].


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


    int arr[]={1, 1, 2, 2, 2, 2, 3,};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=2;
    cout<<count(arr,x,n);







 }
