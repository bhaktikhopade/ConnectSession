#include<stdio.h>
#include<string.h>

void isPalindrome(char str[])
{
  int l=0;
  int r=strlen(str)-1;
  
  while(r>1)
  {
    if(str[l++] != str[r--])
    {
      printf("%s is Not Palindrome",str);
      return;
    }
  }
  printf("%s is Palindrome",str);
}

int main()
{
  char str1[50];
  while(1)
  {
      printf("\nEnter The String\n");
      scanf("%s",str1);
      isPalindrome(str1);
  }
  return 0;
}