# Expense Tracker 
This code is an implementation of an expense tracker in C++. It allows users to manage their expenses through various operations such as adding new expenses, displaying all recorded expenses, editing existing expenses, deleting expenses, saving expenses to a file, and loading expenses from a file.

Here's a breakdown of its functionalities:

Expense Structure: Uses a struct Expense to store each expense's description (string) and amount (double).

ExpenseTracker Class: Contains methods (addExpense, displayExpenses, editExpense, deleteExpense, saveExpensesToFile, loadExpensesFromFile) to perform operations on expenses stored in a vector.

Menu-driven Interface: The main() function provides a menu system where users can choose different actions like viewing, adding, editing, and deleting expenses. Input handling ensures proper interaction and error prevention.

File Handling: Includes features to save expenses to a text file (saveExpensesToFile) and load expenses from a file (loadExpensesFromFile), enhancing data persistence across sessions.

User Interaction: Ensures a user-friendly interaction by formatting outputs (setw() and setprecision()) and handling inputs (cin, getline(), cin.ignore()).

Error Handling: Provides error messages for invalid user inputs, ensuring robustness and user guidance during interaction.
