#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int col=1;
		int value=i;
		int k=1;
		while(k<=n-i){
			cout<<" ";
            k=k+1;
		}
		while(col<=i){
			cout<<value;
            value=value+1;
			col=col+1;
		}
		cout<<endl;
		i=i+1;
	}
}


