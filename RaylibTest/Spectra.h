using namespace std;

class Spectra {
private:
	time_t CurrentTime = time(0);
	time_t PreviousTime = CurrentTime;
public:
	int WindowWidth;
	int WindowHeight;

	bool IsRunning = true;
	int TargetFramerate = 60;

	void CloseWindow() {
		IsRunning = false;
	}

	bool CheckRunning() {
		if (IsRunning) {
			return true;
		}
		else {
			return false;
		}
	}

	void SetTargetFramerate(int Framerate) {
		TargetFramerate = Framerate;
	}
};