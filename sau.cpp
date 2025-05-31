// Vẽ tam giác vuông cân rỗng bằng hình "*"
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int N;
    cout << "Nhap N = ";
    cin >> N;
    for (int i = 1; i<=N ; i++)
    {
        for( int j = 1; j<=i; j++ )
        {
            if ((j!=1) && (j!= i)&& (i<N))
            {
                cout <<"  ";
                continue;
            }
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}