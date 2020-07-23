#include <stdio.h>
#define NAME_LENGTH 50
struct patient
{
	char name[NAME_LENGTH];
	double weight;
	double height;
};
double calculate_BMI(struct patient patient_id);
int main()
{
	struct patient patient1=
	{
		"Alpha",70,180
	};
	printf("This patient's BMI is %f\n",calculate_BMI(patient1));
	return 0;
}
double calculate_BMI(struct patient patient_id)
{
	double s;
	s=patient_id.weight/(patient_id.height*patient_id.height);
	return s;
}