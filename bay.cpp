//Nhập n từ bàn phím (n>1) và in kết quả của các biểu thức sau:
//1 - P(n) = 1 + 2 + 3 + ... + n
//2 - Q(n) = 1 * 2 * 3 * ... * n
//3 - R(n) = 1 + 3 + 5 + ... + n (Tổng liên tiếp các số lẻ)
//4 - S(n) = 1^3 + 2^3 + … + n^3
//5 - T(n) = 1/1^1 + 2/2^2 + … + n/n^n
//6 - U(n) = 1*2 + 2*3 + 3*4 + ... + n * (n+1)
//7 - V(n) = 1 + 11 + 111 + ... + (11...1)
//8 - X(n) = 1 + (1+2) + (1+2+3) + .... + (1+2+3+...+n)
//Lưu ý: nếu n nhập vào < 1, thì trả về kết quả 0.
//Cách áp dụng: Ví dụ với n = 6, ta có
//P(6) = 1 + 2 + 3 + 4 + 5 + 6
//Q(6) = 1 * 2 * 3 * 4 * 5 * 6
//R(6) = 1 + 3 + 5
//S(6) = 1^3 + 2^3 + 3^3 + 4^3 + 5^3 + 6^3
//T(6) = 1/1^1 + 2/2^2 + 3/3^3 + 4/4^4 + 5/5^5 + 6/6^6
//U(6) = 1 * 2 + 2 * 3 + 3 * 4 + 4 * 5 + 5 * 6 + 6 * 7
//V(6) = 1 + 11 + 111 + 1111 + 11111 + 111111
//X(6) = 1 + (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5) + (1+2+3+4+6)
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int n;
    double P=0,Q=1,R=0,S=0,T=0,U=0,V=0,X=0;
    cout << "Nhap n = ";
    cin >> n;
    if (n>=1)
    {
    for (int i = 1; i<=n; i++)  // TINH P
    {
     P = P + i;
    }
    cout << "P("<<n<<")="<< P << endl;
    for (int i=1;i<=n;i++)      // TINH Q
    {
        Q=Q*i;
    }
    cout << "Q("<<n<<")="<< Q << endl;
    for ( int i = 1; i<=n; i++) // TINH R
    {
        if( i%2==0)
        {
            continue;
        }
        R= R + i;
    }
    cout << "R("<<n<<")="<< R<< endl ;
    for (int i = 1; i<=n; i++)   // TINH S
    {
        S = S + pow(i,3);
    }
    cout << "S("<<n<<")="<< S << endl;
    for( int i = 1; i<=n; i++)   // TINH T
    {
         T = T + (double)i/(pow(i,i));
    }
    cout << "T("<<n<<")="<< T << endl;
    for ( int i = 1; i<=n; i++)  // TINH U
    {
        U = U + i*(i+1);
    }
    cout << "U("<<n<<")="<< U<< endl;    
    for ( int i=1 ;i <=n; i++)   // TINH V
    {
        long long v = 0;
        for(int j = 0; j < i ; j++)
        {
             v = v+ pow(10,j);
        }
        V = V + v ;
    }
    cout << "V("<<n<<")="<< V << endl; 
    for ( int i=1; i<=n; i++)  //  TINH X
    {
        long long x = 0;
        for (int j= 1;j <=i ;j++)
        {
            x = x + j;
        }
        X =X + x;
    }
    cout << "X("<<n<<")="<< X<< endl; 
}
else cout <<"0";
    return 0;
}