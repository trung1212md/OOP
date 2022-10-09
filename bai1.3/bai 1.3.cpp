#include<bits/stdc++.h>
using namespace std;
class HANG
{

private:
    char Mahang[30];
    char Tenhang[30];
    float Dongia;
    int Soluong;
public:
    void Nhap();
    void Xuat();
};
void HANG::Nhap()
{

    cout<<"nhap ma hang";
    fflush(stdin);
    cin.getline(Mahang,30);
    cout <<"Ten hang";
    fflush(stdin);
    cin.getline(Tenhang,30);
    cout <<"nhap don gia";
    cin >>Dongia;
    cout <<"soluong";
    cin >>Soluong;

}
void HANG::Xuat()
{
    cout <<setw(20)<<Mahang<<setw(20)<<Tenhang<<setw(20)<<Dongia<<setw(20)<<Soluong<<endl;

}
int main()
{
    HANG *H;
    int n;
    cout <<"nhap n=";
    cin >>n;
    H=new HANG[n];
    for(int i=0; i<n; i++)
    {
        H[i].Nhap();
    }
    cout <<setw(20)<<"Mahang"<<setw(20)<<"Tenhang"<<setw(20)<<"Dongia"<<setw(20)<<"Soluong"<<endl;
    for(int i=0; i<n; i++)
    {

        H[i].Xuat();
    }



}
