#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ANSWER 200
#define MAX_QUESTIONS 200
#define TOTAL_QUESIONS 3

typedef struct 
{
	char Question [MAX_QUESTIONS];
	char AnswerA [MAX_ANSWER];
	char AnswerB [MAX_ANSWER];
	char AnswerC [MAX_ANSWER];
	char AnswerD [MAX_ANSWER];
	char correctAnswer;
}Quiz_game;

int main()
{		
	Quiz_game quiz[TOTAL_QUESIONS]; 
	char answer ;
	int correctAnswer = 0 ;
	
	//Questions 1
	strcpy(quiz[0].Question , "What s abdellah birthday ?");
	strcpy(quiz[0].AnswerA , "A) 15/08/2005");
	strcpy(quiz[0].AnswerB , "B) 12/06/2005");
	strcpy(quiz[0].AnswerC , "C) 31/12/2005");
	strcpy(quiz[0].AnswerD , "D) 20/12/2005");
	quiz[0].correctAnswer = 'A';
	
	//Question 2
	strcpy(quiz[1].Question , "What was Abdellah bac MOY  : ");
	strcpy(quiz[1].AnswerA , "A) 14.20");
	strcpy(quiz[1].AnswerB , "B) 15.30");
	strcpy(quiz[1].AnswerC , "C) 16.33");
	strcpy(quiz[1].AnswerD , "D) 15.50");
	quiz[1].correctAnswer = 'D';
	
	//Question 3 
	strcpy(quiz[2].Question , "What s the pet that abdellah have ?: ");
	strcpy(quiz[2].AnswerA , "A) a cat");
	strcpy(quiz[2].AnswerB , "B) a dog");
	strcpy(quiz[2].AnswerC , "C) a hamister");
	strcpy(quiz[2].AnswerD , "D) a dragon");
	quiz[2].correctAnswer = 'A';
	
	
	printf("Welcome to Abdallah Quiz Game ! \n");
	
	for (int i = 0 ; i < TOTAL_QUESIONS ; i++)
	{
		printf("\n");
		printf("%s \n",quiz[i].Question);
		printf("%s \n",quiz[i].AnswerA);
		printf("%s \n",quiz[i].AnswerB);
		printf("%s \n",quiz[i].AnswerC);
		printf("%s \n",quiz[i].AnswerD);
		scanf(" %c",&answer);
		
		if(toupper(answer) == quiz[i].correctAnswer)
		{
			correctAnswer++ ;
			printf("Correct haka ta3jbni \n");
		}
		else {
			printf("awah makch 3ajabni bahdeltni \n");
		}
		printf("\n \n \n\n");
	}
	
	if(correctAnswer == TOTAL_QUESIONS )
	{
		printf("ur score : %d \n",correctAnswer);
		printf("Nta 7bib !");
	} else
	{
		printf("ur score %d \n",correctAnswer);
		printf("Wlh mani 3aref cha ngolek !");
	}
}


