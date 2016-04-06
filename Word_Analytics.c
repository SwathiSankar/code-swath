#include<stdio.h>
#include<string.h>

static FILE *fp;

void letter()
{
	char alpha[26],c;
	int i,j,temp;

	fp=fopen("E:\fan.txt","+r");

	while(!feof(fp))
    	{
		c=fgetc(fp);
		c=toupper(c);

		if(c>=65 && c<=90)
		{
			alpha[c-65]++ ;
		}
	}

	for(i=0;i<26;i++)
	{
		if(alpha[i]==0)
		{
			printf("\n Letter %c is not used in the document",i+65); //To find all  letters not used in the 

document
		}
	}


    	for(i=0;i<26;i++)
    	{
        	for(j=i+1;j<26;j++)
        	{
            		if(alpha[i]<alpha[j])
            		{
                		temp=alpha[i];
                		alpha[i]=alpha[j];
                		alpha[j]=temp;
            		}
        	}
    	}


	printf("\n The most common letters are"); // Top three most common letters.
	printf("\n %d",alpha[0]);
	printf("\n %d",alpha[1]);
	printf("\n %d",alpha[2]);

	fclose(fp);
}


void num_letter()
{
	int letter,symbol;
	char c;
	fp=fopen("E:\fan.txt","+r");

	while(!feof(fp))
    	{
		c=fgetc(fp);

		if((c>=65 && c<=90) || (c>=97 && c<=122))
		{
			letter++;
		}
		else if((c>=33 && c<=47) || (c>=58 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=126))
		{
			symbol++;
		}

	}

	printf("\n The number of letters are %d",letter); //number of letters
	printf("\n The number of symbols are %d",symbol);  //number of symbols

	fclose(fp);
}


int num_word()
{
	fp=fopen("E:\fan.txt","+r");

	int count=0;
	char c;


    while(!feof(fp))
    {
		c=fgetc(fp);

		if(c=='\t'||c=='\n'||c==' ')
		{
			count++;
		}
    }
	fclose(fp);

	return count;
}


int main()
{
	int words,letters,symbol;

	words=num_word();
	num_letter();
	letter();

	printf("\n The number of words are %d",words);

	return 0;
}
