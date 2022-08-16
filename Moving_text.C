#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
 int gd=DETECT,gm;
 int z=0;
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

 while(z<500)
 {
  cleardevice();
  setcolor(RED);
  settextstyle(1,HORIZ_DIR,3);
  outtextxy(z,100,"Sonu Kumar");
  delay(20);
  z++;
 }
}