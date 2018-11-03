#include<iostream>
using namespace std;
int main(){
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int *p;
  //printing elements using normal index method
  cout<<"index method"<<endl;
  for(int i=0;i<10;i++){
     cout<<" "<<arr[i]<<endl;}
  //printing elements using pointer method
  cout<<"pointer method"<<endl;
  p=arr;
  for(int i=0;i<10;i++){
  cout<<" "<<*p<<endl;
  p++;
  }
return 0;
}


