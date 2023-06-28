#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

//vector<string> getInput()
//{
//	vector<string> data;
//	string input;
//
//	cout << "masukkan teks:\n";
//
//	while(true){
//		getline(cin, input);
//		if(input.empty()){
//			break;
//		}
//		data.push_back(input);
//	}
//	return data;
//}

int main()
{
	ifstream is("D:\\data.txt");
	if(!is.is_open())
	{
		cout << "tidak dapat membuka file\n";
		return 1;
	}
	
	vector<string> data;
	string line;
	
	while(getline(is, line))
	{
		data.push_back(line);
	}
	
	for(auto d : data)
	{
		cout << d << endl;
	}
	
	is.close();
	
//	vector<string> userInput = getInput();
//	cout << "data yang dimasukkan:\n";
//	for (const string& data: userInput)
//	{
//		cout << data << endl;
//	}
	
	return 0;
}
