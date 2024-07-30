using namespace std;

class Spectra {
public:
	// Used for designating the width and height of the window in pixels
	int WindowWidth;
	int WindowHeight;

	// Used for designating if the loop should continue running or not
	bool IsRunning = true;

	// The value for the target framerate, this is not in use right now, but will be later
	int TargetFramerate = 60;

	// Ends the loop of the application
	void CloseWindow() {
		IsRunning = false;
	}
	
	// Returns true or false for if the application is running
	bool CheckRunning() {
		if (IsRunning) {
			return true;
		}
		else {
			return false;
		}
	}

	// Changes the value for target framerate according to the users input
	void SetTargetFramerate(int Framerate) {
		TargetFramerate = Framerate;
	}
};