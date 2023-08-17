/*Given an unsorted array of size n. Array elements are in the range from 1 to n. 
One number from set {1, 2, …n} is missing and one number occurs twice in the array.
 Our task is to find these two numbers.*/

#include<bits/stdc++.h>
using namespace std;


int main(){
 
    int arr[]={2, 3, 2, 1, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]&&i!=j){
                cout<<arr[i]<<endl;;
            }
            if(arr[j]==arr[i]+1){
                continue;
            }else if(arr[i]!=arr[j]){
                continue;
            }else{
                cout<<arr[i]+1;
            }
        }
    }

    return 0;
}