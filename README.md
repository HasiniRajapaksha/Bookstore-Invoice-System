# Bookstore Invoice System

This repository contains a C program designed to simulate a bookstore invoice system. The program allows users to input book details such as the book code, quantity, and unit price, calculates the line total for each book, applies a discount based on the subtotal, and generates a formatted invoice displaying the final total amount.

## Features
- Input customer name and book details (book code, quantity, unit price).
- Calculate line total for each book.
- Apply discount based on the subtotal:
  - 5% discount for subtotals between $1000 and $5000.
  - 10% discount for subtotals above $5000.
- Display a formatted invoice with book details, subtotal, discount, and total.

## Technologies Used
- C programming language
- Standard libraries: `stdio.h` and `stdlib.h`

## How to Run
1. Clone this repository to your local machine.
2. Compile the C program using a C compiler (e.g., GCC).
    ```bash
    gcc invoice_system.c -o invoice_system
    ```
3. Run the compiled program:
    ```bash
    ./invoice_system
    ```
4. Follow the prompts to enter customer and book details.

## Example Input and Output

### **Example Input:**

![Image](https://github.com/user-attachments/assets/73b6f95b-d67a-4cd8-b92c-1e75ba5af75e)


### **Example Output:**

![Image](https://github.com/user-attachments/assets/96eaf012-dec7-4f47-8aca-3dcaa2a65e8c)

