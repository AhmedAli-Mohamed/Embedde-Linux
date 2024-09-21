#include<iostream>
#include<algorithm>
#include<array>

int main()
{
    int num ;
    std:: cin >> num ;

    int square = [=]() {

        return num * num ;
    }();

    std:: cout << square << std::endl;



    return 0;

}