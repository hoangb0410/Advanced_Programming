#include <iostream>
#include <fstream>
const int N = 100;
using namespace std;
struct nhanvien
{
    char name[20];
    float heso;
    float phucap;
    float luong;
};
int main()
{
    FILE *f;
    f = fopen("data3.txt", "r"); 
    if(f == NULL)
        return -1;
    char line[N];
    nhanvien A[1000];
    int n=0;
    string str; 
    float sum=0;
    while(fgets(line, N, f) != NULL) 
    {
        sscanf(line,"%[^0-9]%f%f",&A[n].name,&A[n].heso,&A[n].phucap);
        A[n].luong=A[n].heso*1490000+A[n].phucap;
        sum+=A[n].luong;
        n++;
    }
    fclose(f);
    float mean=sum/n;
    for (int i=0;i<n;i++)
        if (A[i].luong>=mean)
            cout<<A[i].name<<endl;    
    return 0;
}