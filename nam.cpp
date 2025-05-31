//Nhập từ bàn phím 3 số thực x, y, z
//1 - Tìm số lớn nhất trong 3 số x, y, z
//2 - Tìm số bé nhất trong 3 số x, y, z
//3 - Kiểm tra xem cả 3 số có cùng dấu hay ko?
//4 - In ra các cặp số trái dấu nhau.
//Ví dụ:
//Nhap x: 4.5
///Nhap y: 2.2
//Nhap z: 6.6
//Ket qua 1: So lon nhat la 6.6
//Ket qua 2: So be nhat la 2.2
//Ket qua 3: Ca 3 so cung dau
//Ket qua 4: Ko co cap so nao trai dau
//Nhap x: 3
//Nhap y: 5.1
//Nhap z: -2
//Ket qua 1: So lon nhat la 5.1
///Ket qua 2: So be nhat la -2
//Ket qua 3: Ca 3 so khac dau nhau
//Ket qua 4: (3,-2), (5.1,-2)

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float x, y, z, l, b;
    cout << "Nhap x: ";
    cin >> x;
    cout << "\nNhap y: ";
    cin >> y;
    cout << "\nNhap z: ";
    cin >> z;
    if (x>=y)
    {
        if(z>=x) l=z;
        else l=x;
    }
    else {
        if(z>=y) l=z;
        else l=y;
    }
    if (x<=y)
    {
        if(z<=x) b=z;
        else b=x;
    }
    else {
        if(z<=y) b=z;
        else b=y;
    }
    cout << "Ket qua 1: So lon nhat la "<< l <<endl;
    cout << "Ket qua 2: So be nhat la "<< b <<endl;
   if (x*y>=0){
     if (y*z >=0)
     cout <<"Ket qua 3: Ca 3 so cung dau.\nKet qua 4: Ko co cap so nao trai dau" << endl;
     else 
     {
        cout << "Ket qua 3: Ca 3 so khac dau nhau\n";
        cout << "Ket qua 4: ("<< x <<","<< z<< "); (" << y << ","<< z << ").";
     }
    }
    else  
    {
      if (y*z <0)
      cout <<"Ket qua 3: Ca 3 so cung dau.\nKet qua 4: Ko co cap so nao trai dau" << endl;
      else
      {
        cout << "Ket qua 3: Ca 3 so khac dau nhau\n";
        cout << "Ket qua 4: ("<< x <<","<< y<< "); (" << x << ","<< z << ").";
    }
    }
    return 0;
}