// demo input file stream
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// buka file:
	ifstream is("D:\\data.txt");
	
	// cek apakah file gagal dibuka
	if(!is.is_open())
	{
		cout << "file gagal dibuka\n";
		return 1;
	}
	
	// baca file baris demi baris
	string line;
	while(getline(is, line))
	{
		//tampilkan isi tiap baris
		cout << line << endl;
	}
	
	return 0;
}
