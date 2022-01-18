#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NEWWORD (Guess *)malloc(sizeof(Guess));

typedef struct Guessword
{
    char word[100];
    struct Guessword *left, *right;
}Guess; 

int count=0;

Guess* insert(Guess *root, char *word)
{
	Guess *newWord= NEWWORD;
    newWord->left=newWord->right= NULL;
    strcpy(newWord->word, word);
        
    if (root==NULL){
      root = newWord;
    }
    else if(strcmp(root->word, word) > 0){
  	  root->left = insert(root->left, word);
	}
	else{
      root->right = insert(root->right, word);
    }
    return root;
}

// Traversing inorder
void display(Guess *root)
{
	if(root)
    {
        display(root->left);
        printf("%s, ", root->word);
        display(root->right);
    }
}

void suggest(Guess *root, char *word) 
{
	int i,misMatch=0;
	while(root != NULL) // Match Initial character
    {
    	if (root->word[0] == word[0])
            break;
      else if (root->word[0] < word[0])
            root=root->right;
      else    
            root=root->left;
    }
		 
    if(root != NULL)
    {
        if (strlen(root->word) == strlen(word) && root->word[0]==word[0])
        {
            for(i=0;word[i]!='\0';i++)
            {
                if(word[i]!='_' && word[i]!=root->word[i])  
                {
                  misMatch=1;
                  break;
      		    }
            }
            if(misMatch==0)   // CHECK Matching
            {
                count++;
                if(count==1)
                {
                    printf("\nSuggested Words: %s\t",root->word);
    			}
		   		if(count>1)
		   		{
		   			printf("%s\t",root->word);
		   		}
			}
        }
    //LEFT and RIGHT tree
    suggest(root->left,word);
    suggest(root->right,word);
}
}

int main()
{
	int i;
	char guess[20]="";
	Guess *root=NULL;
	char Guessword[][50]={"admin","tom","bob","tim","jim","accent","accept","expect","except","average","random","forest",
	"guessword","joker"};
	
	for(i=0;i<14;i++)
	{
		root=insert(root,Guessword[i]);
	}
    printf("\nWords: ");
    display(root);
    
    while(1)
    {
    	printf("\n\nEnter the word to guess with unknown letters as _\nEx. e__e_t");
    	printf("\n\nEnter the Crossword: ");
        scanf("%s",guess);
        
        if(guess[0]=='_')
        {
            printf("\nEnter the first character\n");
            continue;
        }
            
        else if((strcmp(guess,"exit") == 0)||(strcmp(guess,"Exit") == 0)||(strcmp(guess,"EXIT") == 0))
            break;
        
        count=0;
        suggest(root,guess);
        if(count==0)
        {
            printf("\nNo word found");
        }
    }
    return 0;
}