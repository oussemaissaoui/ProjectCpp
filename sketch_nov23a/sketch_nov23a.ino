// Libraries
#include <Keypad.h>

// Constants
#define ROWS 4
#define COLS 4

// Parameters
const char kp4x4Keys[ROWS][COLS] = {{'1', '2', '3', 'A'}, {'4', '5', '6', 'B'}, {'7', '8', '9', 'C'}, {'*', '0', '#', 'D'}};
byte rowKp4x4Pin[4] = {9, 8, 7, 6};
byte colKp4x4Pin[4] = {5, 4, 3, 2};

// Variables
Keypad kp4x4 = Keypad(makeKeymap(kp4x4Keys), rowKp4x4Pin, colKp4x4Pin, ROWS, COLS);
char lastKey = '\0';
bool keyState = false;

void setup()
{
    // Init Serial USB
    Serial.begin(9600);
}

void loop()
{
    readKp4x4();
}

void readKp4x4()
{
    char customKey = kp4x4.getKey();

    if (customKey != NO_KEY)
    {
        if (!keyState)
        {
            // Key was not pressed before
            keyState = true;
            lastKey = customKey;

            // Send the key to the Qt application
            Serial.println(customKey); // Use Serial1 or the appropriate serial port connected to Qt
        }
    }
    else
    {
        // Key is not currently pressed
        keyState = false;
    }
}
