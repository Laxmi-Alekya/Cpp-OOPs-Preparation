# Encapsulation in C++

## 1. What is Encapsulation?

Encapsulation is an important concept of Object-Oriented Programming (OOP).

It means **wrapping data members and member functions together inside a single class**.

It also helps us protect data by restricting direct access to it.

Example: A Bank Account class contains:
- Account holder name
- Account balance
- Functions to deposit and withdraw money

## 2. Why do we need Encapsulation?

Suppose a bank account has a balance of ₹10,000.

If anyone can directly modify the balance, they might change it to a negative value.

Encapsulation helps prevent unwanted changes by making the balance private and allowing access through public functions.

## 3. Access Specifiers

Access specifiers control where class members can be accessed.

### a) Public
- Members can be accessed from anywhere through an object.
- Used for functions that should be available outside the class.

### b) Private
- Members can only be accessed inside the same class.
- Cannot be accessed directly using an object.
- Used for data hiding.

### c) Protected
- Members can be accessed inside the same class and its derived classes.
- Not directly accessible through an object.

## 4. Data Hiding

Data hiding means restricting direct access to the data members of a class.

We generally achieve it using the `private` access specifier.

Example:
```cpp
class Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    int getMarks() {
        return marks;
    }
};
```

Here:
- `marks` is private.
- `setMarks()` is used to assign a value.
- `getMarks()` is used to retrieve the value.

## 5. Getters and Setters

**Getter:** A function used to read or return a private data member.

**Setter:** A function used to update a private data member.

Example:
```cpp
class Student {
private:
    int age;

public:
    void setAge(int a) {
        if (a > 0) {
            age = a;
        }
    }

    int getAge() {
        return age;
    }
};
```

The setter checks that the age is positive before updating it.

## 6. Advantages of Encapsulation

1. Provides data security.
2. Supports data hiding.
3. Prevents unwanted modifications.
4. Makes code easier to maintain.
5. Gives controlled access to data.

## 7. Real-World Example

A bank account:
- Balance is private.
- Deposit function adds money.
- Withdraw function removes money.
- Display function shows the balance.

Users cannot directly modify the private balance.


## 8. Interview Questions

1. What is encapsulation?
2. What is data hiding?
3. What are access specifiers in C++?
4. What is the difference between private and protected?
5. What are getters and setters?
6. What are the advantages of encapsulation?
7. What is the difference between encapsulation and abstraction?
8. Can private members be accessed directly outside a class?