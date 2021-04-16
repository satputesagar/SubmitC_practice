#include<stdio.h>
int main()
{

    int number;
    printf("Enter Your Order up please : ");
    scanf("%d",&number);
    switch(number)
    {

    case 1:
        {
            printf("Food item - Pizza \nPrice -RS 239");
            break;
        }
    case 2:
        {
            printf("Food item - Burger \nPrice -RS 129");
            break;

        }
        case 3:
        {
            printf("Food item - Pasta \nPrice -RS 179");
            break;
        }
        case 4:
        {
            printf("Food item - French Fries \nPrice -RS 99");
            break;

        }
        case 6:
        {
            printf("Food item - Sandwich \nPrice -RS 149");
            break;

        }
        default:
            printf("this Order is not Avilable !");

    }
    return 0;
}


