#include<iostream>
using namespace std;
int square(int a){
	int b=a*a;
	return b;
}
int main ()
{
	int a;
	cout<<"enter any number to get the square"<<endl;
	cin>>a;
	cout<<square(a)<<endl;
	return 0;
}
