// demo output file stream
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream os("D:\\data.txt", ios::app);
	
	string input;
	cout << "input:\n ";
	 while(true)
	 {
	 	getline(cin, input);
	 	if(input.empty()){
	 		break;
		 }
		 os << input << endl;
	 }
	
	os.close();
	
	return 0;
}
