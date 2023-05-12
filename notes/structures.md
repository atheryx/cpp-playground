# Structures

- User defined data type in C++ to group items of different types.

- It can contain:
    - Data members
    - Member functions

- To access the structure members, we need to create a `structure variable`.

    Method 1:
    ```cpp
    struct Entity {
        // code here
    } e1;
    ```

    Method 2:
    ```cpp
    struct Entity {
        // code here
    }

    void Print() {
        struct Entity e1;
    }
    ```

<br><br>
- When data members are defined inside struct, no memory is allocated. <b>It happends only when we create a </b>`struct variable`.

- We can initialize members using curly braces:
    ```cpp
    class Entity {
        int X, Y;
    }

    int main() 
    {
        struct Entity e1 = {1, 2};
    }
    ```
    Here, `X = 1` and `Y = 2`

- To access the data members, we need to use the `dot operator` (`.`).
    ```
    e1.X
    ```
---

## Structures and Classes


Structure members are `public` by default and,<br>

Class members are `private` by default.