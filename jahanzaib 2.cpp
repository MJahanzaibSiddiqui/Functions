 #include<iostream> 
 using namespace std;
 
 void print(int num){
	cout<<num<<endl;
	return;
}
int sub(int num1,int num2){
	print(num1);
	print(num2);
	int sub = num1-num2;
	return sub;
}
int main (){
	int a=2;
	int b=3;
	cout<<sub(a,b)<<endl;
	return 0;
}

