#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "User.h"

class Employee : public User {
public:
    std::string accessLevel() const override;
};

#endif
