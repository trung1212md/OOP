#include<bits/stdc++.h>
using namespace std;
class Hang
{
private:
   char Mahang[30];
   char  Tenhang[30];
   float Dongia;
   float  Soluong;
public:
    void nhap();
    void xuat();

};
void Hang::nhap()
{
    cout <<"nhap Ma hang:";fflush(stdin);cin.getline(Mahang,30);
    cout << "Nhap ten hang:";fflush(stdin);cin.getline(Tenhang,30);
    cout <<"don gia :";cin>> Dongia;
    cout <<"so luong:";cin>>Soluong;

}
void Hang::xuat()
{
    cout <<setw(30)<<Mahang<<setw(30)<<Tenhang<<setw(30)<<Dongia<<setw(30)<<Soluong<<endl;
}
int main()
{
    Hang *a;
    int n;
    cout << "nhap n";
    cin >> n;
    a=new Hang[n];
    for(int i=0;i<n;i++)
    {
        cout << "nhap hang thu"<<i+1<<endl;
    a[i].nhap();

    }
    for(int i=0;i<n;i++)
    {
    a[i].xuat();
    }
    return 0;
}
