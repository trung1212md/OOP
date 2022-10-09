#include <bits/stdc++.h>

using namespace std;
class PERSON
{
    protected:
    char Hoten[30];
    char Ngaysinh[30];
    char Quequan[30];

};
class KYSU:public PERSON
{
    char Nganh[30];
    int  NamTN;
public:
    void nhap();
    void xuat();
    friend void xuatthongtin(KYSU *a,int n);
};
void KYSU::nhap()
{
    cout <<"nhap hO ten";fflush(stdin);cin.getline(Hoten,30);
    cout <<"nhap ngay sinh";fflush(stdin);cin.getline(Ngaysinh,30);
    cout <<"nhap Que quan";fflush(stdin);cin.getline(Quequan,30);
    cout <<"nhap nganh";fflush(stdin);cin.getline(Nganh,30);
   cout <<"nam tn";cin>>NamTN;
}
void KYSU::xuat()
{
    cout <<"ho ten"<<Hoten<<endl;
     cout <<"ngay sinh"<<Ngaysinh<<endl;
      cout <<"Que quan"<<Quequan<<endl;
       cout <<"nganh"<<Nganh<<endl;
        cout <<"Namtn"<<NamTN<<endl;

}
void xuatthongtin(KYSU *a,int n)
{
    int max=0;
    for(int i=0;i<n;i++)
        if(a[i].NamTN>max)
        max=a[i].NamTN;
    for(int i=0;i<n;i++)
        if(a[i].NamTN==max)
        a[i].xuat();

}
int main()
{

   KYSU *a;
   int n;
   cout <<"nhap n";cin>>n;
   a=new KYSU[n];
   for(int i=0;i<n;i++)
    a[i].nhap();
   for(int i=0 ;i<n;i++)
    a[i].xuat();
    xuatthongtin(a,n);
}
