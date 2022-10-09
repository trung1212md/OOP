#include<bits/stdc++.h>

using namespace std;
class SINHVIEN
{

private:
    char Masv[30];
    char HOten[30];
    float Diemtoan;
    float Diemly;
    float DiemHoa;
public:
    void nhap();
    void xuat();
    friend void sap(SINHVIEN *a,int n);
    friend void them(SINHVIEN *&a,int &n);
};
void SINHVIEN::nhap()
{

    cout <<"ma sinh vien";fflush(stdin);cin.getline(Masv,30);
    cout <<"ho ten sinh vien";fflush(stdin);cin.getline(HOten,30);
    cout <<"diem toan";cin >>Diemtoan;
    cout <<"diem ly";cin >>Diemly;
    cout <<"diem hoa";cin >>DiemHoa;
}
void SINHVIEN::xuat()
{

     cout <<setw(20)<<Masv<<setw(20)<<HOten<<setw(20)<<Diemtoan<<setw(20)<<Diemly<<setw(20)<<DiemHoa<<setw(20)<<DiemHoa+Diemly+Diemtoan<<endl;

}
void sap(SINHVIEN *a,int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i].Diemtoan+a[i].Diemly+a[i].DiemHoa>a[j].Diemtoan+a[j].Diemly+a[j].DiemHoa)
            swap(a[i],a[j]);
        
}
void them(SINHVIEN *&a,int &n)
{
        int k;
        cout <<"nhap vi tri can them:";
        cin >>k;
        SINHVIEN b;
        b.nhap();
        a=(SINHVIEN *)realloc(a,(n+1)*sizeof(SINHVIEN));
        for(int i=n;i>=k;i--)
        {
            a[i]=a[i-1];

        }
        a[k]=b;
        n++;

}

int main()

{
    SINHVIEN *a;
    int n;
    cout <<"nhap n";cin >>n;
      a=new SINHVIEN[n];
    for(int i=0;i<n;i++)
    {
        cout<<"nhap sinh vien thu"<<i+1<<endl;
        a[i].nhap();
    }
    sap(a,n);
     cout <<setw(20)<<"Ma sinh vien"<<setw(20)<<"ho ten sinh vien"<<setw(20)<<"Diemtoan"<<setw(20)<<"Diemly"<<setw(20)<<"DiemHoa"<<"tong diem"<<endl;
    for(int i=0;i<n;i++)
    {

        a[i].xuat();
    }
    them(a,n);
     for(int i=0;i<n;i++)
    {

        a[i].xuat();
    }
}
