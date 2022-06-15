# Examenvragen Programmeren voor Multimeadia 2022

## Bits tellen

### Vraag 1

What is the minimal amount of storage bits needed to store the grades of 150 students?

```
math.ceil(math.log2(21) * 150) = ...
```

### Vraag 2

How many bits are minimally required to store 950 student ids?
A student id starts with either r or s and is then followed by 7 decimal digits.

```
math.ceil(math.log2(2*(10**7)) * 150) = ...
```

### Vraag 3

Your website demands its users have passwords exactly 10 characters long. Only lowercase and uppercase letters are allowed. You have 450 users.

How many bits do you minimally require to store all the users' passwords?

```
math.ceil(math.log2(52**10) * 450) = ...
```

### Vraag 4

How many bits are minimally necessary to store 800 times of day up to the second?

```
math.ceil(math.log2(86400) * 800) = ...
```

### Vraag 5

You're a bank. Each of your customers has a bank card with a 4 digit PIN code. You have 4500 customers.

How much storage do you minimally need to store all these PIN codes?

```
math.ceil(math.log2(2*(10**4)) * 4500) = ...
```

### Vraag 6

What is the minimal number of bits required to store 500 birthdays?

```
math.ceil(math.log2(366) * 500) = ...
```

## Bitwise operator

### Vraag 1
	
Fill in a bitwise operator and an operand so as to make the following expression true:

0x12345678 `|` 0x `C00000` == 0x12F45678

### Vraag 2
	
Fill in a bitwise operator and an operand so as to make the following expression true:

0x12345678 `&` 0x `8` == 0x00000008

### Vraag 3
	
Fill in a bitwise operator and an operand so as to make the following expression true:

0x12345678 `|` 0x `7` == 0x1234567F

### Vraag 4
	
Fill in a bitwise operator and an operand so as to make the following expression true:

0x12345678 `&` 0x `600` == 0x00000600


### Vraag 5
	
Fill in a bitwise operator and an operand so as to make the following expression true:

0x12345678 `<<` 0x `8` == 0x34567800

### Vraag 6
	
Fill in a bitwise operator and an operand so as to make the following expression true:

0x12345678 `&` 0x `2000000` == 0x02000000

### Vraag 7
	
Fill in a bitwise operator and an operand so as to make the following expression true:

0x12345678 `&` 0x `10000000` == 0x10000000

### Vraag 8
	
Fill in a bitwise operator and an operand so as to make the following expression true:

0x12345678 `>>` 0x`4` == 0x01234567


## Types

### Vraag 1
![type1](/img/type1.png)

Antwoord: `int*`
### Vraag 2
![type2](/img/type2.png)

Antwoord: `int`
### Vraag 3
![type3](/img/type3.png)

Antwoord: `int**`
### Vraag 4
![type4](/img/type4.png)

Antwoord: `int*`
### Vraag 5
![type5](/img/type5.png)

Antwoord: `int`
### Vraag 6
![type6](/img/type6.png)

Antwoord: `int***`
### Vraag 7
![type7](/img/type7.png)

Antwoord: `char*`
### Vraag 8
![type8](/img/type8.png)        

Antwoord: `char`
### Vraag 9
![type9](/img/type9.png)

Antwoord: `char**`
### Vraag 10
![type10](/img/type10.png)

Antwoord: `char*`
### Vraag 11
![type11](/img/type11.png)

Antwoord: `char`
### Vraag 12
![type12](/img/type12.png)

Antwoord: `char***`
### Vraag 13
![type13](/img/type13.png)

Antwoord: `bool*`
### Vraag 14
![type14](/img/type14.png)

Antwoord: `bool`
### Vraag 15
![type15](/img/type15.png)

Antwoord: `bool**`
### Vraag 16
![type16](/img/type16.png)

Antwoord: `bool*`
### Vraag 17
![type17](/img/type17.png)

Antwoord: ``
### Vraag 18
![type18](/img/type18.png)

Antwoord: `bool***`
### Vraag 19
![type19](/img/type19.png)

Antwoord: `double*`
### Vraag 20
![type20](/img/type20.png)

Antwoord: `double`

### Vraag 21
![type21](/img/type21.png)

Antwoord: `double**`

### Vraag 22
![type22](/img/type22.png)

Antwoord: `double*`

### Vraag 23
![type23](/img/type23.png)

Antwoord: `double`

### Vraag 24
![type24](/img/type24.png)

Antwoord: `double***`

## Classes

### Vraag 1
![classes1](/img/classes1.png)

Antwoord: `[a]c`
### Vraag 2
![classes2](/img/classes2.png)

Antwoord: `[]`
### Vraag 3
![classes3](/img/classes3.png)

Antwoord: `[aa]cc`
### Vraag 4
![classes4](/img/classes4.png)

Antwoord: `[a]c`
### Vraag 5
![classes5](/img/classes5.png)

Antwoord: `[ab]cc`
### Vraag 6
![classes6](/img/classes6.png)

Antwoord: `[a]`
### Vraag 7
![classes7](/img/classes7.png)

Antwoord: `[abc]c`
### Vraag 8
![classes8](/img/classes8.png)

Antwoord: `[a]c`
### Vraag 9
![classes9](/img/classes9.png)

Antwoord: `[a]c`
### Vraag 10
![classes10](/img/classes10.png)

Antwoord: `[aac]c`
### Vraag 11
![classes11](/img/classes11.png)

Antwoord: `[ac]`
### Vraag 12
![classes12](/img/classes12.png)

Antwoord: `[a]c`
### Vraag 13
![classes13](/img/classes13.png)

Antwoord: `[abc]c`
### Vraag 14
![classes14](/img/classes14.png)

Antwoord: `[abc]c`
### Vraag 15
![classes15](/img/classes15.png)

Antwoord: ``
### Vraag 16
![classes16](/img/classes16.png)

Antwoord: `[a]c`
### Vraag 17
![classes17](/img/classes17.png)

Antwoord: `[ac]`
### Vraag 18
![classes18](/img/classes18.png)

Antwoord: `[a]`
### Vraag 19
![classes19](/img/classes19.png)

Antwoord: `[ac]`
### Vraag 20
![classes20](/img/classes20.png)

Antwoord: `[a]`

## Code

### Vraag 1
![code1](/img/code1.png)

`a`
### Vraag 2
![code2](/img/code2.png)

`c`
### Vraag 3
![code3](/img/code3.png)

`b`
### Vraag 4
![code4](/img/code4.png)

`d`

### Vraag 4b
![code4b](/img/code4b.png)

`b`

### Vraag 5
![code5](/img/code5.png)

`e`

### Vraag 6
![code6](/img/code6.png)

`e`

### Vraag 6b
![code6b](/img/code6b.png)

`g`

### Vraag 7
![code7](/img/code7.png)

`f`

### Vraag 8
![code8](/img/code8.png)

`h`

## You are given

### Vraag 1

```cpp
void foo(const T& x);
std::unique_ptr<T> x;
```

`foo(*x)`

### Vraag 2

```cpp
void foo(std::unique_ptr<T> x);
const T* x;
```

`None of the above works, or it's impossible`

### Vraag 3

```cpp
void foo(std::unique_ptr<T> x);
const T& x;
```

`None of the above works, or it's impossible`

### Vraag 4

```cpp
void foo(T* x);
const T& x;
```

`None of the above works, or it's impossible`

### Vraag 5

```cpp
void foo(T x);
const T x;
```

`foo(x)`

### Vraag 6

```cpp
void foo(T& x);
T* x;
```

`foo(*x)`

### Vraag 7

```cpp
void foo(T x);
std::unique_ptr<T> x;
```

`foo(*x)`

### Vraag 8

```cpp
void foo(T x);
T* x;
```

`foo(*x)`

### Vraag 9

```cpp
void foo(const T* x);
const T* x;
```

`foo(x)`

### Vraag 10

```cpp
void foo(T& x);
std::shared_ptr<T> x;
```

`foo(*x)`

### Vraag 11

```cpp
void foo(const T& x);
T& x;
```

`foo(x)`

### Vraag 12

```cpp
void foo(T* x);
std::shared_ptr<T> x;
```

`foo(&*x)`

### Vraag 13

```cpp
void foo(const T& x);
const T x;
```

`foo(x)`

### Vraag 14

```cpp
void foo(T* x);
std::unique_ptr<T> x;
```

`foo(&*x)`

### Vraag 15

```cpp
void foo(const T& x);
const T* x;
```

`antwoord`

### Vraag 16

```cpp
void foo(T x);
std::shared_ptr<T> x;
```

`foo(*x)`

### Vraag 17

```cpp
void foo(std::unique_ptr<T> x);
T x;
```

`antwoord`

### Vraag 18

```cpp
void foo(const T* x);
T& x;
```

`antwoord`

### Vraag 19

```cpp
void foo(std::unique_ptr<T> x);
T& x;
```

`antwoord`

### Vraag 20

```cpp
void foo(const std::shared_ptr<T> x);
const T x;
```

`antwoord`

### Vraag 21

```cpp
void foo(const T x);
T x;
```

`antwoord`

### Vraag 22

```cpp
void foo(const std::unique_ptr<T> x);
const T x;
```

`None of the above works, or it's impossible`

### Vraag 23

```cpp
void foo(T x);
const T* x;
```

`foo(*x)`

### Vraag 24

```cpp
void foo(T x);
const T* x;
```

`foo(x)`

### Vraag 25

```cpp
void foo(const T& x);
T* x;
```

`foo(*x)`

### Vraag 26

```cpp
void foo(T* x);
T& x;
```

`foo(&x)`

### Vraag 27

```cpp
void foo(const T& x);
const T& x;
```

`foo(x)`

### Vraag 28

```cpp
void foo(T* x);
T& x;
```

`foo(*x)`

### Vraag 29

```cpp
void foo(T& x);
const T& x;
```

`None of the above works, or it's impossible`


## Pass function

### Vraag 1
You need to pass a int to a function. The function does not need to store it somewhere, but it does need to modify its value.

How should you best pass the parameter?

`T*`

### Vraag 2
You need to pass a std::vector<int> to a function. The function does not need to store it somewhere, nor does it want to modify it.

How should you best pass the parameter?

`antwoord`

### Vraag 3
You are writing a function that takes a std::vector<bool> and negates all bools in the vector.

How do you best pass this parameter?

`antwoord`

### Vraag 4
You are dealing with a class hierarchy of shapes, with abstract supertype Shape. A function needs to receive a shape but will not modify it in any way. The function does also not need to store the shape for layer.

How should you best pass the parameter?
 
`const T&`

### Vraag 5
You need to pass a bool to a function. The function does not need to store it somewhere, nor does it require write access.

How should you best pass the parameter?

`T`

### Vraag 6
You are keeping a central Log object, which is used all over your codebase to write diagnostic messages to.

How should you best pass the parameter?

`antwoord`

### Vraag 7
You are writing a templated function called contains that checks if some value x is an element of some vector<T>.

How should you best pass the parameter?

`antwoord`

### Vraag 8
You are writing a function that takes a std::vector<double> and removes all negative values from the vector.

How should you best pass the parameter?

`antwoord`

### Vraag 9
You are creating a templated collection class (such as std::vector<T>). The add method takes an element and copies it to its internal data structure.

How should you best pass the parameter?

`antwoord`

### Vraag 10
You create your own version of std::vector<T>. Internally, you rely on an array in which you store your data.

How should you best pass the parameter?

`antwoord`

### Vraag 11
You are writing a function with type parameter T. The function expects a value of type T, but only for reading purposes. The function does not store the value for later use.

How should you best pass the parameter?

`antwoord`

### Vraag 12
You need to pass a std::vector<double> to a function. The function takes over full ownership.

How should you best pass the parameter?

`unique_ptr<T>`

### Vraag 13
You need to pass a std::vector<int> to a function. The function does not need to store it somewhere, but it wishes to modify its contents.

How should you best pass the parameter?

`antwoord`

### Vraag 14
You are writing a function that takes a std::vector<int> and returns the index of the largest element.

How should you best pass the parameter?

`const T&`

### Vraag 15
You are writing a function selectYoungerThan that takes a std::vector<Person*> and an age.

How should you best pass the parameter?

`const T&` / `T`

### Vraag 15
You are creating a chess application. Pieces are represented by a Piece class, and each Piece object keeps track of an Image object that represents the piece visually. The same Image object is reused for pieces of the same type, e.g., all pawns use the same Image.

How should you best pass the parameter?

`shared_ptr<T>`

	
### Vraag 16
You need to pass a std::vector<double> to a function. The function stores it somewhere for later use and the same vector will still also be kept track of in other parts of the code.

How should you best pass the parameter?

`shared_ptr<T>`


## Reverse
You are creating a function that reverses a std::vector<T> in place.

Select all signatures that allow this functionality to be implemented.

Options (select correct)

```	
void reverse(std::vector<T>& xs)	
void reverse(const std::vector<T>* xs)
void reverse(std::vector<T>* xs)	
void reverse(std::shared_ptr<T> xs)	
void reverse(const std::vector<T>& xs)		
void reverse(std::vector<T> xs)		
void reverse(std::unique_ptr<T> xs)
```


You're making a game with different kinds of units (tanks, infantry, ...). The units are implemented as a class hierarchy with supertype Unit. You are writing a function render that draws the unit to the screen. No changes need to be made to the Unit object.

```	
void render(Unit)		
void render(Unit&)	
void render(std::unique_ptr<Unit>)	
void render(const Unit*)		
void render(std::shared_ptr<Unit>)		
void render(const Unit&)		
void render(Unit*)
```

You are creating a function count that counts the number of elements in std::vector<T>.

correct items: (everything except unique_ptr)

```	
int count(std::vector<T>)		
int count(std::unique_ptr<std::vector<T>>)		
int count(const std::vector<T>&)	
int count(std::shared_ptr<std::vector<T>>)		
int count(std::vector<T>*)	
int count(std::vector<T>&)
```

You have a class hierarchy of shapes with abstract supertype Shape. You are writing a function clear_color that takes a shape and changes its color to transparent.
Select all signatures that allow this functionality to be implemented.
Selected Answers:void clear_color(Shape)


correct:
```
Shape*
Shape&
shared_ptr
```

