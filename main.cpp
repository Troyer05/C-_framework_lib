#include <iostream>
#include <stdio.h>
#include "framework.h"

int main() {
    // Beispielnutzung
    CLS();
    
    std::cout << "Bitte geben Sie eine Zeile ein:\n";
    std::string input = getInput();
    std::cout << "Ihre Eingabe war: " << input << std::endl;

    CLS_ENTER();
    std::cout << "Mehrzeilige Eingabe starten. Geben Sie 'exit' ein, um zu beenden:\n";

    int line = 1;

    while (true) {
        std::string multiInput = userInput(line++);
        
        if (multiInput == "exit") {
            break;
        }
        
        std::cout << "Eingegeben: " << multiInput << std::endl;
    }

    return 0;
}
