// fio
#include <iostream>
using namespace std;

int main()
{
	int a=0;
	int b=1;
	int c= a+b;

	int n;
	cin>>n;

	cout<<a<<" ";
	cout<<b<<" ";
	
	while(c<=n ){
		cout<<c<<" ";
		a=b;
		b=c;
		c=a+b;
	}

	return 0;
}