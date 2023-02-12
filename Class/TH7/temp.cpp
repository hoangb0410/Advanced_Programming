#include <iostream>
using namespace std;
 
#define N 256 //Chỉ định số ký tự lớn nhất có thể đọc từ một dòng

int main() {
    FILE *fp;
    char fname[] = "test.txt";
    char line[N];
    char str[16];
    float f1, f2, f3, f4, f5;
    //Mở file bằng hàm fopen, và trả về NULL nếu mở file thất bại.
    fp = fopen(fname, "r"); 
    if(fp == NULL) {
        cout << fname<<" file not open!\n";
        return -1;
    } 
    //Đọc từng dòng trong file bằng hàm fgets
    while(fgets(line, N, fp) != NULL) {
        //Truy xuất thông tin cần thiết từ nội dung đọc được bằng hàm sscanf 
        sscanf(line, "%s %f %f %f %f %f", str, &f1, &f2, &f3, &f4, &f5);
        cout << str <<" " << f1<<" "<< f2<<" "<< f3<<" "<< f4<<" "<< f5<< endl;
    }
    fclose(fp); //Đóng file
    return 0;
}
