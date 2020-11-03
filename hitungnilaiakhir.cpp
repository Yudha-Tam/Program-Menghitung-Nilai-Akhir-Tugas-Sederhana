#include <iostream>
using namespace std; 

int main()
{
	int tugas1, tugas2; 
	string nama, kelas, mapel;
	double nilai; 
	
	cout << "Masukan Nama: ";
	cin >> nama; 
	cout << "Masukan Kelas: ";
	cin >> kelas; 
	cout << "Masukan Nama Mapel: ";
	cin >> mapel; 
	cout << "Masukan tugas 1: ";
	cin >> tugas1; 
	cout << "Masukan tugas 2: ";
	cin >> tugas2; 
	
	nilai = tugas1 + tugas2; 
	nilai = nilai/2;
	
	cout << "Nama: " << nama << "\n";
	cout << "Kelas: " << kelas << "\n";
	cout << "Mapel: " << mapel << "\n";
	cout << "Nilai kamu: " << nilai; 
	
	return 0;
}






    
