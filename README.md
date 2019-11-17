Unit 2
======

A translation program to <>, coded in Modern C and run on an Arduino IDE. 

Contents
-----
  1. [Planning](#planning)
  1. [Design](#design)
  1. [Development](#development)
  1. [Evalution](#evaluation)
  1. [Citations](#citations)

Planning
----------
**Defining the Problem:**
For this problem, we are trying to solve a communication issue between Earth, the Moon, and Mars. Essentially, each location has transmittors and receivers which are only capable of receiving two pieces of information. 

For Mars, the planet is only able to send and receive Morse code. For Earth, the planet is only able to send and receive binary. The Moon, therefore, acts as a liason between the two planets and works to translate Morse code into binary or the opposite. However, the operators in these planets can only understand English so each language must be translated into English before being transmitted. 

Design
------
Learning about types of integers and meaning of void 

Development
-----------
## Counting with binary
We learned to count with binary, a necessary step for converting data from English to binary and vice versa. Essentially, in binary, you start off by representing zero as one. Then, whenever the last digit is zero, you change the number to one. 

This strategy yields us the number zero as 0 and the number one as 1. From there, however, it gets slightly more complicated. Whenever the last digit is one, then you add another one which would result in 2 but is formatted as 10. Thus, number three would be represented as 10. From there on, the same strategy could be used to receive all the numbers from zero to fifteen: 0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111. 

## Representing numbers in binary through LED lights
How many led lights do you need to show the numbers from 1 to 15?
Have two led lights. Flash red for one, flash white for zero. Flash both to indicate that another number is coming. 

Citations
---------
https://www.wikihow.com/Count-in-Binary
https://stackoverflow.com/questions/1043034/what-does-void-mean-in-c-c-and-c/1043107
https://www.arduino.cc/en/Reference/VariableDeclaration
