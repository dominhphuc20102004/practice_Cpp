/*
Xây dựng 1 struct lưu thông tin tên, tuôi và hệ số lương của nhân viên.
1 - Viết 1 function bên trong struct trên để in ra tiền lương thực tế của nhân viên đó với giả sử lương cơ bản là 3 triệu.
 Công thức tính lương như sau:
Tiền lương: (Hệ số lương) * (Lương cơ bản) .
Ví dụ output chương trình khi chạy như sau:
Nhap ten: Vu Nguyen
Nhap tuoi: 29
Nhap he so luong: 2.5
Tien luong cua Vu Nguyen la 7,500,000 VND
2 - Cải tiến bài trên.
Viết chương trình nhập từ bàn phím 1 số n, với n là số nhân viên.
Nhập liên tục thông tin của n nhân viên từ bàn phím và lưu chúng vào 1 mảng. Kết thúc chương trình, 
in ra lương trung bình của n nhân viên
Ví dụ output chương trình khi chạy như sau:
Nhap so nhan vien: 3
Nhap thong tin nhan vien thu 1:
Nhap ten: Vu Nguyen
Nhap tuoi: 29
Nhap he so luong: 2.5
Nhap thong tin nhan vien thu 2:
Nhap ten: Anh Tuan
Nhap tuoi: 25
Nhap he so luong: 1.5
Nhap thong tin nhan vien thu 3:
Nhap ten: Do Toan
Nhap tuoi: 27
Nhap he so luong: 2
Luong trung binh cua 3 nhan vien la: 6,000,000 VND

*/
#include <iostream>
#include <string>
using namespace std;
struct Staff 
{
   std:: string ho_ten;
    int tuoi;
    float he_so_luong;
    long long  tinhtienluong ()
    {
return (long long)3000000 * he_so_luong;
    };
};
string tienluongdangkytu (long long num)
    {
        string kytu = to_string(num);
        int n = kytu.length();
        int dem = 0;
        string luong = "";
        for (int i = n-1; i>=0;i--)
        {
            luong.insert(0,1,kytu[i]); //str.insert( vị_trí, số_lượng,ký_tự) 
            dem++;
            if ( dem ==3 && i!=0) 
            {
                luong.insert(0,1,',');
                i++;
                dem =0;
            }
        }
        return luong;
    }
int main ()
{
    Staff s;
    cout << "Nhap ten: ";
    getline(cin, s.ho_ten);
    cout <<"\nNhap tuoi: ";
    cin >> s.tuoi;
    cout << "\nNhap he so luong: ";
    cin >> s.he_so_luong;
    long long l =s.tinhtienluong();
    string ll = tienluongdangkytu(l);
    cout<<"\nTien luong cua "<<s.ho_ten <<" la "<< ll << "VND";
    return 0;
}
