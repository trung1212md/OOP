#include <bits/stdc++.h>

using namespace std;
class TAMGIAC
{
    int x1,x2,x3,y1,y2,y3;
public:
    TAMGIAC();
    TAMGIAC(int a,int b,int c,int d,int e,int f);
    float operator++();
    TAMGIAC operator+(TAMGIAC y);
    bool operator!( );
    friend istream &operator>>(istream &x,TAMGIAC &y);
    friend ostream &operator<<(ostream & x,TAMGIAC y);



};
TAMGIAC::TAMGIAC()
{
    x1=x2=x3=y1=y2=y3=0;

}
TAMGIAC::TAMGIAC(int a,int b,int c,int d,int e,int f)
{
    this->x1=a;
    this->x2=b;
    this->x3=c;
    this->y1=d;
    this->y2=e;
    this->y3=f;
}
float TAMGIAC::operator++()
{
     float AB=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
     float AC=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
     float BC=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
     return AB+AC+BC;
}
TAMGIAC TAMGIAC::operator+(TAMGIAC y)
{
    TAMGIAC T;
    T.x1=x1+y.x1;
    T.x2=x2+y.x2;
    T.x3=x3+y.x3;
    T.y1=y1+y.y1;
    T.y2=y2+y.y2;
    T.y3=y3+y.y3;
        return T;

}
bool TAMGIAC::operator!()
{
     float AB=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
     float AC=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
     float BC=sqrt(pow((x2-x3),2)+pow((y2-y3),2));

     if(AB==BC&&AC==BC)
        return true;
     else
        return false;

}
istream &operator>>(istream &x,TAMGIAC &y)
{
    cout <<"nhap x";
    x>>y.x1>>y.x2>>y.x3;
    cout <<"nhap y";
    x>>y.y1>>y.y2>>y.y3;
    return x;
}
ostream &operator<<(ostream &x,TAMGIAC y)
{
    x<<y.x1<<y.x2<<y.x3<<endl;
    x<<y.y1<<y.y2<<y.y3<<endl;
    return x;

}
int main()
{
    TAMGIAC P,Q;
    cout <<"nhap P";
    cin>>P;
    cout <<"nhap Q";
    cin>>Q;
    cout <<"tam giac" <<P;
    cout <<"tam giac" <<Q;
    TAMGIAC H=P+Q;
    ofstream f("D:/HINHTG11.txt",ios::app);
    f <<"tam giac" <<P;
    f <<"tam giac" <<Q;
    f<<"chu vi P"<<++P;
    f<<"chu vi Q"<<++Q;
    f<<"tong"<<H;
    f.close();
    if(!Q)
        cout <<"phai";
    else
        cout <<"ko";
    if(!P)
        cout <<"phai";
    else
        cout <<"ko";


}
