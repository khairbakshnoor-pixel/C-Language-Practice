
#include <stdio.h>
#include <stdlib.h>

//Question 1: Task: Develop a Sales Management System in C
//Define a structure named Product to store information about a product, including product name (string),
//product code (integer), unit price (float), quantity in stock (integer), and total sales value (float).
//Declare an array of 25 Product structures to represent the product inventory.
//Implement a function loadSalesData that reads product information from a file named "sales.txt" into the
//array of structures or from the structures (Filing is optional).
//Implement a function inputSalesData that allows users to input details for each product, including name,
//product code, unit price, and quantity in stock. Save the information to the "sales.txt" file (Filing is
//optional).
//Implement a function calculateSalesValue that takes a Product structure as a parameter, calculates the
//total sales value of the product in the inventory, and updates the structure.
//Utilize pointers to modify the quantity or unit price of a product when updating the sales data.
//Implement a recursive function adjustStock that takes a pointer to a Product structure as a parameter and
//recursively adjusts the quantity based on certain conditions.
//Use strings to input and display product names within the program. Ensure that the names can have
//spaces.
//Implement a function displaySalesInfo that takes the array of Product structures as a parameter and
//displays each product's name, product code, unit price, quantity in stock, and total sales value.
//Question 2: Task: Develop a

#define MAX_SIZE 25
struct product{
	char product_name[50];
	int product_code;
	float unit_price;
	int quantity;
	float sales;
};
void inputSalesData(struct product inventry[], int n) {
    FILE *fp = fopen("sales.txt", "w");
int i;
    for ( i = 0; i < n; i++) {
        printf("\nEnter details for Product %d\n", i + 1);

        printf("Product Name: ");
        getchar(); // clear buffer
        fgets(inventry[i].product_name, 50, stdin);

        printf("Product Code: ");
        scanf("%d", &inventry[i].product_code);

        printf("Unit Price: ");
        scanf("%f", &inventry[i].unit_price);

        printf("Quantity in Stock: ");
        scanf("%d", &inventry[i].quantity);

        inventry[i].sales = 0; // initialize

        if (fp != NULL) {
            fprintf(fp, "%s %d %.2f %d\n",
                    inventry[i].product_name,
                    inventry[i].product_code,
                    inventry[i].unit_price,
                    inventry[i].quantity);
        }
    }

    if (fp != NULL)
        fclose(fp);
}
int loadsells_data(struct product inventry[] ,int *ptr){
	FILE*fp;
	int count=0;
	fp=fopen("sales.txt","r");
		if(fp==NULL){
			printf("file can not be opened ");
			return 0;
		}
	
	 while (count < MAX_SIZE &&
           fscanf(fp, "%d %[^\n] %f %d  %f",&inventry[count].product_code,inventry[count].product_name,&inventry[count].unit_price,&inventry[count].quantity,&inventry[count].sales)==4){
		   
        count++;
    }

    fclose(fp);
    return count;
}
void calculateSalesValue(struct product *inventry){
    inventry->sales = inventry->unit_price * inventry->quantity;
}
void adjustStock(struct product *inventry){
    if(inventry->quantity >= 10) return; // condition
    inventry->quantity++;
    adjustStock(inventry);
}
void displaySalesInfo(struct product inventry[], int n){
	int i;
    for( i=0;i<n;i++){
        printf("\nProduct Name: %s", inventry[i].product_name);
        printf("\nProduct Code: %d", inventry[i].product_code);
        printf("\nUnit Price: %.2f", inventry[i].unit_price);
        printf("\nQuantity: %d", inventry[i].quantity);
        printf("\nTotal Sales: %.2f\n", inventry[i].sales);
    }
}


int main(int argc, char *argv[]) {
	
	
	struct product inventry[MAX_SIZE];

    int n;

    printf("Enter number of products: ");
    scanf("%d", &n);

    inputSalesData(inventry, n);
int i;
    for( i=0;i<n;i++){
        calculateSalesValue(&inventry[i]);
        adjustStock(&inventry[i]);
    }

    displaySalesInfo(inventry, n);

    return 0;
}

