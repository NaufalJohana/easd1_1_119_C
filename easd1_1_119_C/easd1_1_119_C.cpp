//1. Dengan Algoritma  masalah akan terpecahkan secara berurut, tertahap dan lengkap satu persatu tidak ada langkah yang tertinggal
//2.a. Data Struktur linear
//  b. Data Struktur in linear
//3.a. Banyak langkah
//  b. Operator yang tidak efisien
//  c. Besar dan jenis input data
//4. Algoritma Sorting, Karena algoritma ini menurut saya sederhana dan cukup efisien untuk mengurutkan sebuah data/list daripada algoritma lainnya
//5.a.Quadratic yaitu Insertion Sort, selection sort, bubbleSort
//	b.Loglinear yaitu quicksort
//6
#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 39)
			break;
		else
			cout << "\nMaksimum Panjang Array adalah 39" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)					// langkah Algoritma no.1
		return;

	pivot = arr[low];				// Langkah Algoritma No.2

	i = low + 1;					// Langkah Algoritma no. 3
	j = high;				// LAngkah Algoritma no. 4