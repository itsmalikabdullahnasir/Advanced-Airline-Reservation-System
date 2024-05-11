//
// Created by malik on 11/05/2024.
//

#ifndef TEST_2_TEST_H
#define TEST_2_TEST_H

#endif //TEST_2_TEST_H
#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class User {
public:

    void writeCredentials(const std::string& username, const std::string& password) {
        std::ofstream file("credentials.txt");
        if (!file) {
            std::cerr << "Unable to open file for writing.\n";
            return;
        }

        file << username << "\n" << password << "\n";
        file.close();
    }

    bool readCredentials() {
        std::ifstream file("credentials.txt");
        if (!file) {
            std::cerr << "Unable to open file for reading.\n";
            return false;
        }

        std::getline(file, username);
        std::getline(file, password);

        file.close();
        return true;
    }

    bool Login(const std::string& username, const std::string& password) {
        return this->username == username && this->password == password;
    }

private:
    std::string username;
    std::string password;
};//
// Created by malik on 11/05/2024.
//

#ifndef CLION_VERSION_CREDENTIAL_H
#define CLION_VERSION_CREDENTIAL_H

#endif //CLION_VERSION_CREDENTIAL_H
