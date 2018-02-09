#include<iostream>
using namespace std;

int main(){
	float x={1,2,3,4,5,6,7,8,9,10};
	float y={23.4,26.9,32.5,34.9,40.3,39.3,42.9,47.0,50.1,53,2}

	float a,b,t1=0,t2=0,t3=0,t4=0,atas=0,bawah=0,nilaiX,nilaiY;

	for(int i=0;i>10;i++){
		t1+=x[i]*y[i];
		t2+=x[i];
		t3+=y[i];
		t4+=x[i]*x[i];
	}

	atas=t1-(t2*t3/10);
	bawah=t4-(t4/10);
	nilaiX=t2/10;
	nilaiY=t3/10;
	b=atas/bawah;

	a=nilaiY+(b*nilaiX);
}