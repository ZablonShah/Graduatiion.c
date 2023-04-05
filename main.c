#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int balance_finished;
	int sat_for_exams;
	int no_disciplinary_cases;
	int library_charges_paid;
	int no_pending_supplimentary_exams;
	int gown_paid;
    int sup_exams;
    int average_score;

	
    printf("Have you finished paying your school balance? (1 for Yes, 0 for No): ");
    scanf("%d", &balance_finished);
    
    printf("Have you sat for all your exams? (1 for Yes, 0 for No): ");
    scanf("%d", &sat_for_exams);
    
    printf("Never had any disciplinary cases? (1 for True, 0 for False): ");
    scanf("%d", &no_disciplinary_cases);
    
    printf("Have you paid your library charges? (1 for Yes, 0 for No): ");
    scanf("%d", &library_charges_paid);
    
    printf("Do you have any supplementary exams? (1 for Yes, 0 for No): ");
     scanf("%d", &sup_exams);
     if(sup_exams=1)
	 {
     	 printf("Have you sat for all your supplimentary exams?(1 for yes, 0 for NO): ");
          scanf("%d", &no_pending_supplimentary_exams);
	 }
    
    printf("Have you paid for your graduation gown? (1 for Yes, 0 for No): ");
    scanf("%d", &gown_paid);
    
    
    if ((balance_finished) && (sat_for_exams ) && (no_disciplinary_cases) &&  (no_pending_supplimentary_exams) && (library_charges_paid ) && (gown_paid))
	 {
        printf("Congratulations! You are eligible for graduation.\n");  
    } 
    else if((balance_finished==0) && (sat_for_exams==1) && (no_disciplinary_cases==1) && (no_pending_supplimentary_exams==1) && (library_charges_paid==1) && (gown_paid==1))
    {
    	printf("sorry youre not eligible for graduation ensure you have cleared your fee balance.\n");
	}
	else if((balance_finished==1) && (sat_for_exams==0) && (no_disciplinary_cases==1) && (no_pending_supplimentary_exams==1) && (library_charges_paid==1) && (gown_paid==1))
	{
		printf("sorry you are not eligible for graduation ensure you visit the department inorder to address the exams you did not sit for.\n");
	}
	else if((balance_finished==1) && (sat_for_exams==1) && (no_disciplinary_cases==0) && (no_pending_supplimentary_exams==1) && (library_charges_paid==1) && (gown_paid==1))
	{
		printf("sorry you are not eligible for graduation ensure you visit the vice chancellor to address your discpline file.\n");
	}
	else if((balance_finished==1) && (sat_for_exams==1) && (no_disciplinary_cases==1) && (no_pending_supplimentary_exams==0) && (library_charges_paid==1) && (gown_paid==1))
	{
		printf("sorry you are not eligible for graduation ensure you visit the department inorder to address your pending supplimentary exams.\n");
	}
	else if((balance_finished==1) && (sat_for_exams==1) && (no_disciplinary_cases==1) && (no_pending_supplimentary_exams==1) && (library_charges_paid==0) && (gown_paid==1))
	{
		printf("sorry you are not eligible for graduation ensure you visit the library and settle for all your libary charges.\n");
	}
	else if((balance_finished==1) && (sat_for_exams==1) && (no_disciplinary_cases==1) && (no_pending_supplimentary_exams==1) && (library_charges_paid==1) && (gown_paid==0))
	{
		printf("sorry you are not eligible for graduation ensure you pay for your gown.\n");
	}
	else {
        printf("Sorry, you are not eligible for graduation.\n");
        printf("Please make sure you have finished paying your school balance, sat for all your exams, have no disciplinary cases, have paid your library charges, and have paid for your graduation gown.\n");
    }
    
    
    return 0;
}

