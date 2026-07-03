#include <iostream>
#include <cstdlib>

int main() {
    // @echo off is handled implicitly because C++ doesn't echo lines of code to the terminal

    std::cout << "Cleaning temporary files...\n";
    // Compiling the delete commands
    std::system("del /q /f /s %TEMP%\\*");
    std::system("del /q /f /s C:\\Windows\\Temp\\*");

    std::cout << "\nCleaning npm cache...\n";
    // Running the npm cache clean command
    std::system("npm cache clean --force");

    std::cout << "\nSystem flush complete!\n";
    
    // pause equivalent
    std::system("pause");

    return 0;
}