//
// Created by malik on 11/05/2024.
//

#ifndef CLION_VERSION_REPORT_H
#define CLION_VERSION_REPORT_H

#endif //CLION_VERSION_REPORT_H
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>


// Assume these are data structures containing relevant data for generating reports
std::vector<double> revenueData = {10000.0, 15000.0, 12500.0, 18000.0};
std::unordered_map<std::string, int> passengerDemographics = {{"Male", 1000}, {"Female", 800}, {"Other", 200}};
std::vector<std::pair<std::string, double>> flightPerformanceData = {{"On-time", 0.85}, {"Delayed", 0.1}, {"Cancelled", 0.05}};
std::unordered_map<std::string, int> staffProductivity = {{"John", 100}, {"Jane", 90}, {"Bob", 85}};

class Report {
public:
    // Method to generate revenue report
    void generateRevenueReport() {
        double totalRevenue = 0.0;
        for (double revenue : revenueData) {
            totalRevenue += revenue;
        }
        std::cout << "Total Revenue: $" << totalRevenue << std::endl;
    }

    // Method to generate passenger demographics report
    void generatePassengerDemographicsReport() {
        std::cout << "Passenger Demographics:\n";
        for (const auto& entry : passengerDemographics) {
            std::cout << entry.first << ": " << entry.second << std::endl;
        }
    }

    // Method to generate flight performance report
    void generateFlightPerformanceReport() {
        std::cout << "Flight Performance:\n";
        for (const auto& entry : flightPerformanceData) {
            std::cout << entry.first << ": " << entry.second * 100 << "%" << std::endl;
        }
    }

    // Method to generate staff productivity report
    void generateStaffProductivityReport() {
        std::cout << "Staff Productivity:\n";
        for (const auto& entry : staffProductivity) {
            std::cout << entry.first << ": " << entry.second << " tasks completed" << std::endl;
        }
    }

    // Add other methods to generate reports as needed

};