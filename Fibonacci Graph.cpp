#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
void drawGraph()
{
int maxX=getmaxx();
int maxY=getmaxy();
setcolor(GREEN);

for(int r=0;r<maxY;r=r+10)
line(maxX,r,0,r);

for(int c=0;c<maxX;c=c+10)
line(c,maxY,c,0);
}

int main(){
int xc,yc,x,y,p,r,q,qt,a,b,c;
float theta,ti;
initwindow(800,800);

cout<<"enter the number of fibonacci terms : ";
cin>>q;     

drawGraph(); 

xc=getmaxx()/2;  
yc=getmaxy()/2

a=0;b=0;c=1;r=c*10; 
x=xc;     
y=yc-r;

for(int i=1;i<=q;i++)  
{
if(i%4==0)    
{              
yc=y-r; qt=90;
}
else if(i%4==1) 
{
xc==x-r; qt=360;
}
else if(i%4==2)   
{
yc=y+r; qt=270;
}
else if(i%4==3)     
{
xc=x+r; qt=180;
}
 for(ti=qt;ti>=qt-90;ti=ti-0.01) 
 {                               
 theta=(ti*3.14)/180;
 x=(int)(xc+(r*cos(theta)));
 y=(int)(yc+(r*sin(theta)));
 putpixel(x,y,WHITE);
 }

a=b;b=c;c=a+b;        
r=c*10;
}
closegraph();
 return 0;
}
