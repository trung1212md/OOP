#include <bits/stdc++.h>

using namespace std;
class PS
{
    int TS,MS;
public:
    PS();
    PS(int x, int y);
    PS operator*(PS y);
    float operator!();
    friend iostream&operator>>(iostream &x,PS &y);
    friend ostream &operator<<(ostream&x,PS y);

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
    PS N;
    N.TS=TS*y.TS;
    N.MS=MS*y.MS;
    return N;

}
float PS::operator!()
{
    return (float)TS/MS;

}
iostream&operator>>(iostream &x,PS &y)
{
    cout <<"nhap tu so";x>>y.TS;
    cout <<"nhap mau so";x>>y.MS;
    return x;

}
ostream &operator<<(ostream &x, PS y)
{
    x<<y.TS<<"/"<<y.MS<<endl;
    return x;

}

int main()
{
    PS P, Q;
    cout <<"nhap phan so 1";
    cin>>P;
    cout <<"nhap phan so 2";
    cin>>Q;
    PS nhan;
    nhan=P*Q;
    cout <<"ket qua"<<nhan<<endl;
    cout <<"ket qua toi gian"<<!nhan<<endl;
    ofstream f("D:/Phanso.txt",ios::app);
    f <<"ket qua"<<nhan<<endl;
    f <<"ket qua toi gian"<<!nhan<<endl;
    f.close();
}
