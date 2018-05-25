#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"年分"<<endl;
	cin>>a;
	if(a%4==0&&a%100!=0||a%400==0)
	cout<<"閏年";
	else
	cout<<"平年"; 
} 
