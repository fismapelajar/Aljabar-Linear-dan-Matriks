//Program Pengurangan Matriks
#include <iostream>
using namespace std;

int main(){
	//Inisialisasi variabel
	int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
	
	cout<<"\t Pengurangan Matriks "<<endl;
	
	//Input baris matriks
	cout<<"\n Masukkan jumlah baris matriks = ";
	cin>>m;
	//Input kolom matriks
	cout<<"Masukkan jumlah kolom matriks = ";
	cin>>n;
	
	//Input matriks pertama
	cout<<"\n Masukkan elemen matriks pertama = \n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin>>matriks1[i][j];
		}
	}
	//Input matriks kedua
	cout<<"\n Masukkan elemen matriks kedua = \n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin>>matriks2[i][j];
		}
	}
	//Hasil Pengurangan Matriks
	cout<<"\n Hasil pengurangan mantriks = \n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			//Soal pengurangan matriks
			hasil[i][j] = matriks1[i][j]-matriks2[i][j];
			//Menampilkan hasil pengurangan matriks
			cout<<hasil[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
