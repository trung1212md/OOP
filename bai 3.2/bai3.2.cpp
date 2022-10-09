#include<bits/stdc++.h>

using namespace std;
class NSX
{
private:
    char Mansx[30];
    char Tensx[30];
    char Dcnsx[30];
public:
    void nhap();
    void xuat();

};
void NSX::nhap()
{
    cout<<"nhap ma san xuat";fflush(stdin);cin.getline(Mansx,30);
    cout <<"ten sx";fflush(stdin);cin.getline(Tensx,30);
    cout <<"Dia chi san xuat";fflush(stdin);cin.getline(Dcnsx,30);

}
void NSX::xuat()
{
    cout <<" ma san xuat"<<Mansx<<endl;
    cout <<"ten san xuat"<<Tensx<<endl;
    cout <<"dcn sx"<<Dcnsx<<endl;

}
class HANG
{

    char Mahang[30];
    char Tenhang[30];
    NSX x;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{

    cout <<" nhap ma hang";fflush(stdin);cin.getline(Mahang,30);
    cout <<"ten hang";fflush(stdin);cin.getline(Tenhang,30);
    x.nhap();
}
void HANG::xuat()
{

    cout <<"ma hang"<<Mahang<<endl;
    cout <<"ten hang"<<Tenhang<<endl;
    x.xuat();
}
int main()

{
    HANG a;
    a.nhap();
    a.xuat();

}
