# Exception Handling

Exception handling is build on 3 main keywords:

- `try`: The code we want to moniter for exceptions is placed in the try block
- `throw`: Exceptions in try block are thrown using this
- `catch`: Used to catch exceptions


General form:

```cpp
try {
    // code here
    throw <something>;

} catch(<arg-list>) {
    // do stuff
}
```
<br>

`NOTE`: 
- A Single try block can have multiple catch statements each with different argument list, <br>and it can catch user defined types (`class`), in addition to pre-defined types (`int`). 


- When there is no catch block for a particular throw, program terminates. <br>It calls the standark library `terminate` function, which by default calls the `abort()` function.

--- 

Example:

```cpp
#include <iostream>
#include <exception>

int main() {
    try {
        std::cout << "Inside try block" << std::endl;
        throw 100;
        // everything below in try block won't execute

    } catch (int i) {
        std::cout << "Caught exception: " << i << std::endl;
    }

    std::cout << "This executes" << std::endll;

    return 0;
}
```
---

### Handling Derived Class Exceptions:

Ordering catch statements is important while dealing with base and derived classes! <br> 

A thrown `derived class` can be caught by a `base class`. To prevent this, add the `derived class` catch before the `base class`.

---

### Catching all types

Instead of defining a `catch` statments for all the types, we can have one `catch` statement which will work for all types.

```cpp
catch(...) {
    // code here
}
```

Note: This must be placed as the last `catch` block.
<br><br>

Example: 
```cpp
try {
    throw 8.79;
} catch (int i) {
    std::cout << "Caught exception: " << i << std::endl;
} catch (...) {
    std::cout << "Caught unknown exception!" << std::endl;
}
```

Output: 
```
Caught unknown exception
```

---

### Terminate and Unexpected

- `terminate`
    - Called when no matching `catch` is found.
    - Program tries to re-throw an exception when no original exception was thrown 

    By default terminate called `abort()`

<br>

- `unexpected`

    - When function tries to `throw` an exception that is not allowed by its `throw` list.

    By default, unexpected calls `terminate()`





