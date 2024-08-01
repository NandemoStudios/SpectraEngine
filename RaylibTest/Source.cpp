#include "SpectraFile.h"
#include "SpectraInput.h"
#include "Spectra.h"

using namespace std;

int main() {
	File SaveData;

	SaveData.AddData("Hello, World!");
	SaveData.AddData("This is some test data");
	SaveData.Save("SaveData.txt");
}