#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

class File {
public:
	list<string> SaveData;
	bool ReplaceData = true;

	void AddData(string data) {
		SaveData.push_front(data);
	}

	void SaveDataToFile(string filename) {
		ofstream Datafile(filename);
		for (string str : SaveData) {
			Datafile << str;
		}
	}

	void ClearDataStore() {
		SaveData.clear();
	}
};