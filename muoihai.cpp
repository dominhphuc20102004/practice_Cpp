// Nhập vào từ bàn phím 2 chuỗi kí tự tên người
// 1. In ra chuỗi kí tự dài hơn (có nhiều kí tự hơn)
// 2. Thống kê các kí tự chữ cái giống nhau giữa 2 tên
// 3. In ra tên của 2 người nhưng bỏ đi phần họ và tên đệm (nếu có )
// 4. Kiểm tra xem tên của ai đứng trước nếu xếp theo danh sách ABC. Chú ý: Khi sắp xếp danh sách tên, người ta ko tính họ và tên đệm.
// Ví dụ
// Nhap ten nguoi 1: Nguyen Anh Vu
// Nhap ten nguoi 2: Truong Xuan An
// Ket qua 1: Truong Xuan An
// Ket qua 2: A g n u
// Ket qua 3: Vu An
// Ket qua 4: Truong Xuan An
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string fullName1, fullName2;
    cout<< "Nhap ten nguoi 1: ";
    getline(cin, fullName1);// Nhap du lieu co dau cach
    cout<<"\nNhap ten nguoi 2: ";
    getline(cin, fullName2);
    cout << "\nKet qua 1: ";
    //In ra chuỗi kí tự dài hơn (có nhiều kí tự hơn)
    if ( fullName1.length() > fullName2.length())
    {
        cout << fullName1;
    }
    else if (fullName1.length() < fullName2.length())
    cout << fullName2;
    else cout <<" Hai ten bang nhau, deu co "<< fullName1.length()<<" ky tu";
// Thống kê các kí tự chữ cái giống nhau giữa 2 tên
    cout <<"\nKet qua 2: ";
    string savefullName1 =fullName1, savefullName2 = fullName2;// giu cac ten ban dau nhap vao
    for (int i = 0; i< fullName1.length();i++)
    {
        for(int j =i+1;j< fullName1.length();j++)
        {
            if(fullName1[j] < fullName1[i]) 
            {
                int temp = fullName1[i];
                fullName1[i]=fullName1[j];
                fullName1[j]=temp;
            }
        }
    }
    for (int i = 0; i< fullName2.length();i++)
    {
        for(int j =i+1;j< fullName2.length();j++)
        {
            if(fullName2[j] < fullName2[i]) 
            {
                int temp = fullName2[i];
                fullName2[i]=fullName2[j];
                fullName2[j]=temp;
            }
        }
    }
    for ( int i = 0; i< fullName1.length(); i++)
    {
        if((fullName1[i]==fullName1[i-1] || fullName1[i]==' ') && i!=0) continue;
        for ( int j = 0; j< fullName2.length(); j++)
        {
            if((fullName2[j]==fullName2[j-1] || fullName2[j]==' ') && j!=0) continue;
            if( fullName1[i]==fullName2[j]) cout << fullName1[i]<< " ";
        }
    }
    fullName1=savefullName1;
    fullName2=savefullName2;
   // 3. In ra tên của 2 người nhưng bỏ đi phần họ và tên đệm (nếu có )
   cout<< "\nKet qua 3: ";
   int dem1=0, demnguoc1;
   for (int i = fullName1.length(); i>=0;i--)
   {
    demnguoc1=i;
    dem1 +=1;
    if (fullName1[i] == ' ')
    break;
   }
   string name1 = fullName1.substr(demnguoc1+1, dem1);
   int dem2=0, demnguoc2;
   for (int i = fullName2.length(); i>=0;i--)
   {
    demnguoc2=i;
    dem2 +=1;
    if (fullName2[i] == ' ')
    break;
   }
   string name2 = fullName2.substr(demnguoc2+1, dem2);
   cout<< name1<<" "<< name2;
   //Kiểm tra xem tên của ai đứng trước nếu xếp theo danh sách ABC. 
   //Chú ý: Khi sắp xếp danh sách tên, người ta ko tính họ và tên đệm.
   cout <<"\nKet qua 4: ";
   char a1,a2;
   for (int i = fullName1.length(); i>=0;i--)
   {
    if (fullName1[i] == ' ')
    {
        a1 = fullName1[i+1];
        break;
    }
   }
   for (int i = fullName2.length(); i>=0;i--)
   {
    if (fullName2[i] == ' ')
    {
        a2 =fullName2[i+1];
        break;
    }
   }
   if(a1 < a2) cout<< fullName1;
   else if(a1>a2) cout << fullName2;
    return 0;
}