#include<iostream>
using namespace std;

/**
 * Bubble short
 *
 * @param int[] heystack;  //must be sorted data
 *
 * @return int* heystack;  //negative for not found
 */
int* bubble_sort(int numbers[])
{
    int n = 100;
    int temp,i,j;

    for(i = 0; i < n - 1; i++ )
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if ( numbers[ j ] > numbers[ j + 1 ] )
            {
                //swaping data
                temp            = numbers[ j + 1 ];
                numbers[ j + 1] = numbers[ j ];
                numbers[ j ]    = temp;
            }
        }
    }

    return numbers;
}



int main() {

   int x[100] = {10,20,30,40,50,60,70,80,90,100};
   int *shorted_data = bubble_sort(x);

   for(int i=0;i<100; i++)
   {

       x[i] = (i % 3 == 0) ? 19000 + i : i * 3 + 1;
   }

   shorted_data = bubble_sort(x);


   int result = binary_search( shorted_data, 19072 );


 for(int y = 0; y<100; y++)
 {
     cout << shorted_data[y] << endl;
 }

   if( result >= 0 )
    {
        cout << "Data found at location : " << result << endl;
    }
   else
    {
        cout << "Data not found";
    }


   return 0;
}
