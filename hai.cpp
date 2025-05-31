//Viết chương trình nhập vào một số có 3 chữ số, in ra số đảo ngược.

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
int x = 0;
cin >> x ;
int y = x/100;
int z = (x%100)/10;
int t = (x%100)%20;
cout << t*100 + z*10 + y;
}