
// #include <iostream>
// #include <stdio.h>
// #include <conio.h>
// #include <time.h>
// #include <windows.h>

// using  namespace std;
// void gotoxy (int x , int y)
// {
//  COORD coord;
//  coord.X = x ;
//  coord.Y = y ;
//  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coord );
	
// }

// void delay (unsigned int mseconds)
// {
// 	clock_t goal = mseconds + clock();
// 	while (goal > clock());
// }

// void getup()
// {
// 	system("cls");
// 	gotoxy(10,2);
// 	printf("Press X to Exit, Press Space to Jump");
// 	gotoxy(62,2);
// 	cprintf("SCORE : ");
// 	gotoxy(1,25);
// 	for(int x=0;x<79;x++)
// 	printf("�");
	
// }

// int t,speed=40;
// void ds(int jump=0)
// {
// 	static int a=1;

// 	if(jump==0)
// 		t=0;
// 	else if(jump==2)
// 		t--;
// 	else t++;
// 	gotoxy(2,15-t);
// 	printf("                 ");
// 	gotoxy(2,16-t);
// 	printf("         ��������");
// 	gotoxy(2,17-t);
// 	printf("         ��������");
// 	gotoxy(2,18-t);
// 	printf("         ��������");
// 	gotoxy(2,19-t);
// 	printf(" �      �������� ");
// 	gotoxy(2,20-t);
// 	printf(" ���  ���������� ");
// 	gotoxy(2,21-t);
// 	printf(" ������������  � ");
// 	gotoxy(2,22-t);
// 	printf("   ���������     ");
// 	gotoxy(2,23-t);
// 	if(jump==1 || jump==2){
// 	printf("    ��� ��       ");
// 	gotoxy(2,24-t);
// 	printf("    ��   ��      ");
// 	}else if(a==1)
// 	{
// 	printf("    ����  ���    ");
// 	gotoxy(2,24-t);
// 	printf("      ��         ");
// 	a=2;
// 	}
// 	else if(a==2)
// 	{
// 	printf("     ��� ��      ");
// 	gotoxy(2,24-t);
// 	printf("          ��     ");
// 	a=1;
// 	}
// 	gotoxy(2,25-t);
// 	if(jump!=0){
// 		printf("                ");
// 	}
// 	else
// 	{
// 		printf("�������������");
// 	}
	
// 	delay(speed);
// }
// void obj()
// {
// 	static int x=0,scr=0;
// 	if(x==56 && t<4)
// 	{
// 	scr=0;
// 	speed=40;
// 	gotoxy(36,8);
// 	cprintf("Game Over");
// 	getch();
// 	gotoxy(36,8);
// 	printf("         ");
// 	}
// 	gotoxy(74-x,20);
// 	printf("�    � ");
// 	gotoxy(74-x,21);
// 	printf("�    � ");
// 	gotoxy(74-x,22);
// 	printf("������ ");
// 	gotoxy(74-x,23);
// 	printf("  �    ");
// 	gotoxy(74-x,24);
// 	cprintf("  �  " );
// 	x++;
// 	if(x==73)
// 	{
// 	x=0;
// 	scr++;
// 	gotoxy(70,2);
// 	printf("     ");
// 	gotoxy(70,2);
// 	printf("%d",scr);
// 	if(speed>20)
// 	   speed--;
// 	}
// }


// int main()
// {
// 	system("mode codn : lines = 29 cols = 82");
// 	char ch;
// 	int i;
// 	getup();
// 	while (true)
// 	{
// 		while( !kbhit())
// 		{
// 			ds();
// 			obj();	
// 		}
// 		ch=getch();
// 		if(ch==' ')
// 		{
// 			for(i=0;i<10;i++)
// 			{
// 				ds(1);
// 				obj();
// 			}
// 			for(i=0;i<10;i++)
// 			{
// 				ds(2);
// 				obj();
// 			}
// 		}
// 		else if (ch=='x')
// 		  return (0);
		  
// 	}
	
// }

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>
#include <unistd.h> // for usleep function

using namespace std;

void gotoxy(int x, int y) {
    move(y, x);
}

void delay(unsigned int milliseconds) {
    usleep(milliseconds * 1000); // usleep uses microseconds
}

void getup() {
    system("clear");
    gotoxy(10, 2);
    printw("Press X to Exit, Press Space to Jump");
    gotoxy(62, 2);
    printw("SCORE : ");
    gotoxy(1, 25);
    for (int x = 0; x < 79; x++)
        printw("�");
    refresh(); // Refresh the screen
}

int t, speed = 40000;

void ds(int jump = 0) {
    static int a = 1;

    if (jump == 0)
        t = 0;
    else if (jump == 2)
        t--;
    else
        t++;
    gotoxy(2, 15 - t);
    printw("                 ");
    gotoxy(2, 16 - t);
    printw("         ��������");
    gotoxy(2, 17 - t);
    printw("         ��������");
    gotoxy(2, 18 - t);
    printw("         ��������");
    gotoxy(2, 19 - t);
    printw(" �      �������� ");
    gotoxy(2, 20 - t);
    printw(" ���  ���������� ");
    gotoxy(2, 21 - t);
    printw(" ������������  � ");
    gotoxy(2, 22 - t);
    printw("   ���������     ");
    gotoxy(2, 23 - t);
    if (jump == 1 || jump == 2) {
        printw("    ��� ��       ");
        gotoxy(2, 24 - t);
        printw("    ��   ��      ");
    } else if (a == 1) {
        printw("    ����  ���    ");
        gotoxy(2, 24 - t);
        printw("      ��         ");
        a = 2;
    } else if (a == 2) {
        printw("     ��� ��      ");
        gotoxy(2, 24 - t);
        printw("          ��     ");
        a = 1;
    }
    gotoxy(2, 25 - t);
    if (jump != 0) {
        printw("                ");
    } else {
        printw("�������������");
    }

    refresh(); // Refresh the screen
    delay(speed);
}

void obj() {
    static int x = 0, scr = 0;
    if (x == 56 && t < 4) {
        scr = 0;
        speed = 40000;
        gotoxy(36, 8);
        printw("Game Over");
        refresh(); // Refresh the screen
        getchar();
        gotoxy(36, 8);
        printw("         ");
    }
    gotoxy(74 - x, 20);
    printw("�    � ");
    gotoxy(74 - x, 21);
    printw("�    � ");
    gotoxy(74 - x, 22);
    printw("������ ");
    gotoxy(74 - x, 23);
    printw("  �    ");
    gotoxy(74 - x, 24);
    printw("  �  ");
    x++;
    if (x == 73) {
        x = 0;
        scr++;
        gotoxy(70, 2);
        printw("     ");
        gotoxy(70, 2);
        printw("%d", scr);
        if (speed > 20000)
            speed -= 1000;
    }
}

int main() {
    initscr(); // Initialize ncurses
    raw();     // Line buffering disabled
    keypad(stdscr, TRUE); // Enable keyboard input
    noecho();  // Don't echo input
    char ch;
    int i;
    getup();
    while (true) {
        while (true) {
            ds();
            obj();
            ch = getch();
            if (ch != ERR) // Check if a key was pressed
                break;
        }
        if (ch == ' ') {
            for (i = 0; i < 10; i++) {
                ds(1);
                obj();
            }
            for (i = 0; i < 10; i++) {
                ds(2);
                obj();
            }
        } else if (ch == 'x')
            break;
    }
    endwin(); // End ncurses
    return 0;
}
