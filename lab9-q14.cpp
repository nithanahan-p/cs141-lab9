#include<iostream>
using namespace std;
int main(){
  //declairing string
  char arr[6]={'N','I','T','H','A','\0'};
  char *p;
     //printing name using normal index method
    cout<<"index method"<<endl;
     for(int i=0;i<6;i++){
       cout<<arr[i];}
       cout<<endl;     
     //printing name using pointer method
    cout<<"pointer method"<<endl;
      p=arr;
      for(int i=0;i<6;i++){
       cout<<*p;
       p++;
       }
return 0;
}

