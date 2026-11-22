# Day 2 – Constructors and Class Methods in C++

## 1. Constructors

### What is a Constructor?

A constructor is a special member function of a class that is automatically called when an object is created.

It is mainly used to initialize the data members of a class.

### Rules of Constructors

1. Constructor name must be the same as the class name.
2. It does not have any return type, not even `void`.
3. It is automatically called when an object is created.
4. It can accept parameters.
5. A class can have multiple constructors.

### Example: Default Constructor

A default constructor is a constructor that does not take any arguments.

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student() {
        name = "Alekya";
        age = 20;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.display();

    return 0;
}
```

**Output:**
```text
Name: Alekya
Age: 20
```

**Explanation:**

- `Student()` is the constructor.
- `Student s1` creates an object.
- The constructor is automatically called.
- It initializes the name and age.

### Types of Constructors

**1. Default Constructor**

A constructor without parameters.

```cpp
Student() {
    age = 20;
}
```

**2. Parameterized Constructor**

A constructor that accepts parameters to initialize object values.

```cpp
Student(string n, int a) {
    name = n;
    age = a;
}
```

Example of creating an object:

```cpp
Student s1("Alekya", 20);
```

**3. Copy Constructor**

A constructor that creates a new object by copying the values of another object of the same class.

```cpp
Student(const Student &s) {
    name = s.name;
    age = s.age;
}
```

Example:

```cpp
Student s1("Alekya", 20);
Student s2 = s1;
```

Here, `s2` receives the values of `s1`.

---

## 2. Class Methods

### What are Class Methods?

Class methods are functions that are declared inside a class and are used to perform operations on the data members of that class.

They are also called **member functions**.

### Example

```cpp
#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breadth;

    void calculateArea() {
        int area = length * breadth;
        cout << "Area: " << area << endl;
    }
};

int main() {
    Rectangle r1;

    r1.length = 10;
    r1.breadth = 5;

    r1.calculateArea();

    return 0;
}
```

**Output:**
```text
Area: 50
```

**Explanation:**

- `calculateArea()` is a class method.
- It calculates the area of a rectangle.
- We call the method using the object name: `r1.calculateArea()`.

### Types of Class Methods

**1. Method defined inside the class**

The function is written directly inside the class.

```cpp
class Student {
public:
    void display() {
        cout << "Hello Student";
    }
};
```

**2. Method defined outside the class**

The function is declared inside the class and defined outside using the scope resolution operator `::`.

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    void display();
};

void Student::display() {
    cout << "Hello Student";
}

int main() {
    Student s1;
    s1.display();

    return 0;
}
```

Here, `Student::display()` means the `display()` function belongs to the `Student` class.

---

## 3. Difference Between Constructor and Class Method



---

## 4. Important Interview Questions

1. What is a constructor in C++?
2. Why does a constructor have no return type?
3. What is the difference between default and parameterized constructors?
4. What is a copy constructor?
5. Can a class have multiple constructors?
6. What is a member function?
7. What is the scope resolution operator (`::`)?
8. What is the difference between a constructor and a normal member function?

---

## 5. Key Points to Remember

- A constructor initializes an object.
- A constructor is called automatically.
- A class can have multiple constructors (constructor overloading).
- Class methods perform operations on class data.
- Methods can be defined inside or outside a class.
- The `::` operator is used to define a class method outside the class.

**Day 2 Learning Goal:** Understand how constructors initialize objects and how class methods perform operations on object data.