#include<stdio.h>

int str_length(char *);
void str_copy(char *,char *);
void str_concat(char *,char *);
void str_comp(char *,char *);
void str_rever(char *,char *);
void last_occ(char *,char );
int first_occ(char *,char );
int no_of_occ(char *,char );
int find_substr(char *,char *);
int start_end_substr(char *,char *);

int main()
{
	int n,len;
	char c;

	char str[30];
	char str1[20];
	char str2[20];

	printf("enter string1 :\n");
	scanf("%s",str);
//	fgets(str,30,stdin);
	getchar();
	printf("enter string2 :\n");
	scanf("%s",str1);int i=0;
	getchar();
//	fgets(str1,20,stdin);
	
	printf("\n%s",str);
	printf("%s\n",str1);
 

	printf("\n1.Find length\n2.Copy string\n3.Concatenation string\n4.Compare strings\n5.Reverse string\n6.Last occurance\n7.First occurance\n8.no. of occurance\n9.Find substrig\n10.check start and end substring\nchoose option :");
	scanf("%d",&n);
        
	switch(n)
	{
		case 1: printf("\nstring length of str : %d\n",len= str_length(str));
		        printf("string length of str1 : %d\n",len= str_length(str1));
			break;

		case 2: str_copy(str2,str);
	                printf("\ncopied string : %s\n",str2);
			break;

		case 3: str_concat(str,str1);
			break;

		case 4: str_comp(str,str1);
			break;

		case 5: printf("before reverse string is :%s\n",str);
			str_rever(str,str2);
			break;

		case 6: printf("enter the char to check last occrance :\n");
		    		__fpurge(stdin);
		    	scanf("%c",&c);
			last_occ(str,c);
			break;

		case 7: printf("enter the char to check first occrance :\n");
		    		__fpurge(stdin);
		    	scanf("%c",&c);
			first_occ(str,c);
			break;

		case 8: printf("enter the char to check no of occrance :\n");
		    		__fpurge(stdin);
		    	scanf("%c",&c);
			no_of_occ(str,c);
			break;

		case 9: printf("enter the substring to check occrance in main string :\n");
		    		__fpurge(stdin);
		    	scanf("%s",str2);
			find_substr(str,str2);
			break;

		case 10: printf("enter the substring to check occrance at end and start in main string :\n");
		    		__fpurge(stdin);
		    	scanf("%s",str2);
			start_end_substr(str,str2);
			break;

 
	}

	return 0;
}

int start_end_substr(char *c,char *p)
{
	int i,n,j,f=0;
	for(i=0;i< (n=str_length(p));i++)
	{
		while(c[i]==p[i])
		{
			i++;
			if(p[i]=='\0')
			{	printf("given substring occurce at start at main string\n");
				f=f+1;
			}
			else
				continue;
		}break;
	}
	j=(n=str_length(c))-1;
	for(i=((n=str_length(p))-1);i>=0;i--)
	{
		while(c[j]==p[i])
		{
			i--;
			j--;
			if(i<0)
			{
				printf("given substring occurce at end at main string\n");
				f=f+1;
			}
			else
				continue;
		}break;
	}
		if(f!=0)
			return 0;
		else
			printf("given substring not found at start and end of main string\n");
}

int find_substr(char *c,char *p)
{
	int i,n;
	for(i=0;i< (n=str_length(c));i++)
	{
		int j=0;
		while(c[i]== p[j])
		{
			i++;
			j++;
			if(p[j]=='\0')
			{	printf("substring is at %d position in main string\n",(i-j)+1);
				return 0;
			}
			else
				continue;
		}
	}
			printf("substring not found in main string\n");
			return 0;
}
	

int no_of_occ(char *c,char ch)
{
	int i,n,j=0,f=0;
	for(i=0;i< (n=str_length(c));i++)
	{
		while(c[i]== ch)
		{
			f=f+1;
			j=j+1;
			break;
		}
	
	}
		if(f==0)
			printf("not found %c char in string\n",ch);
		else
		printf("no of occrance of %c in string is %d \n",ch,j);
}

int first_occ(char *c,char ch)
{
	int i,n,j;
	for(i=0;i< (n=str_length(c));i++)
	{
		while(c[i]== ch)
		{
			j=i+1;
		printf("1st occrance of %c is at %d position\n",ch,j);
		return 0;
		}
	}
		printf("not found %c char in string\n",ch);
}

void last_occ(char *c,char ch)
{
	int i,n,j,f=0;
	for(i=0;i< (n=str_length(c));i++)
	{
		while(c[i]== ch)
		{
			f=f+1;
			j=i+1;
			break;
		}
	
	}
		if(f==0)
			printf("not found %c char in string\n",ch);
		else
		printf("last occrance of %c is at %d position\n",ch,j);
		

}

void str_rever(char *c,char *p)
{
	int n,i,j=0;
	n=str_length(c);
	for(i=(n-1);i>=0;i--)
	{
		p[j++]=c[i];
	}
	for(i=0;i<n;i++)
	{
		c[i]=p[i];
	}
	c[n]='\0';
	printf("reverse string is : %s\n",c);

}

void str_comp(char *c,char *p)
{
	int n,m;
	n=str_length(c);
	m=str_length(p);
	if(n==m)
		printf("strings are of equal length\n");
	else if(n>m)
		printf("string1 is longer than string2\n");
	else if(n<m)
		printf("string2 is longer than string1\n");
	else
		printf("error\n");


}

void str_concat(char *c,char *p)
{
	int n, i=0;
	n=str_length(c);
	while(p[i]!='\0')
	{
		c[n+i]=p[i];
		i++;
	}
	n=str_length(c);
	c[n]='\0';
	printf("after concatenation str is : %s\n",c);
}

int str_length(char *c)
{
	int n=0;
	while(*c!='\0')
	{
		c=(char *)c+1;
		n++;
	}
	return n;
}

void str_copy(char *c,char *p)
{
	while(*p!='\0')
	{
		*c=*p;
		p++;
		c++;
	}
}
