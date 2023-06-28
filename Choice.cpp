%%writefile Choice.cpp
#include <iostream>
#include <string>
#include "Choice.h"

void Choice :: choiceDisplay1 () {
  cout<< "You started walking and tried to find for your friends\n";
  cout<< "On the way, you found a water bottle.\n";
  cout<< "You have to either choose to take it or not\n";
  cout<< "(0) Drop food and take the water bottle\n";
  cout<< "(1) Leave the water bottle there\n";

}

void Choice :: choiceDisplay2 (){
  cout<< "You walked further into the jungle and saw a cave.\n";
  cout<< "You are not very sure about entering the cave...\n";
  cout<< "Do you want to enter the cave?\n";
  cout<< "(0) You entered the cave...\n";
  cout<< "(1) You did not enter the cave...\n";

}

void Choice :: choiceDisplay3 (){
  cout<< "You have SURVIVED by not entering the cave\n";
  cout<< "There was an fierce tiger inside the cave!\n";
  cout<< "Suddenly, you saw that tiger approaching you\n";
  cout<< "You have to either run or hide\n";
  cout<< "(0) Hide\n";
  cout<< "(1) Run for your life!\n";
}

void Choice :: choiceDisplay4 (){
    cout<< "Phewww! You have survived by hiding from the Tiger\n";
    cout<< "You sat beside a tree and wanted to take a quick rest\n";
    cout<< "There you found a rope\n";
    cout<< "Do you want to take the rope ?\n";
    cout<< "(0) Drop phone and pick the rope\n";
    cout<< "(1) Just leave the rope\n";
}

void Choice :: choiceDisplay5 (){

  cout<< "Suddenly rain started to pour in jungle\n";
  cout<< "It makes you feel refreshed and you have a water bottle to fill in.\n";
  cout<< "Do you want to fill in the water bottle?\n";
  cout<< "(0) Fill the bottle with rainwater\n";
  cout<< "(1) Just leave it\n";

}

void Choice :: choiceDisplay6 (){

  cout<< "You have collected rainwater in your water bottle.\n";
  cout<< "You continued walking around the jungle to find your friends\n";
  cout<< "In the middle of the way, you saw a figure in black coat from far away\n";
  cout<< "You want to call that person for help?\n";
  cout<< "(0) Call for help!\n";
  cout<< "(1) Have a closer look...\n";
};

void Choice :: choiceDisplay6_2 (){

  cout<< "You don't have item to collect rainwater.\n";
  cout<< "You continued walking around the jungle to find your friends\n";
  cout<< "In the middle of the way, you saw a figure in black coat from far away\n";
  cout<< "You want to call that person for help?\n";
  cout<< "(0) Call for help!\n";
  cout<< "(1) Have a closer look...\n";
};


void Choice :: choiceDisplay7 (){

    cout<< "You made right choice!\n";
    cout<< "That statue was made by the cannibal tribe to attract their prey \n";
    cout<< "You went deep into the jungle\n";
    cout<< "There you spotted a shotgun hung on a tree trunk\n";
    cout<< "(0) Take it\n";
    cout<< "(1) Leave it because scared to handle\n";
};

void Choice :: choiceDisplay8 (){

  cout<< "You had to confront a 9ft tall bear \n";
  cout<< "Only one bullet is left in the shotgun!\n";
  cout<< "(0) Use the shotgun without hesitating\n";
  cout<< "(1) Run as fast as you can\n";

};

void Choice :: choiceDisplay9 (){

  cout<< "Ran away from the spot\n";
  cout<< "While running you fell a high cliff\n";
  cout<< "You were injured heavily and thirsting for water\n";

};
// Function to display the menu after the player dies
void displayMenu()
{
    cout << "\n===== GAME OVER =====\n";
    cout << "1. Restart the game\n";
    cout << "2. Quit the game\n";
    cout << "Enter your choice: ";
}
