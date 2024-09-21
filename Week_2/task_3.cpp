#include<iostream>
#include<algorithm>
#include<array>

int arr_search(int arr[] ,int size , int num)
{
    for( int i=0; i<size; i++ )
    {
        if ( arr[i] == num )
        return arr[i];
    }
    return -1;

}

/* @Fn			-arr_delete
 * @brief	    -function to delete specified element from array
 * @param [in]   -int [] arr , size of array , number that you want to delete
 * @retval 		-int ( size of the new array)
 * Note			-none
 */

int arr_delete(int arr[] ,int size , int num)
{
    int index = arr_search(arr, size, num);

    if( index == -1 )
    {
        std::cout << "Element not found in array" << std::endl;
        return size;
    }

    for( int i=index; i<size-1; i++ )
    {
        arr[i] = arr[i+1];
    }

    return size-1;
}