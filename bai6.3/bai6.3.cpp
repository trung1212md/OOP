#include <iostream>
//BONUS 6.3. SỬA LẠI DUNG TÍCH CỦA XE OTO thành 3.1

using namespace std;
class VeHICLE
{
protected:
    char Nhanhieu[30];
    int Namsx;
    char Hangsx[30];
public:
    void nhap();
    void xuat();
};
void VeHICLE::nhap()
{
    cout <<"nhan hieu";fflush(stdin);cin.getline(Nhanhieu,30);
    cout <<"nam san xuat";cin >>Namsx;
    cout <<"Hang san xuat";fflush(stdin);cin.getline(Hangsx,30);
}
void VeHICLE::xuat()
{
    cout <<"nhan hieu"<<Nhanhieu<<endl;
    cout <<"nam san xuat"<<Namsx<<endl;
    cout <<"hang"<<Hangsx<<endl;

}
class OTO:public VeHICLE
{
    int socho;
    float dungtich;
public:
    void nhap();
    void xuat();
    friend void sua(OTO &x);
};
void OTO::nhap()
{
    VeHICLE::nhap();
    cout <<"so cho ngoi";cin >>socho;
    cout <<"dung tich ";cin>>dungtich;

}
void OTO::xuat()
{
    VeHICLE::xuat();
    cout <<"so cho"<<socho<<endl;
    cout <<"dungtich"<<dungtich<<endl;


}
class MOTO:public VeHICLE
{
    int phankhoi;
public:
    void nhap();
    void xuat();

};
void MOTO::nhap()
{
    VeHICLE::nhap();
    cout <<"phan khoi";cin >>phankhoi;

}
void MOTO::xuat()
{
    VeHICLE::xuat();
    cout <<"phan khoi"<<phankhoi<<endl;

}
void sua(OTO &x)
{
    x.dungtich=3.1;

}
int main()
{
   OTO x;
   MOTO y;
   cout <<"thong tin o to";
   x.nhap();
   x.xuat();
   cout <<"thong tin Mo to";
   y.nhap();
   y.xuat();
   sua(x);
   x.xuat();
}
