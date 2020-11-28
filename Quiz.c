#include<stdio.h>
#include<conio.h>
#define fflush(stdin);
 
  void main()
{
  int answer,score=0;
printf("\n");
printf("\t           🇳🇪Quiz🇳🇪");
printf("\n");
printf("\n Rule:-*There are total 5 Questions each carry 3 marks *\n");
printf("\n");
printf("\t🎉Welcome to the Quiz🙏");
printf("\n");
printf("\n Q1) Capital of India?\n");
printf("\n");
printf(" Option:-\n 1) China \n 2) Jammu and Kashmir\n 3) Delhi\n 4) Kerala\n");
printf("\n->Enter your Answer: ");
scanf("%d",&answer);

if(answer == 3)
{
 printf("\n-> \'Correct Answer\'");
 score= score+3;
}
else
{
 printf("\n-> \'Incorrect Answer\'");
}
printf("\n");

printf("\n Q2) Capital of Maharashtra?\n");
printf("Option:\n 1) kanpur \n 2) Nagpur\n 3) Haryana\n 4) Mumbai. :");
printf("\n->Enter your Answer:");
scanf("%d",&answer);

if(answer == 4)
{
 printf("\nCorrect Answer");
 score= score+3;
}
else
{
 printf("\nIncorrect Answer");
}
printf("\n");

printf("\n Q3) Capital of UttarPradesh?\n");
printf("Option:\n 1) Lucknow \n2) Jammu and Kashmir\n 3) Delhi\n 4) Kerala");
printf("\n->Enter your Answer:");
scanf("%d",&answer);
if(answer == 1)
{
 printf("\nCorrect Answer");
 score= score+3;
}
else
{
 printf("\nIncorrect Answer");
 //score= score-1;
}

printf("\n Q4) Capital of Bihar?\n");
printf("Option:\n 1) Lucknow \n2) Uttar pradesh\n 3) Patna\n 4) Kerala");
printf("\n->Enter your Answer:");
scanf("%d",&answer);
if(answer == 3)
{
 printf("\nCorrect Answer");
 score= score+3;
}
else
{
 printf("\nIncorrect Answer");
 //score= score-1;
}
printf("\n");

printf("\n Q5) Capital of Tamil Nadu?\n");
printf("Option:\n 1) Lucknow \n2) Chennai\n 3) Delhi\n 4) Kerala");
printf("\n->Enter your Answer:");
scanf("%d",&answer);
if(answer == 2)
{
 printf("\nCorrect Answer");
 score= score+3;
}
else
{
 printf("\nIncorrect Answer");
 //score= score-1;
}
printf("\n");

printf("\n🎉YOUR TOTAL MARKS IS %d from 15🎉",score);
if (score == 15)
{ 
  printf("\nCongratulation🏆");
  printf("\n");
  printf("\nYou passed the Quiz");
  printf("\n");
  printf("\n You are Excellent");
}
else if (score<=14 && score>=11)
{
 printf("\nCongratulation🥇");
 printf("\n");
 printf("\nYou passed the Quiz");
 printf("\n");
  printf("\n You are Very Good");
}

else if (score<=10 && score>=6)
{
 printf("\nCongratulation🥈");
 printf("\n");
 printf("\nYou passed the Quiz");
 printf("\n");
  printf("\n You are Good");
}
else
{
printf("\n You Failed the Quiz");
printf("\n");
printf("\nMaybe Next time👍");
}
printf("\n Thank you");
getch();
}
