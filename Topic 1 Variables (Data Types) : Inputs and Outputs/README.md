 # Topic 1: Variables (Data Types) / Inputs and Outputs
 
---

## Topic Chapter 1-1: Variables

**Variables** are used to store values in memory locations.
 
Variable Declaration can Identify a **Type**, **Name**, and **Value**.

Variable Names are called an **Identifier**.

You can **Define** Variables and **Initialize** them.

Definition Example:
```cpp
int first;
int second;
```

Initialize Example:
```cpp
int first = 1;
int second = 2;
```
   - Naming an Identifier has its own **rules**.
      - Must Start with a Letter or an underscore ' _ '.
      - Only contain letters, digits, and underscores.
      - Must not be reserved words like 'int', 'double, etc.
 
When Choosing an Identifier Name, consider how it describes its content.

   - Before use in programs, variables must be declared.
      - Variables 'can' be initialized at the declaration; Otherwise, the data within that Variable will contain garbage.

Multiple Variables can be Declared and Initialized under one Statement.

Multi-Variable Example:
```cpp
int x = 1, y = 2, z;
```

---

## Topic Chapter 1-2: Constants

The **`const`** keyword keeps the value in the Variable **Constant** throughout the program; the value within the Variable cannot be modified after it is initialized.

`const` Example:
```cpp
const int first = 1;     // Makes sure that The Variable 'first' has a Constant Value of 1.
```

---

## Topic Chapter 1-3: Data Types

**Integers** are **Whole Numbers**.

Integers Examples:
```
-1, 0, 4, 9
```

Data Types and Their Sizes:
- `int` - 4 bytes
- `short` - 2 bytes
- `long` - 4 bytes (8 bytes on 64-bit Machines)
- `long long` - 8 bytes
- `float` - 4 bytes
- `double` - 8 bytes
- `long double` - 10 or 16 bytes 

- `unsigned` - used for positive integers

`double` and `long double` provide more floating data.

What Identifies as a **Real Numbers**:
```
3.45
3
-1.3
4.5e3 or -4.5e-3 (Scientific Notation)
```

Characters:
- `char` - 1 byte
  - Characters are surrounded by single quotes '  ' : ``'A'``, ``'6'``

Boolean:
- `bool` - 1 byte
  - **Values** of **True** or **False** (1, 0)

Strings:
Strings are a group of characters.
strings constants are surrounded by doubles quotes: ``"Hello World";``


---

## Topic Chapter 1-4: Strings

`string` is a class, different from the types already mentioned.
- Uses Double Quotes (`" "`) to store into a string variable.
- Must **need** the ``#include <string>`` directive.

`string` Example:
```ccp
string name = "John";
name = name + " Doe";
```

Output:
```ccp
John Doe
```

---

**String Functions**
- The `.length()` function returns the length of the string.
- The `.substr(pos, len)` function returns the string from the start of the position `pos` through the length `len` substring.

`.length()` Example:
```ccp
string name = "John Doe";
name.length();
```

Output:
```
8
```

`.substr()` Example:
```ccp
string sentence = "Hello, World!";
string sub = sentence.substr(7, 5);
```

Output:
```ccp
World
```

When `len` is omitted, the rest of the string returns.

Example:
```ccp
cout << sentence.substr(0, 5) << endl;
cout << next.substr(7) << endl;
```

Output:
```ccp
Hello
World!
```


---

## Topic Chapter 1-5: Program Components

- Comments

`/* Multi-line Comments */`

`/** Doxygen Format */`

`// Comment at the end of the line.`

`/// Doxygen Format`

- Compiler Directives

`#include <iostream>`

`using namespace std;`

- Main Program
```ccp
int main()
{

return 0;
}
```

- Reminder:
  - All C++ Lines ends with a ";".


---

## Topic Chapter 1-6: Input / Ouput














<div align="center">
 D O N E
</div>
