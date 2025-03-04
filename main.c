#include <stdio.h>
#include <stdlib.h>

struct book
{
   char code[10];
   int qty;
   float uprice, ltotal;
} book[10];

int main()
{
    char cname[50];
    int x, i, ent;
    float stotal = 0, dis = 0, total;

    printf("enter customer name: \n");
    scanf("%s", cname);
    printf("enter no. of entries for the invoice: \n");
    scanf("%d", &ent);

    for (x = 0; x < ent; x++)
    {
        printf("enter code of the book: \n");
        scanf("%s", book[x].code);

        printf("enter quantity of %s books: \n", book[x].code);
        scanf("%d", &book[x].qty);

        printf("enter unit price of the book: \n");
        scanf("%f", &book[x].uprice);

        book[x].ltotal = book[x].qty * book[x].uprice;
        stotal = stotal + book[x].ltotal;
    }

    if (stotal >= 1000 && stotal <= 5000)
        dis = stotal * 0.05;
    if (stotal > 5000)
        dis = stotal * 0.1;
    total = stotal - dis;

    printf("\n\n\n\t\t\t\"Maddy's Print Shop - Book to change the world\"\n\t\t\t\t\t Invoice\n");
    printf("Customer Name : %s\n", cname);
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("Code\t\t Qty\t\t Unit Price\t\t Line Total\n");
    printf("-----------------------------------------------------------------------------------------------------\n");

    for (x = 0; x < ent; x++)
    {
        printf("%s\t\t %d\t\t %.2f\t\t\t %.2f\n", book[x].code, book[x].qty, book[x].uprice, book[x].ltotal);
    }

    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t Sub Total\t\t%.2f\n", stotal);
    printf("\t\t\t\t Discount\t\t%.2f\n", dis);
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t Total\t\t\t%.2f\n\n\n", total);
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\tThank You for Your Business!\n\n");

    return 0;
}
