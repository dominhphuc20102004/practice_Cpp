#include <iostream>
#include <string>
using namespace std;
//SO YEU LI LICH
int main  ()
{
string ho_ten , que_quan ;
int nam_sinh = 0;
float chieu_cao = 0, can_nang = 0;
bool tinhtranghonnhan = 0;
char ketquatotnghiep =' ';
cout << "Ho va ten: ";
getline (cin, ho_ten);
cout << "\n Nam sinh: ";
cin >> nam_sinh;
cin.ignore();
cout <<"\nQue quan: ";
getline(cin, que_quan);
cout <<"\nChieu cao: ";
cin >> chieu_cao;
cout <<"\nCan nang: ";
cin >> can_nang;
cout << " \nTinh trang hon nhan:  ";
cin >> tinhtranghonnhan;
cin.ignore();
cout << "\n Ket qua tot nghiep: ";
cin >> ketquatotnghiep;
cout << "Sinh vien "<< ho_ten <<" sinh nam "<< nam_sinh << " que o "<< que_quan << ".\nCo chieu cao "<< chieu_cao<< " va can nang "<<can_nang<<".\n";
cout << " Tinh trang hon nhan: "<< tinhtranghonnhan ;
cout << "\nKet qua tot nghiep Dai Hoc: " << ketquatotnghiep ;
return 0;
}