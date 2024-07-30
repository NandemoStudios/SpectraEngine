// String is used for getting the inputs from the developer in a way that is easy
// It removes the need for converting from string to char type
// Conio is used for getting the key inputs of the player/developer
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