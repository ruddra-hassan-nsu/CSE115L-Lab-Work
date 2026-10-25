#include <stdio.h>

#define PEN_PRICE 12.50
#define NOTEBOOK_PRICE 45.00

int main(void)
{
  int pens, notebooks;
  double pens_amount, notebooks_amount, total_amount;

  printf("Enter the number of pens: ");
  scanf("%d", &pens);
  printf("Enter the number of notebooks: ");
  scanf("%d", &notebooks);

  pens_amount = pens * PEN_PRICE;
  notebooks_amount = notebooks * NOTEBOOK_PRICE;
  total_amount = pens_amount + notebooks_amount;

  printf("Item\t\tQty\tAmount\n");
  printf("Pens\t\t%d\t%.2f\n", pens, pens_amount);
  printf("Notebooks\t%d\t%.2f\n", notebooks, notebooks_amount);
  printf("Total\t\t\t%.2f\n", total_amount);

  return 0;
}
