//Aiman Haq
//Room 52
//Bathroom Breakthroughs

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Functions
void room52game();
void showLesson(int lesson);
void bathArt(int item);
void showRandomTip();

int main(){
	int choice;

	//to welcome
	printf("----------------------------------------------\n");
	printf("        ROOM 52: BATHROOM BREAKTHROUGHS       \n");
	printf("----------------------------------------------\n");
	printf("    A Reflective Restroom of Life Lessons     \n");
	printf("       Flush doubt. Reflect deeply.           \n");
	printf("       Rinse off failure. Dry with hope.      \n");
	printf("______________________________________________\n\n");

	while(1){
		printf("\nWelcome to the Reflective Bathroom. Choose a Reflector to interact with:\n");
		printf("1. Sink\n");
		printf("2. Mirror\n");
		printf("3. Toilet\n");
		printf("4. Shower\n");
		printf("5. Cabinet\n");
		printf("6. Stepout for a breather\n");
		printf("99. Exit the bathroom\n> ");
		scanf("%d", &choice);

		if(choice >= 1 && choice<=5){
			bathArt(choice);
			showLesson(choice);
			showRandomTip();
		}
		else if(choice == 6){
		       printf("You dry your hands and step back int to the hallway.\n\n");
		       break;
		}
		else if (choice == 99){
			printf("Exiting the reflective Bathroom. Stay inspired.\n\n");
			break;
		}
		else {
			printf("Invalid choice. Please choose 1-6 or 99 to exit.\n");
		}
	}
}

void showLesson(int lesson){
	//Array of life lessons
	const char *lessons[]={
		"Sink: \"Small routines are powerful. Rinse. Reflect. Repeat.\"",
		"Mirror: \"Growth begins when you stop lying to yourself.\"",
		"Toilet: \"Let go of what no longer serves you.\"",
		"Shower: \"Wash off the doubt. You're still becoming.\"",
		"Cabinet: \"You alredy hold the tools you need.\""
	};

	if(lesson >= 1 && lesson <= 5){
		printf("\n%s\n", lessons[lesson -1]);
	}
}
//art and meaning of eath reflective character.
void bathArt(int item){
	if(item == 1){
		//Sink
		printf("\n   _____\n");
		printf("  /     \\ \n");
		printf(" |  |Y|  | <- Sink\n");
		printf(" |   T   | Routine is the path to Success\n");
		printf("  \\_____/ \n");
	}
	else if (item == 2){
		//Mirror
		printf("\n   ________ \n");
		printf("  /        \\ \n");
		printf(" |  LOOK IN | <- Mirror \n");
		printf(" |  AND SEE | True change starts within.\n");
		printf(" | YOURSELF | \n");
		printf("  \\________/ \n");
	}
	else if (item == 3){
		//Toilet
		printf("\n   ________ \n");
		printf(" /        \\ \n");
		printf("| FLUSH IT | <- Toilet\n");
		printf("|  AWAY !  | Let go of your regrets.\n");
		printf(" \\________/ \n");
		printf("     ||\n");
		printf("   (____)\n");
	}
	else if (item == 4){
		//Shower
		  printf("\n   ||||\n");
		  printf("   |||| <- Shower\n");
		  printf("   |||| Wash off the doubt.\n");
	}
	else if (item == 5){
		// Cabinet
		printf("\n  _______ \n");
		printf(" | [__] | <- Cabinet\n");
		printf(" |______| You alredy hold the tools you need.\n");
	}
}

void showRandomTip(){
	// Array of tips
	const char *tips[] = {
		"Breathe. You are doing enough.",
		"Even messy progress is still progress.",
		"Take breaks. Clarity often comes in stainless.",
		"The reflection changes as you do.",
		"Don't scrub too hard. Be gentle to yourself. You are precious too."
	};

	int n = sizeof(tips) / sizeof(tips[0]);
	int index = rand() % n;
	printf("\nLesson Tips: %s\n", tips[index]);
}


