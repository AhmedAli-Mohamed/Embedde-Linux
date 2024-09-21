#include<iostream>
#include<algorithm>
#include<array>

/* @Fn			-arr_search
 * @brief	    - searches for specified element in array
 * @param [in]   -int [] arr , size of array , number that you want to search for
 * @retval 		-int 
 * Note			-none
 */
int arr_search(int arr[] ,int size , int num)
{
    for( int i=0; i<size; i++ )
    {
        if ( arr[i] == num )
        return arr[i];
    }
    return -1;

}
