#include "stdio.h"
#include "string.h"
#include <iostream>

using namespace std;

class Item {
  public:
    Item() {
      max = 1;
      count = 0;
      id = "";
    }
    Item(string Id, int Max) {
      id = Id;
      max = Max;
      count = 0;
    }
    string getId() { return id; }
    int getCount() { return count; }
    int getMax() { return max; }
    bool isMax() {
      if (count >= max) return true;
      return false;
    }
    int add(int Count) {
      int sum = 0, subcount = count + Count;
      if (subcount > max) {
        sum = (subcount / max) * max + (subcount % max) - (max - count);
        count = max;
      } else {
        count = subcount;
      }
      return sum;
    }
    string getInfo() { return id + "(x" + to_string(count) + ")"; }
  protected:
    string id;
  private:
    int max, count;
};
class Weapon : public Item {
  public:
    Weapon() {
      max = 1;
      id = "";
      count = 0;
      damage = 1;
    }
    Weapon(string Id, int Damage) {
      id = Id;
      damage = Damage;
    }
    string getInfo() {
      return id + "(damage: " + to_string(damage) + ")";
    }
  private:
    int count, max, damage;
};
class Armor : public Item {
  public:
    Armor() {
      max = 1;
      id = "";
      count = 0;
      armor = 1;
    }
    Armor(string Id, int Armor) {
      id = Id;
      armor = Armor;
    }
    string getInfo() {
      return id + "(armor: " + to_string(armor) + ")";
    }
  private:
    int count, max, armor;
};

class Inventory {
  public:
    Inventory(int Max) {
      max = Max;
      items = new Item[Max];
      armors = new Armor[Max];
      weapons = new Weapon[Max];
    }
    void add(Item item, int count) {
      for (int i = 0; i < max; i++) {
        string slot_id = items[i].getId();
        if ((item.getId() == slot_id || slot_id == "") && !items[i].isMax()) {
          if (slot_id == "") {
            items[i] = item;
          }
          int result = items[i].add(count);
          if (result > 0) {
            if (i < (max - 1)) {
              add(item, result);
            } else {
              printf("Error, inventory is full!\n");
            }
          }
          break;
        }
      } 
    }
    void add(Weapon item, int count) {
      for (int i = 0; i < max; i++) {
        string slot_id = weapons[i].getId();
        if ((item.getId() == slot_id || slot_id == "") && !weapons[i].isMax()) {
          if (slot_id == "") {
            weapons[i] = item;
          }
          int result = weapons[i].add(count);
          if (result > 0) {
            if (i < (max - 1)) {
              add(item, result);
            } else {
              printf("Error, inventory is full!\n");
            }
          }
          break;
        }
      }
    }
    
    int getNoEmpty() {
      int count = 0;
      for (int i = 0; i < max || count >= max; i++) {
        if (items[i].getId() != "") count++;
        if (weapons[i].getId() != "") count++;
        if (armors[i].getId() != "") count++;
      }
      return count;
    }
    void info() {
      printf("inventory(%i):\n", max);
      int count = 0;
      while (count < max) {
        bool is_find = false;
        for (int i = 0; i < max; i++) {
          if (items[i].getId() != "") {
            printf("%i. %s max: %i\n", ++count, items[i].getInfo().c_str(), items[i].getMax());
            is_find = true;          
          }
        }

        if (!is_find) printf("%i. empty\n", ++count);
        
      }
      /*for (int i = 0; i < max; i++) {
        printf("%i. ", i + 1);
        string slot_id = items[i].getId();
        if (slot_id == "") {
          printf("empty\n");
        } else {
          printf("%s max: %i\n", items[i].getInfo().c_str(), items[i].getMax());
        }
      }*/
    }
  private:
    int max;
    Item *items;
    Weapon *weapons;
    Armor *armors;
};

int main() {
  Inventory inv(10);
  Item apple("apple", 8);
  Item wood("wood", 16);
  Weapon sword_wood("sword_wood", 2);
  Weapon sword_golden("sword_golden", 5);  
  Armor helmet_iron("helmet_iron", 3);

  inv.add(apple, 22);
  inv.add(wood, 17);
  inv.add(sword_wood, 2);
  inv.add(helmet_iron, 1);
  inv.info();  
}
