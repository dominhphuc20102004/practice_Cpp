//Nhập n là số tự nhiên từ 0 đến 9. Sử dụng vòng lặp for hoặc while tùy thích để vẽ các hình sau: 
// Hình vuông có n lớp, tâm 0, tỏa dần từ 0 đến n
//Lưu ý: 
//- Càng dùng ít vòng for càng đc đánh giá cao
//- Ko được dùng bất cứ 1 hàm toán học có sẵn nào trong cmath
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
int n;
cout << "Nhap n: ";
cin >> n;
for ( int i = 0; i<=n; i++)
{
    for (int j = n; j>=0; j--)
    {
        if (i == 0|| j==n )
            cout << n << " ";
        else 
        {
          if (j<=n-i) cout << n-i<<" ";
          else cout << j << " ";
        }
    }
    for (int j =1; j <=n; j++)
    if ( j==n )
    cout << n ;
    else 
    {
        if ( j <=n-i) cout << n-i << " ";
        else cout << j << " ";
    }
    cout <<"\n";
}
for ( int i = 1; i<=n; i++)
{
    for ( int j=n;j>=0;j--)
    {
        if(i==n || j==n) cout << n<< " ";
        else if( j==0) cout<< i <<" ";
        else 
        {
            if (j<=i) cout << i << " ";
            else cout << j <<" ";
        }
    }
    for (int j =1; j<=n; j++)
    {
        if(i==n || j==n) cout <<n<<" ";
        else 
        {
            if (j<=i)cout << i << " ";
            else cout << j <<" ";
        }
    }
    cout<<"\n";
}
return 0;
}