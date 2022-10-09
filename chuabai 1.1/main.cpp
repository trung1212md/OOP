#include <bits/stdc++.h>

using namespace std;
class School
{
    char Name[30];
    char Date[30];

    friend class FACULTY;
};
class FACULTY
{
    char Name [30];
    char Date[30];
    School x;
public:
    void nhap();
    void xuat();
    friend class STUDENT;

};
void FACULTY::nhap()
{
    cout <<"nhap name";fflush(stdin);cin.getline(Name,30);
     cout <<"nhap Date";fflush(stdin);cin.getline(Name,30);
     cout <<"nhap Name";fflush(stdin);cin.getline(x.Name,30);
      cout <<"nhap Date";fflush(stdin);cin.getline(x.Date,30);

}
void FACULTY::xuat()
{
    cout <<"ten "<<Name<<endl;
    cout <<"date "<<Name<<endl;
    cout <<"ten "<<x.Name<<endl;
    cout <<"date "<<x.Date<<endl;
}
class PERSON
{
    protected:
    char Name[30];
    char Birth[30];
    char address[30];
    public:
        void nhap();
        void xuat();
};
void PERSON::nhap()
{
      cout <<"nhap name";fflush(stdin);cin.getline(Name,30);
        cout <<"nhap Birth";fflush(stdin);cin.getline(Birth,30);
          cout <<"nhap address";fflush(stdin);cin.getline(address,30);
}
void PERSON::xuat()
{

    cout <<"name"<<Name<<endl;
    cout <<"brith"<<Birth<<endl;
    cout<<"address"<<address<<endl;
}
class STUDENT:public PERSON
{
    FACULTY y;
    char Class[30];
    char Score[30];
public:
    void nhap();
    void xuat();
    friend void sapxep(STUDENT *a,int n);
    friend void chen(int *&a,int &n);

};
void STUDENT::nhap()
{
    y.nhap();
    PERSON::nhap();
      cout <<"nhap Class";fflush(stdin);cin.getline(Class,30);
        cout <<"nhap score";fflush(stdin);cin.getline(Score,30);


}
void STUDENT::xuat()
{
    y.xuat();
    PERSON::xuat();
    cout <<"class"<<Class<<endl;
    cout <<"score"<<Score<<endl;

}
void sapxep(STUDENT *a,int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if( a[i].Score>a[j].Score)
                swap(a[i],a[j]);
}
void chen(int *&a,int &n)
{
      int k;
    cout <<"nhap pt can chen";cin>>k;
    STUDENT b;
    b.nhap();
    a=(STUDENT *)realloc(a,(n+1)*sizeof(STUDENT));
    for(int i=n;i>=k;i--)
        a[i]=a[i-1];

    a[k]=b;
    n++;

}
int main()
{
    STUDENT *a;
    int n;
    cout <<"nhap n";
    cin>>n;
    a=new STUDENT[n];
    for(int i=0;i<n;i++)
    {
        a[i].nhap();

    }
    sapxep(a,n);
    chen(a,n);
    for(int i=0;i<n;i++)
    {

        a[i].xuat();
    }


}
