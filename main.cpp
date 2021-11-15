#include <iostream>
using namespace std;
 
int main()
{
    int array[18] = {1,1,2
                     2,2,4
                     3,3,6
                     4,4,8
                     5,5,10
                     6,6,12
    };

    for (int i = 0; i < 18; ++i)
    {
        if (i % 3 == 0)
            printf("\n");

        printf("%d ", array[i]);

    }

    printf("\n");

    return 0;
}