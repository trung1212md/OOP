#include <bits/stdc++.h>

using namespace std;
class PS
{
    int TS,MS;
public:
    PS operator+(PS y);
    PS operator-(PS y);
    PS operator*(PS y);
    PS operator/(PS y);
    float operator!();
    friend istream &operator>>(istream &x,PS &y);
    friend ostream &operator<<(ostream &x,PS y);
};
PS PS::operator+(PS y)

{
    PS T;
    T.TS=TS*y.MS+y.TS*MS;
    T.MS=MS*y.MS;
    return T;

}
PS PS::operator-(PS y)
{
    PS H;
    H.TS=TS*y.MS-y.TS*MS;
    H.MS=MS*y.MS;
    return H;

}
PS PS::operator*(PS y)
{
    PS TT;
    TT.TS=TS*y.TS;
    TT.MS=MS*y.MS;
    return TT;

}
PS PS::operator/(PS y)
{
    PS TH;
    TH.TS=TS*y.MS;
    TH.MS=MS*y.TS;
    return TH;

}
float PS::operator!()
{
    return (float)TS/MS;

}
istream &operator>>(istream& x,PS& y)
{
    x>>y.TS;
    x>>y.MS;
    return x;

}
ostream &operator<<(ostream &x,PS y)
{
    x<<y.TS<<"/"<<y.MS<<endl;

}

int main()
{
   PS a,b;
   cout <<"nhap phan so1";
   cin>>a;
   cout <<"nhap phan so 2";
   cin>>b;
   PS T,H,C,TH;
   T=a+b;
   H=a-b;
   C=a*b;
   TH=a/b;
   cout<<"tong"<<!T<<endl;
   cout<<"hieu"<<!H<<endl;
   cout<<"tich"<<!C<<endl;
   cout<<"thuong"<<!TH<<endl;
   ofstream f("D:/phanso.txt",ios::app);
   f<<"tong"<<!T<<endl;
   f<<"hieu"<<!H<<endl;
   f<<"tich"<<!C<<endl;
   f<<"thuong"<<!TH<<endl;
   f.close();

}
