#include<stdio.h>
#include<stdlib.h>
int	Maze[8][7] = {	/* �ŧi5*4���g�c�A�~�򤣥i��	*/
2, 2, 2, 2, 2, 2, 2,
2, 0, 1, 0, 0, 0, 2,
2, 1, 0, 1, 1, 0, 2,
2, 1, 0, 1, 1, 0, 2,
2, 1, 1, 0, 1, 1, 2,
2, 0, 0, 1, 0, 1, 2,
2, 1, 1, 1, 0, 0, 2,
2, 2, 2, 2, 2, 2, 2};

/* --------------------------------------------------- */
/* ���j�Ѱg�c���D */
/* --------------------------------------------------- */
int Way(int LocX,int LocY)
{
if ( Maze[6][5] == 2 )	/* ���j�������� */
return 1;
else	/* ���j���泡�� */
if ( Maze[LocY][LocX] == 0 )
{
Maze[LocY][LocX] = 2;
if ( Way(LocX,LocY-1) )
return 1;
else if ( Way(LocX+1,LocY-1) ) 
return 1;
else if	( Way(LocX+1,LocY) ) 
return 1;
else if ( Way(LocX+1,LocY+1) )
return 1;
else if ( Way(LocX,LocY+1) )
return 1;
else if ( Way(LocX-1,LocY+1) )
return 1;
else if ( Way(LocX-1,LocY) )
return 1;
else if	( Way(LocX-1,LocY-1) )
return 1;
else
{
Maze[LocY][LocX] = 3;
return 0;
}
}
else
return 0;
}

/* --------------------------------------------------- */
/* �D�{�� */
/* --------------------------------------------------- */
main ()
{
int	i,j;	/* �j��p���ܼ�	*/

printf("==Problem of Maze ==\n");
printf("The Maze source is (1,1).\n");
printf("The Maze Destination is (6,5).\n");
Way(1,1);

printf("The graph of Maze.\n");
printf(" 0 1 2 3 4 5 6 \n");
printf(" +---+---+---+---+---+---+---+\n");

for (i=0;i<8;i++)
{
printf(" %d |",i);
for (j=0;j<7;j++)
printf("-%d-|",Maze[i][j]);
printf("\n +---+---+---+---+---+---+---+\n");
}
}
