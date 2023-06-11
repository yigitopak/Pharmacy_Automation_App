#include <stdio.h>
#include <stdlib.h>
#define N 100

typedef struct
{
    char ilac_adi[20];
    int adet;
    int fiyat;
} Medication;

int main()
{
    Medication data[N];

    for (int i = 0; i < N; i++)
    {
        fflush(stdin);
        printf("Enter the name of the medication: ");
        gets(data[i].ilac_adi);
        printf("Enter the quantity of the medication: ");
        scanf("%d", &data[i].adet);
        printf("Enter the price of the medication: ");
        scanf("%d", &data[i].fiyat);
    }

    printf("Medication Name\n");
    printf("--------------\n");

    for (int i = 0; i < N; i++)
    {
        if (data[i].adet <= 20)
        {
            printf("%s\n", data[i].ilac_adi);
        }
    }

    return 0;
}
