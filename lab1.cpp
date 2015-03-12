#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	there:
	if(a==1)
		cout<<a<<endl;
	else if(a%2==1){
		a=3*a+1;
		cout<<a<<endl;
		goto there;
	}
	else{
		a=a/2;
	cout<<a<<endl;
		goto there;
	}
	return 0;
}
