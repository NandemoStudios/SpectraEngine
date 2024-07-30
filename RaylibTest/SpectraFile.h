// Iostream and fstream are for file managment
// List is for storing the values before they are saved in a way that can be iterated through
// String is for the user to be able to store the values that they have obtained as a string
#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

class File {
public:
	// The varaible for storing the data before it is saved to the file
	list<string> SaveData;
	// A value that is compared to see if the file should be cleared each save or not.
	bool OverwriteData = true;

	void AddData(string data) {
		// Adds data to the front of the list
		SaveData.push_front(data);
	}

	void SaveDataToFile(string filename) {
		// Checks if the file should be cleared before storing the data, only triggers if true
		if (OverwriteData) {
			ClearDataStore();
		}
		// Opens the file under the name that is given and saves the list entry by entry to the file.
		ofstream Datafile(filename);
		for (string str : SaveData) {
			Datafile << str;
		}
	}

	// Removes all of the data from the file
	void ClearDataStore() {
		SaveData.clear();
	}
};