//Cho 2 mảng số nguyên A1 và A2
// 1.In ra các phần tử giống nhau giữa 2 mảng A1 và A2
// 2.In ra 1 mảng B có đặc điểm:
     // Là trộn giữa mảng A1 và A2
     // Các phần tử đc sắp xếp tăng dần
     // Các phần tử trùng lặp thì chỉ in 1 lần


// Ví dụ:
// A1: 5 9 12 3 7 11 2
// A2: 8 2 0 13 7 6 9
// Ket qua 1: 9 7 2
// Ket qua 2: 0 2 3 5 6 7 8 9 11 13

#include <iostream>
using namespace std;
int main ()
{
    int a1, a2;
    cout <<" Kich thuoc A1 la: ";
    cin >> a1;
    cout << " \nKich thuoc A2 la: ";
    cin >> a2;
    int A1[a1], A2[a2];
    //Nhap cac phan tu cua mang
    for (int i = 0; i < a1; i++)
    {
        cout << "A1["<<i<<"] = ";
        cin >> A1[i];
    } 
    for(int i = 0; i < a2; i++)
    {
        cout << "A2["<<i<<"] = ";
        cin >> A2[i];
    }
    cout << "A1: ";
    for (int x: A1)
    cout << x << " ";
    cout <<"\nA2: ";
    for (int x: A2)
    cout << x<< " ";
    cout <<"\nKet qua 1: ";
    for ( int i = 0 ; i<a1; i++)
    {
        for (int j=0; j < a2; j++)
        {
            if (A2[j] == A1[i]) cout << A1[i] <<" ";
        }
    }
    int B[a1+a2];
    for( int i=0; i<a1+a2; i++)
    {
        if (i>=0 && i<a1)
        {
            B[i]= A1[i];
        }
        else if (i>=a1 && i<a1+a2)
        {
            B[i]= A2[i-a1];
        }
    }
   // for( int i=0;i<a1+a2;i++) cout << B[i]<<" ";
    for ( int i = 0; i< a1+a2; i++)
    {
        for (int j = i+1; j < a1+a2; j++)
        {
            if (B[j]< B[i])
            {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
    //for( int i=0;i<a1+a2;i++) cout << B[i]<<" ";
    cout << "\nKet qua 2: ";
    for (int i=0 ;i < a1+a2;i++)
    {
        if ((B[i]==B[i-1])&& i!=0) 
        {
            continue;
        }
        cout << B[i]<< " ";
    }
    return 0;
}