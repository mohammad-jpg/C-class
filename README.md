# C-class
Write a C++ class (instead of the ADT from Assignment 3) to represent a teacher’s staff ID (a non-negative integer), union membership status (a character, either Y or N), and workload (a floating-point number in the range 0.0 to 4.0).

A teacher should be represented by a class with 3 private fields: staff_id of type int, union_membership of type char, and workload of type float.

Your class should define 6 methods to carry out the following operations:

-- Construct a teacher, given input arguments for staff ID, union membership status, and workload. This constructor does not need to do any error-checking on its inputs.

-- Return the value of a teacher’s staff ID.

-- Return the value of a teacher’s union membership status.

-- Return the value of a teacher’s workload.

-- Combine a teacher specified in the input argument of this method with the teacher this method is invoked on, and return a new ‘teacher’ by averaging the values of the corresponding workload fields, and inserting suitable dummy values for the staff ID and union membership status fields of the new ‘teacher’.

-- Print out the values of a teacher’s staff ID, union membership status, and workload to the screen. This method must distinguish between an actual teacher and a ‘teacher’ formed by the combination of two teachers.



Write a main function which tests each aspect of your work: ask the user for the values of staff ID, union membership status, and workload for each of 2 Teacher instances; print out to the screen each teacher’s values; then print out to the screen the values for the combination of these 2 teachers. Note: you may assume that the user enters valid and in-range values for each teacher’s fields from the keyboard.

So you should write three files:

-- A header file to hold the class declaration including the prototypes of the methods;

-- A C++ source file to hold the implementations of the methods;

-- Another C++ source file to hold the main program.



When you have completed this program, submit it through the comp20080 Moodle page.

Note: only submit your source files (the .cpp/.h files) and, if you like, the output of your program in a text file. DO NOT SUBMIT YOUR EXECUTABLE PROGRAM (the .exe files) OR OTHER CODE::BLOCKS FILES.

Even if you have not completed the program by the submission deadline, submit whatever you have done. IT WILL NOT BE POSSIBLE TO SUBMIT YOUR WORK ONCE THE DEADLINE HAS PASSED.
