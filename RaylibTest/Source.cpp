#include "SpectraFile.h"
#include "SpectraInput.h"
#include "Spectra.h"

using namespace std;

int main() {
	Spectra Engine;

	AssignKey Forward = AssignKey("a");

	while (Engine.IsRunning) {
		if (Forward.IsKeyJustPressed()) {
			cout << "The Key is down";
		}
	}
}