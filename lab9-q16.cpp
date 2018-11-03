//including library
#include<iostream>
using namespace std;
int main(){
  char str[10],*p,*j,i=0;
	cout<<"input a String of 10 characters "<<endl;
	cin>>str;
	//show string by shifting top character of string to right 
	while(str[i]!='\0'){
	i++;
	j=&str[i-1];}
	while(*j!=str[0]){
		
		p=j;
		while(*p!='\0'){
		cout<<" "<<*p;
		p++;}
		cout<<endl;
		j--;
	}
	while(*j!='\0'){
	cout<<" "<<*j;
	j++;}
	cout<<endl;
	return 0;
}

