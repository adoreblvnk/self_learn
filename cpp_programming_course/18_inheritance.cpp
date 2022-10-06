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
    string first_name{"first"};
    string last_name{"last"};

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

    // 10 Copy Constructors with Inheritance
    // notice how copy_construct copies from niglet.
    Black copy_construct(niglet);
    cout << copy_construct << endl;
    return 0;
}