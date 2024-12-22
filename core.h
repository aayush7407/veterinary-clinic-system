/*
*****************************************************************************
                        Assignment 1
Full Name  : Aayush Chhetri Lamichhane

*/


// SAFE-GUARD: 
// It is good practice to apply safe-guards to header files
// Safe-guard's ensures only 1 copy of the header file is used in the project build
// The macro name should be mirroring the file name with _ for spaces, dots, etc.

// !!! DO NOT DELETE THE BELOW 2 LINES !!!
#ifndef CORE_H
#define CORE_H

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// 
// Copy your work done from Milestone #1 (core.h) into this file
// 
// NOTE:
// - Organize your functions into the below categories
// - Make sure the core.c file also lists these functions in the same order!
// - Be sure to provide a BRIEF comment for each function prototype
// - The comment should also be copied to the core.c function definition
//
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


//////////////////////////////////////
// USER INTERFACE FUNCTIONS
//////////////////////////////////////

// Clear the standard input buffer
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue
void suspend(void);

//////////////////////////////////////
// USER INPUT FUNCTIONS
//////////////////////////////////////

// Ensures that an integer value is provided and returned. Displays an error message for invalid input.
int inputInt(void);

// Ensures that a positive integer value is provided and returned. Shows an error message for zero or negative input.
int inputIntPositive(void);

// Ensures that an integer value within the specified range (inclusive) is provided and returned. Displays an error message for out-of-range input and continues to prompt until valid input is provided.
int inputIntRange(int lowerBound, int upperBound);

// Ensures that a single character is chosen from a list of valid characters and returned. Displays an error message for invalid input and prompts again.
char inputCharOption(char str[]);

// Ensures that a C string value with a length within the specified range is entered. 
void inputCString(char* str, int minChar, int maxChar);

// Similar to inputCString, but exclusively for numeric input.
void inputCStringNumbers(char* str, int minChar, int maxChar);

// Formats and displays an array of 10-character digits as a phone number.
void displayFormattedPhone(const char* str);


// !!! DO NOT DELETE THE BELOW LINE !!!
#endif // !CORE_H