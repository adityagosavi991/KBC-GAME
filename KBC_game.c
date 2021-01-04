// SUBMITTED BY:
//ADITYA SANDEEP GOSAVI
//VANSH BANSAL
#include <stdio.h>

int check(int, int);	//A FUNCTION TO CHECK THE USER INPUT FOR ALL QUESTIONS
int main()
{
	int i;	//Represents index handler for each question
	int life1 = 1, life2 = 1, lifeline, d, prize = 0, myans = 0;	//life1 and life2 represent 2 lifelines, 'myans' represents users input
	printf("          WELCOME TO KAUN BANEGA CROREPATI!!\n\n");
	printf("          YOU WILL ANSWER 10 MCQ QUESTIONS\n");
	printf("         ALL QUESTIONS WILL BE FOR 10 LAKH RUPEES EACH \n");
	printf("          2 LIFE LINES ALLOWED: 50-50 &FLIP-QUESTION\n");
	printf("If you get a question wrong you will win prize money of 3 or 5 or 7 questions, according to your question.\n If you quit during the game you will win the total prize won till that question.\nOne question wrong and the game ends.\nIF ANY LIFELINE IS ACTIVATED IN A QUESTION YOU CANNOT QUIT THE GAME IN THAT QUESTION\n");
	printf("Press any key to continue and q to quit:\n");
	char start;	//Represents permission of the user to start the game
	char questions[10][100] = {	//QUESTION 2-D ARRAY
		"Q1) The International Literacy Day is observed on?",
		"Q2)The language of Lakshadweep, a Union Territory of India, is",
		"Q3)Bahubali festival is related to",
		"Q4)Which day is observed as the World Standards Day?",
		"Q5)Who is the author of 'Manas Ka-Hans'?",
		"Q6)Who is the author of the epic 'Meghdoot'?",
		"Q7)Which of these persons has not walked on the Moon?",
		"Q8)Which team retained the ashes Trophy in 2013?",
		"Q9)Which of these is a term for a place where people gather for shayari and ghazals?",
		"Q10)Which of these is not a recommended mineral in the human diet?",
	};
	char options[10][100] = {	//OPTIONS 2-D ARRAY
		"1)Sep 8 2)Nov 28 3)May 2 4)Sept 22",
		"1)Hindi 2)Malayalam 3)Tamil 4)Telugu",
		"1)Islam 2)Hinduism 3)Buddhism 4)Jainism",
		"1)June 26 2)Nov 15 3)Oct 14 4)Dec 2",
		"1)Khushwant Singh 2)Prem Chand 3)Jayashankar Prasad 4)Amrit Lal nagar",
		"1)Vishakadatta 2)Valmiki 3)Banabhatta 4)Kalidas",
		"1)Charles Duke 2)James A Lovell 3)Alan Bean 4)Pete Conrad",
		"1)Australia 2)South Africa 3)West Indies 4)England",
		"1)Rukhsar 2)Mushaira 3)Shikara 4)Mahabara",
		"1)Strontium 2)Potassium 3)Iron 4)Calcium",
	};
	char newoptions[10][100] = {	//50-50 LIFELINE  2-D ARRAY
		"1)Sep 8 2)Nov 28",
		"2)Malayalam 3)Tamil",
		"3)Buddhism 4)Jainism",
		"3)Oct 14 4)Dec 2",
		"3)Jayashankar Prasad 4)Amrit Lal nagar",
		"3)Banabhatta 4)Kalidas",
		"1)Charles Duke 2)James A Lovell",
		"3)West Indies 4)England ",
		"2)Mushaira 3)Shikara",
		"1)Strontium 2)Potassium",
	};
	scanf("%c", &start);
	printf("\n\n\n");
	int check(int x, int y)	// FUNCTION DEFINITION. Here 'x' represents question number and 'y' represents the answer.
	{
		if (x == 1 && y == 1)
		{
			printf("CORRECT!");
			return 1;
		}

		if (x == 2 && y == 2)
		{
			printf("CORRECT!");
			return 1;
		}

		if (x == 3 && y == 4)
		{
			printf("CORRECT!");
			return 1;
		}

		if (x == 4 && y == 3)
		{
			printf("CORRECT!");
			return 1;
		}

		if (x == 5 && y == 4)
		{
			printf("CORRECT!");
			return 1;
		}

		if (x == 6 && y == 4)
		{
			printf("CORRECT!");
			return 1;
		}

		if (x == 7 && y == 2)
		{
			printf("CORRECT!");
			return 1;
		}

		if (x == 8 && y == 4)
		{
			printf("CORRECT!");
			return 1;
		}

		if (x == 9 && y == 2)
		{
			printf("CORRECT!");
			return 1;
		}

		if (x == 10 && y == 1)
		{
			printf("CORRECT!");
			return 1;
		}
		else if (x > 0 && y == 0)
		{
			printf("LIFELINE\n");
			return 2;
		}
		else
		{
			printf("WRONG!\n");
			return 0;
		}
	}

	if (start != '\0' && start != 'q')	//START THE GAME EXCEPT FOR q and null value
	{
		for (i = 0; i < 10; i++)
		{
			//THIS LOOP RUNS 10 TIMES, EACH FOR SHOWING THE QUESTIONS
			printf("%s \n %s\n\n", questions[i], options[i]);
			printf("YOUR ANSWER:(type only 1, 2, 3 or 4)\nType 0 for a lifeline\nType -1 to quit immediatly.\n");
			scanf("%d", &myans);	// TAKING USERS INPUT
			if (myans == -1)
			{
				printf("GAME OVER!\nYOU won %d rupess!", prize);	//PROVISION TO QUIT
				break;
			}
			else
			{
				d = check(i + 1, myans);
				if (d == 1)
				{
					//CORRECT ANSWER CASE
					prize = prize + 1000000;
					printf("you won %d rupees!\n\n", prize);
				}

				if (d == 0)
				{
					//WRONG ANSWER CASE
					if (prize < 3000000)
					{
						printf("Sorry you lost,total prze won 0 rupees.");
					}

					if (prize > 2000000 && prize < 5000000)
					{
						printf("Sorry you lost,total prze won 30 lakh rupees.");
					}
					else if (prize > 4000000 && prize < 7000000)
					{
						printf("Sorry you lost,total prze won 50 lakh rupees.");
					}
					else if (prize > 6000000)
					{
						printf("Sorry you lost,total prze won 70 lakh rupees.");
					}

					break;
				}
			}

			if (myans == 0)
			{
				//LIFELINE
				if (life1 == 1 || life2 == 1)
				{
					//WHEN USER HAS ATLEAST ONE LIFELINE LEFT
					printf("Which life line?\n");
					printf("Number of lifelines left  50-50:%d and Flip-question:%d\n", life1, life2);
					printf("You cannot quit the question now\n");
					printf("Type 100 for 50-50 and 200 for Flip question \n");
					scanf("%d", &lifeline);
					if (lifeline == 100)
					{
						//USER ASKS FOR 50-50 LIFELINE
						if (life1 != 1)
						{
							printf("This lifeline is already used\nUse the different one\nType 200 to use flip-question\n");	//Checking availability for this lifeline
							scanf("%d", &lifeline);
							if (lifeline == 200)
							{
								//USING THE FLIP-QUESTION LIFELINE WHEN 50-50 IS USED
								life2 = life2 - 1;
								printf("Flipped question: According to the title of a 2013 film, what happened at Wadala?\n");
								printf("1)Shootout 2)Meeting 3)Romance 4)Marriage\n");
								printf("Your answer:(Type 1,2,3 or 4)");
								scanf("%d", &myans);
								if (myans == 1)
								{
									//CORRECT ANSWER
									prize = prize + 1000000;
									printf(" Correct,you won %d rupees!\n\n", prize);
								}
								else
								{
									if (prize < 3000000)
									{
										printf("Sorry you lost,total prze won 0 rupees.");
									}

									if (prize > 2000000 && prize < 5000000)
									{
										printf("Sorry you lost,total prze won 30 lakh rupees.");
									}
									else if (prize > 4000000 && prize < 7000000)
									{
										printf("Sorry you lost,total prze won 50 lakh rupees.");
									}
									else if (prize > 6000000)
									{
										printf("Sorry you lost,total prze won 70 lakh rupees.");
									}

									break;
								}
							}
						}
						else
						{
							//USER USES THE 50-50 LIFELINE WHEN IT IS AVAILABLE
							life1 = life1 - 1;
							printf("New options: %s\nYour answer:(Type 1,2,3 or 4)\n", newoptions[i]);
							if (life1 == 0 && life2 == 1)
							{
								printf("Type 200 to use different lifeline\n");
							}

							scanf("%d", &myans);
							if (myans == 200)
							{
								//Usage of both lifelines at once(first 50-50 used and then flip-question used)
								life2 = life2 - 1;
								printf("Flipped question: According to the title of a 2013 film, what happened at Wadala?\n");
								printf("1)Shootout 2)Meeting 3)Romance 4)Marriage\n");
								printf("Your answer:(Type 1,2,3,4 for answering)\n");
								scanf("%d", &myans);
								if (myans == 1)
								{
									//CORRECT ANSWER
									prize = prize + 1000000;
									printf(" Correct,you won %d rupees!\n\n", prize);
								}
								else
								{
									if (prize < 3000000)
									{
										printf("Sorry you lost,total prze won 0 rupees.");
									}

									if (prize > 2000000 && prize < 5000000)
									{
										printf("Sorry you lost,total prze won 30 lakh rupees.");
									}
									else if (prize > 4000000 && prize < 7000000)
									{
										printf("Sorry you lost,total prze won 50 lakh rupees.");
									}
									else if (prize > 6000000)
									{
										printf("Sorry you lost,total prze won 70 lakh rupees.");
									}

									break;
								}
							}
							else
							{
								d = check(i + 1, myans);	// USER ASKS FOR 50-50 AND USES IT
								if (d == 1)
								{
									//50-50 lifeline
									prize = prize + 1000000;
									printf("you won %d rupees!\n\n", prize);
								}
								else if (d == 0)
								{
									if (prize < 3000000)
									{
										printf("Sorry you lost,total prze won 0 rupees.");
									}

									if (prize > 2000000 && prize < 5000000)
									{
										printf("Sorry you lost,total prze won 30 lakh rupees.");
									}
									else if (prize > 4000000 && prize < 7000000)
									{
										printf("Sorry you lost,total prze won 50 lakh rupees.");
									}
									else if (prize > 6000000)
									{
										printf("Sorry you lost,total prze won 70 lakh rupees.");
									}

									break;
								}
							}
						}
					}
					else if (lifeline == 200)
					{
						//Flip question lifeline
						if (life2 != 1)
						{
							printf("This lifeline is already used\nUse the different one\nType 100 to use 50-50\n");
							scanf("%d", &lifeline);
							if (lifeline == 100)
							{
								life1 = life1 - 1;
								printf("New options: %s \n", newoptions[i]);
								printf("Your answer:(Type 1,2,3 or 4)\n");
								scanf("%d", &myans);
								d = check(i + 1, myans);
								if (d == 1)
								{
									//50-50 lifeline
									prize = prize + 1000000;
									printf("you won %d rupees!\n\n", prize);
								}
								else if (d == 0)
								{
									if (prize < 3000000)
									{
										printf("Sorry you lost,total prze won 0 rupees.");
									}

									if (prize > 2000000 && prize < 5000000)
									{
										printf("Sorry you lost,total prze won 30 lakh rupees.");
									}
									else if (prize > 4000000 && prize < 7000000)
									{
										printf("Sorry you lost,total prze won 50 lakh rupees.");
									}
									else if (prize > 6000000)
									{
										printf("Sorry you lost,total prze won 70 lakh rupees.");
									}

									break;
								}
							}
						}
						else
						{
							life2 = life2 - 1;	//USER USES FLIP-QUESTION LIFELINE
							printf("Flipped question: According to the title of a 2013 film, what happened at Wadala?\n");
							printf("1)Shootout 2)Meeting 3)Romance 4)Marriage\n");
							if (life1 == 1 && life2 == 0)
							{
								printf("Type 100 to use different lifeline\n");
							}

							printf("Your ans:(Type 1,2,3 or 4 for answering)\n");
							scanf("%d", &myans);
							if (myans == 100)
							{
								//BOTH LIFELINES ON THE SAME QUESTION(first flip-question used and then 50-50 used)
								life1 = life1 - 1;
								printf("New options: %s \n", newoptions[i]);
								printf("Your answer:(Type 1,2,3 or 4)\n");
								scanf("%d", &myans);
								d = check(i + 1, myans);
								if (d == 1)
								{
									//CORRECT ANSWER
									prize = prize + 1000000;
									printf("you won %d rupees!\n\n", prize);
								}
								else if (d == 0)
								{
									//WRONG ANSWER
									if (prize < 3000000)
									{
										printf("Sorry you lost,total prze won 0 rupees.");
									}

									if (prize > 2000000 && prize < 5000000)
									{
										printf("Sorry you lost,total prze won 30 lakh rupees.");
									}
									else if (prize > 4000000 && prize < 7000000)
									{
										printf("Sorry you lost,total prze won 50 lakh rupees.");
									}
									else if (prize > 6000000)
									{
										printf("Sorry you lost,total prze won 70 lakh rupees.");
									}

									break;
								}
							}	//ANSWERING THE FLIP-QUESTION
							else if (myans == 1)
							{
								//FIXED ANSWER TO THE FLIP-QUESTION i.e option 1
								//CORRECT ANSWER
								prize = prize + 1000000;
								printf(" Correct,you won %d rupees!\n\n", prize);
							}
							else
							{
								//wrong answer to flip-question
								if (prize < 3000000)
								{
									printf("Sorry you lost,total prze won 0 rupees.");
								}

								if (prize > 2000000 && prize < 5000000)
								{
									printf("Sorry you lost,total prze won 30 lakh rupees.");
								}
								else if (prize > 4000000 && prize < 7000000)
								{
									printf("Sorry you lost,total prze won 50 lakh rupees.");
								}
								else if (prize > 6000000)
								{
									printf("Sorry you lost,total prze won 70 lakh rupees.");
								}

								break;
							}
						}
					}
				}
				else if (life1 == 0 && life2 == 0)
				{
					//When no lifelines left
					printf("Sorry, no lifelines left.\n");
					printf("Please answer the question:(Type 1,2,3 or 4)\n");
					printf("Type -1 to quit\n");
					scanf("%d", &myans);
					if (myans == -1)
					{
						printf("GAME OVER!\nYOU won %d rupess!", prize);	//Quit provision when no lifelines left
						break;
					}
					else
					{
						d = check(i + 1, myans);	//If user answers the question
						if (d == 1)
						{
							//Correct answer
							prize = prize + 1000000;
							printf("you won %d rupees!\n\n", prize);
						}
						else if (d == 0)
						{
							//Wrong answer
							if (prize < 3000000)
							{
								printf("Sorry you lost,total prze won 0 rupees.");
							}

							if (prize > 2000000 && prize < 5000000)
							{
								printf("Sorry you lost,total prze won 30 lakh rupees.");
							}
							else if (prize > 4000000 && prize < 7000000)
							{
								printf("Sorry you lost,total prze won 50 lakh rupees.");
							}
							else if (prize > 6000000)
							{
								printf("Sorry you lost,total prze won 70 lakh rupees.");
							}

							break;
						}
					}
				}
			}
		}

		if (prize == 10000000)
		{
			printf("CONGRATULATIONS! YOU WON THE GAME!!");
		}	//When user answers all 10 questions correctly
	}
	else if (start == 'q' || start == 'Q')
	{
		//On starting the game user types 'q' or 'Q'
		printf("Game stopped :(");
	}
}