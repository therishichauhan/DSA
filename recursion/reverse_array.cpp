
#include<bits/stdc++.h>
using namespace std;

//---write a programe to print array in reverse order using recursion----------

// void reverse(int i,int a[]){

// if(i<0){
  
//     return;
// }
// cout<<a[i]<<" ";
// reverse(i-1,a);

// }


//--------Using swaping -------
void reverse2(int i,int arr[],int s){
    int temp;
    if (i>=s/2){
        return;
    }
    temp=arr[i];
    arr[i]=arr[s-i-1];
    arr[s-i-1]=temp;
    reverse2(i+1,arr,s);
}
int main(){
  
  int a[4]={1,2,3,4};
  int size=sizeof(a)/4;
reverse2(0,a,size);
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}
    return 0;
}