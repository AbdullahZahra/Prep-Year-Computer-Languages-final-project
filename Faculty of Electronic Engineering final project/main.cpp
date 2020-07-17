// Faculty of Electronic Engineering final project
// This project is made by Abdullah M. Zahra
// Academic ID: 1900227
// Academic email: 1900227@el-eng.menofia.edu.eg
// Class: 10
// Prep Year


#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


void area()
{
	int sel; // the selector of the operation



	// messages to the user to interact with the program
	cout << "Please, select of the following shapes to find its area:" << endl;
	cout << "	[1] Select 1 to calculate the area of a Circle" << endl;
	cout << "	[2] Select 2 to calculate the area of a Square" << endl;
	cout << "	[3] Select 3 to calculate the area of a Rectangle" << endl;
	cout << "Please, Enter Your Selection:" << endl;


	cin >> sel; // to enter a certain switch case


	switch (sel)
	{
	case 1: // calculates the area of a circle
	{
		long double r; // redius of the circle
		cout << "Please, Enter the radius of the circle:" << endl;
		cin >> r;
		// the calculation of the area of the circle and the output
		cout << "The area of the circle = " << 3.14159 * pow(r, 2.0) << endl;
		break;
	}
	case 2: // calculates the area of a square
	{
		long double l;
		cout << "Please, enter the side length of the square:\n";
		cin >> l;
		// the calculation and the output of the area of the square
		cout << "The area of the square = " << pow(l, 2.0) << endl;
		break;
	}
	case 3: // calculates the area of a rectangle
	{
		long double width, height;
		cout << "Please, enter the width of the rectangle" << endl;
		cin >> width;
		cout << "Please, enter the height of the rectangle" << endl;
		cin >> height;
		// the calculation and the output of the area of the area of the rectangle
		cout << "The area of the rectangle = " << width * height << endl;
		break;
	}
	}
	// end of the program


}


void summing() // the summing system
{
	long double n, x, sum = 0;

	cout << "Please, enter the number of numbers to calculate their sum and average:" << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) // to calculate the sum of the numbers
	{
		cout << "Please, enter number " << i << endl;
		cin >> x;
		sum += x;
	}
	 // the sum output
	cout << "The sum of the numbers = " << sum << endl;

	// the calculation and output of the average
	cout << "The average of the numbers = " << sum / n << endl;
}



void minimum()
{
	int n, a[1000], mini;
	cout << "Please, enter the number of values:" << endl;
	cin >> n;

	cout << "Please, enter number 1" << endl;
	cin >> a[0];

	mini = a[0];
	for (int i = 1; i < n; i++)
	{
		cout << "Please, enter numbre " << i + 1 << endl;
		cin >> a[i];
		mini = min(mini, a[i]); // to calculate the minimum number so far
	}
	cout << "The minimum number = " << mini << endl;
}



void pattern()
{
	int n;
	cout << "Please, enter the number of rows:" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= (n-i); j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= ((2 * i) - 1); j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}



int main()
{
	int selection=0; // to select a program to enter
	int again = 0; // we use this variable in each case to know when to terminate the program


	while (selection >= 0) // an infinte loop only terminated by the user
	{
		// messages to the user to interact with the program
		cout << "Please, select one of the following applications:" << endl;
		cout << "	[1] Select 1 to calculate Area" << endl;
		cout << "	[2] Select 2 to execute Comparator" << endl;
		cout << "	[3] Select 3 to execute Summing System" << endl;
		cout << "	[4] Select 4 to find minimum of n numbers" << endl;
		cout << "	[5] Select 5 to print pattern on the screen" << endl;
		cout << "	[6] Select 6 to terminate" << endl;
		cout << "Please, Enter Your Selection:" << endl;



		cin >> selection; // to enter a certain switch case

		if (selection == 6)
		{
			cout << "Thank you." << endl;
			break;
		}

		switch (selection)
		{
		case 1: // it goes to the area function
		{
			area();
			break;
		}

		case 2: // A simple comparator that compares three different integer numbers (x, y and z) to find the largest value.
		{
			int x, y, z, maximum;
			cout << "Please, enter the first number:" << endl;
			cin >> x;
			cout << "Please, enter the second number:" << endl;
			cin >> y;
			cout << "Please, enter the third number:" << endl;
			cin >> z;

			maximum = max(x, y); // first we compare the first two numbers using the max() function
			maximum = max(maximum, z); // the we compare the largest of the first two numbers with the third number

			cout << "The largest number = " << maximum << endl;
			break;


		}
		case 3: // A simple summing system that computes the sum and average of n numbers that input from the keyboard
		{
			summing();
			break;
		}

		case 4: // A function called minimum( ) to compute and return the minimum value of n integer numbers that input from the keyboard
		{
			minimum();
			break;
		}

		case 5: // A function to drow a pattern
		{
			pattern();
			break;
		}
		}



		cout << "\nDo you want to continue?" << endl; // to tell the user to continue or to terminate
		cout << "\t[1] Select 1 to select YES" << endl;
		cout << "\t[2] Select 2 to select NO" << endl;
		cin >> again;
		if (again == 2)
		{
			cout << "Thank you." << endl;
			break;
		}

	}




	return 0;
}
