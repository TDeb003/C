#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int s,e,w;
	cin>>s>>e>>w;
	while(s<=e){
		int out=(s-32)*5/9;
		cout<<s<<" "<<out<<endl;
		s+=w;
	}
}
