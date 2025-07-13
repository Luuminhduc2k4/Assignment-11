#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    virtual std::string accessLevel() const;
    virtual ~User() = default;
};

#endif
