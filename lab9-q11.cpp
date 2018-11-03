#include<iostream>
using namespace std;
int main(){
       int i=1,*i1;   
       char j='a',*j1;
       float k=4.4,*k1;
       bool n=2,*n1;
       double m=5.567,*m1;
       i1=&i;
       j1=&j;
       k1=&k;
       n1=&n;
       m1=&m;
    cout<<"size of integer variable is="<<sizeof(i)<<endl;
    cout<<"size of pointer of integer is="<<sizeof(i1)<<endl;
    cout<<"size of character variable is ="<<sizeof(j)<<endl;
    cout<<"size of pointer of character is="<<sizeof(j1)<<endl;
    cout<<"size of float is="<<sizeof(k)<<endl;
    cout<<"size of pointer of float is ="<<sizeof(k1)<<endl;
    cout<<"size of bool is="<<sizeof(n)<<endl;
    cout<<"size of pointer of bool is ="<<sizeof(n1)<<endl;
    cout<<"size of double is="<<sizeof(m)<<endl;
    cout<<"size of pointer of double is ="<<sizeof(m1)<<endl;
  return 0;
}
   
  
   
  
      
