#include <stdio.h>

int main(void)
{
    int age;
    
    printf("How old are you?");
    scanf("%d", &age);

    if (age > 19)
    {
        printf("You are an adult\n");
    }
    else
    {
        printf("You are a minor\n");
    }
}
