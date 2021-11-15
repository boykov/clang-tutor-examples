// C++ program to find factorial of given number
#include <iostream>
using namespace std;
 
int main()
{
    int array[36] = {1,1,1,1,1,1,
                     2,2,2,2,2,2,
                     3,3,3,3,3,3,
                     4,4,4,4,4,4,
                     5,5,5,5,5,5,
                     6,6,6,6,6,6};
    int copyarray[36];

    for (int i = 0; i < 6; ++i)
        for (int j = 0; j < 6; ++j)
            copyarray[i*6+j]= array[j*6+i];

    for (int i = 0; i < 36; ++i)
    {
        if (i % 6 == 0)
            printf("\n");

        printf("%d ", array[i]);

    }

    printf("\n");
    printf("\n");

    for (int i = 0; i < 36; ++i)
    {
        if (i % 6 == 0)
            printf("\n");

        printf("%d ", copyarray[i]);
    }

    return 0;
}