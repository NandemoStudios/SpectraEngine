#include <string>
#include <conio.h>

using namespace std;

class AssignKey {
public:
	bool keyPressed = false;
	bool prevKeyState = keyPressed;
	char Key;

	AssignKey(string AssignedKey) {
		Key = *AssignedKey.data();
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

	bool IsKeyJustPressed() {

		bool currentKeyState = IsKeyDown();

		if (currentKeyState && !prevKeyState && !keyPressed) {
			keyPressed = true;
		}
		else {
			keyPressed = false;
		}

		prevKeyState = currentKeyState;

		return keyPressed;
	}
};