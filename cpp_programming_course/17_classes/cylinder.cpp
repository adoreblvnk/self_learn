#include "cylinder.h"

#include <cmath>
#include <iostream>
#include <string>

// 3 Constructors
Cylinder::Cylinder(double radius, double height, std::string colour) {
    // 10 The This Pointer
    this->radius = radius;
    this->height = height;
    this->colour = new std::string;
    *(this->colour) = colour;
    // 10 The This Pointer
    std::cout << "constructor called for colour " << *(this->colour) << " at " << this << std::endl;
}

// 8 Destructors
Cylinder::~Cylinder() {
    std::cout << "destructor called for colour " << *colour << std::endl;
    // deleting colour as it was instantiated as a heap object, so memory must be released.
    delete colour;
    colour = nullptr;
}

// 5 Setters & Getters
double Cylinder::get_radius() { return radius; }
double Cylinder::get_height() { return height; }
void Cylinder::set_radius(double radius) { this->radius = radius; }
void Cylinder::set_height(double height) { this->height = height; }

double Cylinder::volume() { return PI * std::pow(radius, 2) * height; }
