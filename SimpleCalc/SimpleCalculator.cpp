#include "SimpleCalculator.h"
#include <iostream>

int main() {
	// Simple Calculator Program
	// This program performs basic arithmetic operations: addition, subtraction, multiplication, division, and modulus.
	// The user is prompted to enter two numbers and an operator, and the program outputs the result.
	// The program continues to run until the user chooses to exit.
	// Author: Damian Marciniak

	std::cout << "Welcome to the Simple Calculator Program!" << std::endl;
	// Infinite loop to keep the program running until the user chooses to exit

	while (true) {
		// Display menu
		// Get user input
		// Perform calculation based on user input
		// Display result
		std::cout << "Enter one of the following numbers for an action:" << std::endl;
		// Menu options
		std::cout << "1. Begin Calculating by entering a number" << std::endl;
		std::cout << "2. Exit the Program" << std::endl;
		int x;
		std::cin >> x;

		// Switch statement to handle user input
		switch (x) {
		case 1:
			// Get user input for calculation
			// Perform calculation
			// Display result
			double num1, num2;

			char op;

			std::cout << "Enter first number: ";

			std::cin >> num1;

			std::cout << "Enter an operator (+ for Addition, - for Subtraction, * for Multiplication, / for Division, % for Modulation (returns remainder)): ";

			std::cin >> op;

			std::cout << "Enter second number: ";

			std::cin >> num2;

			// Perform calculation based on operator
			switch (op) {
				// Cases for each operator
				// Addition
			case '+':
				std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
				break;
			
				// Subtraction
			case '-':
				std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
				break;

				// Multiplication
			case '*':
				std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
				break;

				// Division
			case '/':
				if (num2 != 0)
					std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
				else
					std::cout << "Error: Division by zero" << std::endl;
				break;

				// Modulus
			case '%':
				if (static_cast<int>(num2) != 0)
					std::cout << static_cast<int>(num1) << " % " << static_cast<int>(num2) << " = " << static_cast<int>(num1) % static_cast<int>(num2) << std::endl;
				else
					std::cout << "Error: Division by zero" << std::endl;
				break;

			default:
				std::cout << "Error: Invalid operator, please enter a number from 1-2" << std::endl;
				break;
			}

			break;
			
			// Exit the program
		case 2:
			std::exit(0);
			break;

			// Invalid input
		default:
			std::cout << "Invalid Input" << std::endl;
			break;
		}
	}
}
