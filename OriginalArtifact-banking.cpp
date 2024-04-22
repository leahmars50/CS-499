#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Client { 
        std::string name;
        int serviceChoice;
    };

void ChangeCustomerChoice(std::vector<Client>& clients){
    int clientNumber;
    int newChoice;

    std::cout << "Enter the number of the client you that you wish the change\n";
    std::cin >> clientNumber;
    clientNumber--;

    if(clientNumber < 0 || clientNumber >= clients.size()){
        std::cout << "Invalid client number\n";
        return;
    }

    std::cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)\n";
    std::cin >> newChoice;


  //added verification for the new service choice 
    if(newChoice < 1 || newChoice > 2){
      std::cout<< "Invalid Choice. Returning to main menu.\n";
      return;
    } else {
        clients[clientNumber].serviceChoice = newChoice;
    }
}

int CheckUserPermissionAccess (string password){
    if (password != "123"){ 
        std::cout << "Invalid password. Exiting the program.\n";
        return 0;
    }
}

//added username verification
int CheckUsername (string username) {
  if (username != "admin"){
    std::cout << "Invalid username. Exiting the program.\n";
    return 0;
  }
}

void DisplayInfo(const std::vector<Client>& clients){
    std::cout << "Client's Name Service Selected (1 = Brokerage, 2 = Retirement)";
    for (int i = 0; i < clients.size(); ++i){
        std::cout << i + 1 << ". " << clients[i].name << " selected option " << clients[i].serviceChoice << "\n";
    } 
    std::cout << "\n";
}

int main(){
    std::string username; 
    std::string password; 
    int choice;

    std::cout << "Created by Leah Marshall\n";
    std::cout << "Hello! Welcome to our Investment Company\n";
    
    std::cout << "Enter your username:\n";
    std::cin >> username;
    CheckUsername(username);
    //added username checks

    std::cout << "Enter your password:\n";
    std::cin >> password; 
    CheckUserPermissionAccess(password);

    std::vector<Client> clients = {
        {"Bob Jones", 1},
        {"Sarah Davis", 2},
        {"Amy Friendly", 1},
        {"Johnny Smith", 1},
        {"Carol Spears", 2},
    };

    while(true){ 
        std::cout << "What would you like to do?\n";
        std::cout << "DISPLAY the client list (enter 1)\n";
        std::cout << "CHANGE a client's choice (enter 2)\n";
        std::cout << "EXIT the program (enter 3)\n";
        std::cin >> choice;

        if (choice == 1){
            DisplayInfo(clients);
        } else if (choice == 2) {
            ChangeCustomerChoice(clients);
        } else if (choice == 3) { 
            std::cout << "Exiting the program.\n";
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
    
}