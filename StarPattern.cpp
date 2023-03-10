#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=i; j<n; j++){
			printf(" ");
		}
		for(int j=1; j<=i*2-1; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
