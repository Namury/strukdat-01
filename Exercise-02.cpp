/*
Nama Program		: Convert Celciuse ke Fahrenheit
Nama				: Nazmi Muhammad Abkary
NPM					: 140810180037
Tanggal Pembuatan	: Selasa, 26 February 2019
Deskripsi			: Membuat program yang dapat Convert Celciuse ke Fahrenheit
*/

#include<iostream>
using namespace std;

float convert(float c, float& f){
	f=(c*9/5)+32;
	return f;
}

int main(){
	float c,f;
	cout<<"Convert Celcius ke Fahrenheit"<<endl;
	cout<<"Masukkan Nilai Celcius : ";cin>>c;
	cout<<"Nilai Fahrenheit : ";convert(c,f);cout<<f<<endl;
}
