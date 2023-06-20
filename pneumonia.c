//Sophia Hostetler
//U27264415
//This program will sort the hospitals by cost in ascending order from a given set

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct hospitals{
	char name[150];
	char city[50];
	char state[50];
	int rating;
	int cost;
	char quality[15];
	char value[15];
};
void sort_hospitals(struct hospitals list[], int n);

int main()
{
	struct hospitals hospital[300];
	char file_name[300];
	
//prompt user to enter name of file

	printf("Enter the file name: ");
		scanf("%s",file_name);

	FILE* pFile;

//read file entered 

	pFile=fopen(file_name,"r");

//if statement to ensure there is not an error opening file

	if(pFile==NULL)
	{
		printf("Error opening file\n");
		return 1;
	}

	struct hospitals input;
	int size=0;

//while loop reads the file until it reached the end

	while(!feof(pFile) && !ferror(pFile))
	{
		fscanf(pFile,"%[^,], %[^,], %[^,], %d, %d, %[^,], %s\n",input.name,input.city,input.state,&input.rating,&input.cost,input.quality,input.value);
		size++;
	}

//reset size variable

	size=0;

//reset file pointer to beginning of file
	
	rewind(pFile);
	
//while loop reads the file until it reached the end

	  while(!feof(pFile) && !ferror(pFile))
        {
            
	  if(fscanf(pFile,"%[^,], %[^,], %[^,], %d, %d, %[^,], %s\n",input.name,input.city,input.state,&input.rating,&input.cost,input.quality,input.value)==7)
{
	hospital[size++]=input;
}
        }

//close file

	fclose(pFile);

//call sort_hospitals function

	sort_hospitals(hospital,size);

	 FILE* oFile;
        
//write output.csv file
	
	oFile=fopen("output.csv","w");
	
//if statement ensuring there is no issue opening file

	if(oFile==NULL)
	{
		printf("Error opening file.");
		return 1;
	}
	int i;
	
//for loop going through the hospitals

	for(i=0;i<size;i++)
	{

//if statement finding the hospitals with the proper rating and quality and printing them

	if((strcmp(hospital[i].quality,"Better")==0||strcmp(hospital[i].quality,"Average")==0)&&hospital[i].rating>=3)
{
	fprintf(oFile,"%s,%s,%s,%d,%d,%s,%s\n",hospital[i].name,hospital[i].city,hospital[i].state,hospital[i].rating,hospital[i].cost,hospital[i].quality,hospital[i].value);
}
}
	printf("Output file name: \n output.csv");

//close file

	fclose(oFile);
return 0;
}

void sort_hospitals(struct hospitals list[], int n)
{
	int i, largest=0;
	struct hospitals temp;
	if(n==1)
	return;
	
//for loop processing elements in array

	for(i=1;i<n;i++)
	if(list[i].cost>list[largest].cost)
	largest=i;

//if statement swapping the elements in order

	if(largest<n-1)
	{
		temp=list[n-1];
		list[n-1]=list[largest];
		list[largest]=temp;
	}
	
	sort_hospitals(list,n-1);
}
