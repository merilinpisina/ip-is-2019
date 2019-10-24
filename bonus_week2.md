Task 1. Tower of Hanoi:
There are three towers. Object of the game is to move all the disks over to tower #3. But you cannot place a larger disk onto a smaller disk. To play the game, go to the Resources tab.

Create a function that takes a number discs as an argument and returns the minimum amount of steps needed to complete the game.

Examples:
towerHanoi(3) ➞ 7

towerHanoi(5) ➞ 31

towerHanoi(0) ➞ 0

Notes:
The amount of discs is always a positive integer.

Task 2. Building a Staircase: 
Create a function that builds a staircase given the height and the type of building block.

Examples:
buildStaircase(3, "#") ➞ [

  ["#", "_", "_"],
  
  ["#", "#", "_"],
  
  ["#", "#", "#"]
]

buildStaircase(4, "#") ➞ [

  ["#", "_", "_", "_"],

  ["#", "#", "_", "_"],
  
  ["#", "#", "#", "_"],
  
  ["#", "#", "#", "#"]
]

buildStaircase(3, "A") ➞ [
  
  ["A", "_", "_"],
  
  ["A", "A", "_"],
  
  ["A", "A", "A"]
]

// height = 3 and building block = "A"

buildStaircase(4, "$") ➞ [
  
  ["$", "_", "_", "_"],
  
  ["$", "$", "_", "_"],
  
  ["$", "$", "$", "_"],
  
  ["$", "$", "$", "$"]
]

// height = 4 and building block = "$"

Notes:
If the height is 0, return an empty array [].

Task 3: Staircase of Recursion: 
Write a function that returns the number of ways a person can climb n stairs, where the person may only climb 1 or 2 steps at a time.

To illustrate, if n = 4 there are 5 ways to climb:

[1, 1, 1, 1]
[2, 1, 1]
[1, 2, 1]
[1, 1, 2]
[2, 2]

Examples:
waysToClimb(1) ➞ 1

waysToClimb(2) ➞ 2

waysToClimb(5) ➞ 8

Notes:
A staircase of height 0 should return 1.
