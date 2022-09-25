#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

// 2 Your First Try on Inheritance
class Person {
    friend std::ostream& operator<<(std::ostream& out, Person& person) {
        out << "Person{first_name: " << person.first_name << ", last_name: " << person.last_name
            << "}";
        return out;
    }

   private:
    string first_name;
    string last_name;

   public:
    Person() = default;
    // NOTE: using intialiser lists instead of initialising in body. initialiser lists can only be
    // used for PODs, & not user-defined types.
    Person(string first_name, string last_name) : first_name(first_name), last_name(last_name) {}
    string get_first_name() { return first_name; }
    string get_last_name() { return last_name; }
    void set_first_name(string fn) { first_name = fn; }
    void set_last_name(string ln) { last_name = ln; }
};

// 2 Your First Try on Inheritance
// `public` is the base access specifier.
class Black : public Person {
    friend std::ostream& operator<<(std::ostream& out, Black& player) {
        out << "Black{first_name: " << player.get_first_name()
            << ", last_name: " << player.get_last_name() << ", robberies: " << player.robberies
            << "}";
        return out;
    }

   private:
    int robberies{0};

   public:
    Black() = default;
    Black(string first_name, string last_name, int robberies)
        : Person(first_name, last_name), robberies(robberies) {}
};

int main() {
    // 18 Inheritance

    // 9 Custom Constructors with Inheritance
    Black niglet("grage", "floyd", 12);
    cout << "niglet: " << niglet << endl;

    // 25:26:56 10 Copy Constructors With Inheritance

    // 25:51:53 Inheriting Base Constructors

    // 26:06:00 Inheritance With Destructors

    // 26:12:20 Reused Symbols In Inheritance
    return 0;
}