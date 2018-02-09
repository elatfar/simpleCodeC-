#include<iostream>
using namespace std;

int main(){
	int A[8]={8,9,4,7,6,1,5,3};
	int B[8]={8,5,2,6,3,7,9,10};
	int C[10],temp=0,i,j;
	bool ada=false;


	cout<<"Nilai A : ";
	for(i=0;i<8;i++){
		cout<<"{"<<A[i]<<"}";
	}

	for(i=0,j=8-1;i<4;i++,j--){
		temp=A[i];
		A[i]=A[j];
		A[j]=temp;
	}

	cout<<"\nNilai A2 : ";
	for(i=0;i<8;i++){
		cout<<"{"<<A[i]<<"}";
	}

	cout<<endl;

	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(A[i]==B[j]){
				ada=true;
			}
		}
	}
}