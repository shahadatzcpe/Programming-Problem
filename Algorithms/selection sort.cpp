#include<iostream>
using namespace std;

/**
 * Bubble short
 *
 * @param int[] heystack;  //must be sorted data
 *
 * @return int* heystack;  //negative for not found
 */
int* selection_sort(int numbers[])
{
    int n = 100;
    int temp,i,j, min;

    for(i = 0; i < n ; i++ )
    {
        min = i;

        for(j = i; j < n ; j++)
        {
            if ( numbers[ min ] > numbers[ j ] )
            {
               min = j;
            }
        }

        temp            = numbers[ i ];
        numbers[ i ]    = numbers[ min ];
        numbers[ min ]  = temp;

    }

    return numbers;
}



int main() {

   int x[100] = {10,20,30,40,50,60,70,80,90,100};
   int *shorted_data;

   for(int i=0;i<100; i++)
   {

       x[i] = (i % 3 == 0) ? 19000 + i : i * 3 + 1;
   }

   shorted_data = selection_sort(x);



 for(int y = 0; y<100; y++)
 {
     cout << shorted_data[y] << endl;
 }


   return 0;
}
