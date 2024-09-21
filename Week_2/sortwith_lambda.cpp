#include<iostream>
#include<algorithm>
#include<array>

int main()
{
    std:: cout << " Enter the Sorting Mechnism \n 1- Ascending \n 2 - Descending" << std::endl;
    int sort_choice;
    std::cin >> sort_choice;
    int number = 0;
    std::cout << "Enter the numbers (hit Enter after each number):" << std::endl;  // Prompt the user to enter numbers
    std::cin >> number;
    std::vector<int> arr ;
     
  
    while ( std::cin.get() != '\n'  )
    {
        
        arr.push_back(number);
        std::cin >> number; 
        fflush(stdin);
       
        // Read the next number from the user
    }
    
    

    std::sort(arr.begin(), arr.end() , [sort_choice]( int x , int y )
    {
        
        
        if(sort_choice == 1 )
        return x < y;

        if(sort_choice == 2)
        return x > y;
        });

    std::cout << "Sorted array: ";
    for (int i : arr)
        std::cout << i << " ";

    return 0;
}