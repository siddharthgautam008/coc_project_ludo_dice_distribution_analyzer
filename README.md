# coc_project_ludo_dice_distribution_analyzer
#  Ludo Dice Probability Simulator

This project simulates rolling **two dice** a large number of times (1 million rolls by default) and calculates the **probability distribution** of their possible sums (from 2 to 12).  
It helps visualize how often each sum appears and demonstrates basic probability through random number generation in C.

---

##  Project Description

When you roll two dice, each die gives a number between **1 and 6**.  
This program:
- Rolls two dice repeatedly (1,000,000 times)
- Counts how often each sum (2–12) appears
- Calculates the probability percentage of each possible sum
- Displays the results in a clear tabular format

The project demonstrates the concept of **randomness and probability** using C programming.

---

##  Concepts Used
- **Functions** (`roll_one_die()` for modular code)
- **Arrays** (to store counts for each sum)
- **Loops** (`for` loops to simulate repeated rolls)
- **Random number generation** (`rand()` and `srand(time(NULL))`)
- **Type casting & floating-point arithmetic** (for probability calculation)

---

##  How to Compile
Use any standard C compiler (like `gcc`) to compile the code.

```bash
gcc dice_probability.c -o dice_probability


How to Run
./dice_probability


Sample Output
Sum     Count     Probability(%)
--------------------------------
2       27785     2.78%
3       55338     5.53%
4       83472     8.35%
5       111169    11.12%
6       139083    13.91%
7       166710    16.67%
8       138942    13.89%
9       111188    11.12%
10      83455     8.35%
11      55259     5.53%
12      27799     2.78%
