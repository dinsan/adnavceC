#include <stdio.h>
int main()
{
  int input[1];
int total = 0;
int n; //To count number of elements to add:
  printf("Please enter the number of elements to add: ");

    scanf("%d", &n);

for(int i = 0; i < n; i++)
{
    printf("Please enter integer %d: ",(i+1));

    scanf("%d", &input[i]);

}

for(int i = 0; i < n; i++)
{
    total = total +input[i];

}

printf("The sum is = ", total);
}