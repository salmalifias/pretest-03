/*
Nama		: Salma Alifia Shafira
NPM			: 140810180058
Kelas		: B
Tanggal		: 13 Maret 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

typedef string array[200];

void banyakData (int &n);
void isiData (array x, int n);
void cetakData (array x, int n);
void bubbleSort (array& x, int n);

int main () {
	array x;
	int nData;
	
	banyakData(nData);
	cout<<endl;
	isiData(x,nData);
	bubbleSort(x,nData);
	cout<<endl;
	cout<<"		  Data Mahasiswa"<<endl;
	cout<<"====================================================="<<endl;
	cout<<"No	NPM	Nama			IPK"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cetakData (x,nData);
	
	cout<<endl;
	system ("pause");
}

void banyakData (int &n) {
	cout<<"Jumlah Mahasiswa : ";cin>>n;
	while(n<=0){
		cout<<"Jumlah mahasiswa tidak boleh kurang dari 1"; 
		banyakData(n);}
}
	
void isiData (array x, int n) {
	int j = 0;
	char c;
	for(int i = 0 ; i< n ; i++) {
		cout<<"Nama Mahasiswa "<<i+1<<" : ";
		while (x[i].length()==0) {
		 	getline (cin, x[i]);}
	}
}

void cetakData (array x, int n) {
	for(int i = 0 ; i<n ; i++) {
		cout<<i+1<<"	"<<x[i]<<endl;}
		cout<<"=====================================================";}
		
void bubbleSort (array& x, int n) {
	string temp;
	for(int i = 0 ; i<n; i++) {
		for (int j = 0 ; j<n-i-1 ; j++) {
			if (x[j]>x[j+1]) {
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
		}
 	}
}
