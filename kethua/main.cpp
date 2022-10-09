#include<bits/stdc++.h>

using namespace std;
class Hang
{
protected:
    char MAH[30];
    float DG;
    float SL;
public :
    void nhap();
    void xuat();

};
void Hang::nhap()
{

    cout <<"nhap ma hang";fflush(stdin);cin.getline(MAH,30);
    cout <<"don gia";cin >>DG;
    cout <<"nhap so luong";cin >>SL;
}
void Hang::xuat()
{

    cout <<"ma hang"<<MAH<<endl;
    cout <<"don gia"<<DG<<endl;
    cout <<"SO luong"<<SL<<endl;
}
class HANGMAYMAC:public Hang
{
    char CHATLIEU[30];
    float SIZE;
public:
    void Nhap();
    void Xuat();
};
void HANGMAYMAC::Nhap()
{
     Hang::nhap();
     cout <<"nhap chat lieu";fflush(stdin);cin.getline(CHATLIEU,30);
}


void HANGMAYMAC::Xuat()
{
    Hang::xuat();
    cout <<"chat lieu:"<<CHATLIEU<<endl;
    cout <<"SIZE"<<SIZE<<endl;

}

int main()
{
    HANGMAYMAC k;
    k.nhap();
    k.xuat();
}
