//5.12.1
//Nhập n là 1 số nguyên dương.
//Vẽ tam giác cân có độ dài cạnh n như sau:
//1 - Tam giác cân đặc ruột 0, lệch phải
//Xem hình minh họa để rõ yêu cầu đề bài.

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
int n;
cout << "Nhap n: ";
cin >> n;
for (int i = 1; i<=n; i++)
{
    for (int j = 1; j<=n ;j++)
    {
        if(j<n-(i-1))
        {
        cout <<"  ";
        continue;
        }
    cout <<"0 ";
    }
    cout <<"\n";
}
return 0;
}