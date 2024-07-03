#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;

struct Expense {
    string description;
    double amount;
};

class ExpenseTracker {
private:
    vector<Expense> expenses;

public:
    void addExpense(const Expense& expense) {
        expenses.push_back(expense);
    }

    void displayExpenses() const {
        cout << "------ Expenses ------" << endl;
        if (expenses.empty()) {
            cout << "No expenses recorded." << endl;
        } else {
            int index = 1;
            for (const auto& expense : expenses) {
                cout << setw(3) << right << index++ << ". "
                     << "Description: " << setw(15) << left << expense.description
                     << " | Amount: $" << setw(10) << fixed << setprecision(2) << right << expense.amount << endl;
            }
        }
    }

    void editExpense(int index) {
        if (index >= 1 && index <= expenses.size()) {
            cout << "Enter new description: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, expenses[index - 1].description);

            cout << "Enter new amount: $";
            cin >> expenses[index - 1].amount;
            cout << "Expense updated successfully." << endl;
        } else {
            cout << "Invalid expense index." << endl;
        }
    }

    void deleteExpense(int index) {
        if (index >= 1 && index <= expenses.size()) {
            expenses.erase(expenses.begin() + index - 1);
            cout << "Expense deleted successfully." << endl;
        } else {
            cout << "Invalid expense index." << endl;
        }
    }
};

int main() {
    ExpenseTracker tracker;

    // Sample expenses
    tracker.addExpense({"Groceries", 65.50});
    tracker.addExpense({"Gas", 40.25});
    tracker.addExpense({"Dinner", 85.75});

    // Display all expenses
    tracker.displayExpenses();

    // Example of editing an expense
    tracker.editExpense(2); // Edit the second expense

    // Display all expenses after editing
    tracker.displayExpenses();

    // Example of deleting an expense
    tracker.deleteExpense(1); // Delete the first expense

    // Display all expenses after deleting
    tracker.displayExpenses();

    return 0;
}