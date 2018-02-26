//This program sorts words by dictionary order
#include <stdio.h>

main (){
	char text1[100]; //that same
	char text2[100];// that same
	int i=0; //Locates the characters to compare
	int r=0; //saves the subtraction of the characters
	
	printf ("first text\n");
	gets (&text1[0]);
	
	printf ("second text\n");
	gets (&text2[0]);
	
	
	for (i=0;text1[i]!=NULL && text2[i]!=NULL;i++){ //Keeps the cycle until one word stays without element
		r =text1[i]-text2[i]; //Every character has a number associated the a is the smallest, z is the greatest
		if(r<0){ //if its negative, text1 is first
			printf ("%s goes before %s\n", &text1[0], &text2[0]);
			break;
		}
		else if (r>0){ //if its positive, text2 is first
			printf ("%s goes before %s\n", &text2[0], &text1[0]);
			break;
		}
		//if its 0, they are equal, so the program keeps evaluating with the next characters
	}
	
	if (text1[i]==NULL && text2[i]==NULL){ //if they run out of letters, are the same word
		printf ("They are the same word\n");
	}
	if (text1[i]==NULL && text2[i]!=NULL){ //if the text1 runs out of letters first than the other word, text1 is first
		printf ("%s goes before %s\n", &text1[0], &text2[0]);
	}
	if (text2[i]==NULL && text1[i]!=NULL){ //if text2 runs out of letterst first than the other word, text2 is first
		printf ("%s goes before %s\n", &text2[0], &text1[0]);
	}
	
}
