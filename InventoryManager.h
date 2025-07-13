#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include "Employee.h"

class InventoryManager : public Employee {
public:
    std::string accessLevel() const override;
};

#endif
