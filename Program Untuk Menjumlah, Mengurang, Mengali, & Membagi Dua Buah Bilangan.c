#include <iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int Penjumlahan(){
	int a,b;
	cout<<"\n Penjumlahan";
	cout<<"\n Masukan Nilai Bilangan a = ";
	cin>>a;
	cout<<"\n Masukan Nilai Bilangan b = ";
	cin>>b;
	cout<<"Hasil Penjumlahan = "<<a+b;
}
int Pengurangan(){
	int a,b;
	cout<<"\n Pengurangan";
	cout<<"\n Masukan Nilai Bilangan a = ";
	cin>>a;
	cout<<"\n Masukan Nilai Bilangan b = ";
	cin>>b;
	cout<<"Hasil Pengurangan = "<<a-b;
}
int Perkalian(){
	int a,b;
	cout<<"\n Perkalian";
	cout<<"\n Masukan Nilai Bilangan a = ";
	cin>>a;
	cout<<"\n Masukan Nilai Bilangan b = ";
	cin>>b;
	cout<<"Hasil Perkalian = "<<a*b;
}
int Pembagian(){
	int a,b;
	cout<<"\n Pembagian";
	cout<<"\n Masukan Nilai Bilangan a = ";
	cin>>a;
	cout<<"\n Masukan NIlai Bilangan b = ";
	cin>>b;
	cout<<"Hasil Pembagian = "<<a/b;
}
int main(){
	cout<<endl;
	Penjumlahan();
	Pengurangan();
	Perkalian();
	Pembagian();
	cout<<endl;
	system("pause");
}
