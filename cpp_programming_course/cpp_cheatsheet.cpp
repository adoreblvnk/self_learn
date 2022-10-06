#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cout, std::endl, std::string, std::vector, std::map;

// overloads operator << to print formatted vectors.
template <typename T>
std::ostream& operator<<(std::ostream& os, const vector<T> vec) {
    os << "[";
    if (vec.empty()) {
        return os << "]";
    }
    for (int i{0}; i < vec.size(); i++) {
        os << vec.at(i);
        if (i != vec.size() - 1) {
            os << ", ";
        }
    }
    return os << "]";
}

// overloads operator << to print formatted maps.
template <typename T, typename T1>
std::ostream& operator<<(std::ostream& os, const map<T, T1> dict) {
    os << "{";
    if (dict.empty()) {
        return os << "}";
    }
    int i{0};
    for (auto& [key, value] : dict) {
        os << key << ": " << value;
        if (i < dict.size() - 1) {
            os << ", ";
        }
        i++;
    }
    return os << "}";
}

int main() {
    // C++ Cheatsheet

    // Data Types
    cout << "-----Data Types-----" << endl << endl;

    // Integer
    int number{3};
    cout << "integer: " << number << endl;

    // Float (Double)
    double pi{3.1415};
    cout << "double: " << pi << endl;

    // Boolean
    bool yes{true};
    cout << "boolean: " << yes << endl;

    // String
    string name{"adore_blvnk"};
    cout << "string: " << name << endl << endl;

    // List (Vector)
    vector<string> fruits{"apple", "banana", "avocado"};
    cout << "vector: " << fruits << endl;
    fruits.at(1) = "lemon";
    cout << "modifying element: " << fruits << endl;
    fruits.insert(fruits.begin(), "apple");
    cout << "insert from start: " << fruits << endl;
    fruits.insert(fruits.end() - 1, "pear");
    cout << "insert from end: " << fruits << endl;
    fruits.erase(fruits.begin() + 3);
    cout << "erase element: " << fruits << endl;
    reverse(fruits.begin(), fruits.end());
    cout << "reverse: " << fruits << endl;
    cout << "count for apple: " << count(fruits.begin(), fruits.end(), "apple") << endl << endl;

    // Map
    map<string, int> cookie_jar{{"chocolate chip", 12}, {"peanut butter", 1}, {"almonds", 4}};
    cout << "map: " << cookie_jar << endl;
    cookie_jar["chocolate chip"] = 10;
    cout << "update value: " << cookie_jar << endl;
    cookie_jar.insert({"oatmeal", 3});
    cout << "adding element: " << cookie_jar << endl;
    cookie_jar.erase("peanut butter");
    cout << "erasing element: " << cookie_jar << endl;

    return 0;
}