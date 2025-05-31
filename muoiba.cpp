#include <iostream>
#include <math.h>
#include<string>
using namespace std;
/******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 8.3 ***************************
********************** vunguyencoder.com **************************************

[Đề bài] Viết các hàm kiem_tra(...) để in ra được kết quả như sau:
0 :     Day la so 0
5 :     Day la so nguyen duong
-5 :    Day la so nguyen am
5.5 :   Day la so thuc duong
-5.5 :  Day la so thuc am
-5.0 :  Day la so nguyen am
nam :   Day la chuoi ki tu

*******************************************************************************/

// Nội dung cần hoàn thành: viết các hàm 
// ...
// ... kiem_tra (...)
//{
//      ...
//}
// ... kiem_tra (...)
//{
//      ...
//}
//...



/*
int main()
{
    // Phần test 
	cout << "0\t: "; 	kiem_tra(0);
	cout << "5\t: "; 	kiem_tra(5);
	cout << "-5\t: "; 	kiem_tra(-5);
	cout << "5.5\t: "; 	kiem_tra(5.5);
	cout << "-5.5\t: "; kiem_tra(-5.5);
	cout << "-5.0\t: "; kiem_tra(-5.0);
	cout << "nam\t: "; 	kiem_tra("nam");
    return 0;
}
	*/
// Hàm kiểm tra số nguyên
void kiem_tra(int n) {
    if (n == 0)
        cout << "Day la so 0" << endl;
    else if (n > 0)
        cout << "Day la so nguyen duong" << endl;
    else
        cout << "Day la so nguyen am" << endl;
}

// Hàm kiểm tra số thực
void kiem_tra(double n) {
    if (fabs(n - (int)n) < 1e-6) {
        // Nếu n là số thực nhưng không có phần thập phân ⇒ thực ra là số nguyên
        kiem_tra((int)n); // Gọi lại hàm int để xử lý luôn
    } else {
        if (n > 0)
            cout << "Day la so thuc duong" << endl;
        else
            cout << "Day la so thuc am" << endl;
    }
}

// Hàm kiểm tra chuỗi
void kiem_tra(const char* s) {
    cout << "Day la chuoi ki tu" << endl;
}

// Hàm main để test
int main() {
    cout << "0\t: ";    kiem_tra(0);
    cout << "5\t: ";    kiem_tra(5);
    cout << "-5\t: ";   kiem_tra(-5);
    cout << "5.5\t: ";  kiem_tra(5.5);
    cout << "-5.5\t: "; kiem_tra(-5.5);
    cout << "-5.0\t: "; kiem_tra(-5.0);
    cout << "nam\t: ";  kiem_tra("nam");

    return 0;
}