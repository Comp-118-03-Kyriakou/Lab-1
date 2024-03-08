/** \file Lab-0.cpp
* \brief This file contains a small drawing program
* \author Christos Kyriakou
* \date 08/03/2024
* \copyright UNic
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function prototypes
void drawHorizontalLine(int length, char ch);
void drawVerticalLine(int height, char ch);
void drawSquare(int size, char ch);
void drawRectangle(int height, int length, char ch);
void drawShapes(int numShapes);

int main() {
    int choice;
    srand(time(NULL)); // Seed for random number generator

    do {
        // Display menu
        cout << "1) Draw a horizontal line\n";
        cout << "2) Draw a vertical line\n";
        cout << "3) Draw a square\n";
        cout << "4) Draw a rectangle\n";
        cout << "5) Draw random shapes\n";
        cout << "6) Quit\n";
        cout << "Enter your Option: ";
        cin >> choice;

        // Perform action based on user choice
        switch(choice) {
            case 1:
                drawHorizontalLine(5, '*');
                break;
            case 2:
                drawVerticalLine(5, '*');
                break;
            case 3:
                drawSquare(5, '*');
                break;
            case 4:
                drawRectangle(5, 10, '*');
                break;
            case 5:
                drawShapes(3); // Example: Draw 3 random shapes
                break;
            case 6:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while(choice != 6);

    return 0;
}

/**
 * @brief Draws a horizontal line with given length and character
 *<BR>
 * @param length Length of the line
 * @param ch Character to be used for drawing the line
 */
void drawHorizontalLine(int length, char ch) {
    cout << "Drawing a horizontal line:\n";
    for (int i = 0; i < length; ++i) {
        cout << ch;
    }
    cout << endl;
}

/**
 * @brief Draws a vertical line with given height and character
 *<BR>
 * @param height Height of the line
 * @param ch Character to be used for drawing the line
 */
void drawVerticalLine(int height, char ch) {
    cout << "Drawing a vertical line:\n";
    for (int i = 0; i < height; ++i) {
        cout << ch << endl;
    }
}

/**
 * @brief Draws a square with given size and character
 *<BR>
 * @param size Size of the square
 * @param ch Character to be used for drawing the square
 */
void drawSquare(int size, char ch) {
    cout << "Drawing a square:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << ch;
        }
        cout << endl;
    }
}

/**
 * @brief Draws a rectangle with given height, length, and character
 *<BR>
 * @param height Height of the rectangle
 * @param length Length of the rectangle
 * @param ch Character to be used for drawing the rectangle
 */
void drawRectangle(int height, int length, char ch) {
    cout << "Drawing a rectangle:\n";
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < length; ++j) {
            cout << ch;
        }
        cout << endl;
    }
}

/**
 * @brief Draws a random number of random shapes
 *<BR>
 * @param numShapes Number of shapes to draw
 */
void drawShapes(int numShapes) {
    cout << "Drawing random shapes:\n";
    for (int i = 0; i < numShapes; ++i) {
        int shapeType = rand() % 4 + 1; // Random shape type: 1 - 4
        int shapeLength = rand() % 16 + 5; // Random length: 5 - 20
        char shapeCharacter = rand() % 94 + 33; // Random character from ASCII table: 33 - 126

        switch(shapeType) {
            case 1:
                drawHorizontalLine(shapeLength, shapeCharacter);
                break;
            case 2:
                drawVerticalLine(shapeLength, shapeCharacter);
                break;
            case 3:
                drawSquare(shapeLength, shapeCharacter);
                break;
            case 4:
                drawRectangle(shapeLength, shapeLength * 2, shapeCharacter); // Assume rectangle length is twice the size for variety
                break;
        }
        cout << endl;
    }
}

