#include <stdio.h> #include <stdlib.h>

// Define structure for employee data struct employee {
char name[50]; int emp_id; float salary;
char job_title[50];
};

// Declare functions
void add_employee(struct employee *emp_arr, int n); void display_employee(struct employee emp);
void display_all_employees(struct employee *emp_arr, int n);

int main() {
int n; // Number of employees
struct employee *emp_arr; // Array to store employee data

printf("Enter the number of employees: "); scanf("%d", &n);

// Allocate memory for employee array
emp_arr = (struct employee*) malloc(n * sizeof(struct employee));

// Add employees to the array add_employee(emp_arr, n);

// Display all employees in the array display_all_employees(emp_arr, n);

// Free memory allocated for employee array free(emp_arr);
 
return 0;
}

// Function to add employee data to the array
void add_employee(struct employee *emp_arr, int n) { for(int i = 0; i < n; i++) {
printf("\nEnter details of employee %d:\n", i+1); printf("Name: ");
scanf("%s", emp_arr[i].name); printf("Employee ID: "); scanf("%d", &emp_arr[i].emp_id); printf("Salary: ");
scanf("%f", &emp_arr[i].salary); printf("Job Title: ");
scanf("%s", emp_arr[i].job_title);
}
}

// Function to display employee data
void display_employee(struct employee emp) { printf("\nName: %s\n", emp.name); printf("Employee ID: %d\n", emp.emp_id); printf("Salary: %.2f\n", emp.salary); printf("Job Title: %s\n", emp.job_title);
}

// Function to display all employees in the array
void display_all_employees(struct employee *emp_arr, int n) { printf("\nEmployee List:\n");
for(int i = 0; i < n; i++) { display_employee(emp_arr[i]);
}
}
