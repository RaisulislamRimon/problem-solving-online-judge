#include <stdio.h>

int main() {
	double Basic_Salary[10000], Gross_salary, HRA, HRA_less, DA_less, DA, HRA_up, DA_up;
	int n, i;
	double z = 98 / 100;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%lf", &Basic_Salary);
	}
	
	/*if (Basic_Salary < 1500) {
			HRA_less = Basic_Salary * (10 / 100);
			DA_less  = (Basic_Salary * (90 / 100));
			Gross_salary = Basic_Salary + HRA_less + DA_less;
			
			printf("%lf\n", Gross_salary);
	*/		
	}
	/*else*/ if (Basic_Salary >= 1500) {
		HRA_up = 500;
		DA_up  = (Basic_Salary * z); 
		Gross_salary = Basic_Salary + HRA_up + DA_up;
		
		printf("%lf\n", Gross_salary);
	}
			
	return 0;
}
