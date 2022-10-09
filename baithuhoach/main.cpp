#include <bits/stdc++.h>
using namespace std;
class HANG
{
    char MaH[30];
    char TenH[30];
    float DG;
    int SL;
    int Nam;
public:
    friend iostream &operator>>(iostream &x,HANG &y);
    friend ostream &operator<<(ostream &x,HANG y);
    friend void check(HANG *a,int n);
    friend void SORT(HANG *a int n);
    friend void DELETE(HANG *a,int &n);
    friend void DELETE1(HANG *a,int &n);

};
iostream &operator>>(iostream &x,HANG &y)
{
    cout <<"nhap ma hang";fflush(stdin);x.getline(y.MaH,30);
    cout <<"nhap ten hang";fflush(stdin);x.getline(y.TenH,30);
    x.ignore();
    cout <<"nhap don gia";x>>y.DG;
    cout <<"nhap so luong ";x>>y.SL;
    cout <<"nhap nam";x>>y.Nam;
    return x;
}
ostream &operator<<(ostream &x,HANG y)
{
    x<<y.MaH<<endl;
    x<<y.TenH<<endl;
    x<<y.DG<,endl;
    x<<y.SL<<endl;
    x<<y.Nam<<endl;
    return x;

}
void check(HANG *a,int n)
{
    int d=0;
    for(int i=0;i<n;i++)
        if(strcmp(a[i].TenH,"IPHONE 12")==0)
            d++;

        if(d>0)
            cout <<"co iphone 12";
        else
            cout <<"ko co iphone 12";


}
void SORT(HANG *a int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i].DG*a[i].SL>a[j].DG*a[j]*SL)
                swap(a[i],a[j]);


}
void DELETE(HANG *a,int &n)
{
    for(int i=0;i<n;i++)
        if(strcmp(a[i].MaH,"H005")=0)
        {
            for(int j=i;i<n-1;j++)
            a[j]=a[j+1];
            n--;
        }
       a=(HANG *)realloc(a,sizeof(HANG));


}
void DELETE1(HANG *a,int &n)
{
    for(int i=0;i<n;i++)
        while(a[i].MaH<20)
        {
            for(int i=i;i<n-1;i++)
            a[j]=a[j+1];
            n--;
        }
       a=(HANG *)realloc(a,sizeof(HANG));


}
int main()
{
HANG *a;
 int n;
cout <<"nhap n";cin >>n;
a=new HANG[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];

}
ifstream f("D:/HANGNHAP.DAT";ios::app)
    for(int i=0;i<n;i++)
    {
        f<<a[i];

    }
    f.close();
    check(a,n);
    SORT(a,n);

    f.open("D:/HANGNHAP.DAT";ios::app)
        for(int i=0;i<n;i++)
            f<<a[i];
        f.close();


    DELETE(a,n);
     f.open("D:/HANGNHAP.DAT";ios::app)
        for(int i=0;i<n;i++)
            f<<a[i];
        f.close();

        DELETE1(a,n);
     f.open("D:/HANGNHAP.DAT";ios::app)
        for(int i=0;i<n;i++)
            f<<a[i];
        f.close();
}
