#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int ans;
    float r;
    printf("Enter 1 for adddition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter 5 for modulus\n");
    printf("Enter anyone of the above:- ");
    scanf("%d", &a);
    getchar();
    switch (a)
    {
    case 1:
        printf("\nEnter Number:- ");
        scanf("%d", &a);
        printf("\nEnter Number:- ");
        scanf("%d", &b);
        ans = a + b;
        printf("\nAnswer:- %d", ans);
        getchar();
        break;

    case 2:
        printf("\nEnter Number:- ");
        scanf("%d", &a);
        printf("\nEnter Number:- ");
        scanf("%d", &b);
        ans = a - b;
        printf("\nAnswer:- %d", ans);
        getchar();
        break;

    case 3:
        printf("\nEnter Number:- ");
        scanf("%d", &a);
        printf("\nEnter Number:- ");
        scanf("%d", &b);
        ans = a * b;
        printf("\nAnswer:- %d", ans);
        getchar();
        break;

    case 4:
        printf("\nEnter Number:- ");
        scanf("%d", &a);
        printf("\nEnter Number:- ");
        scanf("%d", &b);
        //explicit typecasting
        r = (float) a / b;
        printf("\nAnswer:- %f", r);
        getchar();
        break;

    case 5:
        printf("\nEnter Number:- ");
        scanf("%d", &a);
        printf("\nEnter Number:- ");
        scanf("%d", &b);
        ans = a % b;
        printf("\nAnswer:- %d", ans);
        getchar();
        break;
    
    default:
        printf("\nError. Try again");
        getchar();
        break;
    }
    printf("\nThank You.");
    getchar();
}