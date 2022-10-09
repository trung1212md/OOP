#include <iostream>

using namespace std;
template <class T> class VECTOR
{
  T*a;
  int n;
  public:
      void nhap();
      void xuat();
      T MAX();

};
template <class T>void VECTOR<T>::nhap()
{
    cout <<"nhap n";cin >>n;
    a=new T[n];
    for(int i=0;i<n;i++)
        cin >>a[i];

}
template <class T> void VECTOR<T>::xuat()
{
    for(int i=0;i<n;i++)
        cout <<setw(5)<<a[i];
    cout <<endl;

}
template <class T>T VECTOR<T>::MAX()
{
    T M=a[0];
    for(int i=0;i<n;i++)
        if(a[i]>M)
        M=a[i];
    return M;

}
int main()
{
    VECTOR <double> K;
    K.nhap();
    K.xuat();
    cout <<"Max="<<K.MAX()<<endl;;
}
