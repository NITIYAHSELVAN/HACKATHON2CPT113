
# HACKATHON2CPT113
Hackathon Scenario As a game developer, you are given the task of producing a complete text-based video game. You need to build the game entirely in C++. The game can be of any genre, ranging from role-playing to multiplayer card games. Your program must include the use of linked lists or any of its variations like stacks or queues.
# Description
"DANGER AHEAD" is a text-based game where players embark on a thrilling survival journey filled with dangerous situations and critical choices. The game's code, provided above, implements the gameplay mechanics and interactions.
In this game, players start by entering '0' to begin their adventure. They are then introduced to an introductory section, followed by a series of chapters, scenes, and choices. The player's decisions impact their progress and ultimately determine their fate.
Throughout the game, players have an inventory where they can store items they collect along the way. The code allows players to add and remove items from their inventory as they navigate through the various scenarios. Items such as a phone, food, torch, water bottle, rope, and shotgun can be acquired and utilized strategically to overcome challenges.
The game presents multiple situations and prompts players to make choices by entering corresponding numbers or characters. These choices affect the storyline and determine the player's success or failure in surviving the dangerous circumstances. The game includes encounters with a tiger, interactions with characters like a black-coated guy, and encounters with a bear.
At certain points in the game, players will reach pivotal moments, such as the halfway point, where they can assess their progress. The code provides the ability to display the inventory, trigger events based on choices, and check if specific items are present in the inventory.
If players make incorrect choices or fail to meet certain conditions, they will face the consequences of their actions, leading to a game over scenario. However, if they make the right choices and utilize their resources wisely, they will progress further in the game and ultimately strive to survive until the end.
The code also includes an option to play the game again by entering 'Y' or 'y' after completing the adventure. Players can restart the game and experience different outcomes based on their decisions.
In summary, "DANGER AHEAD" is a text-based survival game where players navigate through challenging scenarios, make choices, manage their inventory, and aim to survive against all odds.

# Features of game
The game "DANGER AHEAD" incorporates several features to enhance the player's experience:
1. Interactive Text-Based Gameplay: The game relies on text-based interactions, allowing players to read descriptions, make choices, and progress through the story. The player's decisions directly impact the outcome of the game.
2. Engaging Narrative: The game presents a compelling storyline filled with dangerous situations, suspense, and critical decision points. Players must navigate through various challenges, keeping them engaged and immersed in the game world.
3. Inventory Management: Players have an inventory system where they can collect and store items they find during their journey. The code enables players to add, remove, and display items in their inventory. The items acquired can be crucial for overcoming obstacles and surviving the game.
4. Multiple Chapters and Scenarios: The game is structured into chapters, each containing different scenes and situations. Players progress through the chapters by making choices that lead to new scenarios and challenges.
5. Consequences of Choices: Each choice made by the player has consequences that influence the storyline. Correct decisions can lead to progression and rewards, while wrong choices can result in setbacks or even game over. This adds replayability and encourages strategic decision-making.
6. Variety of Situations and Encounters: The game introduces players to a range of scenarios, including encounters with a tiger, interactions with characters like the black-coated guy, and facing dangerous creatures like a bear. These diverse situations require players to think critically and choose wisely.
7. Game Over and Restart: If players make incorrect choices or fail to meet certain conditions, they may face a game over scenario. However, the game provides an option to restart and try again, allowing players to explore different paths and outcomes.
8. Clear Instructions and User Interface: The code includes descriptive prompts and instructions, guiding players through the game. The text-based interface makes it easy for players to understand the available options and make their choices.
9. Replayability: With different choices and outcomes, the game encourages replayability. Players can make different decisions in subsequent playthroughs to experience alternative storylines and endings.
Overall, "DANGER AHEAD" offers an immersive and engaging text-based gaming experience, combining storytelling, decision-making, and resource management to create a thrilling survival adventure.

# Gameplay
Start the game: Upon launching the game, you will see the introductory message: "//DANGER AHEAD//". The game will prompt you to enter "0" to start. Enter "0" and press enter to begin your adventure.
Read the introduction: After starting the game, an introduction will be displayed. Read through the introductory section to familiarize yourself with the game's context and storyline.
Progress through the chapters: The game is divided into chapters. Follow the prompts and instructions presented in each chapter to make choices and progress the story. Read the options carefully and enter the corresponding numbers or characters to make your choices.
Manage your inventory: Throughout the game, you will acquire items that are stored in your inventory. The code allows you to add, remove, and display items in your inventory. Pay attention to the items you have and consider using them strategically to overcome challenges.
Make choices and face consequences: As you encounter different situations and scenarios, you will be prompted to make choices. Enter the corresponding numbers or characters to make your decision. Remember that your choices have consequences, so think carefully before making a selection.
Reach checkpoints and milestones: The game includes checkpoints and milestones, such as the halfway point. These moments signify your progress and may offer rewards or new challenges. Follow the prompts and instructions provided to continue your journey.
Game over and restart: Be cautious with your choices, as making incorrect decisions or failing certain conditions may lead to a game over scenario. If you receive a game over, you have the option to restart the game by entering 'Y' or 'y' when prompted.
Enjoy different outcomes: The game offers multiple paths and outcomes based on your choices. To experience different storylines and endings, consider replaying the game and making different decisions.
Have fun and survive: Immerse yourself in the thrilling survival adventure of "DANGER AHEAD." Enjoy the suspense, make strategic choices, and strive to survive until the end of the game.
Remember that the gameplay experience may vary depending on the platform or C++ compiler you are using. Follow any additional instructions or prompts displayed by the development environment to ensure smooth gameplay.

# How object-oriented concepts were used to develop your game.
"DANGER AHEAD" demonstrates the usage of object-oriented concepts in its development. Here's how these concepts were employed:

1. Classes: The code includes several class definitions, such as "Intro," "Chapter," "Choice," "Scene," and "Item." Each class represents a distinct entity or concept within the game, encapsulating related data and behaviors.

2. Objects: Objects are instances of classes that hold their own data and have access to class methods. In the code, objects are created for classes like "Intro introGame," "Choice select," "Chapter chap," and "Item* inventory." These objects are used to interact with the game's elements and perform specific actions.

3. Encapsulation: Encapsulation refers to bundling data and methods within a class, hiding internal details and providing controlled access to the class's functionalities. In the code, each class encapsulates its own data and member functions, ensuring data integrity and modularity.

4. Inheritance: Inheritance allows the creation of new classes (derived classes) based on existing classes (base classes), inheriting their properties and behaviors. Although not explicitly evident in the provided code, inheritance may be employed if there are additional classes in the project hierarchy.

5. Polymorphism: Polymorphism enables objects of different classes to be treated as objects of a common base class. Polymorphic behavior allows for dynamic binding of methods and flexibility in code execution. The code does not explicitly demonstrate polymorphism, but it could potentially be utilized if additional classes and functions were included.

6. Abstraction: Abstraction involves defining essential features while hiding unnecessary implementation details. The code uses abstraction by encapsulating the functionality of the game into classes and methods, allowing the player to interact with the game's abstracted representation rather than dealing with lower-level implementation details.

7. Modularity: Modularity promotes dividing the code into smaller, manageable units (classes) that can be developed, tested, and maintained independently. Each class in the code represents a specific module with well-defined responsibilities, facilitating code organization and maintainability.

By incorporating these object-oriented concepts, the code for "DANGER AHEAD" achieves better organization, reusability, and extensibility, making it easier to underst![Uploading IF ENTERED CAVE .png…]()
and, modify, and expand the game's functionality.


# How linked lists play a role in your game.
Managing inventory: Linked lists can be employed to create a dynamic inventory system where items are stored and managed. Each item could be represented as a node in the linked list, allowing for efficient insertion, deletion, and traversal of items.

Building story or dialogue branches: Linked lists can be utilized to create branching paths within the game's story or dialogue. Each node in the linked list can represent a different story segment or dialogue option, allowing the player to progress through the game by traversing the linked list based on their choices.

Implementing game events or scenes: Linked lists can be used to organize and manage game events or scenes. Each node in the linked list can represent a specific event or scene, enabling sequential execution or jumping between different parts of the game based on certain conditions.

# SCRENSHOOT
![GAME START](https://github.com/NITIYAHSELVAN/HACKATHON2CPT113/assets/137810539/7211f3c8-4c17-49ee-9912-523851e80284)

