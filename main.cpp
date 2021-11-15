#include <iostream>
using namespace std;
 
int main()
{
  double array[18] = {
    1.0,1.0,1.5,
    2.0,2.0,3.5,
    3.0,3.0,5.5,
    4.0,4.0,8.5,
    5.0,5.0,10.0,
    6.0,6.0,11.5
  };

  for (int i = 0; i < 18; ++i)
    {
      if (i % 3 == 0)
	printf("\n");

      printf("%g ", array[i]);
    }
  printf("\n");

  double p = 0;
  int n = 0;

  for (int i = 0; i < 18; ++i)
    {
      p = p + array[i];
      if ((i+1) % 3 == 0){
	printf("\n");

	if ((p/2 - array[i])*(p/2 - array[i-1])*(p/2 - array[i-2]) <= 0){
	  printf("Треугольник не может быть построен");
	} else {
	  n = n + 1;
	  printf("%g ", p);
	}
        p = 0;
      };
    }
  printf("\n\nЧисло треугольников: %d", n);

  return 0;
}