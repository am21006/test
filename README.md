[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/f78HCc1f)

# Week5 Assignment — Loops & Repetition

## Objective
Write a program for each question that **produces the exact same output** as shown in the provided slides or example images.  
You will practice **loops**, **input validation**, and **iterative problem-solving** in C.

---

## 📘 Homework Overview

| ID | Title | Description |
|----|--------|-------------|
| hw5-1 | Power Multipliers | Output all powers of 2 below the input integer (`max`). |
| hw5-2 | Divisor Output | Display all divisors of the input integer (`max`). |
| hw5-3 | Compare Two Inputs | Repeatedly prompt for two integers until they differ, then display both. |
| ahw5-1 | Minimum Steps to Convert n to m | Calculate the fewest operations needed to transform `n` into `m` using `n = n * 2` or `n = n + 1`. |

---

## 🧠 Today’s Homework — *Very Important!*

1. You may use **any editor or IDE** to write your program.  
   However, your code **must compile and run** correctly in the grading environment (Linux / GCC).

2. If your program **does not compile**, you will receive **0 points**,  
   even if the logic is correct.

3. Please **test your program thoroughly** using the provided test cases.

---

## 🧪 Testing

- Two **test cases** will be released for each homework.  
- Your output must **exactly match** the expected output in:
  - Spacing  
  - Capitalization  
  - Line breaks (`\n`)  

---

## 🧩 Example Test Cases

### HW5-1: Power Multipliers
**Input:**  
```
max? 40
```
**Output:**  
```
1 2 4 8 16 32
```

**Input:**  
```
max? 30
```
**Output:**  
```
1 2 4 8 16
```

---

### HW5-2: Divisor Output
**Input:**  
```
max? 70
```
**Output:**  
```
1 2 5 7 10 14 35 70
```

**Input:**  
```
max? 35
```
**Output:**  
```
1 5 7 35
```

---

### HW5-3: Compare Two Inputs
**Input:**  
```
Please enter two different numbers
64 64
```
**Output:**  
```
Same, please enter two different numbers
Input: 100 200
You entered 100 and 200
```

**Input:**  
```
Please enter two different numbers
640 640
```
**Output:**  
```
Same, please enter two different numbers
Input: 8 19
You entered 8 and 19
```

---

### AHW5-1: Minimum Step to Convert n → m
**Input:**  
```
2 9
```
**Output:**  
```
Numbers of steps taken: 3
```

**Explanation (for understanding only):**  
2 → 4 → 8 → 9  

**Input:**  
```
10 1
```
**Output:**  
```
Cannot transform 10 to 1
```

---

## 📁 Turning In Your Homework

### File Naming Rule
Each file name must match the homework ID shown on the slides.  
For example:

| Homework | File Name |
|-----------|------------|
| HW5-1 | `hw5-1.c` |
| HW5-2 | `hw5-2.c` |
| HW5-3 | `hw5-3.c` |
| AHW5-1 | `ahw5-1.c` |

---

## ✅ Submission Checklist

- [ ] Code compiles with **no warnings or errors**  
- [ ] Output matches test case **exactly**  
- [ ] File names follow correct convention  
- [ ] All required files pushed to GitHub Classroom  

---

## 🧾 Grading Criteria

- **Autograding** checks for:
  - Exact output match  
  - Successful compilation  
  - Timely submission  

> You can manually trigger autograding from the **Actions** tab on GitHub.

---

## ⏰ Deadline

**November 4 (Tuesday) — 23:59 JST**
