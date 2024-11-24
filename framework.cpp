#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>

#define INITIAL_BUFFER_SIZE 64

/**
 * Funktion zum Löschen der Konsole
 */
void CLS() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

/**
 * Funktion zum Löschen der Konsole nach ENTER-Eingabe durch den Benutzer
 */
void CLS_ENTER() {
    std::cout << "Drücken Sie ENTER, um fortzufahren...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

/**
 * Funktion, um Benutzereingaben zu erhalten (für Mehrzeileneingaben geeignet)
 * 
 * @param int line Zeilennummer (in einer Schleife beispielsweise `i + 1`)
 * @return std::string die Benutzereingabe
 */
std::string userInput(int line) {
    if (line != -1) {
        std::cout << line << "| ";
    }

    std::string input;
    std::getline(std::cin, input);
    
    return input;
}

/**
 * Funktion, um einfache, einzeilige Benutzereingaben zu erhalten
 * 
 * @return std::string die Benutzereingabe
 */
std::string getInput() {
    std::string input;
    std::getline(std::cin, input);
    
    return input;
}
