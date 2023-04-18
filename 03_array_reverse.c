#include <stdio.h>
int main()
{
  int n;

  scanf("%d", &n);
  int ar[n];

  for (int i = 0; i < n; i++)
  {
    printf("ar[%d]=", i);
    scanf("%d", &ar[i]);
  }
  int i = 0, j = n - 1;
  while (i < j)
  {
    int temp = ar[i];
    ar[i] = ar[j];
    ar[j] = temp;
    i++;
    j--;
  }
  printf("\n");

  for (int i = 0; i < n; i++)
  {
    printf("ar[%d]=%d\n", i, ar[i]);
  }
  return 0;
}