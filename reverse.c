#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void string_reverse1(char *string){
	int i=0,j=0,k=0;
	char *temp;
	j=strlen(string);
	temp=(char*)calloc(j,sizeof(char));	//dynamic mem allocation
	strcpy(temp,string);			// temporary copy
		for (i=j-1;i>=0;i--)
		{
			*string=temp[i];	// string reversed and stored in the same 
			string++;		// location
		}
	//*string=0;

}

char* string_reverse2(const char *String){
	char *temp1,*temp2;				
	int i,k;
	k=strlen(String);			
	temp1=(char*)calloc(k,sizeof(char));		// dynamic mem allocation
	temp2=(char*)calloc(k,sizeof(char));
	strcpy(temp1,String);
	strcpy(temp2,String);				//making a temp copy
	for(i=0;i<k;i++)
	{
		temp1[k-i-1]=temp2[i];			// string reversal
	}
	return temp1;					// return address
	
}

int main(){
	char *ptr;
	char a[]="hello world";
	ptr=&a[0];
	
	printf("\n original string input: %s \n",ptr);
	string_reverse1(ptr);
	printf("\n String_reverse_1 result: ");
	printf("%s \n",ptr);
	printf("\n input to second function : %s \n",ptr);
	char *h = string_reverse2(ptr);
	printf("\nString_reverse_2 result: %s\n",h);
	return 0;
}


