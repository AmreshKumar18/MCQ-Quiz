#include<stdio.h>
#include<string.h>
 
int main() { 
  char quest [5][100];
  char optionl [4][20],option2 [4][20], option3 [4][20],option4 [4][20],option5 [4][20]; 
  int response[5], correct_ans[5], option,i, marks;  
  
  strcpy(quest[0], "A. Who is the father of C language?");  
  strcpy (optionl[0],"1. Steve Jobs");  
  strcpy(optionl[1] ,"2. James Gosling");  
  strcpy(optionl[2] ,"3. Dennis Ritchie");
  strcpy(optionl[3] ,"4. James Charles");
  correct_ans[0] = 2; 
   
  strcpy(quest[1], "B. Which of the following is not a valid C variable name?");  
  strcpy(option2 [0],"1. int number;");  
  strcpy(option2[1], "2. float rate;");  
  strcpy(option2[2],"3. int $main;");
  strcpy(option2[3],"4. int main;");   
  correct_ans[1]=2; 
   
  strcpy(quest[2], "C. Which of the following are C preprocessors?");  
  strcpy(option3 [0],"1. #ifdef");  
  strcpy(option3[1], "2. #define");  
  strcpy(option3[2],"3. #defein");
  strcpy(option3[3],"4. both a and b");   
  correct_ans[2]=3;
   
  strcpy(quest[3], "D. Which of the following cannot be a variable name in C?");  
  strcpy(option4 [0],"l. true");  
  strcpy(option4[1] ,"2. volatile");  
  strcpy(option4[2] ,"3. export");
  strcpy(option4[3] ,"4. friends");  
  correct_ans[3] = 1; 
   
  strcpy(quest[4], "E. What is an example of iteration in C?");  
  strcpy(option5[0],"l. for");  
  strcpy(option5[1], "2. if-else");  
  strcpy(option5[2],"3. switch");
  strcpy(option5[3],"4. goto");  
  correct_ans[4] = 0; 
  
  do {  
    printf("\n *************\n");
    printf("| QUIZ PROGRAM |");
	printf("\n *************");
    printf("\n----------------------------------|");  
    printf("\n 1. Display Questions             |");  
    printf("\n 2. Display Correct Answers       |");  
    printf("\n 3. Display Result                |");  
    printf("\n 4. EXIT                          |"); 
	printf("\n                                  |");
    printf ("\n      Created By: Amresh Kumar    |");
	 printf ("\n----------------------------------|");  
    printf("\n\n\n Enter your option: ");  
    scanf("%d", &option);  
    switch(option)  {  
       case 1:    
           printf ("\n %s \n", quest [0]);   
           for(i=0;i<4;i++)   {   
              printf("\n %s", optionl[i]);   
           }   
           printf ("\n\n Enter your answer number: ");   
           scanf("%d", &response[0]);   
           printf ("\n %s \n", quest [1]);   
           for (i=0;i<4;i++)   {   
             printf("\n %s", option2[i]);   
           }   
           printf("\n\n Enter your answer number: ");   
           scanf("%d", &response[1]);   
           printf("\n %s \n", quest[2]);  
           for(i=0;i<4;i++)  {   
             printf("\n %s", option3[i]);  
           }   
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [2]);   
           printf("\n %s \n", quest[3]);  
           for (i=0;i<4;i++)  {   
              printf("\n %s", option4[i]);  
           }   
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [3]);   
           printf("\n %s \n", quest[4]);  
           for (i=0;i<4;i++)  {   
               printf("\n %s", option5[i]);  
           }   
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [4] );   
           break;  
       case 2:   
           printf("\n\n CHECK THE CORRECT ANSWERS");   
           printf("\n ************************");   
           printf("\n %s \n %s",quest[0] ,optionl[correct_ans[0]]);   
           printf("\n\n %s \n%s",quest[1] ,option2[correct_ans[1]]);   
           printf("\n\n %s \n%s",quest[2] ,option3[correct_ans[2]]);   
           printf("\n\n %s \n%s",quest[3] ,option4[correct_ans[3]]);   
           printf("\n\n %s \n%s",quest[4] ,option5[correct_ans[4]]);   
           break;  
       case 3:   
           marks = 0;  
           for(i = 0;i <= 4;i++)  {   
             if(correct_ans[i]+1==response[i])   {   
                marks++;   
             }  
           }   
           printf ("\n Out of 5 you score %d",marks);   
           break;  
    }  
  }  
      while(option!=4);   
      return 0; 
}
