//Program Penjumlahan Matriks
#include<iostream>
using namespace std;

int main()
{
	//Inisialisasi variabel
	int matA[20][20];
	int matB[20][20];
	int hasil[20][20];
	int baris;
	int kolom;
	
	cout<<"\t PENJUMLAHAN MATRIKS DENGAN MATRIKS"<<endl<<endl;
	
	//Input baris matriks
	cout<<"\n Masukkan baris matriks: ";
	cin>>baris;
	//Input kolom matriks
	cout<<"Masukkan kolom matriks: ";
	cin>>kolom;
	
	cout<<endl;
	
	//Input matriks pertama
	cout<<"\n Masukkan matriks Pertama :"<<endl;	
	for (int i=0; i<baris; i++)
	{
		for (int j=0; j<kolom; j++)
		{
			cin>>matA[i][j];
		}
	}
	cout<<endl;
	
	//Input matriks kedua
	cout<<"\n Masukkan matriks Kedua : "<<endl;
	for (int i=0; i<baris; i++)
	{
		for(int j=0; j<kolom; j++)
		{
			cin>>matB[i][j];
		}
	}
	cout<<endl;
	
	//Hasil dari penjumlahan matriks pertama dan kedua
	cout<<"\n Hasil penjumlahan matriks pertama dan kedua "<<endl;
	for(int i=0; i<baris; i++)
	{
		for (int j=0; j<kolom; j++)
		{
			//Soal penjumlahan matriks
			hasil[i][j]=matA[i][j]+matB[i][j];
			//Menampilkan hasil penjumlahan matriks
			cout<<hasil[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
