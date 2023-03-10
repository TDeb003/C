#include<iostream>
using namespace std;


int main(){

       	/*  
		Read input as specified in the question.
		Print output as specified in the question.
	*/
    int n;
	cin>>n;
	int sum=0;
	int d=0;
	while(d<=n){
		sum=sum+d;
		d=d+2;
	}
	cout<<sum<<endl;
}
