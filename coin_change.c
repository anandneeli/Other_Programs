#include <stdio.h>
#include <stdlib.h>

//int coins[4] = {1, 2, 5, 10};
int coins[3] = {1, 2, 3};
int sum = 5;


int make_change (int money, int index)
{
    int amountWithCoin = 0, ways = 0, remaning = 0;
    if(money == 0)
        return 1;
    if (index >= 4)
        return 0;

     while(amountWithCoin <= money) {
         remaning = money - amountWithCoin;
         ways += make_change(remaning, index+1);
    printf("money %d index %d ways = %d\n", money, index, ways);
         amountWithCoin += coins[index];
     }
     return ways;
}


int main()
{
    int change = 0;
    change = make_change(sum, 0);
    printf("ways = %d\n", change);

    return 0;
}
