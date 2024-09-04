# OOP by C++
# Sheet 1                                        
1. Create a class Rectangle with data members length and width. Include a constructor
to initialize these values. Write methods calculateArea() and calculatePerimeter() to
calculate and return the rectangle's area and perimeter.  -----> Rectangle

2. Create a class Animal with data members name and sound. Include a constructor to
initialize these values. Write a method makeSound() to print the animal's sound. Add
a method introduce() that prints the animal's name and its sound.  -----> Animal

3. Create a class Circle with a data member radius. Include a constructor to initialize
the radius. Write methods calculateArea() and calculatePerimeter() to calculate and
return the circle's area and Perimeter. Use 3.14 for the value of pi.  -----> Circl

4. Create a class Employee with data members name, id, and salary. Include a
constructor to initialize these values. Write a method displayEmployeeInfo() to print
the employee's details. Add a method giveRaise() that increases the employee's
salary by a given percentage.  -----> Employee

5. Create a class Product with data members name, price, and quantity. Include a
constructor to initialize these values. Write a method calculateTotalCost() to
calculate and return the total cost of the product. Add a method applyDiscount() that
reduces the price by a given percentage.  -----> Product

6. Create a class Student with data members name, id, and grade. Include a constructor
to initialize these values. Add methods setGrade(double grade) to update the grade,
and displayStudentInfo() to print the student's details, including their GPA.
Implement error checking in setGrade() to ensure that the grade is within a valid range
(0.0 to 4.0).  -----> Student

# Sheet 2
1. Create a class called "Rectangle" with private width and height and Counter.
Implement getters, setters, and a constructor , keep track of how many instances
have been created. Add a static method to get the count.  -----> Rectangle_2

2. Create a class MathOperations that performs static mathematical operations.
Implement static methods add(), subtract(), multiply(), and divide().
These methods should accept two parameters and return the result of the
operation.  -----> MathOperations

3. Create a class Person that encapsulates a person's name and age.
Implement private data members name (string) and age (int).
Provide a constructor that initializes both name and age.
Implement getters and setters for name and age to control access.
Add validation in the setter for age to ensure it is non-negative.  -----> Person

4. Create a class BankAccount that encapsulates account information.
Implement private data members accountNumber (int), ownerName (string), and
balance (double).
Provide a constructor to initialize all data members.
Implement getters for accountNumber, accountHolder, and balance.
Implement methods deposit(double) and withdraw(double) to modify the balance,
ensuring balance doesn’t become negative.  -----> BankAccount

5. Create a class Student that encapsulates student details and manages grades.
studentId (int): The unique identifier for the student.
studentName (string): The name of the student.
grades (array of doubles or a vector): A list of the student’s grades.
numSubjects (int): The number of subjects the student is enrolled in.
Constructor:
Implement a constructor that initializes the student ID, name, number of subjects,
and an empty grades array/vector.
Implement getStudentId(), getStudentName(), getNumSubjects(), and getGrades().
Implement setStudentName(string) and setGrades(array or vector of doubles) with
validation to ensure grades are between 0 and 100.
implement methods:
addGrade(double grade): Add a grade to the grades array/vector, ensuring it is
between 0 and 100.
calculateAverage(): Return the average of all grades.
getGradeSummary(): Print the student’s grades and average.  -----> Student_2
