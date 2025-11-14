/* I've created this program so that I can calculate the number of classes that I can skip while maintaining my attendance.*/
#include<stdio.h>
#include<math.h>
int main()
{
	float total_classes, absent_classes, present_classes;
	float margin, percentage, required_ratio, total_classes_needed;
	printf("How much attendance do you need?\nAnswer in percentage: \n");
	scanf("%f",&percentage);

	printf("Enter the number of classes conducted: \n");
	scanf("%f",&total_classes);
	
	printf("Enter the number of classes you were absent: \n");
	scanf("%f",&absent_classes);

	if (percentage < 0 || percentage > 100){
		printf("Enter the percentage between 0 to 100.");
	return 1;
	}

	if (total_classes < 0){
		printf("Number of classes cannot be less than 0.");
	return 1;
	}
	if (absent_classes < 0){
		printf("Absent classes cannot be less than 0.");
	}
	present_classes = total_classes - absent_classes;
	required_ratio = percentage/100.0;
	total_classes_needed = present_classes / required_ratio;
	margin = total_classes_needed - total_classes;
	printf("The total number of classes you can skip is:%.0f \n", floor(margin));
	return 0;
}

