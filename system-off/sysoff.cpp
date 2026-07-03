#include <iostream>
#include <cstdlib>
#include <limits>

// Function to forcefully close all user applications safely before power actions
void closeAllApplications() {
    std::cout << "Closing running applications...\n";
    // Forcefully terminates common user apps (browsers, editors, etc.) without prompting
    std::system("taskkill /f /fi \"STATUS eq RUNNING\" /im chrome.exe >nul 2>&1");
    std::system("taskkill /f /fi \"STATUS eq RUNNING\" /im msedge.exe >nul 2>&1");
    std::system("taskkill /f /fi \"STATUS eq RUNNING\" /im notepad.exe >nul 2>&1");
    std::system("taskkill /f /fi \"STATUS eq RUNNING\" /im code.exe >nul 2>&1");
    // You can add more specific process names here if needed
}

int main() {
    int choice = 0;

    std::cout << "=================================\n";
    std::cout << "       POWER MANAGEMENT TOOL     \n";
    std::cout << "=================================\n";
    std::cout << "1. Shutdown Immediately\n";
    std::cout << "2. Shutdown Timely (Delayed)\n";
    std::cout << "3. Hibernate\n";
    std::cout << "4. Sleep\n";
    std::cout << "5. Cancel / Exit\n";
    std::cout << "=================================\n";
    std::cout << "Enter your choice (1-5): ";
    
    std::cin >> choice;

    // Handle invalid non-integer inputs
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Exiting program.\n";
        return 1;
    }

    switch (choice) {
        case 1:
            closeAllApplications();
            std::cout << "Shutting down immediately...\n";
            // /s = shutdown, /f = force apps to close, /t 0 = 0 seconds delay
            std::system("shutdown /s /f /t 0");
            break;

        case 2: {
            int seconds = 0;
            std::cout << "Enter delay time in seconds: ";
            std::cin >> seconds;
            if (seconds < 0) seconds = 0;
            
            closeAllApplications();
            std::cout << "System will shut down in " << seconds << " seconds.\n";
            // Dynamic execution string setup
            std::string cmd = "shutdown /s /f /t " + std::to_string(seconds);
            std::system(cmd.c_str());
            break;
        }

        case 3:
            std::cout << "Putting system into Hibernation...\n";
            // /h = hibernate
            std::system("shutdown /h");
            break;

        case 4:
            std::cout << "Putting system to Sleep...\n";
            // Accesses Windows power state API to activate low-power sleep state
            std::system("rundll32.exe powrprof.dll,SetSuspendState 0,1,0");
            break;

        case 5:
            std::cout << "Operation cancelled.\n";
            break;

        default:
            std::cout << "Invalid selection.\n";
            break;
    }

    return 0;
}