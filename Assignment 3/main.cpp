#include <bits/stdc++.h>

using namespace std;

class PS
{
    int TS,MS;
public:
    PS();
    PS(int x,int y);
    PS operator*(PS y);
    float operator!();
    friend iostream &operator>>(iostream &x,PS &y);
    friend ostream &operator<<(ostream &x,PS y);

};
PS::PS()
{
    TS=0;
    MS=0;

}
PS::PS(int x,int y)
{
    this->TS=x;
    this->MS=y;

}
PS PS::operator*(PS y)
{
    PS nhan;
    nhan.TS=TS*y.TS;
    nhan.MS=MS*y.MS;
    return nhan;

}
float PS::operator!()
{
    return (float) TS/MS;

}
iostream &operator>>(iostream &x,PS &y)
{

    cout <<"nhap tu so:"x>>y.TS;
    cout <<"nhap mau so:"x>>y.MS;
    return x;
}
ostream &operator<<(ostream &x,PS y)
{
    x<<y.TS<<endl;
    x<<y.MS<<endl;
    return x;
}
int main()
{
   PS p,q;
   cout <<"nhap phan so1:";
   cin>>p;
   out <<"nhap phan so2:";
   cin>>q;
   PS N;
   N=p*q;
   cout <<"phan so sau nhan"<<!N<<endl;
   ofstream f("D:PHANSO.txt",ios app);
   f <<"phan so sau nhan"<<N<<endl;
   f <<"phan so sau nhan"<<!N<<endl;
   f.close();
}
