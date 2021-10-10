#include <iostream>
#include <math.h>
using namespace std;

float interest(float P, float t, float r, float n)
{
	return P * (powf((1 + (r / (n * 100))), t * n) - 1);
}

float interest(float P, float t, float r)
{
	return P * r * t / 100;
}

int main()
{
	float P, r, t, n;
	cout << "1: Simple Interest\n2: Compound Interest\n";
	int i = 0;
	cout << "\nEnter: ";
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "Enter P, r, t: ";
		cin >> P >> r >> t;
		cout << "Simple Interest: " << interest(P, t, r);
		break;
	case 2:
		cout << "Enter P, r, t, n: ";
		cin >> P >> r >> t >> n;
		cout << "Compound Interest: " << interest(P, t, r, n);
		break;
	default:
		printf("Wrong choice");
	}
}