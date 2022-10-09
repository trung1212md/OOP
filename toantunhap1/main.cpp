#include <bits/stdc++.h>
using namespace std;
class SINHVIEN
{
    char MASV[30];
    char HOTEN[30];
    int TUOI;
public:
    friend istream& operator>>(istream& x, SINHVIEN &y);
    friend ostream& operator<<(ostream& x, SINHVIEN y);
};

istream& operator>>(istream& x, SINHVIEN &y)
{
     x.getline(y.MASV, 30);
     x.getline(y.HOTEN, 30);
     x>>y.TUOI; x.ignore();
    return x;
}

ostream& operator<<(ostream& x, SINHVIEN y)
{
    x<<setw(10)<<y.MASV<<setw(20)<<y.HOTEN<<setw(10)<<y.TUOI
    <<endl;
    return x;
}

int main()
{
    SINHVIEN K;
    SINHVIEN Q;

    ifstream f;
    f.open("D:/TESTTHU.txt", ios::in);
    f>>K;
    f>>Q;
    f.close();
    cout<<K<<endl;
    cout<<Q<<endl;
}







