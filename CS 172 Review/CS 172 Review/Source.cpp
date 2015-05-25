// Alex Blair
// CS 172
// Pete Tucker
// Review Ex 02-05

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;


void ex02();
void ex03();
void ex04();
void doubleNumbers(int &integer);
void add(int a, int b);
void addToPara(int &value);
void ex05();


int main()
{
	int value = 1;
	int a = rand() % 200;
	int b = rand() % 200;
	ex02();
	ex03();
	ex04();
	cout << "The value is ";
	add(a, b);
	addToPara (value);
	cout << "a number + 1 is: " << value << endl;
	ex05();
	


	return 0;
}

void ex02()
{
	srand(time(NULL));
	bool hasPassedTest = true;
	int x = rand() % 100; 
	int y = rand() % 100;
	if (x >= y)
	{
		cout << x << " is greater than " << y << endl;
	}
	else
		cout << x << " is not geater than " << y << endl;
	int numberOfShares = 0;
	cout << "Please enter the number of shares. " << endl;
	cin >> numberOfShares;
	if (numberOfShares < 100)
	{
		cout << numberOfShares << " is less than 100 " << endl;
	}
	else
		cout << " The number of shares is greater than 100. " << endl;
	int boxWidth;
	int Bookwidth;
	cout << " Please enter the width of a box and a book. " << endl;
	cout << " Box: ";
	cin >> boxWidth;
	cout << " Book: ";
	cin >> Bookwidth;

	if (boxWidth % Bookwidth == 0){
		cout << " The box width is evenly divisible by the book width. " << endl;
	}
	else
		cout << "The box width is not evenly divisible by the book width. " << endl;

	int ShelfLife;
	int temp = rand() % 150;
	cout << " What is the shelf life of a box of chocolate? " << endl;
	cin >> ShelfLife;
	cout << "The temperature is " << temp << endl;
	if (temp > 90){
		cout << "The shelf life is: " << (ShelfLife - 4) << endl;
	}
	else
		cout << "The shelf life is " << ShelfLife << endl;
	return;
}

void ex03()
{
	int height;
	int width;
	cout << "What is the height and width of a square? " << endl;
	cin >> height;
	cin >> width;
	cout << "The area of the two triangles within the square is: " << ((height * width)/2) << endl;
	cout << "The length of the diagonal is " << ((width * width) + (height * height)) << endl;
	char response; 
	cout << "Please answer y or n" << endl;
	cin >> response;
	if (response == 'y'){
		cout << "yes" << endl;
	}
	else if (response == 'n'){
		cout << "no" << endl;
	}
	char tab = '	';
	cout << "What is your mailing address? " << endl;
	string mailingAddress;
	cin.ignore();
	getline(cin,mailingAddress);

	cout << "So your mailing address is " << endl;
	cout << mailingAddress << endl;


	string empty;
	empty = ' ';
	cout << "The empty string is " << empty << endl;
	return;
}

void ex04()
{

	int number = 1;
	int x = number;
	cout << "Please enter a number between 1 and 10. " << endl;
	while (number >= 1 && number <= 10 && x == number){



		cin >> number;

		x++;
		for (int i = 1; i <= number; i++){
			int sum = 0;

			cout << "The cube of the numbers up to the number entered are: " << endl;
			sum += (((i*i)*i));
			cout << sum << endl;
		}
	}
	cout << endl;
		do{
			cout << "********************************************" << endl;
			cout << endl;
		} while (number >= 1 && number <= 10 && x == number);
	

	
	for (int k = 0; k <= 40; k++){
		if (k % 2 == 0)
			cout << k << endl;
	}


	doubleNumbers(number);
	

	return;
}

void doubleNumbers(int &integer)
{
	

	int doubleNumber;
	doubleNumber = (integer * 2);
	cout << "The number doubled is " << doubleNumber << endl;
	
	
	return;
}

void add(int a, int b)
{
	

	int o = 3;
	int p = 7;

	cout << (o + p) << endl;

	return;
}

void addToPara(int &j)
{
	j += 1;
	return;
}

void ex05()
{
	int array[6];
	int f;
	for (int g = 1; g <= 5; g++){
		cout << "Please enter an integer value. " << endl;
		cin >> f;
		array[g] = g;
	}

	int sum = 0;
	int product = 1; 
	for (int z = 1; z <= 5; z++)
	{
		sum += array[f];
		product *= array[f];
	}

	cout << "The Sum is: " << sum << endl;
	cout << "The Product is: " << product << endl;
	// I could not get the sum and product to function properly.
	return;
	// I also did not quite understand the last two parts, or how to do them.
}
