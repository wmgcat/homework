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
  private:
    int max, count;
    string id;
};

class Inventory {
  public:
    Inventory(int Max) {
      max = Max;
      items = new Item[Max];
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
    void info() {
      printf("inventory(%i):\n", max);
      for (int i = 0; i < max; i++) {
        printf("%i. ", i + 1);
        string slot_id = items[i].getId();
        if (slot_id == "") {
          printf("empty\n");
        } else {
          printf("%s x%i/%i\n", slot_id.c_str(), items[i].getCount(), items[i].getMax());
        }
      }
    }
  private:
    int max;
    Item *items;
};

int main() {
  Inventory inv(10);
  Item apple("apple", 8);
  Item wood("wood", 16);
  
  inv.add(apple, 22);
  inv.add(wood, 62);
  inv.add(apple, 12);
  inv.add(wood, 15);
  inv.info();  
}
