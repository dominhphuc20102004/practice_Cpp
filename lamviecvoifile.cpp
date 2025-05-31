#include<iostream>// vào ra dữ liệu tại bảng điều khiển console
#include <fstream>// Vào ra dữ liệu trên file
#include <string> 
using namespace std;
int main ()
{
    /*
    //Ghi dữ liệu ra file:
    ofstream output;
    output.open ("Data.txt");
    output<<"Hello\n";
    output <<"I am Do Minh Phuc\n";
    output.close();
    // Đọc dữ liệu từ file:
    ifstream input;
    input.open ("Data.txt");
    string line;
    while(getline(input,line))
    {
        cout << line << "\n";
    }
        */
       ifstream input ;
       input.open ("Data.txt");
       string line;
       while (getline(input, line))
       {
        string info ="Ho va ten: "; 
        string delimiter = ";";
        int pos_of_delimiter= line.find(delimiter);// Tìm vị trí của dấu ";";
        int i = 0;
        // Do có thể không có vị trí (string::npos)
        while( pos_of_delimiter!=string::npos)
        {
            pos_of_delimiter = line.find(delimiter);// Tìm vị trí của dấu ";"
            switch (i)
            {
                case 1: info +="\nTuoi: ";
                break;
                case 2: info +="\nDiem: ";
                break;
            }
             info += line.substr (0,pos_of_delimiter) ;
             line = line.substr( pos_of_delimiter + 1,line.length() - 1);
             i++;
        }
        cout << info << "\n";
       }
       cout <<"\nFinished\n";
    return 0;
}