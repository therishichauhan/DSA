#include<bits/stdc++.h>
#include<vector>
 #include<list>
#include<iterator>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number of elements to be stored in array"<<endl;
    cin>>num;
   int *arr=new int; // dynamically allocate array
    
    vector<int> v1; //dynamically allocate array using vector class

    for(int i=0;i<num;i++){
          cin>>arr[i];
 }
 int ele;
 cout<<"Enter the element to be inserted";
 cin>>ele;
 int pst;
 cout<<"Enter the position at which element meant to be inserted";
 cin>>pst;
 for(int i=num;i>=pst;i--){
 arr[i]=arr[i-1] ;   // insert element at specified position by shifting element by 1 position
 }
 arr[pst-1]=ele;
 for(int i=0;i<=num;i++){
          cout<<arr[i]<<"\t";
 }
 delete[] arr;

int element;
for(int i=0;i<num;i++){
    cin>>element;
    v1.push_back(element);
}
int item;
cout<<"Enter the element to be inserted";
 cin>>item;
 int pst;
 cout<<"Enter the position at which element meant to be inserted";
 cin>>pst;
v1.insert(v1.begin()+pst-1,item); // insert(position,element) to insert element at a specified position;
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}

list<int>li{1,2,3,4};
list<int>::iterator it=li.begin();
for(int i=0;i<pst;i++){
    it++;
}
li.insert(--it,1,5);
for( it = li.begin(); it != li.end() ;++it){
    cout<<*it<<" ";
}
    return 0;
}