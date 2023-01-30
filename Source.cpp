#include <iostream>
#include <string>

struct DatePersonale
{
	std::string nume;
	int varsta;
	double greutate;
};

int main()
{
	DatePersonale* dp = new DatePersonale;
	dp->greutate;

	system("pause");
}