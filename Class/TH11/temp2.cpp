#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main(){
    char str[] = "CpR84Fd2bK";
    char *p, *q;
    p=str;

    while(q=strtok(p,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz")){
        p=NULL;
        cout <<  q <<endl;
    }
    return 0;
} 
