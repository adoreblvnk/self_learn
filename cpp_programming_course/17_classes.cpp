#include <iostream>
#include <string>

#include "17_classes/cylinder.h"
using std::cout, std::endl;

// 10 The This Pointer
class Dog {
   private:
    std::string name;
    std::string breed;
    int* age{nullptr};

   public:
    Dog() = default;
    Dog(std::string_view name, std::string_view breed, int age_param) {
        this->name = name;
        this->breed = breed;
        age = new int;
        *age = age_param;
        cout << "constructor called for " << this->name << " at " << this << "." << endl;
    }
    ~Dog() {
        cout << "destructor called for " << this->name << " at " << this << "." << endl;
        delete age;
    }
    Dog& set_dog_name(std::string_view name) {
        this->name = name;
        return *this;
    }
    Dog& set_dog_breed(std::string_view breed) {
        this->breed = breed;
        return *this;
    }
    Dog& set_dog_age(int age) {
        *(this->age) = age;
        return *this;
    }
    void print_dog() {
        cout << "Dog {name: " << name << ", breed: " << breed << ", age: " << *age << "}" << endl;
    }
};

// 11 Struct
struct Point {
    double x;
    double y;
};

void print_point(Point point) {
    cout << "Point(x: " << point.x << ", y: " << point.y << ")" << endl;
};

int main() {
    // 17 Classes

    // 2 Your First C++ Class
    Cylinder default_c;
    cout << "default cylinder volume: " << default_c.volume() << endl;

    // 3 Constructors
    // constructors allows us to initialise a class with different params.
    Cylinder custom_c(1.0, 2.0, "green");
    cout << "custom cylinder volume: " << custom_c.volume() << endl;

    // 5 Setters & Getters
    cout << "custom cylinder radius: " << custom_c.get_radius() << endl;
    custom_c.set_height(9.5);
    cout << "new custom cylinder volume after modifying height: " << custom_c.volume() << endl;

    // 7 Managing Class Objects Through Pointers
    Cylinder* heap_cylinder = new Cylinder(11, 20, "yellow");
    // use arrow operator to access objects / methods of classes instantiated via classes.
    cout << "volume of heap cylinder: " << heap_cylinder->volume() << endl;

    // 8 Destructors
    // destructors are automatically called when a class is deleted to help properly delete the
    // class (free up memory). destructors have no parameters. NOTE: destructors are also called for
    // other reasons.
    Cylinder* demo_destructor = new Cylinder(2.0, 3.1, "blue");
    delete demo_destructor;

    // 9 Constructor & Destructor Call Order
    // construct order:
    //   default - black
    //   custom - green
    //   heap - yellow
    //   demo destructor - blue
    // destruct order:
    //   demo destructor - blue
    //   custom - green
    //   default - black
    // construct & destruct order are likened to a stack, hence destruct order is in reverse.

    // 10 The This Pointer
    cout << endl;
    Dog retriever("goldie", "retriever", 3);
    retriever.print_dog();

    // 11 Struct
    Point point_1(32, 13);
    print_point(point_1);
    point_1.x = 19.8;
    print_point(point_1);

    // 12 Size of Class Objects
    Dog size_dog;
    cout << "sizeof(std::string): " << sizeof(std::string) << endl;
    // NOTE: use size_t to measure the size of any int, as int size varies on 32 bit & 64 bit OSes.
    cout << "sizeof(size_t): " << sizeof(size_t) << endl;
    cout << "sizeof(size_dog) is std::string + std::string + size_t: " << sizeof(size_dog) << endl;

    return 0;
}
