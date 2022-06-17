#include <stdio.h>

int main()
{
	double basic_salary[1000], gross_salary[1000], hra, da;
	int n, i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &basic_salary[i]);
	}
	for (i = 0; i < n; i++) {
	
		if (basic_salary[i] < 1500) {
			hra = basic_salary[i] * (10 / 100);
			da  = basic_salary[i] * (90 / 100);
			gross_salary[i] = basic_salary[i] + hra + da;
			printf("%lf\n", gross_salary[i]);
		}
		else if (basic_salary[i] >= 1500) {
			hra = 500;
			da  = (98 / 100);
			gross_salary[i] = basic_salary[i] + hra + da;
			printf("%lf\n", gross_salary[i]);
		}
	}
}
