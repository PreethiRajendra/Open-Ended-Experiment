#include<stdio.h>
int main()
{
char inputstring[100];//holds the entered string from the user
char substring[100];//holds the substring of the entered string
int startposition=0;//holds the positin where copying of the string begins
int lengthofextractedstring=0;//holds the total length of the string that is to be copied
int substringctr=0;//counts the number of characters that is copied as substring
//request the user to enter a string
printf("Input the string:");
fgets(inputstring,sizeof inputstring,stdin);
printf("input position to start extraction:");
scanf("%d",&startposition);
printf("Input the length of the substring:");
scanf("%d",&lengthofextractedstring);
//loop untill total number of substring is copied to the new variable
while(substringctr < lengthofextractedstring)
{
    //copy the substring letter by letter to the new variable
    substring[substringctr]=inputstring[startposition + substringctr -1];
    //increment the counter of the copied characters
    substringctr++;
}
//append the null character to the end of the string
substring[substringctr]='\0';
printf("the substring extracted from the string:\"%s\"",substring);
return 0;
}

