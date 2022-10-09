#include <iostream>

using namespace std;

class ARRAY
{
    int *VALUE;
    int n;
public:
    ARRAY();
    ARRAY(int x);
    ~ARRAY();
    void nhap();
    void xuat();

};
ARRAY::ARRAY()
{
    n=0;
    VALUE=NULL;
}
ARRAY::ARRAY(int x)
{

    n=x;
    VALUE=new int [n];
    for(int i=0;i<n;i++)
        VALUE[i]=0;
}
ARRAY::~ARRAY()
{
    n=0;
    delete []VALUE;
}
void ARRAY::nhap()
{
    if(n!=0)
    {
        cout <<"nhap n=";
        cin>>n;
    }
    if( VALUE==NULL)
        VALUE=new int[n];
    for(int i=0;i<n;i++)
    {
        cout <<"nhap n thu"<<i+1;
        cin >>VALUE[i];
        }


}
void ARRAY::xuat()
{

    for(int i=0;i<n;i++)
        cout <<VALUE[i]<<endl;
}
int main()
{
    ARRAY a(5);
    cout <<"mang vua khoi tao";
    a.xuat();
    a.nhap();
    cout <<"mang vua nhap";
    a.xuat();


}
