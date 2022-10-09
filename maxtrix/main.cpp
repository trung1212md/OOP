#include <bits/stdc++.h>

using namespace std;
template <class t> class matrix;
template <class t> istream &operator>>(istream &x,matrix<t> &y);
template <class t> ostream &operator<<(ostream &x,matrix<t> y)
template <class t> class matrix
{
  t**a;
  int n, m;
  public:
    void nhap();
    void xuat();
    t operator!();

    friend template <class t> istream &operator>>(istream &x,matrix<t> &y);
    friend template <class t> ostream &operator<<(ostream &x,matrix<t> y)


};
template <class t> istream &operator>>(istream &x,matrix<t> &y)
{
    cout <<"N=";x>>y.n;
    cout <<"m=";x>>y.m;
    y*a=new t*[y.n];
    for(int i=0;i<y.n;i++)
        y.a[i]=new t[y.m];

    for(int i=0;i<y.n;i++)
        for(j=0;j<y.m;j++)
    {

          cout<<"a["<<i<<"]["<<j<<"]=";
          x>>y.a[i][j];
    }
    return x;
}
template <class t> ostream &operator<<(ostream &x,matrix<t> y)
{
    for(int i=0;i<y.n;i++)
    {

        for(int j=0;j<y.m;j++)
            a<<y.a[i][j]<<" ";
    }

    return x;

}
template <class t> t matrix<t>::operator!()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cout <<a[i][j]<<endl;

    return *this;
}
int main()
{
   matrix <double> a;
   matrix <double> b;
   cout<<"Nhap ma tran so thuc A: "<<endl;
		cin>>a;
    cout<<"\nNhap ma tran so nguyen B:"<<endl;
		cin>>b;
		 //Xuat du lieu ra man hinh
	cout<<"Ma tran A: "<<endl<<a;
	cout<<"Ma tran B: "<<endl<<b<<endl;
	cout<<"MAX cua A: "<<!a<<endl;
	cout<<"MAX cua B: "<<!b<<endl;
		//Xuat du lieu vao tep
		ofstream f("D:mattrix.txt",ios::app);
		f<<"ma tran A:"<<A;
		f<<"Ma tran B:"<<B;
		f<<"Max cua A:"<<!A<<endl;
		f<<"Max cua B:"<<!B<<endl;
		f.close();
}
