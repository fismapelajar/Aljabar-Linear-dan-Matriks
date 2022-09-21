//Program Tranpose Matriks
#include <iostream>
using namespace std;
int main(){
  //Inisialisasi variabel
  int i, j, m, n, matriks[10][10], transpose[10][10];
  
  cout << "\tTranpose Matriks"<<endl;
  //Input baris matriks
  cout << "\n Masukkan jumlah baris matriks: ";
  cin >> m;
  //Input kolom matriks
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  //Input matriks
  cout << "\n Masukkan elemen matriks\n";
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      cin  >> matriks[i][j];
    }
  }
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = matriks[i][j];
    }
  }
  //Menampilkan hasil tranpose matriks
  cout << "\n Hasil Transpose Matriks: \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
  
  return 0;
  
  }
