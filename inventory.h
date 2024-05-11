//
// Created by malik on 11/05/2024.
//

#ifndef CLION_VERSION_INVENTORY_H
#define CLION_VERSION_INVENTORY_H

#endif //CLION_VERSION_INVENTORY_H
#include <iostream>
#include <vector>
#include <string>
//#include <fstream>

class Inventory {
private:
    std::string aircraft;
    int seatingAvailability;
    std::string cateringServices;
    // Add other resources as needed

public:
    // Constructor
    Inventory(std::string aircraft, int seatingAvailability, std::string cateringServices) {
        this->aircraft = aircraft;
        this->seatingAvailability = seatingAvailability;
        this->cateringServices = cateringServices;
        // Initialize other resources as needed
    }

    // Getters
    std::string getAircraft() { return aircraft; }
    int getSeatingAvailability() { return seatingAvailability; }
    std::string getCateringServices() { return cateringServices; }
    // Add other getters as needed

    // Setters
    void setAircraft(std::string aircraft) { this->aircraft = aircraft; }
    void setSeatingAvailability(int seatingAvailability) { this->seatingAvailability = seatingAvailability; }
    void setCateringServices(std::string cateringServices) { this->cateringServices = cateringServices; }
    // Add other setters as needed

    // Other methods to manage inventory can be added here
};