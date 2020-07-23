#include <stdio.h>
#define NAME_LENGTH 50
struct patient
{
	char name[NAME_LENGTH];
	double weight;
	double height;
};
double calculate_BMI(double weight,double height);
int main()
{
	struct patient patient1=
	{
		"Alpha",70,180
	};
	printf("This patient's BMI is %f\n",calculate_BMI(patient1.weight,patient1.height));
	return 0;
}
double calculate_BMI(double weight,double height)
{
	double s=weight/(height*height);
	return s;
}