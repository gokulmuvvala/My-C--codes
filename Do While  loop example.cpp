/* Author name : Gokul kumar muvvala
Time: 12:00 AM
Date: 22/12/2020 */
// Do While loop example in c++ printing n numbers
#include<iostream>
 int main()
{
	int i,n; // Declaring the variables		
	std::cout<<"Enter the n value :"<<std::endl;
	std::cin>>n;
	i=1; // intializing i=1	
	do
	{
	std::cout<<i<<std::endl;
	i++;	
	}while(i<=n);
}
