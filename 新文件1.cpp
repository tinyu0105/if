#include<iostream>
using namespace std;
int main(){
	int M,D;
	cout<<"����Τ��"<<endl;
	cin>>M>>D;
	int S;
	S=(M*2+D)%3;
	if(S==0&&M<=12&&D<=31)
	cout<<"�j�N";
	else if(S==1&&M<=12&&D<=31)
	cout<<"���q";
	else if(S==2&&M<=12&&D<=31)
	cout<<"�N"; 
	else 
	cout<<"��J���~";
} 
