#include <bits/stdc++.h>

using namespace std;
class HANG
{
protected:
    char MaH[30];
    char TENH[30];
    double DG;
    int SL;
public:
    void nhap();
    void xuat();

};
void HANG::nhap()
{
    cout <<"Ma hang";fflush(stdin);cin.getline(MaH,30);
    cout <<"Ten Hang";fflush(stdin);cin.getline(TENH,30);
    cout <<"don gia";cin>>DG;
    cout <<"so luong";cin>>SL;
}
void HANG::xuat()
{
    cout <<"ma hang"<<MaH<<endl;
    cout <<"ten hang"<<TENH<<endl;
    cout <<"DOn gia" <<DG<<endl;
    cout <<"so luong"<<SL;

}
class HANGDIENTU:public HANG
{
    int dienap;
    float CONGSUAT;
public:
    void nhap();
    void xuat();
    friend void sua1(HANGDIENTU &a);
};
void HANGDIENTU::nhap()
{
    HANG::nhap();
    cout <<"dien ap";cin>>dienap;
    cout<<"cong suat";cin>>CONGSUAT;

}
void HANGDIENTU::xuat()
{
    HANG::xuat();
    cout<<"dien dap"<<dienap<<endl;
    cout<<"cong suat"<<CONGSUAT<<endl;

}
class HANGMAYMAC:public HANG
{
    char chatlieu[30];
    int SIZE;
public:
    void nhap();
    void xuat();
    friend void sua2(HANGMAYMAC &b);

};
void HANGMAYMAC::nhap()
{
    HANG::nhap();
    cout <<"chat lieu";fflush(stdin);cin.getline(chatlieu,30);
    cout <<"SIZE";cin>>SIZE;
}
void HANGMAYMAC::xuat()
{
    hang::xuat();
    cout <<"chat lieu"<<chatlieu<<endl;
    cout<<"SIZE"<<SIZE<<endl;

}
void sua1(HANGDIENTU &a)
{
    a.DG=40;

}
void sua2(HANGMAYMAC &b)
{
    b.DG=80;

}
int main()
{
   HANGDIENTU a;
   a.nhap();
   a.xuat();
   cout <<"-------------------"<<endl;
   HANGMAYMAC b;
   b.nhap();
   b.xuat();
}
