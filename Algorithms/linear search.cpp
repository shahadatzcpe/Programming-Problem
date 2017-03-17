#include<iostream>
using namespace std;

/**
 * Linear search function for integer
 *
 * @param int[] heystack;
 * @param int[] niddle;
 *
 * @return int location; //negative for not found
 */

int linear_search(int heystack[], int niddle)
{
    int loc = 0;
    int length = 10;

    while( loc < length )
    {
        if( heystack[loc] == niddle )
        {
            return loc;
        }
        loc++;
    }
    return -1;
}




int main() {

   int x[10] = {10,20,30,40,50,60,70,80,90,50};

   int result = linear_search(x, 10);

   if( result > 0 )
    {
        cout << "Data found at location : " << result << endl;
    }
   else
    {
        cout << "Data not found";
    }

   return 0;
}
