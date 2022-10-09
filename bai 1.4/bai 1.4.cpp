#include<bits/stdc++.h>
using namespace std;
class Sach
{
    char Masach[30];
    char Tensach[30];
    char Nxb[30];
    int Sotrang;
    float Giatien;
public:
    void nhap();
    void xuat();
};
void Sach::nhap()
{
    cout <<"nhap ma sach";fflush(stdin);cin.getline(Masach,30);
    cout <<"Ten sach";fflush(stdin);cin.getline(Tensach,30);
    cout <<"nha xuat ban";fflush(stdin);cin.getline(Nxb,30);
    cout <<"so luong";cin >>Sotrang;
    cout <<"gia tien ";cin >>Giatien;
}
void Sach::xuat()
{
   cout <<setw(20)<<Masach<<setw(20)<<Tensach<<setw(20)<<Nxb<<setw(20)<<Sotrang<<setw(20)<<Giatien<<endl;
}
int main()
{
    Sach *S;
    int n;
    cout <<"nhap n=";
    cin >>n;
    S=new Sach[n];
    for(int i=0; i<n; i++)
    {
        S[i].nhap();
    }
    cout <<setw(20)<<"Ma sach"<<setw(20)<<"Ten sach"<<setw(20)<<"nha xuat ban"<<setw(20)<<"so luong"<<setw(20)<<"gia tien"<<endl;
    for(int i=0; i<n; i++)
    {

        S[i].xuat();
    }
}
