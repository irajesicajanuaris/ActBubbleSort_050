#include <iostream>
using namespace std;


int a[20];				// Deklarasi array a dengan ukuran 20
int n;					// Deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() {			// Method untuk input
	while (true) {		// looping
		cout << "Masukkan banyaknya elemen pada array : "; // Output ke layar
		cin >> n;		// Input dari pengguna 
		if (n <= 20)	// jika n kurang dari atau sama dengan 20
			break;		// keluar dari loop
		else {			// jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";	//Output ke layar
		}
	}
	cout << endl;								// Output baris kosong 
	cout << "====================" << endl;		// Output ke layar
	cout << "Masukkan Elemen Array" << endl;	// Output ke layar
	cout << "====================" << endl;		// Output ke layar

	for (int i = 0; i < n; i++) {	// looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";	// Output ke layar
		cin >> a[i];							// Input dari pengguna
	}
}

void display() {		// Method untuk menampilkan hasil
	cout << endl;								// Output baris kosong 
	cout << "==================================" << endl;	// Output ke layar
	cout << "Element Array yang telah tersusun" << endl;	// Output ke layar
	cout << "==================================" << endl;	// Output ke layar
	for (int j = 0; j < n; j++) {							// looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;								// Output ke layar
	}
	cout << endl;											//Output baris kosong
}

void bubbleSortArray() {			//Method untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {			// looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) {	// looping dengan i dimulai dari 0 hingga n-i-1
			if (a[j] > a[j + 1]) {			// jika nilai pada a[j] lebih besar dari a[j+1] 
				int temp = a[j];			// simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];			// assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;			// assign nilai temp ke a[j+1]
			}
		}
	}
}


int main() {
	// Membuat objek obj dari class BubbleSort
	input();	// Memanggil read() dari class BubbleSort
	bubbleSortArray();	// Memanggil bubbleSortArray() dari classs BubbleSort
	display();	// memanggil display() dari class BubbleSort
	return 0;
}