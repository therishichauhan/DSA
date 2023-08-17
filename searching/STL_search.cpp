#include <bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    vector <int> v1{10,45,56,30,40,};
    vector <int> :: iterator upper,upper2;
    int arr[]={1,4,5,2,7,0,3};
    int n=sizeof(arr)/sizeof(arr[0]);
   sort(v1.begin(),v1.end(),less<int>()); /* sort() take first parameter being point of the array/vector second being the lenght up to sorted
   and third is used to specify the order t be sorted*/

     sort(arr,arr+n); // by default sort in ascending order
    int ele;
    cout<<"enter the element to search ";
    cin>>ele;
   
   bool result= binary_search(v1.begin(),v1.end(),ele); /*checks if a particular element is present in a sorted container or not
   it does not give any information about the location of the element if it exists.*/

   bool rslt= binary_search(arr,arr+n,ele);

   if(result==1){
    cout<<"Found";
   }else{
    cout<<"NOT";
   }
     int ele2;
    cout<<"enter the element whose upper bound to be found  ";
    cin>>ele2;

   upper=upper_bound(v1.begin(),v1.end(),ele2);// finds the just greater than a given element in a container.
    upper2=lower_bound(v1.begin(),v1.end(),ele2);
  int  upr = upper_bound(arr,arr+n,ele2)-arr;
  int  upr2 = lower_bound(arr,arr+n,ele2)-arr;
   cout<<(upper-v1.begin()); //calculate the exact index position of the elements
    cout<<(upr);
    cout<<(upper2-v1.begin()); //calculate the exact index position of the elements
    cout<<(upr2);
    return 0;

}