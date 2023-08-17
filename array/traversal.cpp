#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<list>
#include<iterator>
using namespace std;




int main(){
int num;
cout<<"Enter the number of elements to be stored in array"<<endl;
cin>>num;
int *arr=new int; // dynamically allocate array
int ele;
vector<int> v1; // dynamically allocate array using vector class
std::list<int> l1; //dynamically allocate array using list class


for(int i=0;i<num;i++){
    cin>>arr[i];
}
for(int i=0;i<num;i++){
    cout<<arr[i]<<" ";
}

for(int i=0;i<v1.size();i++){
    cin>>ele;
    v1.push_back(ele);
}
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}

for(int i=0;i<num;++i){
    cin>>ele;
    l1.push_back(ele);
}
list <int> :: iterator it;
for( it = l1.begin(); it != l1.end() ;++it){
    cout<<*it<<" ";
}
delete[] arr;
    return 0;
}