#include "stdio.h"
#include "string.h"
#include <iostream>


using namespace std;

class Item {
  public:
    Item() {
      id = "";
      type = "";
      max = 1;
    }
    Item(string _id, string _type, int _max) {
      id = _id;
      type = _type;
      max = _max;
    }
    string getType() { return type; }
    string getInfo() { return id + "(" + type + ")"; }
    int getMax() { return max; }
  protected:
    int max;
    string id, type;
};

class Weapon : public Item {
  public:
    Weapon(string _id, int _damage) {
      id = _id;
      type = "weapon";
      damage = _damage;
      max = 1;
    }
    string getInfo() { return id + "(" + type + " damage: " + to_string(damage) + ")"; }
  private:
    int damage;
};

class Armor : public Item {
  public:
    Armor(string _id, int _armor) {
      id = _id;
      type = "armor";
      armor = _armor;
      max = 1;
    }
    string getInfo() { return id + "(" + type + " armor: " + to_string(armor) + ")"; }
  private:
    int armor;
};

class Slot {
  public:
    Slot() {
      type = "";
      count = 0;
    }
    void add(Item *_item, int _count) {
      item = _item; 
      count += _count;
      type = _item->getType();
    }
    void add(Armor *_item, int _count) {
      armor = _item;
      count += _count;
      type = _item->getType();
    }
    void add(Weapon *_item, int _count) {
      weapon = _item;
      count += _count;
      type = _item->getType();
    }
    string getInfo() {
      string temp = "empty";
      int max = 0;
      if (type == "armor") {
        temp = armor->getInfo();
        max = armor->getMax();
      } else {
        if (type == "weapon") {
          temp = weapon->getInfo();
          max = weapon->getMax();
        } else {
          if (type != "") {
            temp = item->getInfo();
            max = item->getMax();
          }
        }
      }
      temp += "\tcount: " + to_string(count) + "/" + to_string(max);
      return temp;
    }
  private:
    string type;
    int count;
    Item *item;
    Weapon *weapon;
    Armor *armor;
};

int main() { 
  const int max_size = 5;
  Item item_wood("wood", "block", 64);
  Weapon weapon_sword("sword", 4);
  
  Slot slots[max_size];

  slots[0].add(&item_wood, 15);
  slots[1].add(&weapon_sword, 1);

  printf("inventory:\n");
  for (int i = 0; i < max_size; i++) {
    printf("%i. %s\n", i + 1, slots[i].getInfo().c_str());
  }
}
