#include<iostream>
using namespace std;
int main()
{	int n, count = 0;
	cout<<"Enter the number \n";
	cin>>n;

	for(int i=1;i<=n; i++)
	{
		if(n%i==0)
		{
			count++ ;
		}
	}
	if (count==2){
		cout<<"Number is prime\n";
	}
	else {
		cout<<"Number is not prime\n";
	}
	return 0;
}