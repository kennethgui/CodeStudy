/*
Author: Kenneth Guillont
Course: CSCI-136
Instructor: Brandon Foster
Assignment: Quiz 12
define a class Customer, constructor, paramererized constructor, getter and setter
*/

#include <iostream>
using namespace std;

class Customer {
private:
    string name;
    string unique_id;

public:

    Customer() {
        name = "";
        unique_id = "";
    }

    Customer(string name, string unique_id) {
        this->name = name;
        this->unique_id = unique_id;
    }

    string get_name() {
        return name;
    }

    string get_unique_id() {
        return unique_id;
    }

    void set_name(string name) {
        this->name = name;
    }

    void set_unique_id(string unique_id) {
        this->unique_id = unique_id;
    }
};