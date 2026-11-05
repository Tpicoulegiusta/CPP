# C++ Modules

The ten C++ modules of the 42 curriculum, from first classes to templates and STL containers. Everything is written in **C++98** and compiled with `-Wall -Wextra -Werror -pedantic -std=c++98`.

![C++98](https://img.shields.io/badge/C++-98-00599C?logo=cplusplus&logoColor=white)

## Modules

| Module | Topics | Exercises |
|---|---|---|
| [CPP00](Cpp_00) | Namespaces, classes, member functions, I/O streams | Megaphone, PhoneBook |
| [CPP01](Cpp_01) | Memory allocation, pointers vs references, file streams | Zombie horde, `HumanA` / `HumanB` and `Weapon`, a `sed`-like string replacer, Harl with pointers to member functions |
| [CPP02](Cpp_02) | Orthodox Canonical Form, operator overloading | A fixed-point number class with comparison and arithmetic operators |
| [CPP03](Cpp_03) | Inheritance | `ClapTrap`, `ScavTrap`, `FragTrap` |
| [CPP04](Cpp_04) | Subtype polymorphism, abstract classes, deep copy | `Animal` / `Dog` / `Cat` with a `Brain`, abstract `AAnimal` |
| [CPP05](Cpp_05) | Exceptions | `Bureaucrat`, forms with grade checks, an `Intern` that creates forms |
| [CPP06](Cpp_06) | C++ casts | Scalar type converter, `Serializer` with `reinterpret_cast`, type identification with `dynamic_cast` |
| [CPP07](Cpp_07) | Function and class templates | `swap` / `min` / `max`, `iter`, a templated `Array<T>` |
| [CPP08](Cpp_08) | Templated containers, iterators, algorithms | `easyfind`, `Span`, an iterable `MutantStack` |
| [CPP09](Cpp_09) | STL containers | Bitcoin price lookup with `std::map`, an RPN calculator with `std::stack`, and **PmergeMe**: the Ford-Johnson merge-insertion sort on both `std::vector` and `std::deque` |

## Build and run

Each exercise has its own Makefile:

```bash
git clone https://github.com/Tpicoulegiusta/CPP.git
cd CPP/Cpp_09/ex01
make
./rpn "8 9 * 9 - 9 - 9 - 4 - 1 +"
```

A few more examples from CPP09:

```bash
cd Cpp_09/ex00 && make && ./btc file.txt          # Bitcoin value on given dates
cd Cpp_09/ex02 && make && ./PmergeMe 3 5 9 7 4    # Ford-Johnson sort, vector vs deque timing
```

## Structure

```
Cpp_00/ … Cpp_09/
└── exNN/
    ├── Makefile
    ├── *.hpp / *.cpp
    └── main.cpp      tests for the exercise
```
