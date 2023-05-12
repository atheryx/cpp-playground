# Constructors and Destructors

- [Constructor](#constructors)
- [Destructors](#destructors)

## Constructors

A special method which gets called automatically whenever a new instance is created of a class.<br>
It's main task is to initialize the objects of the class.

`Note`: If we dont specify a constructor, there is a `default constructor` which is invoked by the compiler.
<br>

This default constructor is equivalent to:
```cpp
class Entity {
	Entity() {
	}
};
```

<br>

We can tell the compiler to avoid the `default constructor` by adding this in the class definition: 
```cpp
class Entity {
public:
	Entity() = delete;
}
```
---

## Speciality of Constructors

- The name of the constructor is same as the class name.
- It's called a constructor since it constructs the data members.
- No statement is required to invoke it.
- <b> The constructor must be defined in the `public` section, or we cannot create instances of the class. </b>
- They don't have a return type.
- <b>They cannot be inherited.</b>
- <b>They cannot be virtual</b>
- <b>We cannot refer to their addr</b>

---

## Types of Constructors

- ### Default Constructor
	A constructor with no parameters/arguments.

Example:
```cpp
class Entity {
	int X, Y;
public:
	Entity() {
		X = 0;
		Y = 0;
	}
};
```
- ### Parameterized Constructor
	They take arguments.

Example:
```cpp
class Entity {
	int X, Y;
public:
	Entity(int a, int b) {
		X = a;
		Y = b;
	}
};
```


- ### Copy Constructors
	Initializing an object from an existing instance of the class.

Example:

```cpp
class Entity {
	int X, Y;
public:
	Entity(Entity &e) {
		X = e.X;
		Y = e.Y;
	}
};
```
---
`Note`: We can have a combination of multiple constructors in a single class.
<br>
<br>

## Destructors

Runs when an object is destroyed. It uninitializes the data members of the objects. <br>
It's name is a tilda (`~`) before the name of the class.

Example:
```cpp
class Entity {
public:
	~Entity();
}
```
<br>

It's applicable for both `stack` and `heap` based data members.
<br>

It is automatically called when the object needs to be destroyed, but we can also explicitly call the destructor function.

