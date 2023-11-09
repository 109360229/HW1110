#include <iostream>
#include <stdlib.h>
/*
using namespace std;
int main()
{

	char a[20];
	int i = 0;
	cout << "Enter a character: \n";
	cin >> a;
	for (; a[i]; i++)
	{

		if (a[i] >= 'a' && a[i] <= 'z')

			a[i] -= 32;

		else if (a[i] >= 'A' && a[i] <= 'Z')

			a[i] += 32;

	}

	for (i = 0; a[i]; i++)

		cout << a[i];

	cout << endl;


	return 0;
}
*/
/*
int max(int a, int b) {
	return a > b ? a : b;
}

int main() {

	int a, b, max_num;
	std::cout << "number1: ";
	std::cin >> a;

	std::cout << "number2: ";
	std::cin >> b;
	max_num = max(a, b);

	while (1) {
		if (max_num % a == 0 && max_num % b == 0) {
			std::cout << "The LCM of " << a << " and " << b << " is " << max_num << std::endl;
			break;
		}
		++max_num;
	}
}
*/
/*
using namespace std;

int calculatePower(int, int);

int main()
{
	int base, powerRaised, result;

	printf("Enter base number: ");
	cin >> base;

	printf("Enter power number(positive integer): ");
	cin >> powerRaised;

	result = calculatePower(base, powerRaised);
	cout << base << "^" << powerRaised << " = " << result << "\n";

	return 0;
}

int calculatePower(int base, int powerRaised)
{
	if (powerRaised != 0)
		return (base * calculatePower(base, powerRaised - 1));
	else
		return 1;
}
*/
/*
using namespace std;

int main()
{
	int v1 = 0, v2 = 1, v3, j;
	unsigned n = 100000000000000000;
	/*cout << "Please Enter the number of elements you want in the Fibonacci sequence: ";
	cin >> n;
	cout << "The fibonacci series: " << v1 << " " << v2 << " ";
	for (j = 2; j < n; ++j) //loop starts from 2 because 0 and 1 are already printed    
	{
		v3 = v1 + v2;
		cout << v3 << " ";
		v1 = v2;
		v2 = v3;
	}
	return 0;
}
*/
int c = 1;
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{

	if (n == 1)
	{
		printf("%d. Move disk 1 from rod %c to rod %c\n", c, from_rod, to_rod);
		c++;
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	printf("%d. Move disk %d from rod %c to rod %c\n", c, n, from_rod, to_rod);
	c++;

	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
	//c++;
}

int main()
{

	int n = 3; // Number of disks 
	towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods 
	return 0;
}