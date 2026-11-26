# Inheritance in C++

## 1. What is Inheritance?

It allows one class to acquire the properties and methods of another class.

It helps us reuse existing code instead of writing the same code again.

**Example:**
- Parent class: Vehicle
- Child class: Car

A Car can use the properties and methods of Vehicle.

## 2. Base Class and Derived Class

### Base Class
- The class whose properties and methods are inherited by another class.
- Also called the Parent Class.

### Derived Class
- The class that inherits properties and methods from another class.
- Also called the Child Class.

## 3. Syntax of Inheritance

```cpp
class Base {
    // Base class members
};

class Derived : access_specifier Base {
    // Derived class members
};
```

Example:

```cpp
class Animal {
public:
    void eat() {
        cout << "Animal eats";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks";
    }
};
```

Here, Animal is the base class and Dog is the derived class.

## 4. Types of Inheritance

### 1. Single Inheritance
One derived class inherits from one base class.

Example: A → B

### 2. Multilevel Inheritance
A class inherits from another derived class.

Example: A → B → C

### 3. Multiple Inheritance
One derived class inherits from more than one base class.

Example: A + B → C

### 4. Hierarchical Inheritance
Multiple derived classes inherit from one base class.

Example: A → B and A → C

### 5. Hybrid Inheritance
Combination of two or more types of inheritance.

## 5. Access Specifiers

C++ has three main access specifiers.

### Public
- Accessible from anywhere through an object, subject to the class's access rules.

### Private
- Accessible only inside the same class.
- Cannot be directly accessed by derived classes.

### Protected
- Accessible inside the same class and its derived classes.
- Cannot be directly accessed through an object.

## 6. Access Modes in Inheritance

The access mode controls how base class members are inherited.

| Base class member | Public inheritance | Protected inheritance | Private inheritance |
|---|---|---|---|
| Public | Public | Protected | Private |
| Protected | Protected | Protected | Private |
| Private | Not directly accessible | Not directly accessible | Not directly accessible |

**Important:** Private members of a base class are not directly accessible in the derived class, regardless of inheritance mode. They can still be accessed through suitable public or protected base class methods.

## 7. Advantages of Inheritance

1. Code reusability.
2. Reduces code duplication.
3. Makes programs easier to maintain.
4. Supports hierarchical classification.
5. Helps implement runtime polymorphism using virtual functions.

## 8. Difference Between Encapsulation and Inheritance

| Encapsulation | Inheritance |
|---|---|
| Wraps data and methods together. | Allows one class to inherit from another. |
| Focuses on data protection. | Focuses on code reusability. |
| Uses classes and access specifiers. | Uses base and derived classes. |

## 9. Interview Questions

1. What is inheritance?
2. What is a base class?
3. What is a derived class?
4. What are the five types of inheritance?
5. What is the difference between public and private inheritance?
6. Can a derived class access private members of a base class directly?
7. What is the use of protected access specifier?
8. What are the advantages of inheritance?
9. What is multiple inheritance?
10. What is hybrid inheritance?