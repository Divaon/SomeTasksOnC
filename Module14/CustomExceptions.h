#pragma once
#include <exception>

using namespace std;

class InvalidLogArgument : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid Log Argument";
    }
};

class InvalidRadiusArgument : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid Radius Argument";
    }
};

