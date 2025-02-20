#include <stdio.h>
int main()
{
    int rest, item, quant;
    float cost = 0.0;
	printf("Select a restaurant:\n");
    printf("1. Restaurant 1\n");
    printf("2. Restaurant 2\n");
    printf("3. Restaurant 3\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &rest);
	if (rest == 1)
    {
        printf("\nMenu for Restaurant 1 :\n");
        printf("1. Butter Chicken - rs 300\n");
        printf("2. Naan - rs 50\n");
        printf("3. Paneer Tikka - rs 200\n");
    }
    else if (rest== 2)
    {
        printf("\nMenu for Restaurant 2:\n");
        printf("1. Dosa - rs 80\n");
        printf("2. Idli - rs 40\n");
        printf("3. Vada - rs 60\n");
    }
    else if (rest== 3)
    {
        printf("\nMenu for Restaurant 3:\n");
        printf("1. Fried Rice - rs 150\n");
        printf("2. Noodles - rs 120\n");
        printf("3. Manchurian - rs 180\n");
    }
    else
    {
        printf("Invalid restaurant choice\n");
        return 0;
    }
	printf("\nSelect an item (1-3): ");
    scanf("%d", &item);
	if (item < 1 || item > 3)
    {
        printf("Invalid item choice!\n");
        return 0;
    }
	printf("Enter quantity: ");
    scanf("%d", &quant);
	if (rest == 1)
    {
        if (item == 1)
            cost = quant * 300;
        else if (item == 2)
            cost = quant * 50;
        else
            cost = quant * 200;
    }
    else if (rest== 2)
    {
        if (item == 1)
            cost = quant * 80;
        else if (item == 2)
            cost = quant * 40;
        else
            cost = quant * 60;
    }
    else if (rest== 3)
    {
        if (item == 1)
            cost = quant* 150;
        else if (item == 2)
            cost = quant* 120;
        else
            cost = quant* 180;
    }

    printf("Total cost: rs %0.2f\n\n", cost);
	return 0;
}
