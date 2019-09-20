#include <iostream>
//#include <string>

//using namespace std;

int main() {

std::string routeName1;
std::string routeName2;
std::string routeName3;

int departureTime1 = 0;
int departureTime2 = 0;
int departureTime3 = 0;

int timeLeave = 0;

std::cout << "Welcome to TuffyTravel!\n";

std::cout << "\nPlease enter the name of the 1st route: ";
std::getline (std::cin,routeName1);
//std::cin >> routeName1;
//std::getline(std::cin, routeName1);
std::cout << "Please enter the departure time of the 1st route: ";
std::cin >> departureTime1;

std::cout << "\nPlease enter the name of the 2nd route: ";
std::cin.ignore();
std::getline (std::cin,routeName2);
//std::cin >> routeName2;
//std::getline(std::cin, routeName2);
std::cout << "Please enter the departure time of the 2nd route: ";
std::cin >> departureTime2;

std::cout << "\nPlease enter the name of the 3rd route: ";
std::cin.ignore();
std::getline (std::cin,routeName3);
//std::cin >> routeName3;
//std::getline(std::cin, routeName3);
std::cout << "Please enter the departure time of the 3rd route: ";
std::cin >> departureTime3;

std::cout << "\nPlease enter the time you wish to leave: ";
std::cin >> timeLeave;

if (departureTime1 <= timeLeave) {

  if (departureTime2 <= timeLeave) {
    std::cout << "\nYou should probably take the " << routeName3 << " route that leaves at " << departureTime3 << ".";
  }
  else if (departureTime3 <= timeLeave) {
    std::cout << "\nYou should probably take the " << routeName2 << " route that leaves at " << departureTime2 << ".";
  }
  else if (departureTime2 > timeLeave && departureTime3 > timeLeave){

    if ((timeLeave-departureTime2) > (timeLeave-departureTime3)) {
      std::cout << "\nYou should probably take the " << routeName2 << " route that leaves at " << departureTime2 << ".";
    }
    else {
      std::cout << "\nYou should probably take the " << routeName3 << " route that leaves at " << departureTime3 << ".";
    }
  }

}

else if (departureTime2 <= timeLeave) {

  if (departureTime1 <= timeLeave) {
    std::cout << "\nYou should probably take the " << routeName3 << " route that leaves at " << departureTime3 << ".";
  }
  else if (departureTime3 <= timeLeave) {
    std::cout << "\nYou should probably take the " << routeName1 << " route that leaves at " << departureTime1 << ".";
  }
  else  if (departureTime1 > timeLeave && departureTime3 > timeLeave){
    if ((timeLeave-departureTime1) > (timeLeave-departureTime3)) {
      std::cout << "\nYou should probably take the " << routeName1 << " route that leaves at " << departureTime1 << ".";
    }
    else {
      std::cout << "\nYou should probably take the " << routeName3 << "route that leaves at " << departureTime3 << ".";
    }
  }

}

if (departureTime3 <= timeLeave) {

  if (departureTime2 <= timeLeave) {
    std::cout << "\nYou should probably take the " << routeName1 << " route that leaves at " << departureTime1 << ".";
  }
  else if (departureTime1 <= timeLeave) {
    std::cout << "\nYou should probably take the " << routeName2 << " route that leaves at " << departureTime2 << ".";
  }
  else if (departureTime2 > timeLeave && departureTime1 > timeLeave){
    if ((timeLeave-departureTime2) > (timeLeave-departureTime1)) {
      std::cout << "\nYou should probably take the " << routeName2 << " route that leaves at " << departureTime2 << ".";
    }
    else {
      std::cout << "\nYou should probably take the " << routeName1 << " route that leaves at " << departureTime1 << ".";
    }
  }

}

}
