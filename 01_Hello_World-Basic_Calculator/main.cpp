#include <iostream> // Include input-output library
using namespace std;

int main() {
  // Step 1: Print "Hello, World!"
  cout << "Hello, World!\n";

  // Step 2: Declare variables for user input
  double num1, num2;

  // Step 3: Ask for user input
  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  // Step 4:Perform calculations
  double sum = num1 + num2;
  double difference = num1 - num2;
  double product = num1 * num2;

  double quotient;
  if (num2 != 0) {
    quotient = num1 / num2;
  } else {
    cout << "Error: Division by zero is not allowed.\n";
    quotient = 0; // Assign a safe default value
  }

  // Step 5: Display results
  cout << "Results:\n";
  cout << "Sum: " << sum << "\n";
  cout << "Difference: " << difference << "\n";
  cout << "Product: " << product << "\n";

  if (num2 != 0) {
    cout << "Quotient: " << quotient << "\n";
  }

  return 0; // End program successfully
}