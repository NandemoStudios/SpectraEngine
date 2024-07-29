class Spectra {
public:
	int WindowWidth;
	int WindowHeight;

	bool IsRunning = true;

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
};