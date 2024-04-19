#include <iostream>
using namespace std;

string convertToMorse(char letter) {
    switch (letter) {
        case 'A':
        case 'a':
            return ".-";
        case 'B':
        case 'b':
            return "-...";
        case 'C':
        case 'c':
            return "-.-";
        case 'D':
        case 'd':
            return "-..";
        case 'E':
        case 'e':
            return ".";
        case 'F':
        case 'f':
            return "..-.";
        case 'G':
        case 'g':
            return "--.";
        case 'H':
        case 'h':
            return "....";
        case 'I':
        case 'i':
            return "..";
        case 'J':
        case 'j':
            return ".---";
        case 'K':
        case 'k':
            return "-.-";
        case 'L':
        case 'l':
            return ".-..";
        case 'M':
        case 'm':
            return "--";
        case 'N':
        case 'n':
            return "-.";
        case 'O':
        case 'o':
            return "---";
        case 'P':
        case 'p':
            return ".--.";
        case 'Q':
        case 'q':
            return "--.-";
        case 'R':
        case 'r':
            return ".-.";
        case 'S':
        case 's':
            return "...";
        case 'T':
        case 't':
            return "-";
        case 'U':
        case 'u':
            return "..-";
        case 'V':
        case 'v':
            return "...-";
        case 'W':
        case 'w':
            return ".--";
        case 'X':
        case 'x':
            return "-..-";
        case 'Y':
        case 'y':
            return "-.--";
        case 'Z':
        case 'z':
            return "--..";
        case '0':
            return "-----";
        case '1':
            return ".----";
        case '2':
            return "..---";
        case '3':
            return "...--";
        case '4':
            return "....-";
        case '5':
            return ".....";
        case '6':
            return "-....";
        case '7':
            return "--...";
        case '8':
            return "---..";
        case '9':
            return "----.";
        default:
            return "Invalid";
    }
}

int main() {
    string word;
    cout << "Enter a word to convert to Morse code: ";
    cin >> word;

    string morseCode;

    for (char letter : word) {
        string morseLetter = convertToMorse(letter);
        if (morseLetter != "Invalid") {
            morseCode += morseLetter + " ";
        } else {
            cout << "Invalid character: " << letter << endl;
        }
    }

    cout << "Morse code: " << morseCode << endl;

    return 0;
}