#include <iostream>

using namespace std;

int main()
{



	int n;
	cout <<"nhap n";
    cin >>n;
    int *a;
    a=new int[n];
	for(int i=0;i<n;i++)
	{
	    cin >>a[i];


	}

	for(int i=0;i<n;i++)
    {

        cout <<a[i];
    }
}

