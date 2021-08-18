#include<iostream>

#include<iomanip>

#include<math.h>


void Receive(float[][5],float[][5],char);
void Display(float[][5]);
char Choice(float[][5]);
void Requirements(int*,int*,float*,float[][5],int[][2],char);
void Redirect(float[][5],float[][5],float[][5],int[][2],int,int,float,char);
void Copy(float[][5],float[][5]);
void NullMat(float[][5],int,int);
void IdentityMat(float[][5],int);
void ScalarMat(float[][5],int,float);
void DiagonalMat(float[][5],float[]);
void IdenticalMat(float[][5],int,int,float);
float RoundOff(float,int);
void Order(float[][5]);
int Equality(float[][5],float[][5],char);
void InterchangeR(float[][5],float[][5],int,int);
void InterchangeC(float[][5],float[][5],int,int);
void AdditionR(float[][5],float[][5],int,int,float);
void AdditionC(float[][5],float[][5],int,int,float);
void MultiplicationR(float[][5],float[][5],int,float);
void MultiplicationC(float[][5],float[][5],int,float);
void Transpose(float[][5],float[][5],char);
void Conjugate(float[][5],float[][5],char);
void Addition(float[][5],float[][5],float[][5],char);
void Negative(float[][5],float[][5],char);
void Multiplication1(float[][5],float[][5],float,char);
void Multiplication2(float[][5],float[][5],float[][5],char);
int Inverse(float[][5],float[][5],char);
int Exponent(float[][5],float[][5],int,char);
int Exponent(float[][5],float[][5],float);
int Exponent(float[][5]);
int Exponent(float[][5],char);
float Logarithm(float[][5],float[][5],char);
float Logarithm(float[][5],float[][5]);
int SubMatrix(float[][5],float[][5],int[][2],char);
void PrincipleSubMatrix(float[][5],float[][5],int[][2],char);
void LeadingSubMatrix(float[][5],float[][5],int,char);
float Trace(float[][5],char);
float Determinant(float[][5],char);
int Rank(float[][5],char);
int Nullity(float[][5]);
void CharacteristicRoot(float[][5],float[],char);
void CharacteristicRoot(float[][5],float[],char,char);
void CharacteristicMatrix(float[][5]);
float Minor(float[][5],int,int,char);
float Cofactor(float[][5],int,int,char);
void CofactorMatrix(float[][5],float[][5],char);
void Adjoint(float[][5],float[][5],char);
void Properties(float[][5]);
//void RelativeProperties(float[][5],float[][5]);
int Classes(float[][5],char);
void Nil();


void main()
{
int del[6][2],row,clmn,msc;
float matin[6][5],matinn[6][5],matout[6][5],scal;
char chc;
cout<<setw(20)<<"Eazy Maths"<<endl<<setw(20)<<"Unit:Matrices"<<endl<<setw(60)<<"DEVELOPERS:S&S pvt.ltd."<<setprecision(2)<<endl;
Re:clrscr();
   cout<<"Enter a matrix to workout with!"<<endl<<endl;
   Receive(matin,matinn,'B');
   cout<<"The matrix you have entered is:"<<endl;
   Display(matin);
   chc=Choice(matin);
   if(chc=='B'||chc=='K'||chc=='N'||chc=='Q'||chc=='^')
   {
   cout<<endl<<"Enter another compatible matrix before proceeding further!"<<endl;
   Receive(matinn,matin,chc);
   cout<<"The another matrix you have entered is:"<<endl;
   Display(matinn);
   }
   Requirements(&row,&clmn,&scal,matin,del,chc);
   Redirect(matin,matinn,matout,del,row,clmn,scal,chc);
   cout<<"To exit, enter 'X'. Else to workout again enter any other"<<endl;
   fflush(stdin);
   chc=getche();
   chc=toupper(chc);
   if(chc!='X')
   {
   goto Re;
   }
   return;
   }




void Receive(float m[][5],float mm[][5],char c)
{
 FILE *v=NULL;
 int i,j,x,y,a,b;
 float l,d[6];
 char g,h,k,u;
 //v=fopen("C:\TC\CalcMatrix.DAT","rb");
 cout <<"Chose a type of input matrix"<<endl
      <<"N: Null Matrix"<<endl;
 if(c!='K'||mm[5][0]==mm[5][1])
   {
   cout<<"I: Identity Matrix"<<endl
       <<"S: Scalar Matrix"<<endl
       <<"D: Diagonal Matrix"<<endl;
   }
 cout<<"E: Elementwise identical matrix"<<endl;
 (v!=NULL?cout<<"P: A presaved matrix"<<endl:cout<<"");
 cout<<"R: A random matrix"<<endl
     <<"Any other: New Matrix"<<endl;
       fflush(stdin);
       h=getche();
       h=toupper(h);
       cout<<endl;
       ((((c=='K'&&mm[5][0]!=mm[5][1])&&(h=='I'||h=='S'||h=='D'))||(v==NULL&&h=='P')||(h!='N'&&h!='I'&&h!='S'&&h!='D'&&h!='E'&&h!='P'&&h!='R'))?(h='Z'):h);
       g=k='Z';
       if(((c=='B'||c=='^')&&(h=='D'||h=='P'||h=='Z'))||(c=='N'&&(h=='P'||h=='Z')))
       {
       g='K';
       cout<<"To enter a matrix of unknown order, enter 'K'. Else any other";
       fflush(stdin);
       k=getche();
       k=toupper(k);
       cout<<endl;
       }
       if(g!='K'||k!='K')
	 {
	 switch(c)
	 {
	 case 'B':
	 case '^':
	 case 'N':if(c!='N'||(h!='I'&&h!='S'&&h!='D'))
		  {
		  x=1;
		  do
		  {
		  cout<<"Enter the "<<(c=='N'?"number of columns":"order")<<" of the matrix(1 to 5):"<<endl;
		  ((h=='I'||h=='S'||h=='D'||c=='N')?cin>>y:cin>>x>>y);
		  }
		  while(x<=0||x>5||y<=0||y>5);
		  (h=='I'||h=='S'||h=='D'?(x=y):(x));
		  (c=='N'?(x=mm[5][1]):(x));
		  }
		  else
		  {
		  x=y=mm[5][1];
		  }
		  break;
	 case 'K':x=mm[5][0];
		  y=mm[5][1];
		  break;
	 case 'Q':x=y=mm[5][0];
		  break;
	 }
	 }
	else
	{
	switch(c)
	{
	case 'B':
	case '^':x=5;
	case 'N':y=5;
		 (c=='N'?(x=mm[5][1]):(x));
		 break;
	}
	}
	switch(h)
	{
case 'N': NullMat(m,x,y);
	break;
case 'I': IdentityMat(m,x);
	break;
case 'S':
case 'E': cout<<"Enter the value of the scalar:";
	cin>>l;
	(h=='S'?ScalarMat(m,x,l):IdenticalMat(m,x,y,l));
	break;
case 'D': cout<<"Enter the diagonal elements "<<(g=='K'&&k=='K'?"(max 5)":"")<<endl;
	for(j=0,u='A';(j<y&&u!='E');j++)
	{
	 cout<<endl<<"a_"<<j+1<<"_"<<j+1<<"=?";
	 cin>>d[j];
	 if(g=='K'&&k=='K'&&j<(y-1))
	 {
	  cout<<"To end the entries,enter'E'. Else any other";
	  fflush(stdin);
	  u=getche();
	  u=toupper(u);
	  cout<<endl;
	 }
	 }
	 d[5]=j;
	 DiagonalMat(m,d);
	 break;
case 'R':cout<<"To unbound the random numbers, enter 'B'. Else any other";
	 fflush(stdin);
	 u=getche();
	 u=toupper(u);
	 cout<<endl;
	 if(u!='B')
	 {
	 cout<<"Enter the lower limit and upper limit respectively"<<endl;
	 cin>>a>>b;
	 }
	 for(i=0;i<(m[5][0]=x);i++)
	  {
	  for(j=0;j<(m[5][1]=y);j++)
	   {
	   m[i][j]=(u=='B'?rand():rand()/(b-a+1)+a);
	   }
	  }
	 break;
case 'P':struct a
	{
	int sno;
	float mat[6][5];
	}b;
	fseek(v,-sizeof(b),SEEK_END);
	fread(&b,sizeof(b),1,v);
	do
	{
	cout<<"Enter the serial number of the matrix (1 to "<<b.sno<<" ):";
	cin>>j;
	}
	while(j<=0||j>b.sno);
	rewind(v);
	do
	{
	fread(&b,sizeof(b),1,v);
	}
	while(b.sno!=j);
	Copy(b.mat,m);
	if((g!='K'||k!='K')&&(x!=m[5][0]||y!=m[5][1]))
	{
	cout<<"Incompatible Matrices!"<<endl;
	fclose(v);
	Receive(m,mm,c);
	return;
	}
	fclose(v);
	break;
default:cout<<"Enter the elements of the matrix "<<(g=='K'&&k=='K'?"(max 5x5)":"")<<endl;
	for(i=0,h='Z';(i<x&&h!='F');i++)
	{
	for(j=0,u='A';(j<y&&u!='E');j++)
	{
	cout<<endl<<"a_"<<i+1<<"_"<<j+1<<"=?";
	cin>>m[i][j];
	if(g=='K'&&k=='K'&&!i&&j<(y-1))
	{
	cout<<"To end the entries in this row, enter 'E'. Else any other";
	fflush(stdin);
	u=getche();
	u=toupper(u);
	cout<<endl;
	}
	}
	y=j;
	if(g=='K'&&k=='K'&&c!='N'&&i<(y-1))
	{
	cout<<"To finish the entry of this matrix, enter'F'. Else any other";
	fflush(stdin);
	h=getche();
	h=toupper(h);
	cout<<endl;
	}
	}
	m[5][0]=i;
	m[5][1]=j;
	m[5][4]=Classes(m,'_');
 }
}




void Display (float m[][5])
{
FILE *v=NULL;
int i,j;
for(i=0;i<m[5][0];i++)
   {
   cout<<"||";
   for(j=0;j<m[5][1];j++)
      {
      cout<<setw(6)<<m[i][j];
      }
      cout<<setw(6)<<"||"<<endl;
    }
    cout<<setw(6*(j+1))<<m[5][0]<<"x"<<m[5][1]<<endl;
    //v=fopen("C:\TC\CalcMatrix.DAT","rb+");
    if(v==NULL)
    {
    //v=fopen("C:\TC\CalcMatrix.DAT","wb");
    if(v==NULL)
    {
    goto nxt;
    }
    j=0;
    }
    cout<<"To save this matrix for future use, enter'V', Else any other";
    fflush(stdin);
    i=getche();
    cout<<endl;
    if(i=='V'||i=='v')
    {
    struct a
    {
    int sno;
    float mat[6][5];
    }b;
    if(j)
    {
    fseek(v,-sizeof(b),SEEK_END);
    fread(&b,sizeof(b),1,v);
    b.sno++;
    }
    else
    {
    b.sno=1;
    }
    Copy(m,b.mat);
    fseek(v,0,SEEK_END);
    fwrite(&b,sizeof(b),1,v);
    fclose(v);
    cout<<"Serial number of saved matrix is:"<<b.sno<<endl
	<<"Remember this for future use"<<endl;

}
nxt: cout<<"Enter any key to continue"<<endl;
fflush(stdin);
getch();
}



char Choice(float m[][5])
{
 char c;
 cout<<"Choose an action"<<endl
     <<"A: Order of the matrix"<<"                     "<<"B: Equality with another matrix"<<endl
     <<"C: Row interchange in the matrix"<<"           "<<"D: Column interchange in the matrix"<<endl
     <<"E: Row addition by another multiplied by a scalar"<<endl
     <<"F: Column addition by another column mutiplied by a scalar"<<endl
     <<"G: Row multliplication by a scalar"<<"         "<<"H: Column multiplication by a scalar"<<endl
     <<"I: Transpose of a matrix"<<"                   "<<"J: Conjugate of the matrix"<<endl
     <<"K: Addition  with another matrix"<<"           "<<"L: Negative of the matrix"<<endl
     <<"M: Multiplication with a scalar"<<"            "<<"N: Multiplication with another matrix"<<endl;
     if(m[5][0]==m[5][1])
     {
     cout<<"O: Inverse of the matrix"<<"                   "<<"P: Exponent to a scalar power"<<endl
	 <<"Q: Logarithm to another matrix base"<<endl;
     }
     cout<<"R: Sub matrix of the matrix"<<endl;
     if(m[5][0]==m[5][1])
     {
     cout<<"S: Principle sub matrix of the matrix"<<"      "<<"T: Leading sub matrix of the matrix"<<endl
	 <<"U: Trace of the matrix"<<"                     "<<"V: Determinant of the matrix"<<endl;
     }
     cout<<"W: Rank of the matrix"<<endl;
     if(m[5][0]==m[5][1])
     {
     cout<<"X: Nullity of the matrix"<<"                   "<<"Y: Charteristic roots of a matrix"<<endl
	 <<"Z: Charteristic matrices of the matrix"<<"     "<<"@: Minor of the element"<<endl
	 <<"#: Cofactor of the element"<<"                 "<<"$: Cofactor matrix of the matrix"<<endl
	 <<"%: Adjoint of the matrix"<<endl;
       }
       cout<<"&: Properties of the matrix"<<endl
	   //<<"^: Relative properties with another matrix"<<endl
	   <<"Any other: Class of the matrix"<<endl;
       fflush(stdin);
       c=getche();
       c=toupper(c);
       cout<<endl;
       (((m[5][0]!=m[5][1]&&((c>='O'&&c<='Z'&&c!='W'&&c!='R')||c=='@'||(c>='#'&&c<='%')))||((c<'A'||c>'Z')&&(c<'#'||c>'&')&&c!='@'&&c!='^'))?c='~':c);
       return c;
       }



void Requirements(int*a,int*b,float*l,float m[][5],int w [][2],char c)
{
int i;
float d[6],mm[6][5];
switch(c)
{
 case 'C':
 case 'D':do
	{
	 cout<<"Enter the appropriate address of "<<(c=='C'?"rows":"columns")<<" to be interchanged";
	 cin>>*a>>*b;
	 }
	 while((c=='C'&&((*a)<=0||(*a)>m[5][0]||(*b)<=0||(*b)>m[5][0]))||(c=='D'&&((*a)<=0||(*a)>m[5][1]||(*b)<=0||(*b)>m[5][1])));
 break;
 case 'E':
 case 'F':
 case 'G':
 case 'H':do
	  {
	  cout<<"Enter the appropriate address of "<<(c=='E'||c=='G'?"row":"column")<<" to be altered";
	  cin>>*a;
	  }
	  while(((c=='E'||c=='G')&&((*a)<=0||(*a)>m[5][0]))||((c=='F'||c=='H')&&((*a)<=0||(*a)>m[5][1])));
	  if(c=='E'||c=='F')
	  {
	  do
	  {
	  cout<<"Enter the appropriate address of "<<(c=='E'?"row":"column")<<" to be added";
	  cin>>*b;
	  }
	  while((c=='E'&&((*b)<=0||(*b)>m[5][0]))||(c=='F'&&((*b)<=0||(*b)>m[5][1])));
	  }
 case 'M':do
	 {
	 cout<<"Enter the scalar to be multiplied"<<(c!='M'?"(0 not allowed)":"");
	 cin>>*l;
	 }
	 while(c!='M'&&!(*l));
 break;
 case 'P': if(m[5][4]>3&&m[5][0]==2)
	 {
	 cout<<"To obtain square root press 'S', to obtain cube root press 'C'. Else any other"<<endl;
	 fflush(stdin);
	 *a=getche();
	 }
	 if(*a!='S'&&*a!='s'&&*a!='C'&&*a!='c')
	 {
	 cout<<"Enter the power of the Matrix "<<(m[5][5]?"(Even decimals!)":"(Only integers!)")<<endl;
	 (m[5][5]?cin>>*l:cin>>*b);
	 }
 break;
 case 'R':for(i=0;i<m[5][0];i++)
	 {
	 do
	 {
	 cout<<"Enter the appropriate address of row to be deleted. Enter '0' to finish"<<endl;
	 cin>>*a;
	 if(!(*a))
	 {
	 break;
	 }
	 w[i][0]=(*a)-1;
	 }
	 while(w[i][0]<0||w[i][0]>=m[5][0]);
	 if(!(*a))
	 {
	 break;
	 }
	 }
	 (!(*a)?(w[5][0]=i):(w[5][0]=--i));
 case 'S':for(i=0;i<m[5][1];i++)
	 {
	 do
	 {
	 cout<<"Enter the appropriate address of "<<(c=='S'?"row-":"")<<"column to be deleted. Enter '0' to finish"<<endl;
	 cin>>*b;
	 if(!(*b))
	 {
	 break;
	 }
	 w[i][1]=(*b)-1;
	 }
	 while(w[i][1]<0||w[i][1]>=m[5][1]);
	 if(!(*b))
	 {
	 break;
	 }
	 }
	 (!(*b)?(w[5][1]=i):(w[5][1]=--i));
 break;
 case 'T':do
	 {
	 cout<<"Enter the appropriate order of the required leading sub matrix"<<endl;
	 cin>>*b;
	 }
	 while((*b)<=0||(*b)>m[5][0]);
 break;
 case '@':
 case '#':do
	 {
	 cout<<"Enter the appropriate address of the element to be operated"<<endl;
	 cin>>*a>>*b;
	 }
	 while((*a)<=0||(*a)>m[5][0]||(*b)<=0||(*b)>m[5][1]);
	 }
 }




void Redirect(float mi1[][5],float mi2[][5],float mo[][5],int w[][2],int a,int b,float l,char c)
{
float u[6];
(c!='P'?a--:a);
(c!='P'&&c!='T'?b--:b);
switch(c)
{
case 'A' : Order(mi1);
break;
case 'B' : Equality(mi1,mi2,c);
break;
case 'C' : InterchangeR(mi1,mo,a,b);
break;
case 'D' : InterchangeC(mi1,mo,a,b);
break;
case 'E' : AdditionR(mi1,mo,a,b,l);
break;
case 'F' : AdditionC(mi1,mo,a,b,l);
break;
case 'G' : MultiplicationR(mi1,mo,a,l);
break;
case 'H' : MultiplicationC(mi1,mo,a,l);
break;
case 'I' : Transpose(mi1,mo,c);
break;
case 'J' : Conjugate(mi1,mo,c);
break;
case 'K' : Addition(mi1,mi2,mo,c);
break;
case 'L' : Negative(mi1,mo,c);
break;
case 'M' : Multiplication1(mi1,mo,l,c);
break;
case 'N' : Multiplication2(mi1,mi2,mo,c);
break;
case 'O' : Inverse(mi1,mo,c);
break;
case 'P' : (mi1[5][4]<=3?Exponent(mi1,mo,l):(a=='S'||a=='s'?Exponent(mi1):(a=='C'||a=='c'?Exponent(mi1,c):Exponent(mi1,mo,b,c))));
break;
case 'Q' : (mi1[5][4]<=3?Logarithm(mi1,mi2):Logarithm(mi1,mi2,c));
break;
case 'R' : SubMatrix(mi1,mo,w,c);
break;
case 'S' : PrincipleSubMatrix(mi1,mo,w,c);
break;
case 'T' : LeadingSubMatrix(mi1,mo,b,c);
break;
case 'U' : Trace(mi1,c);
break;
case 'V' : Determinant(mi1,c);
break;
case 'W' : Rank(mi1,c);
break;
case 'X' : Nullity(mi1);
break;
case 'Y' : (mi1[5][4]<=5?CharacteristicRoot(mi1,u,c,c):CharacteristicRoot(mi1,u,c));
break;
case 'Z' : CharacteristicMatrix(mi1);
break;
case '@' : Minor(mi1,a,b,c);
break;
case '#' : Cofactor(mi1,a,b,c);
break;
case '$' : CofactorMatrix(mi1,mo,c);
break;
case '%' : Adjoint(mi1,mo,c);
break;
case '&' : Properties(mi1);
break;
//case '^' : RelativProperties(mi1,mi2);
//break;
default:Classes(mi1,c);
}
}



void Copy(float m[][5],float mm[][5])
{
int i,j;
for(i=0;i<(mm[5][0]=m[5][0]);i++)
{
for(j=0;j<(mm[5][1]=m[5][1]);j++)
{
mm[i][j]=m[i][j];
}
}
}


void NullMat(float m[][5],int x,int y)
{
IdenticalMat(m,x,y,0);
}



void IdentityMat(float m[][5],int k)
{
ScalarMat(m,k,1);
}



void ScalarMat(float m[][5],int k,float l)
{
int i;
float d[6];
for(i=0;i<k;i++)
{
d[i]=l;
}
d[5]=k;
DiagonalMat(m,d);
}



void DiagonalMat(float m[][5],float d[])
{
int i,j;
for(i=0;i<(m[5][0]=d[5]);i++)
{
for(j=0;j<(m[5][1]=d[5]);j++)
{
(i==j?(m[i][j]=d[i]):(m[i][j]=0));
}
}
}



void IdenticalMat(float m[][5],int x,int y,float l)
{
 int i,j;
 for(i=0;i<(m[5][0]=x);i++)
  {
   for(j=0;j<(m[5][1]=y);j++)
    {
     m[i][j]=l;
    }
  }
}



float Roundoff(float l,int k)
{
l*=pow(10,k);
l=((l-floor(l))==0.5?(((int)floor(l)%2)?ceil(l):floor(l)):((l-floor(l))>0.5?ceil(l):floor(l)));
l*=pow(10,-k);
return l;
}




void Order(float m[][5])
{
cout<<"Order of this matrix is:"<<m[5][0]<<"x"<<m[5][1]<<endl;
}



int Equality(float m1[][5],float m2[][5], char c)
{
int i,j,p=0;
for(i=0;i<m1[5][0];i++)
{
for(j=0;(j<m1[5][1]&&m1[i][j]==m2[i][j]);j++,p++);
}
if(p==m1[5][0]*m1[5][1]&&m1[5][0]==m2[5][0]&&m1[5][1]==m2[5][1])
{
(c=='B'?cout<<"These two matrices are equal"<<endl:cout<<"");
return 1;
}
(c=='B'?cout<<"These two matrices are unequal"<<endl:cout<<"");
return 0;
}



void InterchangeR(float mi[][5],float mo[][5],int a,int b)
{
int j;
Copy(mi,mo);
for(j=0;j<mi[5][1];j++)
{
mo[a][j]=mi[b][j];
mo[b][j]=mi[a][j];
}
cout<<"The resultant of row interchange is:"<<endl;
Display(mo);
}



void InterchangeC(float mi[][5],float mo[][5],int a,int b)
{
int i;
Copy(mi,mo);
for(i=0;i<mi[5][0];i++)
{
mo[i][a]=mi[i][b];
mo[i][b]=mi[i][a];
}
cout<<"The resultant of the column interchange is:"<<endl;
Display(mo);
}



void AdditionR(float mi[][5],float mo[][5],int a,int b,float l)
{
int j;
Copy(mi,mo);
for(j=0;j<mi[5][1];j++)
{
mo[a][j]+=l*mo[b][j];
}
cout<<"The resultant of row addition is:"<<endl;
Display(mo);
}



void AdditionC(float mi[][5],float mo[][5],int a,int b,float l)
{
int i;
Copy(mi,mo);
for(i=0;i<mi[5][0];i++)
{
mo[i][a]+=l*mo[i][b];
}
cout<<"The resultant of the column addition is:"<<endl;
Display(mo);
}




void MultiplicationR(float mi[][5],float mo[][5],int a,float l)
{
int j;
Copy(mi,mo);
for(j=0;j<mi[5][1];j++)
{
mo[a][j]*=l;
}
cout<<"The resultant of the multiplication is:"<<endl;
Display(mo);
}



void MultiplicationC(float mi[][5],float mo[][5],int a,float l)
{
int i;
Copy(mi,mo);
for(i=0;i<mi[5][0];i++)
{
mo[i][a]*=l;
}
cout<<"The resultant of the column multiplication is:"<<endl;
Display(mo);
}



void Transpose(float mi[][5],float mo[][5],char c)
{
int i,j;
for(i=0;i<(mo[5][0]=mi[5][1]);i++)
{
for(j=0;j<(mo[5][1]=mi[5][0]);j++)
{
mo[i][j]=mi[j][i];
}
}
(c=='I'?cout<<"Transpose of ths matrix is:"<<endl:cout<<"");
(c=='I'?Display(mo):Nil());
}




void Conjugate(float mi[][5],float mo[][5],char c)
{
Copy(mi,mo);
(c=='J'?cout<<"Conjugate of this matrix is:"<<endl:cout<<"");
(c=='J'?Display(mo):Nil());
}




void Addition(float mi1[][5],float mi2[][5],float mo[][5],char c)
{
int i,j;
for(i=0;i<(mo[5][0]=mi1[5][0]);i++)
{
for(j=0;j<(mo[5][1]=mi1[5][1]);j++)
{
mo[i][j]=mi1[i][j]+mi2[i][j];
}
}
(c=='K'?cout<<"Sum of the matrices is:"<<endl:cout<<"");
(c=='K'?Display(mo):Nil());
}




void Negative(float mi[][5],float mo[][5],char c)
{
Multiplication1(mi,mo,-1,'E');
(c=='L'?cout<<"Negative of this matrix is:"<<endl:cout<<"");
(c=='L'?Display(mo):Nil());
}





void Multiplication1(float mi[][5],float mo[][5],float l,char c)
{
int i,j;
for(i=0;i<(mo[5][0]=mi[5][0]);i++)
{
for(j=0;j<(mo[5][1]=mi[5][1]);j++)
{
mo[i][j]=l*mi[i][j];
}
}
(c=='M'?cout<<"Product with this scalar is:"<<endl:cout<<"");
(c=='M'?Display(mo):Nil());
}




void Multiplication2(float mi1[][5],float mi2[][5],float mo[][5],char c)
{
int i,j,k;
for(i=0;i<(mo[5][0]=mi1[5][0]);i++)
{
for(j=0;j<(mo[5][1]=mi2[5][1]);j++)
{
for(k=0,mo[i][j]=0;k<mi1[5][1];k++)
{
mo[i][j]+=mi1[i][k]*mi2[k][j];
}
}
}
(c=='N'?cout<<"Product of these matrices is:"<<endl:cout<<"");
(c=='N'?Display(mo):Nil());
}




int Inverse(float mi[][5],float mo[][5],char c)
{
float mm[6][5],d;
d=Determinant (mi,'O');
if(!d)
{
(c=='O'?cout<<"Inverse of this matrix does not exist!"<<endl:cout<<"");
return 0;
}
Adjoint(mi,mm,'O');
Multiplication1(mm,mo,1/d,'O');
(c=='O'?cout<<"Inverse of this matrix is:"<<endl:cout<<"");
(c=='O'?Display(mo):Nil());
return 1;
}



int Exponent(float mi[][5],float mo[][5],int l, char c)
{
int i,j,k=1;
float mm1[6][5], mm2[6][5];
if(l<=0)
{
k=Inverse(mi,mm1,'I');
}
else
{
Copy(mi,mm1);
}
if(!k)
{
(c=='P'?cout<<"Exponent with this scalar power does not exist!"<<endl:cout<<"");
return 0;
}
if(!l)
{
IdentityMat(mo,mi[5][0]);
}
else
{
IdentityMat(mm2,mi[5][0]);
for(l=fabs(l);l>0;l--)
{
Multiplication2(mm1,mm2,mo,'P');
Copy(mo,mm2);
}
}
(c=='P'?cout<<"Exponent with this scalar power is:"<<endl:cout<<"");
(c=='P'?Display(mo):Nil());
return 1;
}





int Exponent(float mi[][5],float mo[][5],float l)
{
int i;
float d[6];
for(i=0;i<mi[5][0];i++)
{
if(l<=0&&mi[i][i]==0)
{
cout<<"Exponent with this scalar power does not exist!"<<endl;
return 0;
}
d[i]=pow(mi[i][i],l);
}
d[5]=mi[5][0];
DiagonalMat(mo,d);
cout<<"Exponent with this scalar power is:"<<endl;
Display(mo);
return 1;
}



int Exponent(float mi[][5])
{
int i=0;
float mo1[6][5],mo2[6][5],mo3[6][5],mo4[6][5],n;
if(Determinant(mi,'P')<0||(Trace(mi,'P')+2*sqrt(Determinant(mi,'P')))<0)
{
cout<<"Real square root of this matrix does not exist!"<<endl;
return 0;
}
cout<<"Square root of this matrix is:"<<endl;
n=sqrt(Trace(mi,'P')+2*sqrt(Determinant(mi,'P')));
mo1[0][0]=(2*(mi[0][0]+sqrt(Determinant(mi,'P'))))/(2*n);
mo1[0][1]=mi[0][1]/n;
mo1[1][0]=mi[1][0]/n;
mo1[1][1]=(2*(mi[1][1]+sqrt(Determinant(mi,'P'))))/(2*n);
mo1[5][0]=mo1[5][1]=2;
cout<<"Ans "<<++i<<")"<<endl;
Display(mo1);
Negative(mo1,mo2,'P');
if(!Equality(mo1,mo2,'P'))
{
cout<<"Ans "<<++i<<")"<<endl;
Display(mo2);
}
if((Trace(mi,'P')-2*sqrt(Determinant(mi,'P')))>=0)
{
n=sqrt(Trace(mi,'P')-2*sqrt(Determinant(mi,'P')));
mo3[0][0]=(2*(mi[0][0]-sqrt(Determinant(mi,'P'))))/(2*n);
mo3[0][1]=mi[0][1]/n;
mo3[1][0]=mi[1][0]/n;
mo3[1][1]=(2*(mi[1][1]-sqrt(Determinant(mi,'P'))))/(2*n);
mo3[5][0]=mo3[5][1]=2;
if(!Equality(mo1,mo3,'P')&&!Equality(mo2,mo3,'P'))
{
cout<<"Ans "<<++i<<")"<<endl;
Display(mo3);
Negative(mo3,mo4,'P');
if(!Equality(mo3,mo4,'P'))
{
cout<<"Ans "<<++i<<")"<<endl;
Display(mo4);
}
}
}
return 1;
}



int Exponent(float mi[][5], char c)
{
float mo[6][5],l,m,n;
if(!Trace(mi,'P'))
{
if(Determinant(mi,'P')<0)
{
cout<<"Real cube for this matrix does not exist!"<<endl;
return 0;
}
m=sqrt(3*pow(Determinant(mi,'P'),1/3));
}
else if(!Determinant(mi,'P'))
{
m=pow(Trace(mi,'P'),1/3);
}
else
{
for(m=-10000;m<+10000;m+=0.0001)
{
if(Roundoff(Trace(mi,'P'),4)==Roundoff((m*m*m),4)-Roundoff((3*m*pow(Determinant(mi,'P'),1/3)),4))
{
break;
}
}
if(m>10000)
{
cout<<"Failed to find cube root of this matrix!"<<endl;
return -1;
}
}
n=c;
n=m*m-pow(Determinant(mi,'P'),1/3);
if((l=n*n*n-3*n*n*pow(Determinant(mi,'P'),1/3)-4*mi[0][1]*mi[0][1]*mi[1][0])<0)
{
cout<<"Real cube root of this matrix does not exist!"<<endl;
return 0;
}
mo[0][0]=(mi[0][0]>mi[1][1]?(n*m+sqrt(l))/(2*n):(n*m-sqrt(l))/(2*n));
mo[0][1]=mi[0][1]/n;
mo[1][0]=mi[1][0]/n;
mo[1][1]=(mi[1][1]>mi[0][0]?(n*m+sqrt(l))/(2*n):(n*m-sqrt(l))/(2*n));
mo[5][0]=mo[5][1]=2;
cout<<"Cube root of this matrix is:"<<endl;
Display(mo);
return 1;
}



float Logarithm(float mi1[][5],float mi2[][5],char c)
{
int i,j,g1=0,g2=1;
float mm1[6][5],mm2[6][5],mm3[6][5],mm4[6][5],mm5[6][5],mm6[6][5];
g2=Exponent(mi2,mm1,0,'Q');
if((g2&&Equality(mi1,mm1,'Q')&&c!='&'))
{
goto fns;
}
g1=1;
IdentityMat(mm2,mi2[5][0]);
Copy(mi2,mm1);
do
{
Multiplication2(mm1,mm2,mm3,'Q');
g2=1;
IdentityMat(mm5,mi1[5][0]);
Copy(mi1,mm4);
do
{
Multiplication2(mm4,mm5,mm6,'Q');
if(Equality(mm3,mm6,'Q'))
{
goto fns;
}
(g2>0?g2++:g2--);
if(Classes(mm6,'Q')<=1||g2>100)
{
if(g2>0&&Inverse(mi1,mm4,'Q'))
{
g2=-1;
}
else
{
break;
}
}
(g2==-1?IdentityMat(mm5,mi1[5][0]):Copy(mm6,mm5));
}
while(g2>=-100);
(g1>0?g1++:g1--);
if(Classes(mm3,'Q')<=1||g1>100)
{
if(g1>0&&Inverse(mi2,mm1,'Q'))
{
g2=-1;
}
else
{
break;
}
}
(g1==-1?IdentityMat(mm2,mi2[5][1]):Copy(mm3,mm2));
}
while(g1>=-100);
fns : if(Equality(mi1,mm1,'Q')||Equality(mm3,mm6,'Q'))
{
(c=='Q'?cout<<"Logarithm with its marix base is: "<<g1/g2<<endl:cout<<"");
return g1/g2;
}
(c=='Q'?cout<<"Failed to find the logarithm with its base matix!"<<endl:cout<<"");
return 111;
}



float Logarithm(float mi1[][5], float mi2[][5])
{
int i;
float g;
if(!Determinant(mi1,'Q')||!Determinant(mi2,'Q'))
{
goto done;
}
g=log(mi1[0][0])/log(mi2[0][0]);
for(i=1;i<mi2[5][0];i++)
{
if(g!=log(mi1[i][i])/log(mi2[i][i]))
{
done:cout<<"Logarithm with its base matrix does not exist!"<<endl;
return 108;
}
}
cout<<"Logarithm with its matrix basse is: "<<g<<endl;
return g;
}




int SubMatrix(float mi[][5],float mo[][5],int w[][2],char c)
{
int i,j,k,h,x,y;
for(i=0,x=0;i<mi[5][0];i++)
{
for(k=0,h=0;k<w[5][0];k++)
{
if(i==w[k][0])
{
h++;
break;
}
}
if(h)
{
continue;
}
for(j=0,y=0;j<mi[5][1];j++)
{
for(k=0,h=0;k<w[5][1];k++)
{
if(j==w[k][1])
{
h++;
break;
}
}
if(h)
{
continue;
}
mo[x][y]=mi[i][j];
y++;
}
x++;
}
mo[5][0]=mi[5][0]-w[5][0];
mo[5][1]=mi[5][1]-w[5][1];
if(!mo[5][0]||!mo[5][1])
{
(c=='R'?cout<<"Submatrix can't be obtained!"<<endl:cout<<"");
return 0;
}
(c=='R'?cout<<"The resultant submatrix is:"<<endl:cout<<"");
(c=='R'?Display(mo):Nil());
return 1;
}



void PrincipleSubMatrix(float mi[][5],float mo[][5],int w[][2],char c)
{
int i;
for(i=0;i<(w[5][0]=w[5][1]);i++)
{
w[i][0]=w[i][1];
}
SubMatrix(mi,mo,w,'S');
(c=='S'?cout<<"The resultant Principle submatrix is:"<<endl:cout<<"");
(c=='S'?Display(mo):Nil());
}



void LeadingSubMatrix(float mi[][5],float mo[][5],int k, char c)
{
int i,j,w[6][2];
for(i=mi[5][0],j=0;i>k;i--,j++)
{
w[j][1]=i;
}
w[5][1]=mi[5][0]-k;
PrincipleSubMatrix(mi,mo,w,'T');
(c=='T'?cout<<"The resultant leading Sub Matrix is:"<<endl:cout<<"");
(c=='T'?Display(mo):Nil());
}







float Trace(float m[][5],char c)
{
int i;
float t=0;
for(i=0;i<m[5][0];i++)
{
t+=m[i][i];
}
(c=='U'?cout<<"Trace of this matrix is: "<<t<<endl:cout<<"");
return t;
}







float Determinant(float m[][5],char c)
{
int j;
float d=0;
for(j=0;j<m[5][1];j++)
{
d+=m[0][j]*Cofactor(m,0,j,'V');
}
(c=='V'?cout<<"Determinant of this matrix is: "<<d<<endl:cout<<"");
return d;
}








int Rank(float m[][5],char c)
{
int i,j,k,w[6][2],z=0;
float mm[6][5];
if(m[5][0]>m[5][1])
{
for(i=0;i<m[5][0];i++)
{
w[0][0]=i;
w[5][0]=1;
w[5][1]=0;
SubMatrix(m,mm,w,'W');
k=Rank(mm,'~');
(k>z?(z=k):(z));
}
}
else if(m[5][0]<m[5][1])
{
for(j=0;j<m[5][1];j++)
{
w[0][1]=j;
w[5][1]=1;
w[5][0]=0;
SubMatrix(m,mm,w,'W');
k=Rank(mm,'~');
(k>z?(z=k):(z));
}
}
else
{
(Determinant(m,'W')?(z=m[5][0]):(z));
if(Determinant(m,'W'))
{
goto end;
}
for(i=0;i<m[5][0];i++)
{
for(j=0;j<m[5][1];j++)
{
w[0][0]=i;
w[0][1]=j;
w[5][0]=w[5][1]=1;
SubMatrix(m,mm,w,'W');
k=Rank(mm,'~');
(k>z?(z=k):(z));
}
}
}
end:(c=='W'?cout<<"Rank of this Matrix is: "<<z<<endl:cout<<"");
return z;
}




int Nullity(float m[][5])
{
int w;
w=m[5][0]*Rank(m,'X');
cout<<"Nullity of this matrix is: "<<w<<endl;
return w;
}





void CharacteristicRoot(float m[][5],float u[],char c)
{
int i;
float mm1[6][5],mm2[6][5],l;
for(i=0;i<5;i++)
{
for(l=-10000;l<=10000;l+=0.0001)
{
ScalarMat(mm1,m[5][0],-l);
Addition(m,mm1,mm2,'Y');
if(!Determinant(mm2,'Y'))
{
u[i]=l;
break;
}
}
if(l>10000)
{
break;
}
}
u[5]=i;
if(c=='Y')
{
(!i?cout<<"Failed to find the characteristic root of this matrix!"<<endl:cout<<"The characteristic roots of this matrix "<<(i==1?"is: ":"are: "));
for(i=0;i<u[5];i++)
{
cout<<setw(5)<<u[i];
}
}
cout<<endl;
}





void CharacteristicRoot(float m[][5],float u[],char g,char c)
{
int i,j,k;
for(i=0,k=0;i<m[5][0];i++,k++)
{
for(j=0;j<k;j++)
{
if(u[j]==m[i][i])
{
if(i<m[5][0]-1)
{
i++;
}
else
{
break;
}
j=-1;
}
}
(j==k?u[k]=m[i][i]:k--);
}
u[5]=k;
c=g;
if(c=='Y')
{
cout<<"The characteristic roots of this matrix "<<(k==1?"is: ":"are: ");
for(i=0;i<u[5];i++)
{
cout<<setw(5)<<u[i];
}
}
cout<<endl;
}





void CharacteristicMatrix(float m[][5])
{
int i;
float mm1[6][5],mm2[6][5],u[6];
(m[5][4]<=5?CharacteristicRoot(m,u,'Z','Z'):CharacteristicRoot(m,u,'Z'));
(!u[5]?cout<<"Failed to find the characteristic matrices of this matrix!"<<endl:cout<<"The characteristic matrices of this matrix "<<(u[5]==1?"is: ":"are: ")<<endl);
for(i=0;i<u[5];i++)
{
ScalarMat(mm1,m[5][0],-u[i]);
Addition(m,mm1,mm2,'Z');
cout<<"Ans "<<i+1<<")"<<endl;
Display(mm2);
}
}




float Minor(float m[][5],int a,int b,char c)
{
int w[6][2];
float mm[6][5],n;
w[0][0]=a;
w[0][1]=b;
w[5][0]=w[5][1]=1;
(SubMatrix(m,mm,w,'@')?(n=Determinant(mm,'@')):(n=1));
(c=='@'?cout<<"Minor of the element is: "<<n<<endl:cout<<"");
return n;
}



float Cofactor(float m[][5],int a,int b,char c)
{
float f;
f=pow(-1,a+b)*Minor(m,a,b,'#');
(c=='#'?cout<<"Co-factor of the element is: "<<f<<endl:cout<<"");
return f;
}





void CofactorMatrix(float mi[][5],float mo[][5],char c)
{
int i,j;
for(i=0;i<(mo[5][0]=mi[5][0]);i++)
{
for(j=0;j<(mo[5][1]=mi[5][1]);j++)
{
mo[i][j]=Cofactor(mi,i,j,'$');
}
}
(c=='$'?cout<<"Cofactor matrix of this matrix is: "<<endl:cout<<"");
(c=='$'?Display(mo):Nil());
}





void Adjoint(float mi[][5],float mo[][5],char c)
{
float mm[6][5];
CofactorMatrix(mi,mm,'%');
Transpose(mm,mo,'%');
(c=='%'?cout<<"Adjoint of this matrix is: "<<endl:cout<<"");
(c=='%'?Display(mo):Nil());
}







void Properties(float m[][5])
{
float mm1[6][5],mm2[6][5],mm3[6][5],q;
q=Determinant(m,'&');
cout<<"This is "<<(q?"not ":"")<<"a singular matrix"<<endl;
Negative(m,mm3,'&');
Transpose(m,mm1,'&');
Conjugate(m,mm2,'&');
cout<<"This is "<<(!Equality(m,mm1,'&')?"not ":"")<<"a symmetric matrix"<<endl;
cout<<"This is "<<(!Equality(mm3,mm1,'&')?"not ":"")<<"a skew symmetric matrix"<<endl;
cout<<"This is "<<(!Equality(m,mm1,'&')?"not ":"")<<"a hermitian matrix"<<endl;
cout<<"This is "<<(!Equality(mm3,mm2,'&')?"not ":"")<<"a skew hermitian matrix"<<endl;
if(q)
{
Inverse(m,mm3,'&');
cout<<"This is "<<(!Equality(m,mm3,'&')?"not ":"")<<"an involuntary matrix"<<endl;
cout<<"This is "<<(!Equality(mm1,mm3,'&')?"not ":"")<<"an orhtogonal matrix"<<endl;
cout<<"This is "<<(!Equality(mm2,mm3,'&')?"not ":"")<<"a unitary matrix"<<endl;
}
Multiplication2(m,m,mm3,'&');
cout<<"This is "<<(!Equality(m,mm3,'&')?"not ":"")<<"an idempotent matrix"<<endl;
NullMat(mm1,m[5][0],m[5][1]);
IdentityMat(mm2,m[5][1]);
if(q||(m[5][4]<=3&&m[5][4]!=0))
{
cout<<"This is not a nilpotent matrix!"<<endl;
q=111;
}
else
{
((q=Logarithm(mm1,m,'&'))<=100?cout<<"This is a nilpotent matrix of order "<<q<<endl:cout<<"Failed to find nilpotency of the matrix !"<<endl);
}
if(q!=111||(m[5][4]<=3&&m[5][4]!=1))
{
cout<<"This is not a periodic matrix!"<<endl;
}
else
{
((q=Logarithm(mm2,m,'&'))<=100?cout<<"This is a periodic matrix of period "<<q<<endl:cout<<" Failed to find the periodism of this Matrix !"<<endl);
}
}





int Classes(float m[][5],char c)
{
int i,j,p;
float mm[6][5],d[6];
NullMat(mm,m[5][0],m[5][1]);
if(Equality(m,mm,'~'))
{
(c=='~'?cout<<"This is a null matrix of order "<<m[5][0]<<"x"<<m[5][1]<<endl:cout<<"");
return 0;
}
IdentityMat(mm,m[5][0]);
if(Equality(m,mm,'~'))
{
(c=='~'?cout<<"This is an identity mattrix of order "<<m[5][0]<<endl:cout<<"");
return 1;
}
ScalarMat(mm,m[5][0],m[0][0]);
if(Equality(m,mm,'~'))
{
(c=='~'?cout<<"This is a scalar matrix of order "<<m[5][0]<<" with scalar "<<m[0][0]<<endl:cout<<"");
return 2;
}
for(i=0;i<m[5][0];i++)
{
d[i]=m[i][i];
}
d[5]=i;
DiagonalMat(mm,d);
if(Equality(m,mm,'~'))
{
(c=='~'?cout<<"This is a diagonal matrix of order "<<m[5][0]<<endl:cout<<"");
return 3;
}
for(i=0,p=0;i<m[5][0];i++)
{
for(j=i+1;(j<m[5][1]&&!m[i][j]);j++,p++);
}
if((p==(m[5][0]*m[5][1]-m[5][0])/2)&&m[5][0]==m[5][1])
{
(c=='~'?cout<<"This is a lower triangular matrix of order "<<m[5][0]<<endl:cout<<"");
return 4;
}
for(i=1;i<m[5][0];i++)
{
for(j=0;(j<i&&!m[i][j]);j++,p++);
}
if((p==(m[5][0]*m[5][1]-m[5][0])/2)&&m[5][0]==m[5][1])
{
(c=='~'?cout<<"This is an upper triangular matrix of order "<<m[5][0]<<endl:cout<<"");
return 5;
}
if(m[5][0]==m[5][1])
{
(c=='~'?cout<<"This is a square root matrix of order "<<m[5][0]<<endl:cout<<"");
return 6;
}
if(m[5][0]==1)
{
(c=='~'?cout<<"This is a row matrix with "<<m[5][1]<<" columns"<<endl:cout<<"");
return 7;
}
if(m[5][1]==1)
{
(c=='~'?cout<<"This is a column Matrix with "<<m[5][0]<<" rows"<<endl:cout<<"");
return 8;
}
(c=='~'?cout<<"This is a rectangular Matrix of order "<<m[5][0]<<"x"<<m[5][1]<<endl:cout<<"");
return 9;
}





void Nil()
{
}