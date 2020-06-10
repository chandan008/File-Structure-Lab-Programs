/*1. Write a program to read series of names, one per line, from standard input and write
these names spelled in reverse order to the standard output using I/O redirection and
pipes. Repeat the exercise using an input file specified by the user instead of the
standard input and using an output file specified by the user instead of the standard
output. */

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
	cout<<"1.Using std i/p and std o/p  2.Using files\n 3.Exit\n";
	cout<<"Enter your choice\n";
	cin>>c;

      switch(c)
	{
		case 1:
			cout<<"enter the number of names: \n";
			cin>>n;

			cout<<"entr the names\n";
			for(i=0;i<n;i++)
			cin>>name[i];

			cout<<"spelled  in revrse order:\n";
			for(i=0;i<n;i++)
			cout<<strrev(name[i])<<"\n";
			getch();
		break;

		case 2:
			cout<<"enter the name of the file:\n";
			cout<<"input file\n";
			char s[9],t[9];
			cin>>t;

			cout<<"output file\n";
			cin>>s;

			cout<<"enter num of names:\n";
			cin>>n;

			cout<<"enter the names:\n";
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





