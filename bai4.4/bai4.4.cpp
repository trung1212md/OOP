#include <bits/stdc++.h>

using namespace std;
class PTb2
{
private:
    float a,b,c;
public:
    void nhap();
    void xuat();
    void Giai();
        PTb2();
        PTb2(float x,float y,float z);

};
void PTb2::nhap()
{
    cout <<"nhap a,b,c";cin>>a>>b>>c;

}
void PTb2::xuat()
{
    cout <<a<<"x"<<(char)253<<"+"<<b<<"x+"<<c<<"=0";

}
void PTb2::Giai()
{
    if(a==0)
    {
        cout <<"ko phai pt bac 2"

    }
    else
    {
        float denta=b*b-4*a*c;
        if(denta<0)
        {
            cout <<"pt vo nghiem"<<endl;

        }
        else if(denta==0)
        {

            cout <<"pt co nghiem x="<<-b/(2*a);
        }
        else{
            cout <<"x1="<<(-b+sqrt(denta))/(2*a)<<endl;
            cout <<"x2="<<(-b-sqrt(denta))/(2*a)<<endl;
        }

    }


}
PTb2::PTb2()
{

    a=0;b=0;c=0;
}
PTb2::PTb2(float x,float y,float z)
{

    a=x;b=y;c=z;
}
int main()
{
    PTb2 P(1,2,3);
    P.xuat();
    P.Giai();
    PTb2 Q;
    Q.nhap();
    Q.xuat();
    Q.Giai();




}
