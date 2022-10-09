#include <bits/stdc++.h>

using namespace std;
class Phanso
{
private:
    int ts;
    int ms;
public:
    Phanso operator+(Phanso y);
    Phanso operator-(Phanso y);
    Phanso operator*(Phanso y);
    Phanso operator/(Phanso y);
    double operator++();
    friend istream &operator>>(istream &x,Phanso &y);
    friend ostream &operator<<(ostream &x,Phanso y);
};
Phanso Phanso::operator+(Phanso y)
{
    Phanso tong;
    tong.ts=ts*y.ms+ms*y.ts;
    tong.ms=ts*y.ms;
    return tong;

}
Phanso Phanso::operator-(Phanso y)
{
    Phanso tru;
    tru.ts=ts*y.ms-ms*y.ts;
    tru.ms=ts*y.ms;
    return tru;
}
Phanso Phanso::operator*(Phanso y)
{
    Phanso nhan;
    nhan.ts=ts*y.ts;
    nhan.ms=ms*y.ms;
    return nhan;

}
Phanso Phanso::operator/(Phanso y)
{
    Phanso chia;
    chia.ts=ts*y.ms;
    chia.ms=ms*y.ms;
    return chia;

}
double Phanso::operator++()
{
    return (double) ts/ms;

}
istream &operator>>(istream &x,Phanso &y)
{
    cout <<"nhap tu so";x>>y.ts;
    cout <<"nhap mau so";x>>y.ms;
    return x;

}
ostream &operator<<(ostream &x,Phanso y)
{
    x<<y.ts<<"/"<<y.ms<<endl;
    return x;

}
int main()
{
    Phanso a,b;
    cout <<"nhap phan so thu1:";cin>>a;
    cout <<"nhap phan so thu 2:";cin>>b;
    Phanso T=a+b;
    Phanso H=a-b;
    Phanso tich=a*b;
    Phanso thuong=a/b;
    cout <<"a+b="<<T<<endl;
    cout <<"a-b="<<H<<endl;
    cout <<"a*b="<<tich<<endl;
    cout <<"a/b="<<thuong<<endl;

    fstream f("d:/phanso.txt"ios::app);
    f <<"a+b="<<T<<endl;
    f <<"a-b="<<H<<endl;
    f<<"a*b="<<tich<<endl;
    f<<"a/b="<<thuong<<endl;
    f.close();


}
