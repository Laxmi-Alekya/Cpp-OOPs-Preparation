# Day 1 – Classes and Objects in C++

## 1. What is OOP?

OOP stands for Object-Oriented Programming.

It is a programming approach based on classes and objects. It helps us organize code, reuse code, and represent real-world entities.

## 2. What is a Class?

A class is a user-defined data type that acts as a blueprint for creating objects.

It contains:
- Data members (variables)
- Member functions (functions)

### Syntax

```cpp
class ClassName {
public:
    // Data members
    // Member functions
};



Example:

```cpp
class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << " " << age;
    }
};
```

Here:
- `Student` is the class name.
- `name` and `age` are data members.
- `display()` is a member function.
- `public` is an access specifier.

## 3. What is an Object?

An object is an instance of a class.

We create objects to access the data members and member functions of a class.

### Syntax

ClassName objectName;

Example:


Student s1;


Here, `s1` is an object of the `Student` class.

## 4. How to Access Class Members?

We use the dot (`.`) operator to access public data members and member functions.

Example:

```cpp
Student s1;

s1.name = "Alekya";
s1.age = 20;

s1.display();
```

## 5. Creating Multiple Objects

We can create multiple objects from the same class.

Example:

```cpp
Student s1, s2;

s1.name = "Alekya";
s1.age = 20;

s2.name = "Rahul";
s2.age = 21;
```

Important:
- Both objects belong to the same class.
- Each object has its own copy of non-static data members.
- Changing one object's data does not change the other object's data.

## 6. Real-World Examples

| Class | Objects |
|---|---|
| Student | Alekya, Rahul |
| Car | BMW, Audi |
| Employee | Employee 1, Employee 2 |
| BankAccount | Account 1, Account 2 |

## 7. Important Points

1. A class is a blueprint.
2. An object is an instance of a class.
3. Variables inside a class are called data members.
4. Functions inside a class are called member functions.
5. The dot operator is used to access public members.
6. We can create multiple objects from one class.
7. A class definition ends with a semicolon.

## 8. Interview Questions

**Q1. What is a class?**

A class is a user-defined data type that acts as a blueprint for creating objects.

**Q2. What is an object?**

An object is an instance of a class.

**Q3. What is the difference between a class and an object?**

A class is a blueprint, whereas an object is an instance created using that blueprint.

**Q4. Can we create multiple objects from one class?**

Yes, we can create multiple objects from a single class.

**Q5. What is a member function?**

A function declared inside a class is called a member function.

**Q6. What is the dot operator?**

The dot operator (`.`) is used to access public members of an object.

## 9. Day 1 Practice

 Create a Student class.
 Create two Student objects.
 Create a Rectangle class and calculate its area.
 Create a BankAccount class and display account details.

## Day 1 Status

Completed: Classes and Objects (C++)

Next Topic: Access Specifiers