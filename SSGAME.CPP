#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
void SnkBrt(int[][2],int*,int,int);
void FrgBrt(int[],int,int);
void DspScr(int,int[][2],int[],int*,int,int,int,int,int);
void DspStp(int,int,int,int,int);
void SnkTrn(int*,char);
void SnkMvmt(int,int[][2],int,int,int,int,int);
void SnkBit(int*,int[][2],int[],int*,int,int);
void FrgMvmt(int[],int,int,int,int);
void SvScr(int,int);
void Play(int);
void GameLevel(int*);
void Help();
void HighScore(int);
void Null();
void main()
{
int lvl=1;
while(1)
{
clrscr();
cout<<" Main Menu"<<endl
    <<" 1:Play"<<endl
    <<" 2:Game Level"<<endl
    <<" 3:Help"<<endl
    <<" 4:HighScore"<<endl
    <<" 0:Exit"<<endl;
fflush(stdin);
switch(getche())
{
case '1':Play(lvl);
break;
case '2':GameLevel(&lvl);
break;
case '3':Help();
break;
case '4':HighScore(lvl);
break;
case '0':return;
}
}
}



void SnkBrt(int pos[][2],int*dir,int xsiz,int ysiz)
{
int i;
pos[0][0]=rand()%xsiz+5;
pos[0][1]=rand()%ysiz+5;
*dir=rand()%4;
switch(*dir)
{
case 0:for(i=1;i<10;i++)
	{
	pos[i][0]=pos[0][0];
	pos[i][1]=pos[i-1][1]-1;
	}
	break;
case 1:for(i=1;i<10;i++)
       {
	pos[i][0]=pos[0][0];
	pos[i][1]=pos[i-1][1]+1;
       }
       break;
case 2:for(i=1;i<10;i++)
       {
	pos[i][0]=pos[i-1][0]-1;
	pos[i][1]=pos[0][1];
       }
break;
case 3:for(i=1;i<10;i++)
       {
       pos[i][0]=pos[i-1][0]+1;
       pos[i][1]=pos[0][1];
       }
       break;
       }
}

void FrgBrt(int pof[],int xsiz, int ysiz)
{
pof[0]=rand()%xsiz+5;
pof[1]=rand()%ysiz+5;
}

void DspScr(int sz,int pos[][2],int pof[],int* pscr,int cscr,int xini,int xfin,int yini,int yfin)
{
int i;
clrscr();
_setcursortype(_NOCURSOR);
setcolor(BLUE);
setfillstyle(SOLID_FILL,WHITE);
bar(xini,yini,xfin,yfin);
textcolor(GREEN);
moveto(pof[0],pof[1]);
cprintf("%c",2);
textcolor(BLACK);
for(i=1;i<sz;i++)
{
moveto(pos[i][0],pos[i][1]);
cprintf("%c",21);
}
textcolor(YELLOW);
moveto(pos[0][0],pos[0][1]);
cprintf("%c",1);
setcolor(LIGHTGREEN);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(xfin+5,yini,xfin+20,yini+5);
setcolor(BROWN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
outtextxy(xfin+6,yini+3,"");
textcolor(DARKGRAY);
textbackground(LIGHTGRAY);
(cscr>*pscr?*pscr=cscr:*pscr);
moveto(xfin+5,yini+10);
cprintf("Peak Score :%d",*pscr);
moveto(xfin+5,yini+11);
cprintf("Current Score:%d",cscr);
}


void DspStp(int sz,int xini,int xfin,int yini,int yfin)
{
setcolor(RED);
settextstyle(BOLD_FONT,HORIZ_DIR,2);
moveto ((xini+xfin)/2-5,(yini+yfin)/2);
(sz<10?outtext("GAME OVER"):outtext("GAMEPAUSED"));
setcolor(LIGHTRED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy((xini+xfin)/2-12,(yini+yfin)/2+3,"Press any key to ");
(sz<10? outtext("return"):outtext("continue"));
getche();
}

void SnkTrn(int *dir,char prs)
{
switch(prs)
{
case '2':*dir=0;
break;
case '8':*dir=1;
break;
case '6':*dir=2;
break;
case '4':*dir=3;
break;
}
}

void SnkMvmt(int sz,int pos[][2],int dir,int xini,int xfin,int yini,int yfin)
{
int i;
for(i=sz-1;i;i--)
{
pos[i][0]=pos[i-1][0];
pos[i][1]=pos[i-1][1];
}
switch(dir)
{
case 50:pos[0][1]++;
break;
case 56:pos[0][1]--;
break;
case 54:pos[0][0]++;
break;
case 52:pos[0][0]--;
break;
}
(pos[0][1]>yfin?pos[0][1]=yini:pos[0][1]);
(pos[0][1]<yini?pos[0][1]=yfin:pos[0][1]);
(pos[0][0]>xfin?pos[0][0]=xini:pos[0][0]);
(pos[0][0]<xini?pos[0][0]=xfin:pos[0][0]);
}


void SnkBit(int *sz,int pos[][2],int pof[],int *cscr,int xsiz,int ysiz)
{
int i;
for(i=1;i<*sz;i++)
{
if(pos[0][0]==pos[i][0]&&pos[0][1]==pos[i][1])
{
*cscr-=100;
*sz--;
}
}
if(pos[0][0]==pof[0]&&pos[0][1]==pof[1])
{
*cscr+=100;
*sz++;
FrgBrt(pof,xsiz,ysiz);
}
}


void FrgMvmt(int pof[],int xini,int xfin,int yini,int yfin)
{
switch(rand()%4)
{
case 0:pof[1]++;
break;
case 1:pof[1]--;
break;
case 2:pof[0]++;
break;
case 3:pof[0]--;
break;
}
(pof[1]>yfin?pof[1]=yini:pof[1]);
(pof[1]<yini?pof[1]=yfin:pof[1]);
(pof[0]>xfin?pof[0]=xini:pof[0]);
(pof[0]>xini?pof[0]=xfin:pof[0]);
}



void SvScr(int pscr,int lvl)
{
FILE *hgsc;
int sno,i;
struct hghscr
{
int slno;
char name[30];
int score;
}hs;
switch(lvl)
{
case 1:hgsc:fopen("SFHSezy.DAT","a+");
break;
case 2:hgsc=fopen("SFHSmdm.DAT","a+");
break;
case 3:hgsc=fopen("SFHStgh.DAT","a+");
}
fseek(hgsc,0,SEEK_SET);
for(i=0;i<10;i++)
{
fread(&hs,sizeof(hs),1,hgsc);
if(pscr>hs.score)
{
sno=hs.slno;
break;
}
}
if(i<10)
{
fseek(hgsc,-2*sizeof(hs),SEEK_END);
for(i=10;i>sno;i--)
{
fread(&hs,sizeof(hs),1,hgsc);
hs.slno++;
fwrite(&hs,sizeof(hs),1,hgsc);
fseek(hgsc,-3*sizeof(hs),SEEK_CUR);
}
fseek(hgsc,sizeof(hs),SEEK_CUR);
clrscr();
hs.slno=sno;
cout<<" Enter your name :"<<endl;
gets(hs.name);
hs.score=pscr;
fwrite(&hs,sizeof(hs),1,hgsc);
}
fclose(hgsc);
}


void Play(int lvl)
{
char prs;
int sz=10,pos[100][2],pof[2],dir,pscr=0,cscr=0,xmax,ymax,gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\TC\BGI");
xmax=getmaxx();
ymax=getmaxy();
SnkBrt(pos,&dir,xmax-30,ymax-10);
FrgBrt(pof,xmax-30,ymax-10);
while(1)
{
  DspScr(sz,pos,pof,&pscr,cscr,5,xmax-25,5,ymax-5);
  ((prs=='5'||sz<10)?DspStp(sz,5,xmax-25,5,ymax-5):Null());
  if(prs=='0'||sz<10)
{
break;
}
delay((4-lvl)*300);
(kbhit()?prs=getch():prs);
SnkTrn(&dir,prs);
SnkMvmt(sz,pos,dir,5,xmax-25,5,ymax-5);
SnkBit(&sz,pos,pof,&cscr,xmax-30,ymax-10);
FrgMvmt(pof,5,xmax-25,5,ymax-5);
}
closegraph();
SvScr(pscr,lvl);
}




void GameLevel(int*lvl)
{
do
{
clrscr();
cout<<"Choose game level:"<<endl
    <<"1:Eazy"<<endl
    <<"2:Medium"<<endl
    <<"3:Tough"<<endl;
    fflush(stdin);
    *lvl=getch()-48;
    }
    while(*lvl<1||*lvl>3);
    }



void Help()
{
clrscr();
cout<<"Press 2 to turn snake downwards"<<endl
    <<"Press 8 to turn snake upwards"<<endl
    <<"Press 6 to turn snake right upwards"<<endl
    <<"Press 4 to turn snake leftwards"<<endl
    <<"Press 5 to pause"<<endl
    <<"Press 0 to quit"<<endl
    <<"Bite frog to lengthen the snake and to increase the score"<<endl
    <<"Bite snake body to shorten snake and to decrease the score"<<endl
    <<"Game will over when snake size becomes less than its original size"<<endl<<endl
    <<"Enter any key to return to main menu"<<endl;
getch();
}


void HighScore(int lvl)
{
FILE *hgsc;
int i;
struct hghscr
{
int slno;
char name[30];
int score;
}hs;
switch(lvl)
{
case 1:hgsc=fopen("SFHSezy.DAT","a+");
break;
case 2:hgsc=fopen("SFHSmdm.DAT","a+");
break;
case 3:hgsc=fopen("SFHStgh.DAT","a+");
}
clrscr();
rewind(hgsc);
cout<<RIGHT_TEXT<<setw(6)<<"SL.NO"<<setw(30)<<"NAME"<<setw(6)<<"SCORE"<<endl;
for(i=0;i<10;i++)
{
fread(&hs,sizeof(hs),1,hgsc);
cout<<RIGHT_TEXT<<setw(6)<<hs.slno<<setw(30)<<hs.name<<setw(6)<<hs.score<<endl;
}
fclose(hgsc);
cout<<"Enter any key to return to main menu"<<endl;
getch();
}






void Null()
{
}







