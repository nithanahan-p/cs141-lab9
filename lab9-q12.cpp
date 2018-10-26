//including the library
#include<iostream>
using namespace std;
int main(){
  //declaration of variables and pointer
   int a,b,*p;
   a=2;
   b=3;
   cout<<"part 1"<<endl;
   //pointing p to a
   p=&a;
   //storing value of p in b
   b=*p;
   //printing all
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<*p<<endl;
   cout<<"part 2"<<endl;
   //pointing p to b
   p=&b;
   //printing a,b,*p
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<*p<<endl;
}
