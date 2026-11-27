# Polymorphism in C++

## 1. What is Polymorphism?

Polymorphism is an important concept of Object-Oriented Programming.

The word polymorphism means **one name, many forms**.

It allows the same function or interface to behave differently depending on the object.

Example:
- Dog makes a barking sound.
- Cat makes a meowing sound.

Both use the same function name `sound()`, but behave differently.

## 2. Types of Polymorphism

There are two main types:

### 1. Compile-Time Polymorphism
The function to execute is decided during compilation.

Examples:
- Function overloading
- Operator overloading

### 2. Runtime Polymorphism
The function to execute is decided at runtime.

It is commonly achieved using:
- Inheritance
- Function overriding
- Virtual functions
- Base class pointers or references

## 3. Function Overriding

Function overriding occurs when a derived class provides its own implementation of a function already defined in the base class.

Example:
- Base class has `sound()`.
- Derived class overrides `sound()`.

## 4. Virtual Function

A virtual function is a member function declared using the `virtual` keyword in the base class.

It allows the derived class version of the function to be called through a base class pointer or reference.

Syntax:

```cpp
virtual void display() {
    // Base class implementation
}
```

## 5. Polymorphism Using Pointers

A base class pointer can store the address of a derived class object.

When a virtual function is called through that pointer, C++ executes the overridden function of the actual object.

Example:

```cpp
Animal* ptr;
Dog d;

ptr = &d;
ptr->sound();
```

Here:
- `Animal*` is a base class pointer.
- `&d` is the address of the Dog object.
- `ptr->sound()` calls the Dog version because sound() is virtual.

## 6. What is the Override Keyword?

The `override` keyword is used in a derived class function to indicate that it overrides a virtual function from the base class.

It helps the compiler detect mistakes in function overriding.

Example:

```cpp
void sound() override {
    cout << "Dog barks";
}
```

## 7. Advantages of Runtime Polymorphism

1. Provides flexibility.
2. Supports code reusability.
3. Makes programs easier to extend.
4. Allows different objects to respond differently to the same function call.

## 8. Important Points

- Runtime polymorphism uses virtual functions.
- It requires inheritance and function overriding.
- A base class pointer can point to a derived class object.
- The arrow operator `->` is used to access members through a pointer.
- Without virtual, a call through a base pointer to a non-virtual function uses the base class version.
- With virtual, the overridden function of the actual object is called.

## 9. Interview Questions

1. What is polymorphism?
2. What are the types of polymorphism?
3. What is runtime polymorphism?
4. What is a virtual function?
5. What is function overriding?
6. What is the use of the override keyword?
7. What is a base class pointer?
8. What is the difference between compile-time and runtime polymorphism?
9. What happens if we remove the virtual keyword?
10. Why do we use pointers in runtime polymorphism?