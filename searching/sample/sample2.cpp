
//Count number of Occurences in Sorted Array

#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[]={1, 1, 2, 2, 2, 2, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+n);
    int x=2;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==x){
                cnt++;
            }
        }
        if(cnt>0){
            cout<<x<<" occurs "<<cnt<<" times "<<endl;
            break;
        }
        
   }

    return 0;
    
}
