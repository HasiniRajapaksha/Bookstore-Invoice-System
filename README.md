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
```
Enter customer name: 
John
Enter number of entries for the invoice: 
2
Enter code of the book: 
B001
Enter quantity of B001 books: 
5
Enter unit price of the book: 
200
Enter code of the book: 
B002
Enter quantity of B002 books: 
3
Enter unit price of the book: 
300
```

### **Example Output:**

```
Enter customer name: 
John
Enter number of entries for the invoice: 
2
Enter code of the book: 
B001
Enter quantity of B001 books: 
5
Enter unit price of the book: 
200
Enter code of the book: 
B002
Enter quantity of B002 books: 
3
Enter unit price of the book: 
300



						"Maddy's Print Shop - Book to change the world"
							 Invoice
Customer Name: John
-----------------------------------------------------------------------------------------------------
Code		 Qty		 Unit Price		 Line Total
-----------------------------------------------------------------------------------------------------
B001		 5		 200.00			 1000.00
B002		 3		 300.00			 900.00
-----------------------------------------------------------------------------------------------------
			 Sub Total		1900.00
			 Discount		95.00
-----------------------------------------------------------------------------------------------------
			 Total			1805.00


-----------------------------------------------------------------------------------------------------
			 Thank You for Your Business!
```

## License
This project is open-source and free to use. Feel free to modify or contribute to the code.

## Contact
If you have any questions or suggestions, feel free to open an issue in this repository or contact the author.

---

This README provides an interactive overview of the project, showcasing the example input and output so that users can quickly understand how the program works.
