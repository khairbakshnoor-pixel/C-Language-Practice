#include <stdio.h>
#define MAX_CUSTOMER 200

struct customer {
    int account_number;
    char customer_name[60];
    float balance;
};


void below(struct customer bank[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(bank[i].balance < 100) {
            printf("\nYour balance is less than 100\n");
            printf("Name: %s\nAccount Number: %d\n", bank[i].customer_name, bank[i].account_number);
        } else {
            printf("\nName: %s\nAccount Number: %d\nBalance: %.2f\n", bank[i].customer_name, bank[i].account_number, bank[i].balance);
        }
    }
}


void deposit_or_withdraw(struct customer bank[], int n) {
    int i, code, acct_no;
    float amount;
    
    printf("\nEnter the account number: ");
    scanf("%d", &acct_no);

    
    for(i = 0; i < n; i++) {
        if(bank[i].account_number == acct_no) {
            printf("Enter 1 for deposit or 0 for withdrawal: ");
            scanf("%d", &code);

            if(code == 1) {
                printf("Enter the amount to deposit: ");
                scanf("%f", &amount);
                bank[i].balance += amount;
                printf("Deposit successful. New balance: %.2f\n", bank[i].balance);
            } else if(code == 0) {
                printf("Enter the amount to withdraw: ");
                scanf("%f", &amount);
                if(bank[i].balance - amount < 100) {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                } else {
                    bank[i].balance -= amount;
                    printf("Withdrawal successful. New balance: %.2f\n", bank[i].balance);
                }
            } else {
                printf("Invalid code entered.\n");
            }
            return; 
        }
    }
    printf("Account number not found.\n");
}

int main() {
    struct customer bank[MAX_CUSTOMER];
    int n, i;

    printf("Enter the number of customers: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of customer %d\n", i+1);

        printf("Customer name: ");
        scanf(" %[^\n]", bank[i].customer_name);

        printf("Account number: ");
        scanf("%d", &bank[i].account_number);

        printf("Balance: ");
        scanf("%f", &bank[i].balance);
    }

    
    below(bank, n);


    deposit_or_withdraw(bank, n);

    return 0;
}

