# Item.h
%%writefile Item.h
#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    Item* next;
};

void displayInventory(Item* inventory)
{
    cout << "Items in bag: \n";
    if (inventory == nullptr) {
        cout << "Empty";
    } else {
        Item* current = inventory;
        while (current != nullptr) {
            cout << current->name << " \n";
            current = current->next;
        }
    }
    cout << endl;
}

void addToInventory(Item*& inventory, const string& itemName)
{
    Item* newItem = new Item;
    newItem->name = itemName;
    newItem->next = nullptr;

    if (inventory == nullptr) {
        // If inventory is empty, set newItem as the head
        inventory = newItem;
    } else {
        // Add newItem to the end of the inventory
        Item* current = inventory;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newItem;
    }

    cout << "You have " << itemName << "." << endl;
}

void removeFromInventory(Item*& inventory, const string& itemName)
{
    if (inventory == nullptr) {
        cout << "Inventory is empty." << endl;
        return;
    }

    if (inventory->name == itemName) {
        // If the first item matches the itemName, remove it
        Item* temp = inventory;
        inventory = inventory->next;
        delete temp;
        cout << itemName << " removed from inventory." << endl;
        return;
    }

    // Find the item to remove in the inventory
    Item* current = inventory;
    while (current->next != nullptr) {
        if (current->next->name == itemName) {
            Item* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << itemName << " removed from inventory." << endl;
            return;
        }
        current = current->next;
    }

    cout << itemName << " not found in inventory." << endl;
}

bool checkInventory(Item* inventory, const string& itemName)
{
    Item* current = inventory;
    while (current != nullptr) {
        if (current->name == itemName) {
            return true;  // Item found in inventory
        }
        current = current->next;
    }
    return false;  // Item not found in inventory
}
