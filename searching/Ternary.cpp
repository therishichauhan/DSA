#include <bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;

// ---------------------implemented in recursive manner.----------------------

// int Ternary_search(int ele,int *arr,int low,int high){
//     if(high>=low){
//     int mid1=low+(high-low)/3;
//     int mid2=high-(high-low)/3;
//     if(ele==arr[mid1])
//     return mid1;
//     if(ele==arr[mid2])
//     return mid2;
//     if(ele<arr[mid1]){
//        return Ternary_search(ele,arr,low,mid1-1);
//     }else if(ele>arr[mid2]){
//         return Ternary_search(ele,arr,mid2+1,high);
//     }else{
//         return Ternary_search(ele,arr,mid1+1,mid2-1);
//     }
// }
//     return -1;
// }

// --------------implemented in iterative manner------------------

int ternary_search(int ele,int *arr,int s){

     int low=0,high=s-1;
     while(high>=low){
    int mid1=low+(high-low)/3;
    int mid2=high-(high-low)/3;
    if(ele==arr[mid1])
    return mid1;
    
    if(ele==arr[mid2])
    return mid2;
   
    if(ele<arr[mid1]){
       high=mid1-1;
    }else if(ele>arr[mid2]){
        low=mid2+1;
    }else{
        low=mid1+1;
        high=mid2-1;
    }
    
}

    return -1;
}




 int main(){
   // vector <int> v1;
    
    int arr[]={1,4,5,2,7,0,3};
    int n=sizeof(arr)/sizeof(arr[0]);
  // sort(v1.begin(),v1.end(),less<int>()); 
     sort(arr,arr+n); 
     int element;
    cout<<"enter the element to search ";
    cin>>element;
   // int result=Ternary_search(element,arr,0,n-1);
    int rslt=ternary_search(element,arr,n);
    // if(result!=-1){
    //     cout<<"Found";
    // }else{
    //     cout<<"NOT";
    // }
    if(rslt==-1){
        cout<<"NOT";
    }else{
        cout<<"Found";
    }
    return 0;
}