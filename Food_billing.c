#include <stdio.h>
#include <stdlib.h>
int main()
{
  int total_item, choice, amount1, amount2, amount3, amount4, quantity, bill;
  char ch;
  printf("enter total item");
  scanf("%d", &total_item);
  do
  {

    printf("\n\tpress 1 for pizza   price=180rs/pcs");
    printf("\n\tpress 2 for Burger  price=100rs/pcs");
    printf("\n\tpress 3 for Dosa    price=120rs/pcs");
    printf("\n\tpress 4 for Idli    price=50rs/pcs");
    printf("\n\n\tplease enter your choose.....  :");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("\n\n\tyou have selected pizza");
      printf("\n\n\tenter quantity :");
      scanf("%d", &quantity);
      amount1 = 180 * quantity;
      printf("\n\n\tyour total amount is %drs/pcs :", amount1);
      break;

    case 2:
      printf("\n\n\tyou have selected Burger");
      printf("\n\n\tenter quantity :");
      scanf("%d", &quantity);
      amount2 = 100 * quantity;
      printf("\n\n\tyour amount is %drs/pcs:", amount2);
      bill = amount1 + amount2;
      printf("\n\n\tyour total bill is %drs/pcs:", bill);
      break;

    case 3:
      printf("\n\n\tyou have selected Dosa");
      printf("\n\n\tenter quantity :");
      scanf("%d", &quantity);
      amount3 = 120 * quantity;
      printf("\n\n\tyour total amount is %drs/pcs :", amount3);
      bill = amount1 + amount2 + amount3;
      printf("\n\n\tyour total bill is %drs/pcs:", bill);
      break;

    case 4:
      printf("\n\n\tyou have selected Idli");
      printf("\n\n\tenter quantity :");
      scanf("%d", &quantity);
      amount4 = 50 * quantity;
      printf("\n\n\tyour total amount is %drs/pcs:", amount4);
      bill = amount1 + amount2 + amount3 + amount4;
      printf("\n\n\tyour total bill is %drs/pcs:", bill);
      break;

    case 5:
      exit(0);
      break;

    default:
      printf("\n\n\tinvalid choice");
      break;
    }
    printf("\n\n\tDO YOUY WANT PLACE MORE ORDER ?? (y/n) :");
    scanf(" %c", &ch);
  } while (ch == 'y' || ch == 'Y');
}