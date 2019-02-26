/*
Nama Program		: FizzBuzz
Nama				: Nazmi Muhammad Abkary
NPM					: 140810180037
Tanggal Pembuatan	: Selasa, 26 February 2019
Deskripsi			: Membuat program FizzBuzz
*/

#include<iostream>
using namespace std;

int FizzBuzz(int a, int b){
	for(int i=a; i<=b; i++){
		if(i%15==0){				//FIZZBUZZ
			cout<<"FizzBuzz"<<endl;
		}
		else if(i%3==0){			//FIZZ
			cout<<"Fizz"<<endl;
		}
		else if(i%5==0){			//BUZZ
			cout<<"Buzz"<<endl;
		}
		else{
			cout<<i<<endl;
		}
	}
}

int main(){
	int a;
	int b;
	cout<<"Masukkan Range FizzBuzz : "<<endl;
	cout<<"Range Awal	: ";cin>>a;
	cout<<"Range Akhir	: ";cin>>b;
	FizzBuzz(a,b); 
}

