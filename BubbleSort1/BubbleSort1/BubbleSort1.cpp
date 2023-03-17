#include <iostream>
using namespace std;


int a[20];			//Deklarasi array a dengan ukuran 20
int n;				//Deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() {			//procedure untuk input
	while (true) {		// Looping
		cout << "Masukan bannyaknya elemen pada : "; //output kel ayar
		cin >> n;		//input dari pengguna
		if (n <= 20)	// jika n kurang dari atau sama dengan 20
			break;		// keluar dari loop
		else {
			cout << "\nArray dapat maksimal memiliki 20 elemen.\n"; //output ke layar 
		}
	}
	cout << endl;								//output baris kosong
	cout << "===================" << endl;		// output ke layar
	cout << "Masukan elemen Array" << endl;		// output ke layar
	cout << "===================" << endl;		// output ke layar

	for (int i = 0; i < n; i++) {		// looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";  // output ke layar
		cin >> a[i];						// input dari pengguna 
	}
}

void display() {	//procedur untuk menampilkan hasil
	cout << endl;								// output baris kosong 
	cout << "==================================" << endl;		// output ke layar
	cout << "Element Array yang telah tersusun" << endl;		// output ke layar
	cout << "==================================" << endl;		// output ke layar
	for (int j = 0; j < n; j++) {				// Looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;					// output ke layar
	}
	cout << endl;								// output baris kosong
}

void bubblesortArray() {	// Procedure untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {			// Looping dengan i dimulai dari 0 hingga n-1
		for (int j = 0; j < n - i; j++) {	// Looping dengan j dimulai dari 0 hingga n-1
			if (a[j] > a[j + 1]) {			// Jika nilai pada a[j] lebih besar dari a [j+1]
				int temp = a[j];			// simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];			// assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;			// assing nilai temp ke a[j+1]
			}
		}
	}
}



int main() {
	input();		// memanggil read()
	bubblesortArray();	// memanggil bubblesortArray()
	display();		// memanggil display()
	return 0;
}