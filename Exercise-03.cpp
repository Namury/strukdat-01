/*
Nama Program		: Swap
Nama				: Nazmi Muhammad Abkary
NPM					: 140810180037
Tanggal Pembuatan	: Selasa, 26 February 2019
Deskripsi			: Membuat program yang dapat Menswap
*/

#include<iostream>
using namespace std;

void swamp(int& x, int& y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}

int main(){
	int x,y;
	cout<<"Masukkan Nilai X : ";cin>>x;
	cout<<"Masukkan Nilai Y : ";cin>>y;
	cout<<"nilai (X,Y) = ("<<x<<","<<y<<")"<<endl;
	swamp(x,y);
	cout<<"Hasil Swap = ("<<x<<","<<y<<")";
}
