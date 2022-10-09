#include <iostream>

using namespace std;
class M
{
private:
    int n;
    int*a;

public:
    M();
    M(int y);
    void nhap();
    void xuat();
    ~M();
};
M::M()
{
 n=0;
 a=NULL;
}
M::M(int y)
{
    n=y;
    a=new int [n];
    for(int i=0;i<n;i++)
        a[i]=1;
}
void M::nhap()
{
    cout << "nhap n";cin >> n;
    a=new int[n];
    for( i=0;i<n;i++)
    {
        cout <<"nhap mang thu"<<i+1<<end;
        cin >>a[i];
    }

}
void M::xuat()
{
    for(int i=0;i<n;i++)
    {

        cout << a[i];
    }

}

M::~M
{
   delete[]a;
}



int main()
{
   M K();
   K.xuat();
   M Q(10);
   Q.xuat();
}
