/*
		level 1 will perfectly. 
		In level 2 same time it will generate 4 " _ " or 3 or 2 or non....run the code differnet time to get the required output. 
*/


#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
void welcome(void);
void level_1();
void level_2();
int main()
{
	srand(time(0));   //generating random seed
	welcome();
	char difficulty;
	cin>>difficulty;
	cout<<endl;
	if(difficulty=='E' || difficulty=='e')
	{
		for(char play_again='y'; play_again!='n';) 
		{
			level_1();
			cout<<"\nIf you want to play again press Y or N :";
			cin>>play_again;cout<<endl;	
		}
	}
	if(difficulty=='H' || difficulty=='h')
	{
		for(char play_again='y'; play_again!='n';)
		{
			level_2();
			cout<<"\nIf you want to play again press Y or N :";
			cin>>play_again;cout<<endl;	
		}
	}
	return 0;
}
void level_1()
{
	const int size=10;
	char word1[size]={'a','c','t','o','r'};
	char word2[size]={'a','d','o','p','t'};	
	char word3[size]={'b','e','i','n','g'};
	char word4[size]={'b','l','a','c','k'};
	char word5[size]={'c','a','b','l','e'};
	char word6[size]={'d','e','a','t','h'};
	char word7[size]={'d','y','i','n','g'};
	char word8[size]={'s','m','a','l','l'};
	char word9[size]={'f','l','o','o','r'};
	char word10[size]={'r','o','y','a','l'};
	
	int no_of_words=(rand()%10)+1;
	
	// no_of_words generate a number which excute the conditions below which is true. 
	if (no_of_words==1)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		char letter1 = '\0';
		char letter2 = '\0';
		
		// comparing random number r and r1 
		
		while(r == r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
        	
        // replacing a single character of a word with " _ "
        
		for(int i=0,j=0;i<5;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word1[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word1[r1];
			}
			else
			{
				cout<<word1[i];
			}
		}
		cout<<endl;
		char guess1;
		char guess2;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2;
		cout<<endl;
		
		// comparing the hidden letters with user guesses
		
		if (guess1==letter1 && guess2==letter2)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word1<<"."<<endl;
		
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe world is "<<word1<<"."<<endl;
		}
	}

	else if(no_of_words==2)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		char letter1 = '\0';
		char letter2 = '\0';
		
		// comparing random number r and r1 
		
		while(r == r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
        	
         // replacing a single character of a word with " _ "
        	
		for(int i=0,j=0;i<5;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word2[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word2[r1];
			}
			else
			{
				cout<<word2[i];
			}
		}
		cout<<endl;
		char guess1;
		char guess2;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2;
		cout<<endl;
		
		// comparing the hidden letters with user guesses
		
		if (guess1==letter1 && guess2==letter2)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word2<<"."<<endl;
		
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe world is "<<word2<<"."<<endl;
		}
	}
	
	else if(no_of_words==3)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		char letter1 = '\0';
		char letter2 = '\0';
		
		// comparing random number r and r1 
		
		while(r == r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
        	
        // replacing a single character of a word with " _ "
        	
		for(int i=0,j=0;i<5;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word3[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word3[r1];
			}
			else
			{
				cout<<word3[i];
			}
		}
		cout<<endl;
		char guess1;
		char guess2;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2;
		cout<<endl;
		
		// comparing the hidden letters with user guesses
		
		if (guess1==letter1 && guess2==letter2)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word3<<"."<<endl;
		
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe world is "<<word3<<"."<<endl;
		}
	}
	else if(no_of_words==4)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		char letter1 = '\0';
		char letter2 = '\0';
		while(r == r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		for(int i=0,j=0;i<5;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word4[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word4[r1];
			}
			else
			{
				cout<<word4[i];
			}
		}
		cout<<endl;
		char guess1;
		char guess2;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word4<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe world is "<<word4<<"."<<endl;
		}
	}
	else if(no_of_words==5)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		char letter1 = '\0';
		char letter2 = '\0';
		while(r == r1)
        	{	
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		for(int i=0,j=0;i<5;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word5[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word5[r1];
			}
			else
			{
				cout<<word5[i];
			}
		}
		cout<<endl;
		char guess1;
		char guess2;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word5<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe world is "<<word5<<"."<<endl;
		}
	}
	
	else if(no_of_words==6)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		char letter1 = '\0';
		char letter2 = '\0';
		while(r == r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		for(int i=0,j=0;i<5;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word6[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word6[r1];
			}
			else
			{
				cout<<word6[i];
			}
		}
		cout<<endl;
		char guess1;
		char guess2;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word6<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe world is "<<word6<<"."<<endl;
		}
	}
	
	else if(no_of_words==7)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		char letter1 = '\0';
		char letter2 = '\0';
		while(r == r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		for(int i=0,j=0;i<5;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word7[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word7[r1];
			}
			else
			{
				cout<<word7[i];
			}
		}
		cout<<endl;
		char guess1;
		char guess2;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word7<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe world is "<<word7<<"."<<endl;
		}
	}
	
	else if(no_of_words==8)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		char letter1 = '\0';
		char letter2 = '\0';
		while(r == r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		for(int i=0,j=0;i<5;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word8[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word8[r1];
			}
			else
			{
				cout<<word8[i];
			}
		}
		cout<<endl;
		char guess1;
		char guess2;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word8<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe world is "<<word8<<"."<<endl;
		}	
	}
	else if(no_of_words==9)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		char letter1 = '\0';
		char letter2 = '\0';
		while(r == r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		for(int i=0,j=0;i<5;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word9[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word9[r1];
			}
			else
			{
				cout<<word9[i];
			}
		}
		cout<<endl;
		char guess1;
		char guess2;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word9<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe world is "<<word9<<"."<<endl;
		}
	}
	else if(no_of_words==10)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		char letter1 = '\0';
		char letter2 = '\0';
		while(r == r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		for(int i=0,j=0;i<5;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word10[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word10[r1];
			}
			else
			{
				cout<<word10[i];
			}
		}
		cout<<endl;
		char guess1;
		char guess2;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word10<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe world is "<<word10<<"."<<endl;
		}
	}				
	else 
	{
		cout<<"your system is not compatiable for this game";
	}
}
void level_2()
{
	const int size=10;
	char word1[size]={'c','o','r','c','o','d','i','l','e'};
	char word2[size]={'j','e','l','l','y','f','i','s','h'};	
	char word3[size]={'p','i','n','e','a','p','p','l','e'};
	char word4[size]={'s','t','a','r','f','r','u','i','t'};
	char word5[size]={'b','l','a','c','k','b','i','r','d'};
	char word6[size]={'r','e','s','t','u','d','i','e','d'};
	char word7[size]={'b','l','u','e','b','e','r','r','y'};
	char word8[size]={'c','o','c','k','r','o','a','c','h'};
	char word9[size]={'d','r','a','g','o','n','f','l','y'};
	char word10[size]={'u','n','p','u','z','z','l','e','s'};
	int no_of_words=(rand()%10)+1;
	
	if (no_of_words==1)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		int r2=(rand()%4)+1;
		int r3=(rand()%6)+1;
		char letter1='\0';
		char letter2='\0';
		char letter3='\0';
		char letter4='\0';
		
		// comparing random number r,r1,r2,r3  
		
		while(r==r1)
        	{
            		int r1=(rand()%4)-1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		while(r1 == r2)
        	{
            		int r2=(rand()%6)+1;
        	}
        	if(r1 > r2)
        	{
            		int temp=0;
            		temp=r1;
            		r1=r2;
            		r2=temp;
        	}
		while(r2 == r3)
        	{
            		int r3=(rand()%8)-1;
        	}
        	if(r2 > r3)
        	{
            		int temp=0;
            		temp=r2;
            		r2=r3;
            		r3=temp;
        	}
        	
        // replacing a single character of a word with " _ "
        	
		for(int i=0,j=0;i<9;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word1[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word1[r1];
			}
			else if(i==r2)
			{
				cout<<" _ ";
				letter3 = word1[r2];
			}
			else if (i==r3)
			{
				cout<<" _ ";
				letter4 = word1[r3];
			}
			else
			{
				cout<<word1[i];
			}
		}
		cout<<endl;		
		char guess1;
		char guess2;
		char guess3;
		char guess4;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2>>guess3>>guess4;
		cout<<endl;
		
		// comparing the hidden letters with user guesses
		
		if (guess1==letter1 && guess2==letter2 && guess3==letter3 && guess4==letter4)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word1<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe word is "<<word1<<"."<<endl;
		}
	}
	else if (no_of_words==2)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		int r2=(rand()%6)+2;
		int r3=(rand()%8)+3;
		char letter1='\0';
		char letter2='\0';
		char letter3='\0';
		char letter4='\0';
		while(r==r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		while(r1 == r2)
        	{
            		int r2=(rand()%6)+1;
        	}
        	if(r1 > r2)
        	{
            		int temp=0;
            		temp=r1;
            		r1=r2;
            		r2=temp;
        	}
		while(r2==r3)
        	{
            		int r3=(rand()%8)+1;
        	}
        	if(r2 > r3)
        	{
            		int temp=0;
            		temp=r2;
            		r2=r3;
            		r3=temp;
        	}
		for(int i=0,j=0;i<9;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word2[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word2[r1];
			}
			else if(i==r2)
			{
				cout<<" _ ";
				letter3 = word2[r2];
			}
			else if (i==r3)
			{
				cout<<" _ ";
				letter4 = word2[r3];
			}
			else
			{
				cout<<word2[i];
			}
		}
		cout<<endl;		
		char guess1;
		char guess2;
		char guess3;
		char guess4;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2>>guess3>>guess4;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2 && guess3==letter3 && guess4==letter4)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word2<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe word is "<<word2<<"."<<endl;
		}

	}
	else if (no_of_words==3)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		int r2=(rand()%6)+2;
		int r3=(rand()%8)+3;
		char letter1='\0';
		char letter2='\0';
		char letter3='\0';
		char letter4='\0';
		while(r==r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		while(r1 == r2)
        	{
            		int r2=(rand()%6)+1;
        	}
        	if(r1 > r2)
        	{
            		int temp=0;
            		temp=r1;
            		r1=r2;
            		r2=temp;
        	}
		while(r2==r3)
        	{
            		int r3=(rand()%8)+1;
        	}
        	if(r2 > r3)
        	{
            		int temp=0;
            		temp=r2;
            		r2=r3;
            		r3=temp;
        	}
		for(int i=0,j=0;i<9;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word3[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word3[r1];
			}
			else if(i==r2)
			{
				cout<<" _ ";
				letter3 = word3[r2];
			}
			else if (i==r3)
			{
				cout<<" _ ";
				letter4 = word3[r3];
			}
			else
			{
				cout<<word1[i];
			}
		}
		cout<<endl;		
		char guess1;
		char guess2;
		char guess3;
		char guess4;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2>>guess3>>guess4;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2 && guess3==letter3 && guess4==letter4)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word3<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe word is "<<word3<<"."<<endl;
		}

	}
	else if (no_of_words==4)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		int r2=(rand()%6)+2;
		int r3=(rand()%8)+3;
		char letter1='\0';
		char letter2='\0';
		char letter3='\0';
		char letter4='\0';
		while(r==r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		while(r1 == r2)
        	{
            		int r2=(rand()%6)+1;
        	}
        	if(r1 > r2)
        	{
            		int temp=0;
            		temp=r1;
            		r1=r2;
            		r2=temp;
        	}
		while(r2==r3)
        	{
            		int r3=(rand()%8)+1;
        	}
        	if(r2 > r3)
        	{
            		int temp=0;
            		temp=r2;
            		r2=r3;
            		r3=temp;
        	}
		for(int i=0,j=0;i<9;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word4[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word4[r1];
			}
			else if(i==r2)
			{
				cout<<" _ ";
				letter3 = word4[r2];
			}
			else if (i==r3)
			{
				cout<<" _ ";
				letter4 = word4[r3];
			}
			else
			{
				cout<<word4[i];
			}
		}
		cout<<endl;		
		char guess1;
		char guess2;
		char guess3;
		char guess4;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2>>guess3>>guess4;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2 && guess3==letter3 && guess4==letter4)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word4<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe word is "<<word4<<"."<<endl;
		}

	}
	else if (no_of_words==5)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		int r2=(rand()%6)+2;
		int r3=(rand()%8)+3;
		char letter1='\0';
		char letter2='\0';
		char letter3='\0';
		char letter4='\0';
		while(r==r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		while(r1 == r2)
        	{
            		int r2=(rand()%6)+1;
        	}
        	if(r1 > r2)
        	{
            		int temp=0;
            		temp=r1;
            		r1=r2;
            		r2=temp;
        	}
		while(r2==r3)
        	{
            		int r3=(rand()%8)+1;
        	}
        	if(r2 > r3)
        	{
            		int temp=0;
            		temp=r2;
            		r2=r3;
            		r3=temp;
        	}
		for(int i=0,j=0;i<9;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word5[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word5[r1];
			}
			else if(i==r2)
			{
				cout<<" _ ";
				letter3 = word5[r2];
			}
			else if (i==r3)
			{
				cout<<" _ ";
				letter4 = word5[r3];
			}
			else
			{
				cout<<word5[i];
			}
		}
		cout<<endl;		
		char guess1;
		char guess2;
		char guess3;
		char guess4;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2>>guess3>>guess4;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2 && guess3==letter3 && guess4==letter4)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word5<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong"<<"\nThe word is "<<word5<<"."<<endl;
		}

	}
	else if (no_of_words==6)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		int r2=(rand()%6)+2;
		int r3=(rand()%8)+3;
		char letter1='\0';
		char letter2='\0';
		char letter3='\0';
		char letter4='\0';
		while(r==r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		while(r1 == r2)
        	{
            		int r2=(rand()%6)+1;
        	}
        	if(r1 > r2)
        	{
            		int temp=0;
            		temp=r1;
            		r1=r2;
            		r2=temp;
        	}
		while(r2==r3)
        	{
            		int r3=(rand()%8)+1;
        	}
        	if(r2 > r3)
        	{
            		int temp=0;
            		temp=r2;
            		r2=r3;
            		r3=temp;
        	}
		for(int i=0,j=0;i<9;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word6[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word6[r1];
			}
			else if(i==r2)
			{
				cout<<" _ ";
				letter3 = word6[r2];
			}
			else if (i==r3)
			{
				cout<<" _ ";
				letter4 = word6[r3];
			}
			else
			{
				cout<<word6[i];
			}
		}
		cout<<endl;		
		char guess1;
		char guess2;
		char guess3;
		char guess4;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2>>guess3>>guess4;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2 && guess3==letter3 && guess4==letter4)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word6<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe word is "<<word6<<"."<<endl;
		}

	}
	else if (no_of_words==7)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		int r2=(rand()%6)+2;
		int r3=(rand()%8)+3;
		char letter1='\0';
		char letter2='\0';
		char letter3='\0';
		char letter4='\0';
		while(r==r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		while(r1 == r2)
        	{
            		int r2=(rand()%6)+1;
        	}
        	if(r1 > r2)
        	{
            		int temp=0;
            		temp=r1;
            		r1=r2;
            		r2=temp;
        	}
		while(r2==r3)
        	{
            		int r3=(rand()%8)+1;
        	}
        	if(r2 > r3)
        	{
            		int temp=0;
            		temp=r2;
            		r2=r3;
            		r3=temp;
        	}
		for(int i=0,j=0;i<9;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word7[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word7[r1];
			}
			else if(i==r2)
			{
				cout<<" _ ";
				letter3 = word7[r2];
			}
			else if (i==r3)
			{
				cout<<" _ ";
				letter4 = word7[r3];
			}
			else
			{
				cout<<word7[i];
			}
		}
		cout<<endl;		
		char guess1;
		char guess2;
		char guess3;
		char guess4;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2>>guess3>>guess4;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2 && guess3==letter3 && guess4==letter4)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word7<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe word is "<<word7<<"."<<endl;
		}

	}
	else if (no_of_words==8)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		int r2=(rand()%6)+2;
		int r3=(rand()%8)+3;
		char letter1='\0';
		char letter2='\0';
		char letter3='\0';
		char letter4='\0';
		while(r==r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		while(r1 == r2)
        	{
            		int r2=(rand()%6)+1;
        	}
        	if(r1 > r2)
        	{
            		int temp=0;
            		temp=r1;
            		r1=r2;
            		r2=temp;
        	}
		while(r2==r3)
        	{
            		int r3=(rand()%8)+1;
        	}
        	if(r2 > r3)
        	{
            		int temp=0;
            		temp=r2;
            		r2=r3;
            		r3=temp;
        	}
		for(int i=0,j=0;i<9;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word8[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word8[r1];
			}
			else if(i==r2)
			{
				cout<<" _ ";
				letter3 = word8[r2];
			}
			else if (i==r3)
			{
				cout<<" _ ";
				letter4 = word8[r3];
			}
			else
			{
				cout<<word8[i];
			}
		}
		cout<<endl;		
		char guess1;
		char guess2;
		char guess3;
		char guess4;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2>>guess3>>guess4;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2 && guess3==letter3 && guess4==letter4)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word8<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe word is "<<word8<<"."<<endl;
		}
	}
	else if(no_of_words==9)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		int r2=(rand()%6)+2;
		int r3=(rand()%8)+3;
		char letter1='\0';
		char letter2='\0';
		char letter3='\0';
		char letter4='\0';
		while(r==r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		while(r1 == r2)
        	{
            		int r2=(rand()%6)+1;
        	}
        	if(r1 > r2)
        	{
            		int temp=0;
            		temp=r1;
            		r1=r2;
            		r2=temp;
        	}
		while(r2==r3)
        	{
            		int r3=(rand()%8)+1;
        	}
        	if(r2 > r3)
        	{
            		int temp=0;
            		temp=r2;
            		r2=r3;
            		r3=temp;
        	}
		for(int i=0,j=0;i<9;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word9[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word9[r1];
			}
			else if(i==r2)
			{
				cout<<" _ ";
				letter3 = word9[r2];
			}
			else if (i==r3)
			{
				cout<<" _ ";
				letter4 = word9[r3];
			}
			else
			{
				cout<<word9[i];
			}
		}	
		cout<<endl;	
		char guess1;
		char guess2;
		char guess3;
		char guess4;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2>>guess3>>guess4;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2 && guess3==letter3 && guess4==letter4)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word9<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe word is "<<word9<<"."<<endl;
		}
	}
	else if(no_of_words==10)
	{
		int r=rand()%4;
		int r1=(rand()%4)+1;
		int r2=(rand()%6)+2;
		int r3=(rand()%8)+3;
		char letter1='\0';
		char letter2='\0';
		char letter3='\0';
		char letter4='\0';
		while(r==r1)
        	{
            		int r1=(rand()%4)+1;
        	}
        	if(r > r1)
        	{
            		int temp=0;
            		temp=r;
            		r=r1;
            		r1=temp;
        	}
		while(r1 == r2)
        	{
            		int r2=(rand()%6)+1;
        	}
        	if(r1 > r2)
        	{
            		int temp=0;
            		temp=r1;
            		r1=r2;
            		r2=temp;
        	}
		while(r2==r3)
        	{
            		int r3=(rand()%8)+1;
        	}
        	if(r2 > r3)
        	{
            		int temp=0;
            		temp=r2;
            		r2=r3;
            		r3=temp;
        	}
		for(int i=0,j=0;i<9;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = word10[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = word10[r1];
			}
			else if(i==r2)
			{
				cout<<" _ ";
				letter3 = word10[r2];
			}
			else if (i==r3)
			{
				cout<<" _ ";
				letter4 = word10[r3];
			}
			else
			{
				cout<<word10[i];
			}
		}
		cout<<endl;		
		char guess1;
		char guess2;
		char guess3;
		char guess4;
		cout<<"\nEnter the missing characters : ";
		cin>>guess1>>guess2>>guess3>>guess4;
		cout<<endl;
		if (guess1==letter1 && guess2==letter2 && guess3==letter3 && guess4==letter4)
		{
			cout<<"Your guess is correct.\n"<<"\nThe word is "<<word10<<"."<<endl;
		}
		else
		{
			cout<<"Your guess is wrong.\n"<<"\nThe word is "<<word10<<"."<<endl;
		}
	}		
	else 
	{
		cout<<"your system is not compatiable for this game";
	}
}

void welcome()
{
	cout<<"****************************************************************************************************************";
	cout<<"\n*                                                                                                              *";		
	cout<<"\n*  *       * ***** ***** *****   ******* ******* ******* ***** ***** *     *   ****** ******* *** *** *******  *";
	cout<<"\n*  *       * *   * *   * *    *  *       *       *     * *   * *     *     *   *      *     * *  *  * *        *";
	cout<<"\n*  *   *   * *   * ***** *    *  ******* *****   ******* ***** *     *******   *  *** ******* *  *  * *****    *";
	cout<<"\n*  *   *   * *   * *  *  *    *        * *       *     * *  *  *     *     *   *    * *     * *     * *        *";
	cout<<"\n*  ********* ***** *   * *****   ******* ******* *     * *   * ***** *     *   ****** *     * *     * *******  *";
	cout<<"\n*                                                                                                              *";
	cout<<"\n****************************************************************************************************************"<<endl;
	cout<<"\n\n================================= HELLO! Welcome to the WORD SEARCH GAME ! ===================================="<<endl;
	cout<<"\n***RULES***"<<endl;
	cout<<"\nThere are 2 levels.\n\n-In level 1 you will be given a 5 letters word in which maximum two character will be hidden randomly.You will get \n 3 gusses to complete the word."<<endl;
	cout<<"\n-In level 2 you will be given a 9 letters word in which maximium four character can be hidden ramdomly.You will get \n 5 gusses to complete the word."<<endl;
	char player_name[30]={'\0'};
	cout<<"\nEnter your name : ";
	cin>>player_name;
	cout<<"\n"<<player_name<<" select the difficulty level of the game."<<endl;
	cout<<"\nFor Easy level press e."<<"\n"<<"For Hard level press h."<<endl;
	cout<<"\nEnter E or H :";
}