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
        addToInventory(inventory, "Phone");
        addToInventory(inventory, "Food");
        addToInventory(inventory, "Torch");

        displayInventory(inventory);

        //Press enter
        cout<<"Press 'enter' to start your survival journey!\n";
        cin.get();


        select.choiceDisplay1 ();     //Situation Water Bottle
        cin >> choice;

          if (choice == '0')
		    {
              removeFromInventory(inventory, "Food" );
              addToInventory(inventory, "Water Bottle");
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
                            removeFromInventory(inventory, "Phone" );
                            addToInventory(inventory, "Rope");
                            displayInventory(inventory);
                            chap.chapterDisplay2();  //Circumstance save
                            removeFromInventory(inventory, "Rope" );
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
                                                addToInventory(inventory, "Shotgun");
                                                displayInventory(inventory);
                                                select.choiceDisplay8(); // Situation Bear
                                                cin >> choice;

                                                    if (choice == '0')
                                                    {
                                                        chap.chapterDisplay3();
                                                        removeFromInventory(inventory, "Shotgun");
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
                                                addToInventory(inventory, "Shotgun");
                                                displayInventory(inventory);
                                                select.choiceDisplay8(); // Situation Bear
                                                cin >> choice;

                                                    if (choice == '0')
                                                    {
                                                        chap.chapterDisplay3();
                                                        removeFromInventory(inventory, "Shotgun");
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
                            removeFromInventory(inventory, "Phone" );
                            addToInventory(inventory, "Rope");
                            displayInventory(inventory);
                            chap.chapterDisplay2();  //Circumstance save
                            removeFromInventory(inventory, "Rope" );
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
                                                addToInventory(inventory, "Shotgun");
                                                displayInventory(inventory);
                                                select.choiceDisplay8(); // Situation Bear
                                                cin >> choice;

                                                    if (choice == '0')
                                                    {
                                                        chap.chapterDisplay3();
                                                        removeFromInventory(inventory, "Shotgun");
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
                                                addToInventory(inventory, "Shotgun");
                                                displayInventory(inventory);
                                                select.choiceDisplay8(); // Situation Bear
                                                cin >> choice;

                                                    if (choice == '0')
                                                    {
                                                        chap.chapterDisplay3();
                                                        removeFromInventory(inventory, "Shotgun");
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

    return 0;
}




