
# EXPERIMENT 03(A): CHECKING WHETHER A NUMBER IS POSITIVE OR NEGATIVE IN C++

## AIM
To write a C++ program that takes a number as input from the user and determines whether it is positive, negative, or zero.

## TOOLS USED
- **Language**: C++
- **Compiler**: g++ (GNU Compiler Collection)
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor

## THEORY
In C++, conditional statements such as `if`, `else if`, and `else` are used to make decisions based on certain conditions.

In this experiment, the logic is:
- If the number is greater than 0, it is **positive**.
- If the number is less than 0, it is **negative**.
- If the number is equal to 0, it is **neither positive nor negative**.

This simple decision-making structure helps in understanding:
- Flow control using conditionals
- Input/output operations
- Handling floating-point comparisons

### ALGORITHM
1. Start  
2. Declare a variable of type `float`  
3. Prompt the user to input a number  
4. Use `cin` to read the input  
5. Check:
   - If number > 0 → print "positive"
   - Else if number < 0 → print "negative"
   - Else print "neither positive nor negative"
6. End

## CONCLUSION
I wrote a C++ program that checks whether a given number is positive, negative, or zero. This experiment helped me understand how to implement decision-making using conditional statements. I also practiced taking input from the user and working with `float` data types in conditional logic.

# EXPERIMENT 03(B): CALCULATE AVERAGE MARKS AND DISPLAY GRADE IN C++

## AIM
To write a C++ program that takes the marks of five subjects as input, calculates the average, and displays the corresponding grade based on predefined ranges.

## TOOLS USED
- **Language**: C++
- **Compiler**: g++ (GNU Compiler Collection)
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor

## THEORY
In academic grading systems, grades are assigned based on the average score of all subjects. This experiment uses conditional statements to classify average marks into various grade categories.

The grading scheme used is as follows:
- **O grade**: 91–100  
- **A+ grade**: 81–90  
- **A grade**: 71–80  
- **B+ grade**: 61–70  
- **B grade**: 51–60  
- **C grade**: 41–50  
- **D grade**: 31–40  
- **F grade**: 30 and below  

This experiment reinforces:
- Use of arithmetic operators to calculate averages
- Input/output handling using `cin` and `cout`
- Use of nested or sequential conditional logic (`if-else if` ladder)

### ALGORITHM
1. Start  
2. Declare five variables to store marks and one for average  
3. Prompt the user to input marks of five subjects  
4. Read values using `cin`  
5. Calculate the average: `(a + b + c + d + e) / 5`  
6. Use `if-else if` ladder to determine and print the grade  
7. End  

## CONCLUSION
I wrote a C++ program that calculates the average of five subject marks and assigns a grade based on the result. This experiment helped me understand how to implement logic using conditional statements and perform arithmetic operations on user-provided input.

# EXPERIMENT 03(C): FINDING THE QUADRANT OF A POINT IN C++

## AIM
To write a C++ program that takes the coordinates of a point (x, y) as input and determines the quadrant to which the point belongs.

## TOOLS USED
- **Language**: C++
- **Compiler**: g++ (GNU Compiler Collection)
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor

## THEORY
In a 2D Cartesian coordinate system, the plane is divided into four quadrants:

- **1st Quadrant**: x > 0, y > 0  
- **2nd Quadrant**: x < 0, y > 0  
- **3rd Quadrant**: x < 0, y < 0  
- **4th Quadrant**: x > 0, y < 0  

Special cases:
- If x = 0 and y ≠ 0 → Point lies on the **Y-axis**  
- If y = 0 and x ≠ 0 → Point lies on the **X-axis**  
- If x = 0 and y = 0 → Point is at the **Origin**

This experiment demonstrates:
- Usage of logical operators (`&&`, `||`)
- Decision-making using `if`, `else if`, and `else` constructs
- Handling floating-point inputs and comparing them correctly

### ALGORITHM
1. Start  
2. Declare two float variables `x` and `y`  
3. Prompt the user to enter values of `x` and `y`  
4. Use `cin` to read the input  
5. Apply conditional checks:
   - If x > 0 and y > 0 → print "1st Quadrant"
   - Else if x < 0 and y > 0 → print "2nd Quadrant"
   - Else if x < 0 and y < 0 → print "3rd Quadrant"
   - Else if x > 0 and y < 0 → print "4th Quadrant"
   - Else if x == 0 and y ≠ 0 → print "Y-axis"
   - Else if x ≠ 0 and y == 0 → print "X-axis"
   - Else print "Origin"  
6. End

## CONCLUSION
I wrote a C++ program that takes the coordinates of a point and determines which quadrant it belongs to. This experiment helped me understand how to implement decision-making using compound conditional statements. I also practiced handling geometric logic and working with floating-point input.
# Experiment_3
