#include <bits/stdc++.h>

using namespace std;

class BENUOC
{
    float D,R,C;
public:
    BENUOC();
    BENUOC(float x,float y,float z);
    float operator-();
    BENUOC operator+(BENUOC y);
    bool operator==(BENUOC y);
    friend istream &operator>>(istream &x,BENUOC &y);
    friend ostream &operator<<(ostream & x,BENUOC y);

};
BENUOC::BENUOC()
{
    D=R=C=0;

}
BENUOC::BENUOC(float x,float y,float z)
{
    this->D=x;
    this->R=y;
    this->C=z;

}
float BENUOC::operator-()
{

    return D*R*C;
}
BENUOC BENUOC::operator+(BENUOC y)
{
    BENUOC T;
    T.D=D+y.D;
    T.R=R+y.R;
    T.C=C+y.C;
    return T;


}
bool BENUOC::operator==(BENUOC y)
{
    if(D==y.D&&C==y.C&&R==y.R)
        return true;
    else
        return false;

}
istream &operator>>(istream &x,BENUOC &y)
{
    cout <<"nhap dai:";x>>y.D;
    cout<<"nhap rong:";x>>y.R;
    cout <<"nhap cao:";x>>y.C;
    return x;
}
ostream &operator<<(ostream & x,BENUOC y)
{
    x<<"dai:"<<y.D<<" rong:"<<y.R<<" cao:"<<y.C<<endl;
    return x;

}
int main()
{
    BENUOC P,Q;
    cout <<"nhap be nuoc P:"<<endl;
    cin>>P;
    cout <<"nhap be nuoc Q:"<<endl;
    cin>>Q;
    cout <<"be nuoc P:"<<P<<endl;
    cout <<"the tich be nuoc P:"<<*P<<endl;
    cout <<"be nuoc Q:"<<Q<<endl;
    cout <<"the tich be nuoc Q:"<<*Q<<endl;
    BENUOC H=P+Q;
    ofstream f("D:/BENUOC14.txt",ios::app);
    f <<"be nuoc P:"<<P<<endl;
    f <<"the tich be nuoc P:"<<*P<<endl;
    f <<"be nuoc Q"<<Q<<endl;
    f <<"the tich be nuoc Q:"<<*Q<<endl;
    f <<"tong hai be nuoc P,Q:"<<H<<endl;
    f.close();
    if(P==Q)
        cout <<"hai be nuoc bang nhau";
    else
        cout<<"hai be nuoc ko bang nhau";
}
