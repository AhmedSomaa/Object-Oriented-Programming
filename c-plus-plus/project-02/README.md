# Project 2

> 🚘 A Simple C++ Object-Oriented project that implements a Car Class. The class attributes and behaviors are presented in the class UML diagram.

`Class UML Diagram`

![Car Class UML](../_images/project-02-uml.svg)

___

## Learn in This Project

> Classes have special methods called __constructors__.

`💡 Constructor`

- A __constructor__ is a _method_ that is _automatically_ called when an object is created.

- Constructors typically initialize an object attributes and perform other object initialization tasks.

- Constructors are used to perform operations at the time an object is created.

> Constructors have a few special properties that set them apart from normal methods.

- They have the same name as the class.

- The have no return type (not even _void_).

- They may not return any values.

- They are typically _public_.

`💡 Initialization List`

- Initialization List is used in initializing the data members of a class. The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon.

> Initialization list is more efficient in initializing class data members.

- Initialization lists allow you to choose which constructor is called and what arguments that constructor receives.

- If you have a reference or a const field, or if one of the classes used does not have a default constructor, you must use an initialization list.

`💡 Destructor`

- A __destructor__ is a special method that is _automatically_ called when an object life time is ended.

- Like constructors, destructors don't have a return value.

- The most common use of destructors is to deallocate memory that was allocated for the object by the constructor.


---
## 🔖 Material

- [Understanding Initialization Lists in C++.](https://www.cprogramming.com/tutorial/initialization-lists-c++.html)