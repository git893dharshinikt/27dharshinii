#include"declaration.h"
#include"welcome.h"
#include"menu.h"
#include"newscoresheet.h"
#include"filing.h"
#include"final.h"
int main()
{
	system("colour f1");
	int a,key;
	char b,ch;
	FILE *fnew;
	
	char lastinput;
	while(true)
	{
		initializeconsolehandles();
		welcome();
		system("cls");
		menu();
		locate(32,9);
		ch=getch();
		switch(ch)
		{
			case '1':
			fileopen(ch);
			case '2':
			fileopen(ch);
			getch();
			case '3':
			system ("cls");
			exit(0);
		}
	}
}
