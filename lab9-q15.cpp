//including the library
#include<iostream>
using namespace std;
int main(){
   char arr[20];
   char *p;
   //asking user for the string
   cout<<"your string is "<<endl;
   cin>>arr;
   p=arr;  
   //show string by shifting top character to right
   while(*p!='\0'){
   cout<<p<<endl;
   p++;
   }
return 0;
}
