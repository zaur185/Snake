#include<iostream>
#include<ctime>
const int shortt = 20;
const int longg = 80;

void postroenie(char arr[shortt][longg])
{
	int i = 0;
	for (int  i = 0; i < shortt; i++)
	{
		arr[i][0] = 'g';
	}
	for (int i = 0; i < shortt; i++)
	{
		arr[i][79] = 'g';
	}

	for (int i = 0; i < longg; i++)
	{
		arr[0][i] = 'g';
	}

	for (int i = 0; i < longg; i++)
	{
		arr[19][i] = 'g';
	}
	for (int i = 1; i < shortt - 1; i++)
	{
		for (int j = 1; j < longg - 1; j++)
		{
			arr[i][j] = ' ';
		}
	}
	for (int i = 0; i < shortt; i++)
	{
		for (int j = 0; j < longg; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << "\n";
	}
}
int main()
{
	
	char arr[shortt][longg];
	postroenie(arr);

}