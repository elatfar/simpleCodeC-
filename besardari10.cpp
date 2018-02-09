#include <iostream>
using namespace std;

int main(){
	int n,hasil=0;

	cout<<"Masukan nilai diatas 10";
	cin>>n;

	if(n>10)
		for(int i=1;i<=n;i++){
			cout<<i;
			if(i==n)
				cout<<" = ";
			else
				cout<<" + ";
			hasil+=i;
		}

	cout<<hasil<<endl;
}