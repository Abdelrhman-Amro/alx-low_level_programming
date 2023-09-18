#include "main.h"

int main(int argc, char **argv)
{
    int cents[5] = {1, 2, 5, 10, 20};
    int money, cnt = 0, i;

    if (argc > 2)
        return (puts("Error"), 1);

    money = atoi(argv[1]);

    if (money <= 0)
        puts("0");
    else
    {
        while (money)
        {
            for (i = 4; i >= 0; i--)
            {
                if (money % cents[i] == 0)
                {
                    money -= cents[i];
                    cnt++;
                    break;
                }
            }
        }
        printf("%d\n", cnt);
    }
    
    return (0);
}
