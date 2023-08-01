#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
void level_1();
int main()
{
	srand(time(0));
	level_1();
	return 0;
}

void level_1()
{
	char mainWord[100];
	const int size=10;
	char word1[size]={'a','c','t','o','r'};
	int no_of_words=(rand()%1)+1;
	if (no_of_words==1)
	{
		for(int i=0;i<size;i++)
		{
			mainWord[i]=word1[i];
		}
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
            int temp = 0;
            temp = r;
            r = r1;
            r1 = temp;
        }

		for(int i=0,j=0;i<5;i++)
		{
			if(i==r)
			{
				cout<<" _ ";
				letter1 = mainWord[r];
			}
			else if(i==r1)
			{
				cout<<" _ ";
				letter2 = mainWord[r1];
			}
			else
			{
				cout<<mainWord[i];
			}
		}
		char guess1;
		char guess2;
		cout<<"\nenter your guesses :";
		cin>>guess1>>guess2;


        cout << endl << letter1<< endl;
        cout << endl << letter2 << endl;


        cout << endl << guess1 << endl;
        cout << endl << guess2 << endl;



		if (guess1==letter1 && guess2==letter2)
		{
			cout<<"correct";
		}
		else
		{
			cout<<"better luck next time";
		}
	}
}
