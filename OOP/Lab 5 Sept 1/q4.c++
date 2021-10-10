
#include <iostream>
using namespace std;
class check
{
	static int count;

public:
	check()
	{
		++count;
	}
	static void objCount(void)
	{
		cout << "No. of Objects: " << count << "\n";
	}
};
int check::count;
int main()
{
	check t1, t2;
	check::objCount();

	check t3;
	check::objCount();
	return 0;
}
