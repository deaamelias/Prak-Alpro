#include <iostream>
#include <string>

using namespace std;
int main(){
	int pilihan, bil1, bil2;
	float hasil;
	char ulang;
	string operasi;
	do{
		cout<<"=================================\n";
		cout<<" 	PROGRAM KALKULATOR\n";
		cout<<"=================================\n";
		cout<<"Menu Operasi : "<<endl;
		cout<<"	1. Penambahan"<<endl;
		cout<<"	2. Pengurangan"<<endl;
		cout<<"	3. Perkalian"<<endl;
		cout<<"	4. Pembagian"<<endl;
		cout<<"Pilih Menu No : ";
		cin>>pilihan;
		cout<<endl;
		cout<<"Bilangan Pertama : ";
		cin>>bil1;
		cout<<"Bilangan Kedua : ";
		cin>>bil2;
		switch(pilihan){
			case 1 : hasil=bil1+bil2;
				operasi='+';
				break;
			case 2 : hasil=bil1-bil2;
				operasi='-';
				break;
			case 3 : hasil=bil1*bil2;
				operasi='*';
				break;
			case 4 : hasil=bil1/bil2;
				operasi='/';
				break;
			default:
				cout<<"Salah Memasukkan Pilihan"<<endl;
		}
		cout<<endl;
		cout<<"Hasil "<<bil1<<operasi<<bil2<<" = "<<hasil<<endl;
		cout<<"=================================\n";
		cout<<"Pilih menu yang lain ? (y/t) : "; cin>>ulang;
		cout<<endl;
	}
	while (ulang != 't');		
	cout<<"Terima Kasih ";
	cout<<endl;
}
