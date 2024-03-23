#include<iostream>
using namespace std;

#include <graphics.h>

#include <cmath>
#include<ctime>
#include <string>

const double pi = 3.14159265;


void Emoji(){
    initwindow(1000,1000,"Emoji");
    floodfill(0,0,WHITE);
    setcolor(BLACK);
    circle(400,400,350);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(400,400,BLACK);
    setlinestyle(SOLID_LINE,0,10);
    line(200,200,350,300);
    line(200,400,350,300);
    line(600,200,450,300);
    line(450,300,600,400);
    setlinestyle(SOLID_LINE,0,1);
    pieslice(400,475,180,360,265);
    setfillstyle(SOLID_FILL,5);
    floodfill(400,501,BLACK);
    setcolor(WHITE);
    setlinestyle(SOLID_LINE,0,50);
    line(190,500,610,500);

    settextstyle(1, HORIZ_DIR, 5);
    outtextxy(650,700,"HA HA");

    getch();
    closegraph();
}

void Flag(){
    initwindow(1000,1000,"flag");

    setcolor(7);

    setfillstyle(SOLID_FILL,BLACK);
    rectangle(100,100,500,200);
    floodfill(101,101,7);

    setfillstyle(SOLID_FILL,WHITE);
    rectangle(100,201,500,300);
    floodfill(101,202,7);

    setfillstyle(SOLID_FILL,GREEN);
    rectangle(100,301,500,400);
    floodfill(101,302,7);

    setfillstyle(SOLID_FILL,RED);
    line(100,90,100,410);
    line(95,95,251,251);
    line(90,410,249,249);
    floodfill(110,150,7);
    floodfill(110,250,7);
    floodfill(110,325,7);

    setlinestyle(SOLID_LINE,0,20);

    line(100,90,100,700);

    settextstyle(1, HORIZ_DIR, 5);
    outtextxy(500,400,"i love palestain");

    getch();
    closegraph();
}

void Clock(){
    initwindow(1000,1000,"clojck");
    setlinestyle(SOLID_LINE,0,5);

    int page = 0;
    while(1){
            setactivepage(page);
            setvisualpage(1-page);
            cleardevice();
            circle(400,400,5);
            circle(400,400,205);

    for (int i = 1; i <= 12; i++) {
        int x = 393 + static_cast<int>(180 * sin(i * pi / 6));
        int y = 397 - static_cast<int>(180 * cos(i * pi / 6));
        string text = to_string(i);
        char char_array[text.length() + 1];
        strcpy(char_array, text.c_str());
        settextstyle(1,HORIZ_DIR,3);
        outtextxy(x, y, char_array);
    }

    time_t now = time(0);
    tm *ltm=localtime(&now);


    setcolor(RED);
    line(400,400,400+150*sin(ltm->tm_hour*pi/6),400-150*cos(ltm->tm_hour*pi/6) );
    setcolor(YELLOW);
    line(400,400,400+130*sin(ltm->tm_min*pi/30),400-130*cos(ltm->tm_min*pi/30) );
    setcolor(WHITE);
    line(400,400,400+110*sin(ltm->tm_sec*pi/30),400-110*cos(ltm->tm_sec*pi/30) );

    delay(10);
    page = 1-page;

    }

    getch();
    closegraph();
}

void MovingCar(){
    initwindow(1000,500,"car");

    settextstyle(1, HORIZ_DIR, 5);
    outtextxy(50,50,"BHOOM   BHOOM !! ");

	for (int i = 0; i <= 420; i = i + 10) {

		setcolor(WHITE);

		line(0 + i, 300, 210 + i, 300);
		line(50 + i, 300, 75 + i, 270);
		line(75 + i, 270, 150 + i, 270);
		line(150 + i, 270, 165 + i, 300);
		line(0 + i, 300, 0 + i, 330);
		line(210 + i, 300, 210 + i, 330);

		circle(65 + i, 330, 15);
		circle(65 + i, 330, 2);

		circle(145 + i, 330, 15);
		circle(145 + i, 330, 2);

		line(0 + i, 330, 50 + i, 330);

		line(80 + i, 330, 130 + i, 330);

		line(210 + i, 330, 160 + i, 330);

		delay(100);

		setcolor(BLACK);

		line(0 + i, 300, 210 + i, 300);
		line(50 + i, 300, 75 + i, 270);
		line(75 + i, 270, 150 + i, 270);
		line(150 + i, 270, 165 + i, 300);
		line(0 + i, 300, 0 + i, 330);
		line(210 + i, 300, 210 + i, 330);

		circle(65 + i, 330, 15);
		circle(65 + i, 330, 2);

		circle(145 + i, 330, 15);
		circle(145 + i, 330, 2);

		line(0 + i, 330, 50 + i, 330);

		line(80 + i, 330, 130 + i, 330);

		line(210 + i, 330, 160 + i, 330);
	}

	getch();

	closegraph();
}

void Hypno1(){
        initwindow(2000,2000,"hypnotize");
        int counter=0;
        for(int i=400;i>=10;i-=10){
            if (counter % 2 == 0){
                setcolor(WHITE);
                circle(700,400,i);
                setfillstyle(SOLID_FILL,WHITE);
                floodfill(700,400,WHITE);
            }else{
                setcolor(BLACK);
                circle(700,400,i);
                setfillstyle(SOLID_FILL,BLACK);
                floodfill(700,400,BLACK);
              }
            counter++;
        }
   getch();
   closegraph();
}

void Hypno2(){
    initwindow(1000,1000,"Hypno2");
   for(int a=0;a<3;a++){
    setcolor(BLUE);

   circle(500,500,50);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(500,500,BLUE);

   delay(500);
   cleardevice();

    circle(500,500,100);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(500,500,BLUE);
   circle(500,500,50);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(500,500,BLUE);

   delay(500);
   cleardevice();

    circle(500,500,150);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(500,500,BLUE);
   circle(500,500,100);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(500,500,BLUE);
   circle(500,500,50);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(500,500,BLUE);

   delay(500);
   cleardevice();

   circle(500,500,200);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(500,500,BLUE);
    circle(500,500,150);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(500,500,BLUE);
   circle(500,500,100);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(500,500,BLUE);
   circle(500,500,50);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(500,500,BLUE);

   delay(500);
   cleardevice();
   }




   getch();
   closegraph();
}

void Hypno3(){
    initwindow(1000,1000,"hypnotize");
   for(int k=1;k<=5;k++){
        if(k%2==0){
        setcolor(BLUE);

                circle(500,500,500);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(500,500,BLUE);

                circle(500,500,450);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(500,500,BLUE);

                circle(500,500,400);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(500,500,BLUE);

                circle(500,500,350);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(500,500,BLUE);

        circle(500,500,300);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(500,500,BLUE);

        circle(500,500,250);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(500,500,BLUE);

        circle(500,500,200);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(500,500,BLUE);


        circle(500,500,150);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(500,500,BLUE);

        circle(500,500,99);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(500,500,BLUE);

        circle(500,500,50);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(500,500,BLUE);

        delay(500);
        cleardevice();
        }else{
            setcolor(BLUE);

            circle(500,500,500);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(500,500,BLUE);

            circle(500,500,450);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(500,500,BLUE);

            circle(500,500,400);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(500,500,BLUE);

            circle(500,500,350);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(500,500,BLUE);

            circle(500,500,300);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(500,500,BLUE);

            circle(500,500,250);
           setfillstyle(SOLID_FILL,BLACK);
           floodfill(500,500,BLUE);

           circle(500,500,200);
           setfillstyle(SOLID_FILL,WHITE);
           floodfill(500,500,BLUE);


           circle(500,500,150);
           setfillstyle(SOLID_FILL,BLACK);
           floodfill(500,500,BLUE);

           circle(500,500,99);
           setfillstyle(SOLID_FILL,WHITE);
           floodfill(500,500,BLUE);

           circle(500,500,50);
           setfillstyle(SOLID_FILL,BLACK);
           floodfill(500,500,BLUE);
           delay(500);
            cleardevice();
        }
   }
   getch();
   closegraph();
}

void Eclipse(){
    initwindow(1500,1500,"");

    setcolor(7);

    setlinestyle(SOLID_LINE,0,5);

    setfillstyle(SOLID_FILL,YELLOW);
    circle(600,400,100);
    floodfill(600,400,7);
    settextstyle(1, HORIZ_DIR, 3);
    outtextxy(600,550,"SUN");

    ellipse(600,400,0,360,500,200);

    circle(1100,400,50);
    settextstyle(1, HORIZ_DIR, 3);
    outtextxy(1100,550,"EARTH");
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(1110,400,7);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(1090,400,7);

    ellipse(1100,400,0,360,250,100);

    circle(850,400,25);
    settextstyle(1, HORIZ_DIR, 3);
    outtextxy(850,550,"MOON");
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(855,400,7);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(845,400,7);

    getch();
    closegraph();
}

void eid(){
    initwindow(1000,1000,"");

    setcolor(RED);

    settextstyle(1, HORIZ_DIR, 10);
    outtextxy(300,100,"EID");

    settextstyle(1, HORIZ_DIR, 8);
    outtextxy(75,300,"MUBARAK");

    settextstyle(1, HORIZ_DIR, 5);
    outtextxy(25,500,"in advance ,Let's enjoy my art ");


    getch();
    closegraph();
}

int main(){
    int gd = DETECT, gm;
    cout<<"NAME : ASHIK UL ISLAM"<<endl;
    cout<<"ID : CSE2101022065"<<endl;
    cout<<"=========================="<<endl;
    cout<<"-------------MENU---------"<<endl;
    cout<<"            1.Eid mubarak"<<endl;
    cout<<"            2.Emoji"<<endl;
    cout<<"            3.Hypno1"<<endl;
    cout<<"            4.Flag"<<endl;
    cout<<"            5.Hypno2"<<endl;
    cout<<"            6.Eclipse"<<endl;
    cout<<"            7.Hypno3"<<endl;
    cout<<"            8.Moving Car"<<endl;
    cout<<"            9.Clock"<<endl;
    cout<<"            Enter 0 to Exit"<<endl;

    cout<<"==========================="<<endl;
    int x;
    while(1){
    cout<<"Enter your choice from menu "<<endl;
    cin>>x;
    switch(x){
        case 1:
            eid();
            break;
        case 2:
            Emoji();
            break;
        case 3:
            Hypno1();
            break;
        case 4:
            Flag();
            break;
        case 5:
            Hypno2();
            break;
        case 6:
            Eclipse();
            break;
        case 7:
            Hypno3();
            break;
        case 8:
            MovingCar();
            break;
        case 9:
            Clock();
            break;
        case 0:
            return 0;
        default :
            cout<<"choose from menu number"<<endl;
            break;
        }
    }
}
