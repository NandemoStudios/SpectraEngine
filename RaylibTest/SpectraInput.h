#include <string>
#include <conio.h>

using namespace std;

class AssignKey {
public:
	bool IsKeyReleased = true;
	char Key;

	AssignKey(string AssignedKey) {
		Key = AssignedKey.data();
	}

	bool IsKeyDown() {
		char ch;
		ch = _getch();

		if (ch == Key) {
			return true;
		}
		else {
			return false;
		}
	}

	bool IsKeyUp() {
		char ch;
		ch = _getch();

		if (ch != Key) {
			return true;
		}
		else {
			return false;
		}
	}

	bool IsKeyJustPressed() {
		char ch;
		ch = _getch();

		if (IsKeyReleased && IsKeyDown()) {
			return true;
			IsKeyReleased = false;
		}
		else {
			if (not IsKeyReleased && IsKeyDown()) {
				return false;
			}
		}
	}
};