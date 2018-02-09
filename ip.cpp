#include <iostream>
using namespace std;

int main(){
	
	double nilai[100],sks[100],jumMatkul,ip=0,bgAtas,bgBawah,hasilKali;
	char preNilai[100];

	cout<<"Jumlah Matakuliah : ";
	cin>>jumMatkul;

	for(int i=0;i<jumMatkul;i++){
		cout<<"Input Nilai - "<<i+1<<" : ";
		cin>>preNilai[i];
		cout<<"Input SKS - "<<i+1<<" : ";
		cin>>sks[i];
		if(preNilai[i]=='A'|preNilai[i]=='a'){
			nilai[i]=4;
		}else if(preNilai[i]=='B'|preNilai[i]=='b'){
			nilai[i]=3;
		}else if(preNilai[i]=='C'|preNilai[i]=='c'){
			nilai[i]=2;
		}else if(preNilai[i]=='D'|preNilai[i]=='d'){
			nilai[i]=1;
		}else if(preNilai[i]=='E'|preNilai[i]=='e'){
			nilai[i]=0;
		}

		hasilKali=nilai[i]*sks[i];
		bgAtas+=hasilKali;
		bgBawah+=sks[i];
	}

	cout<<ip<<"="<<bgAtas<<"/"<<bgBawah;
	ip=bgAtas/bgBawah;
	cout<<" Hasil IP : "<<ip<<endl;
}