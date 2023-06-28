%%writefile main.cpp

#include <iostream>
#include <string>
#include "Intro.h"
#include "Chapter.h"
#include "Choice.h"
#include "Scene.h"
#include "Item.h"
using namespace std;

int main()
{
    Intro introGame;
    int startInput;
    char choice;
    Choice select;
    Chapter chap;
    Scene scene;
    Item* inventory = nullptr;

     // Open the inventory log file
    ofstream inventoryLog("inventory_log.txt");
    if (!inventoryLog.is_open()) {
        cout << "Error opening inventory log file." << endl;
        return 1;
    }


    cout << "    //DANGER AHEAD// \n\n";
    cout << "   WANT TO START GAME?\n";
    cout << " Please Enter (0) to Start" << endl;

    cin >> startInput;
    if (startInput == 0)
	{
        //Intro
        introGame.introDisplay();

        //Press enter
        cin.ignore();
        cin.get();

        //Start story
        chap.chapterDisplay1();
        addToInventory(inventory, "Phone", inventoryLog);
        addToInventory(inventory, "Food", inventoryLog);
        addToInventory(inventory, "Torch", inventoryLog);

        displayInventory(inventory);

        //Press enter
        cout<<"Press 'enter' to start your survival journey!\n";
        cin.get();


        select.choiceDisplay1 ();     //Situation Water Bottle
        cin >> choice;

          if (choice == '0')
		    {
              removeFromInventory(inventory, "Food", inventoryLog );
              addToInventory(inventory, "Water Bottle", inventoryLog);
              displayInventory(inventory);
              select.choiceDisplay2();      //Situation Cave
              cin >> choice;

                if (choice == '1')
                {
                  select.choiceDisplay3();     //Situation Tiger
                  cin >> choice;

                    if (choice == '0')
                    {
                      select.choiceDisplay4();     //Situation Rope
                      cin >> choice;

                        if (choice == '0')
                        {
                            removeFromInventory(inventory, "Phone" , inventoryLog );
                            addToInventory(inventory, "Rope", inventoryLog);
                            displayInventory(inventory);
                            chap.chapterDisplay2();  //Circumstance save
                            removeFromInventory(inventory, "Rope" , inventoryLog );
                            displayInventory(inventory);
                            cout << "Congratulations! You have reached the halfway point of the game.\n";
                            cout << "Press (Enter) to continue.\n";
                            cin.ignore();
                            cin.get();
                            select.choiceDisplay5();  //Situation rainwater
                            cin >> choice;

                              if (choice == '0')
                              {
                                 select.choiceDisplay6(); // Situation blackcoat guy
                                 cin >> choice;

                                    if (choice == '1')
                                    {
                                        select.choiceDisplay7(); //Situation gun
                                        cin >> choice;

                                            if (choice == '0')
                                            {
                                                addToInventory(inventory, "Shotgun", inventoryLog);
                                                displayInventory(inventory);
                                                select.choiceDisplay8(); // Situation Bear
                                                cin >> choice;

                                                    if (choice == '0')
                                                    {
                                                        chap.chapterDisplay3();
                                                        removeFromInventory(inventory, "Shotgun" , inventoryLog);
                                                        displayInventory(inventory);
                                                        cin.ignore();
                                                        cin.get();
                                                        select.choiceDisplay9(); //Situation need water
                                                          displayInventory(inventory);
        							                                    bool hasWater = checkInventory(inventory, "Water Bottle");

        					                                            if (hasWater)
        						                                              {
        							                                                cout << "You drank the water and saved your life!\n";

                                                                  }
                                                              else
                                                                  {
                                                                      introGame.gameOver();
                                                                  }
                                                    }
                                                    else
                                                    {
                                                        introGame.gameOver();
                                                    }

                                            }
                                            else
                                            {
                                                introGame.gameOver();
                                            }

                                    }
                                    else
                                    {
                                        introGame.gameOver();
                                    }

                              }
                              else // Else rain situation 5
                              {
                                select.choiceDisplay6(); // Situation blackcoat guyselect.choiceDisplay6(); // Situation blackcoat guy
                                 cin >> choice;

                                    if (choice == '1')
                                    {
                                        select.choiceDisplay7(); //Situation gun
                                        cin >> choice;

                                            if (choice == '0')
                                            {
                                                addToInventory(inventory, "Shotgun", inventoryLog);
                                                displayInventory(inventory);
                                                select.choiceDisplay8(); // Situation Bear
                                                cin >> choice;

                                                    if (choice == '0')
                                                    {
                                                        chap.chapterDisplay3();
                                                        removeFromInventory(inventory, "Shotgun", inventoryLog);
                                                        displayInventory(inventory);
                                                        cin.ignore();
                                                        cin.get();
                                                        select.choiceDisplay9(); //Situation need water
                                                          displayInventory(inventory);
        							                                    bool hasWater = checkInventory(inventory, "Water Bottle");

        					                                            if (hasWater)
        						                                              {
        							                                                cout << "You drank the water and saved your life!\n";

                                                                  }
                                                              else
                                                                  {
                                                                      introGame.gameOver();
                                                                  }
                                                    }
                                                    else
                                                    {
                                                        introGame.gameOver();
                                                    }

                                            }
                                            else
                                            {
                                                introGame.gameOver();
                                            }

                                    }
                                    else
                                    {
                                        introGame.gameOver();
                                    }
                              }

                        }

                        else
                        {
                          introGame.gameOver();
                        }

                    }

                    else
                    {
                      introGame.gameOver();
                    }

                }
                else
                {
                  introGame.gameOver();
                }
          	}
          else     //Second else
          	{

              displayInventory(inventory);
              select.choiceDisplay2();      //Situation Cave
              cin >> choice;

                if (choice == '1')
                {
                  select.choiceDisplay3();     //Situation Tiger
                  cin >> choice;

                    if (choice == '0')
                    {
                      select.choiceDisplay4();     //Situation Rope
                      cin >> choice;

                        if (choice == '0')
                        {
                            removeFromInventory(inventory, "Phone" , inventoryLog );
                            addToInventory(inventory, "Rope", inventoryLog);
                            displayInventory(inventory);
                            chap.chapterDisplay2();  //Circumstance save
                            removeFromInventory(inventory, "Rope" , inventoryLog );
                            displayInventory(inventory);
                            cout << "Congratulations! You have reached the halfway point of the game.\n";
                            cout << "Press (Enter) to continue.\n";
                            cin.ignore();
                            cin.get();
                            select.choiceDisplay5();  //Situation rainwater
                            cin >> choice;

                              if (choice == '0')
                              {
                                 select.choiceDisplay6_2(); // Situation blackcoat guy
                                 cin >> choice;

                                    if (choice == '1')
                                    {
                                        select.choiceDisplay7(); //Situation gun
                                        cin >> choice;

                                            if (choice == '0')
                                            {
                                                addToInventory(inventory, "Shotgun", inventoryLog);
                                                displayInventory(inventory);
                                                select.choiceDisplay8(); // Situation Bear
                                                cin >> choice;

                                                    if (choice == '0')
                                                    {
                                                        chap.chapterDisplay3();
                                                        removeFromInventory(inventory, "Shotgun", inventoryLog);
                                                        displayInventory(inventory);
                                                        cin.ignore();
                                                        cin.get();
                                                        select.choiceDisplay9(); //Situation need water
                                                          displayInventory(inventory);
        							                                    bool hasWater = checkInventory(inventory, "Water Bottle");

        					                                            if (hasWater)
        						                                              {
        							                                                cout << "You drank the water and saved your life!\n";

                                                                  }
                                                              else
                                                                  {
                                                                      introGame.gameOver();
                                                                  }
                                                    }
                                                    else
                                                    {
                                                        introGame.gameOver();
                                                    }

                                            }
                                            else
                                            {
                                                introGame.gameOver();
                                            }

                                    }
                                    else
                                    {
                                        introGame.gameOver();
                                    }

                              }
                              else // Else rain situation 5
                              {
                                select.choiceDisplay6_2(); // Situation blackcoat guyselect.choiceDisplay6(); // Situation blackcoat guy
                                 cin >> choice;

                                    if (choice == '1')
                                    {
                                        select.choiceDisplay7(); //Situation gun
                                        cin >> choice;

                                            if (choice == '0')
                                            {
                                                addToInventory(inventory, "Shotgun", inventoryLog);
                                                displayInventory(inventory);
                                                select.choiceDisplay8(); // Situation Bear
                                                cin >> choice;

                                                    if (choice == '0')
                                                    {
                                                        chap.chapterDisplay3();
                                                        removeFromInventory(inventory, "Shotgun", inventoryLog);
                                                        displayInventory(inventory);
                                                        cin.ignore();
                                                        cin.get();
                                                        select.choiceDisplay9(); //Situation need water
                                                          displayInventory(inventory);
        							                                    bool hasWater = checkInventory(inventory, "Water Bottle");

        					                                            if (hasWater)
        						                                              {
        							                                                cout << "You drank the water and saved your life!\n";

                                                                  }


                                                              else
                                                                  {
                                                                      introGame.gameOver();
                                                                  }
                                                    }
                                                    else
                                                    {
                                                        introGame.gameOver();
                                                    }

                                            }
                                            else
                                            {
                                                introGame.gameOver();
                                            }

                                    }
                                    else
                                    {
                                        introGame.gameOver();
                                    }
                              }

                        }

                        else
                        {
                          introGame.gameOver();
                        }

                    }

                    else
                    {
                      introGame.gameOver();
                    }

                }
                else
                {
                  introGame.gameOver();
                }
    		}
	}
    else      // First else
    {
    	cout<< "Wrong input, please try restarting the game again\n";


	}


cout << "\n";
    cout << "Do you want to play again?\n";
    cout << "Enter 'Y' to restart or 'N' to quit: ";
    cin >> choice;

    if (choice == 'Y' || choice == 'y')
    {
        return main();
    }
    else
    {
        cout << "Thank you for playing!\n";
    }

    // Close the inventory log file
    inventoryLog.close();

    // Free memory used by inventory linked list
    Item* current = inventory;
    while (current != nullptr) {
        Item* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}






