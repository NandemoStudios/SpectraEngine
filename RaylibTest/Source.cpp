#include "FeatherFile.h"

using namespace std;

int main() {
	File SaveData;

	SaveData.AddData("Testing");
	SaveData.SaveDataToFile("SaveData.txt");
	SaveData.ClearDataStore();
}