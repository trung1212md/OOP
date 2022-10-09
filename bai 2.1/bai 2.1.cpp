#include<bits/stdc++.h>
using namespace std;
class PTB2
{
private:
    float a;
    float b;
    float c;
public:
    void Nhap();
    void Xuat();
    void giaiptb2();

};
void PTB2::Nhap()
{

    cout <<"nhap a=";cin >>a;
    cout <<"nhap b=";cin >> b;
    cout << "nhap c";cin >>c;
}
void PTB2::Xuat()
{
    cout <<"phuong trinh:"<<a<<"X"<<(char) 253<<"+"<<b<<"X"<<"+"<<c<<"=0"<<endl;

}
//ax*2+bx+c=0
void PTB2::giaiptb2()
{
    if(a==0)
    {
        cout <<"pt co nghiem"<<-(b)*1.0/2*a<<endl;;
    }
    else
    {
        float denta=b*b-4*a*c;
            if(denta<0)
                cout<<"pt vo nghiem"<<endl;
            else
            {
                cout <<"x1="<<(-b+sqrt(denta))/(2*a)<<endl;
                cout <<"X2="<<(-b-sqrt(denta))/(2*a)<<endl;
            }
    }


}

int main()
{
    PTB2 p;
    p.Nhap();
    p.Xuat();
    p.giaiptb2();
}
