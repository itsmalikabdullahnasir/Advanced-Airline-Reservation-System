//
// Created by malik on 11/05/2024.
//

#ifndef CLION_VERSION_STAFF_H
#define CLION_VERSION_STAFF_H

#endif //CLION_VERSION_STAFF_H
#include <iostream>
#include <vector>
#include <string>
//#include <fstream>

class Staff {
private:
    int id;
    std::string name;
    std::string position; // e.g. pilot, flight attendant, ground crew, administrative staff
    std::string address;
    std::string contactNumber;

public:
    // Constructor
    Staff(int id, std::string name, std::string position, std::string address, std::string contactNumber) {
        this->id = id;
        this->name = name;
        this->position = position;
        this->address = address;
        this->contactNumber = contactNumber;
    }

    // Getters
    int getId() { return id; }
    std::string getName() { return name; }
    std::string getPosition() { return position; }
    std::string getAddress() { return address; }
    std::string getContactNumber() { return contactNumber; }

    // Setters
    void setId(int id) { this->id = id; }
    void setName(std::string name) { this->name = name; }
    void setPosition(std::string position) { this->position = position; }
    void setAddress(std::string address) { this->address = address; }
    void setContactNumber(std::string contactNumber) { this->contactNumber = contactNumber; }

    // Other methods to manage staff information can be added here
};