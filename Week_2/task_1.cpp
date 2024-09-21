#include<iostream>
#include<algorithm>
#include<array>

/* @Fn			-max_arr
 * @brief	    -calculate the maximum number of the array elements
 * @param [in]   -int[] arr , size of array
 * @retval 		-int
 * Note			-none
 */
int max_arr(int arr[] ,int size)
{
    
    int result = arr[0];
    for(int i = 0; i <  size; i++)
    {
        if (arr[i] > result)
        {
            result = arr[i];
        }
        
    } 
    return result;

}






