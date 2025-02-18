#include <stdio.h>
#include <string.h>
int main(){
    int method;

    while(1){
        printf("Select Payment Method (1-3):\n
		1 for Credit/Debit Card\n
		2 for UPI\n
		3 for Net Banking\n");
        scanf("%d",&method);

        switch(method)
        {
        case 1:
			int cardnumber,length;
            printf(" enter a 16-digit card number\n");
			scanf("%d",&cardnumber);
			length = strlen(cardnumber)
            break;
        case 2:
			int upiid;
            printf("enter a valid UPI ID (e.g., user@upi)\n");
            break;
        case 3:
			printf("select a bank from predefined options 
			(e.g., 1 for SBI, 2 for HDFC)\n");
            printf("Payment Successful! \n");
            break;
        case 4:
            exit(0)
            break;
        default:
            printf("Invalid payment method. Please try again\n");
            break;
        }
    }
}