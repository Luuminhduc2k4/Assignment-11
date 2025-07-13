#include <iostream>
#include "InventoryManager.h"

int main() {
    InventoryManager manager;
    std::cout << "Access Level: " << manager.accessLevel() << std::endl;
    return 0;
}
