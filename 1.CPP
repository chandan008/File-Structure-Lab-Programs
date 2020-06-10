1. Write a program to read series of names, one per line, from standard input and write
these names spelled in reverse order to the standard output using I/O redirection and
pipes. Repeat the exercise using an input file specified by the user instead of the
standard input and using an output file specified by the user instead of the standard
output.

#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<process.h>
#include<iostream.h>

void main()
{
	fstream fp,gp;
	int n,i,c;
	char name[10][20];
	clrscr();

      while(1)
     {
	cout<<"1.usng std i/p and std o/p  2.usng files\n 3.exit\n";
	cout<<"entr ur choice\n";
	cin>>c;
     
      switch(c)
	{
		case 1:
			cout<<"entr the num of names to b entrd\n";
			cin>>n;
		
			cout<<"entr the names\n";
			for(i=0;i<n;i++)
			cin>>name[i];

			cout<<"splld revrse\n";
			for(i=0;i<n;i++)
			cout<<strrev(name[i])<<"\n";
			getch();
		break;
		
		case 2:
			cout<<"entr the name of the file\n";
			cout<<"i/p file\n";
			char s[9],t[9];
			cin>>t;
			
			cout<<"o/p file\n";
			cin>>s;
			
			cout<<"entr num of names\n";
			cin>>n;

			cout<<"entr the names";
			fp.open(t,ios::out);
			gp.open(s,ios::out);
			
			for(i=0;i<n;i++)
			{
			      cin>>name[i];
			      fp<<name[i]<<"\n";
			      gp<<strrev(name[i])<<"\n";
			}
			fp.close();
			gp.close();
			
		break;
		
		default:	exit(0);
	}
         }
      }





