<div align="center">
    <h1>C++ Cheatsheet</h1> <!-- Title -->
    <p>
      Common C++ data types & operations. This cheatsheet details the quickest method to achieve the data types. Apologies for Python terminologies used.
    </p> <!-- Description -->
</div>

---

## About

**Integers**

```c++
int number{3};
```

**Float (Double)**

```c++
double pi{3.1415};
```

**Boolean**

```c++
bool yes{true};
```

**String**

```c++
string name{"adore_blvnk"};
```

**List (Vector)**

```c++
vector<string> fruits{"apple", "banana", "avocado"};
fruits.at(1) = "lemon";
fruits.insert(fruits.begin(), "apple");
fruits.insert(fruits.end() - 1, "pear");
fruits.erase(fruits.begin() + 3);
reverse(fruits.begin(), fruits.end());
int no_of_apples = count(fruits.begin(), fruits.end(), "apple");
```

**Map**

```c++
map<string, int> cookie_jar{{"chocolate chip", 12}, {"peanut butter", 1}, {"almonds", 4}};
cookie_jar["chocolate chip"] = 10;
cookie_jar.insert({"oatmeal", 3});
cookie_jar.erase("peanut butter");
```

## Source

[cpp_cheatsheet.cpp](./cpp_cheatsheet.cpp).

## Credits

- [blvnk](https://twitter.com/adore_blvnk)
