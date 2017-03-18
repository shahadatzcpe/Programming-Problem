#include<iostream>
using namespace std;

/**
 * Insertation short
 *
 * @param int[] heystack;  //must be sorted data
 *
 * @return int* heystack;  //negative for not found
 */
int* insertaion_sort(int heystack[])
{

    int n = 100;
    int temp,i,j;

    for(i = 1; i < n ; i++ )
    {
        temp = heystack[i];

        for(j = i ; heystack[ j - 1 ] > temp && j > 0; j-- )
        {
            heystack[j] = heystack[ j - 1 ];
        }

        heystack[ j ] = temp;
    }

    return heystack;
}



int main() {

   int x[100];
   int *shorted_data;

   for(int i=0;i<100; i++)
   {

       x[i] = (i % 3 == 0) ? 19000 + i : i * 3 + 1;
   }

   shorted_data = insertaion_sort(x);


    /** Printing sorted data for confirm */
    for(int y = 0; y<100; y++)
    {
        cout << shorted_data[y] << endl;
    }

   return 0;
}
