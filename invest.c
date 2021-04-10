#include <stdio.h>
int main()
{
    double principal, rate, contri, SI, final1, start;
    int time;
    do
    {
        printf("Initial investment amount : ");
        scanf("%lf", &principal);
        if (principal < 0)
        {
          printf("Inital investment cannot be 0\n");
        }
    } while (principal< 0);
    do
    {
        printf("Number of years : ");
        scanf("%d", &time);
        if (time < 1)
        {
         printf("Number of years cannot be 0\n");
        }
    } while (time < 1);

    do
    {
        printf("Return Rate : ");
        scanf("%lf", &rate);
        if (rate < 0)
        {
            printf("Return rate cannot be negative\n");
        }
    } while (rate < 0);

    do
    {
        printf("Additional contribution : ");
        scanf("%lf", &contri);
        if (contri < 0)
        {
         printf("Inital investment cannot be 0\n");
        }
    } while (contri< 0);

    start = principal;
    printf("%-10s%-20s%-20s%-20s", "Year", "Start Balance", "Interest", "End Balance");
    printf("\n**************************************************************\n");
    for (int i = 1; i <= time; i++)
    {
     SI = (start * rate) / 100;
     final1  = start + SI;
     printf("%-10d%-20.2lf%-20.2lf%-20.2lf", i, start, SI, final1);
     printf("\n");
     start = final1 + contri;
    }

    return 0;
}