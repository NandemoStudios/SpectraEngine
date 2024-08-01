/* 
Iostream and fstream are for file managment
List is for storing the values before they are saved in a way that can be iterated through
String is for the user to be able to store the values that they have obtained as a string
*/
#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

class File {
public:
	list<string> SaveData;
	bool OverwriteData = true;

	void AddData(string data) {
		SaveData.push_back(data);
	}

	void Save(string filename) {
		if (OverwriteData) {
			ClearDataStore();
		}
		ofstream Datafile(filename);
		for (string str : SaveData) {
			Datafile << str;
		}
		Datafile.close();
	}
	void ClearDataStore() {
		SaveData.clear();
	}
};