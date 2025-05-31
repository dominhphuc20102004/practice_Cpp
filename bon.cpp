//Nhập vào số nguyên dương n từ bàn phím.
//Kiểm tra xem n có phải là số chính phương hay không? (số chính phương là số khi lấy căn bặc 2 có kết quả là nguyên).

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
int n = 0 ;
cout << "Nhap n: ";
cin >> n;
if( (sqrt(n)-(int)(sqrt(n)))==0)
{
    cout << "n la so chinh phuong";
}
else cout <<" n khong la so chinh phuong";
return 0;
}