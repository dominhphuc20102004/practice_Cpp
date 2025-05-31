//5.12.2
//Nhập n là 1 số nguyên dương.
//Vẽ tam giác cân có độ dài cạnh n như sau:
//2 - Tam giác cân đặc ruột 0, viền 1, lệch phải
//Xem hình minh họa để rõ yêu cầu đề bài.
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int n;
cout << "Nhap n: ";
cin >> n;
for (int i = 1; i<= n ; i++)
{
    for (int j = 1; j<=n-i ;j++)
    {
        cout << "  ";
    }
    for ( int j= n-i+1; j<=n; j++)
    {
        if ((j==n-i+1) || (j ==n) || (i==n))
        cout << "1 ";
        else cout << "0 ";
    }
    cout <<"\n";
}
return 0;
}
