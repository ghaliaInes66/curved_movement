#include <graphics.h>
#include <stdio.h>
#include <math.h>
#define PI 3.141592654
int main(){
	double x=30;double y=400;double p;double t;double X;double Y;double v;double g=9.81;double OA;double radp ;double radt;
	printf("enter the value of t angle ");
	scanf("%lf",&t);
	printf("enter the value of speed v ");
	scanf("%lf",&v);
	int gd=DETECT, gm;
	initgraph(&gd,&gm, (char*)"");	
	radt=(t*PI)/180.0;
	p=90;
	while(p>=t){
	radp=(p*PI)/180.0;
	OA=(((2*pow(cos(radp),2)*pow(v,2))/(g*cos(radt)))*(tan(radp)-tan(radt)));
	X=x+OA*cos(radp);
	Y=y-OA*sin(radp);
	circle(X,Y,15);
	delay(100);
	cleardevice();
	printf("p %lf \n",p);
	p--;
	x=x+7;
	if(p>45){	y=y-4;}
	else {  y=y+4;}
}

getch();
	closegraph();
}
