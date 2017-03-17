#include<iostream>
using namespace std;

/**
 * Binary search function for integer
 *
 * @param int[] heystack;  //must be sorted data
 * @param int[] niddle;
 *
 * @return int location; //negative for not found
 */

int binary_search(int heystack[], int niddle)
{

    int min = 0;
    int max = 10;
    int mid = -1;

    while( max > min)
    {

        mid = (max + min) / 2;

        if( heystack[mid] < niddle )
            min = mid + 1;
        else

            max = mid;
    }

    if( heystack[mid] == niddle)
        return mid;

    return -1;
}




int main() {

   int x[10] = {10,20,30,40,50,60,70,80,90,100};

   int result = binary_search(x, 100);

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
