#ifndef CYLINDER_H
#define CYLINDER_H

#include <cmath>
#include <string>

#include "constants.h"

// 2 Your First C++ Class
class Cylinder {
   private:
    double radius{1.0};
    double height{3.0};
    std::string* colour{new std::string{"black"}};

   public:
    // 4 Defaulted Constructors
    Cylinder() = default;
    // 3 Constructors
    Cylinder(double radius, double height, std::string colour);
    // 8 Destructors
    ~Cylinder();
    // 5 Setters & Getters
    double get_radius();
    double get_height();
    void set_radius(double radius);
    void set_height(double height);
    double volume();
};

#endif
