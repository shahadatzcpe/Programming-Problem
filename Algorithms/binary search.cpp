#include<iostream>
using namespace std;

/**
 * Binary search function for integer
 *
 * @param int[] heystack;  //must be sorted data
 * @param int niddle;
 *
 * @return int location; //negative for not found
 */

int binary_search(int heystack[], int niddle)
{

    int min = 0;
    int max = 10000;
    int mid = -1;

    while( min <= max )
    {
        mid = (max + min) / 2;

        if( heystack[ mid ] == niddle )
            return mid;
        else if( heystack[mid] < niddle )
            min = mid + 1;
        else
            max = mid - 1;
    }

    return -1;
}




int main() {

   int x[10000] = {10,20,30,40,50,60,70,80,90,100};

   for(int i=0;i<10000; i++)
   {
       x[i] = 19000 + i;
   }

   int result = binary_search(x, 19312 );


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
