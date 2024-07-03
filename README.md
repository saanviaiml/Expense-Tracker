# Expense Tracker 
Data Structure: The code utilizes a vector of structs (Expense) to store descriptions and amounts of expenses.

Functionality: It provides essential functionalities such as adding, displaying, editing, and deleting expenses interactively through a menu system.

Input Handling: Input is handled using cin for user prompts, cin.ignore() for clearing input buffers, and getline() for reading description inputs.

Display: Expenses are displayed neatly formatted using setw() and setprecision() from <iomanip> to align and format the output properly.

Editing and Deleting: Users can edit or delete expenses by specifying the index of the expense in the list, with error handling for invalid indices.

File I/O: The program includes methods for saving (saveExpensesToFile) and loading (loadExpensesFromFile) expenses to/from a text file, enhancing data persistence.

Menu System: A looped menu system (main() function) allows users to choose from various operations, ensuring interactive and user-friendly functionality.

Error Handling: Provides error messages for invalid inputs or operations, ensuring robustness and user guidance throughout the interaction.

Interaction: Users can interact with the program sequentially, performing operations like adding, modifying, and managing expenses dynamically.

Versatility: This code serves as a foundational expense tracking application, adaptable for personal finance management or integration into larger systems, leveraging basic C++ features for practical use.
