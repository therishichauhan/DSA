#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//-----------Binary search using rescursion-------------


// int binarysearch(int elmt,int a[],int first,int last ){
//     int mid=(first+last)/2;
//     if(a[mid]==elmt)
//     return mid;
//     else{
//         if(mid>elmt){
//             return binarysearch(elmt,a,mid+1,last);
//         }else{
//             return binarysearch(elmt,a,first,mid-1);
//         }
//     }
//     return -1;
// }

///--------binary search using iteration--------------------

int binarysearch(int elmt,int *a,int s ){
    int low=0,high=s-1;
    while(low<=high){
    int mid=low+((high-low)/2);
    if(a[mid]==elmt){
    return mid;
    }
    else if(elmt<a[mid]){

        high=mid-1;
    }else if(elmt>a[mid]){
        low=mid+1;
    }
  }
return -1;

}

int main(){
    int num;
int *arr=new int;
cout<<"Enter the number of items to be stored in array ";
cin>>num;
for(int i=0;i<num;i++ ){
    cin>>arr[i];
}
int size=sizeof(arr)/sizeof(arr[0]);
int ele;
cout<<"Enter the element to search for ";
cin>>ele;




// -----------Binary search using rescursion-------------


int rst=binarysearch(ele,arr,num);
if(rst==-1){
    cout<<"element is not present";
}else{
    cout<<"elemrnt is present at "<<rst;
}


///--------binary search using iteration--------------------


// int rst=binarysearch(ele,arr,num);
// if(rst!=-1){
//     cout<<"element is present at"<<rst+1;
// }else{
//     cout<<"elemrnt not present  ";
// }

return 0;

}