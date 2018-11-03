#include<iostream>
using namespace std;
void my_strcpy(char *s, char *t){
    //t = s;
    while (*s=0){
        *t = *s;
        s++; t++;
    }
    *t = '\0';
}

int main(){
    char s[10] = "Hello";
    char t[10];

    cout << "Enter source : ";
    cin >> s;

    my_strcpy(s,t);

    cout << t << endl;

    return 0;
}

