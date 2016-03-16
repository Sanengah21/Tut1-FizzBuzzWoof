#include <iostream>

using namespace std;

int main()
{
	int i;

	for (i = 1; i <= 20; i++)
	{

		if ((i % 3 == 0) && (i % 5 == 0))
		{
			if (i % 7 == 0)
			{

				cout << "Fizz Buzz Woof" << endl;
			}
		}

		else
		{
			if ((i % 3 == 0) && (i % 5 == 0))
			{
				cout << " Fizz Buzz" << endl;
			}
			else
			{

				if ((i % 3 == 0) && (i % 7 == 0))
				{
					cout << "Fizz Woof" << endl;
				}
				else
				{
					if ((i % 5 == 0) && (i % 7 == 0))
					{
						cout << "Buzz Woof" << endl;
					}
					else
					{
						if (i % 3 == 0)
						{
							cout << "Fizz" << endl;
						}

						if (i % 5 == 0)
						{
							cout << "Buzz" << endl;
						}
						if (i % 7 == 0)
						{
							cout << "Woof" << endl;
						}
						if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
						{
							cout << i << endl;
						}
					}
				}
			}
		}
	}
}