//This code will contain a block for finding the lowest frequnecy as well
#include<stdio.h>
#include<string.h>
# define ascii_size 256
int main()
{
    char str[100];
    int Char_ascii[ascii_size],max=0,ascii,min=-1;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    for(int i=0;i<ascii_size;i++)
    {
        Char_ascii[i]=0; //This block assigns the values for all the values to 0 so the frequency of the characters can be counted properly
    }
    for(int i=0;str[i]!='\0';i++)
    {
        ascii=(int)str[i];
        Char_ascii[ascii]+=1; //This block turns each character into their respective assici code and uses it as the index value and increment the value stored in that index
    }
    for(int i=0;i<ascii_size;i++)
    {
        if(Char_ascii[max]<Char_ascii[i])
        {
            max=i; //This block searches for the maximum value and the index of the maximum character is the character itself
        }
    }
    
    for (int i=0;i<ascii_size;i++)
    {
        if(Char_ascii[i]>0)
        {
            if (min == -1 ||Char_ascii[i] < Char_ascii[min])
            {
             min=i;   
            }
        }
    }
    printf("The character %c occurs %d times",(char)max,Char_ascii[max]);
    if (min != -1) 
    { // Check if a valid min was found
        printf("\nThe character '%c' occurs %d times\n", (char)min, Char_ascii[min]);
    } 
    else 
    {
        printf("No minimum frequency character found.\n");
    }
}