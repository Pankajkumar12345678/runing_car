#include<graphics.h>
#include<dos.h>
main()
{
	int x,y; 
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	
	for(x=0,y=0;x<=220,y<=1220;x=x+5,y=y+10)
	{
		cleardevice();
     	outtextxy(250,10,"PANKAJ PROJECT");
		rectangle(50+x,100-x,150+x,200-x);
		rectangle(150+x,150-x,200+x,200-x);
		circle(75+x,210-x,10);
		circle(175+x,210-x,10);
    	setcolor(WHITE);
	    //setfillstyle(SOLID_FILL,RED);
	
    	//floodfill(50+x,100-x,LIGHTRED);
		
		rectangle(50+x,100+y,150+x,200+y);
		rectangle(150+x,150+y,200+x,200+y);
		circle(75+x,210+y,10);
		circle(175+x,210+y,10);
		setcolor(WHITE);
	
		rectangle(50+x,100,150+x,200);
		rectangle(150+x,150,200+x,200);
		circle(75+x,210,10);
		circle(175+x,210,10);
		setcolor(WHITE);
			
			delay(100);
		
	}
	
	getch();
	closegraph();
	return 0;
	
	
	}
