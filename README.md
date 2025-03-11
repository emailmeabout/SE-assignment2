# SE-assignment2


## 📌 Project Description  
This project demonstrates GitHub collaboration, including branches, pull requests, and resolving merge conflicts.  
It includes a simple "Hello, World!" program with an added feature for user input.

## ⚙ Installation Instructions  
1. Clone the repository:  
   ```bash
   git clone https://github.com/your-username/SE-assignment2.git
2. Navigate to the project folder:
3. Compile the program:
4. Run the program:

## Usage Example
When prompted, enter a string "Alice":
Enter your name: Alice
Hello, Alice!

##Issue
Issue:
Initially, the program allowed users to input empty strings (just pressing "Enter") and would not provide any feedback. This was confusing for users as they weren’t notified when their input was invalid.

Resolution:
We added a check to ensure that if the user does not enter any name (presses "Enter" without typing anything), the program outputs an error message:

"Error: Name cannot be empty! Please try again."


