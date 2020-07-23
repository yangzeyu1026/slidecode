#include <stdio.h>
#define NAME_LENGTH 50
struct patient
{
	char name[NAME_LENGTH];
	double weight;
	double height;
};
double calculate_BMI(struct patient*);
void printheight(const struct patient*);
int main()
{
	struct patient patient1=
	{
		"Alpha",70,180
	};
	printf("%lf\n",patient1.height);
	printf("This patient's BMI is %f\n",calculate_BMI(&patient1));
	return 0;
}
double calculate_BMI(struct patient *patient_id)
{
	return patient_id->weight/((patient_id->height)*(patient_id->height));
}
void printheight(const struct patient *patient_id)
{
	printf("%lf\n",patient_id->height);
}
