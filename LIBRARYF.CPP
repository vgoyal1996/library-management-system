#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<stdlib.h>
#include<graphics.h>
#include<string.h>
#include<dos.h>

class  drawmenu
{
	public:
	void draw2(int i,int j,int k)
	{
		randomize();
		cleardevice();
		graphdefaults();
		line(10,10,10,465);
		line(622,10,622,465);
		line(10,465,622,465);
		line(40,40,40,435);
		line(592,40,592,435);
		line(40,435,10,465);
		line(40,40,10,10);
		line(592,40,622,10);
		line(592,435,622,465);
		for(int l=0;l<30;l+=3)
		{
			line(592+l,40-l,592+l,435+l);       //right
			line(40-l,40-l,40-l,435+l);     //left
			line(40-l,435+l,285,435+l);//lower left
			line(335,435+l,592+l,435+l);//lower right
			arc(335,460,90,180,25);
		}
		for(float y=0;y<39;y+=3)
		{
			arc(285,465,0,90,27-y);
			arc(335,465,90,180,27-y);
		}
		line(40,435,285,435);
		line(335,435,592,435);
		line(310,10,310,465);
		line(40,40,285,40);
		line(335,40,592,40);
		arc(285,460,0,90,25);
		arc(285,15,270,360,25);
		arc(335,460,90,180,25);
		arc(335,15,180,270,25);
		setcolor(YELLOW);
		settextstyle(SANS_SERIF_FONT,HORIZ_DIR,9);
		outtextxy(90,50,"MAIN MENU");
		setcolor(12);
		settextstyle(k,HORIZ_DIR,i);
		outtextxy(50,210,"2) Modify stock");
		setcolor(WHITE);
		settextstyle(SMALL_FONT,HORIZ_DIR,j);
		outtextxy(50,180,"1) Create book stock");
		outtextxy(50,240,"3) Issue a book");
		outtextxy(50,270,"4) Return a book");
		outtextxy(50,300,"5) View book stock");
		outtextxy(50,330,"6) Add to book stock");
		outtextxy(300,180,"7) Delete from book stock");
		outtextxy(300,210,"8) View student record");
		outtextxy(500,10,"Exit(Esc)");
	}
	void draw1(int i,int j,int k)
	{
		randomize();
		cleardevice();
		graphdefaults();
		line(10,10,10,465);
		line(622,10,622,465);
		line(10,465,622,465);
		line(40,40,40,435);
		line(592,40,592,435);
		line(40,435,10,465);
		line(40,40,10,10);
		line(592,40,622,10);
		line(592,435,622,465);
		for(int l=0;l<30;l+=3)
		{
			line(592+l,40-l,592+l,435+l);       //right
			line(40-l,40-l,40-l,435+l);     //left
			line(40-l,435+l,285,435+l);//lower left
			line(335,435+l,592+l,435+l);//lower right
			arc(335,460,90,180,25);
		}
		for(float y=0;y<39;y+=3)
		{
			arc(285,465,0,90,27-y);
			arc(335,465,90,180,27-y);
		}
		line(40,435,285,435);
		line(335,435,592,435);
		line(310,10,310,465);
		line(40,40,285,40);
		line(335,40,592,40);
		arc(285,460,0,90,25);
		arc(285,15,270,360,25);
		arc(335,460,90,180,25);
		arc(335,15,180,270,25);
		setcolor(YELLOW);
		settextstyle(SANS_SERIF_FONT,HORIZ_DIR,9);
		outtextxy(90,50,"MAIN MENU");
		setcolor(12);
		settextstyle(k,HORIZ_DIR,i);
		outtextxy(50,180,"1) Create book stock");
		setcolor(WHITE);
		settextstyle(SMALL_FONT,HORIZ_DIR,j);
		outtextxy(50,210,"2) Modify stock");
		outtextxy(50,240,"3) Issue a book");
		outtextxy(50,270,"4) Return a book");
		outtextxy(50,300,"5) View book stock");
		outtextxy(50,330,"6) Add to book stock");
		outtextxy(300,180,"7) Delete from book stock");
		outtextxy(300,210,"8) View student record");
		outtextxy(500,10,"Exit(Esc)");
	}
	void draw3(int i,int j,int k)
	{
		randomize();
		cleardevice();
		graphdefaults();
		line(10,10,10,465);
		line(622,10,622,465);
		line(10,465,622,465);
		line(40,40,40,435);
		line(592,40,592,435);
		line(40,435,10,465);
		line(40,40,10,10);
		line(592,40,622,10);
		line(592,435,622,465);
		for(int l=0;l<30;l+=3)
		{
			line(592+l,40-l,592+l,435+l);       //right
			line(40-l,40-l,40-l,435+l);     //left
			line(40-l,435+l,285,435+l);//lower left
			line(335,435+l,592+l,435+l);//lower right
			arc(335,460,90,180,25);
		}
		for(float y=0;y<39;y+=3)
		{
			arc(285,465,0,90,27-y);
			arc(335,465,90,180,27-y);
		}
		line(40,435,285,435);
		line(335,435,592,435);
		line(310,10,310,465);
		line(40,40,285,40);
		line(335,40,592,40);
		arc(285,460,0,90,25);
		arc(285,15,270,360,25);
		arc(335,460,90,180,25);
		arc(335,15,180,270,25);
		setcolor(YELLOW);
		settextstyle(SANS_SERIF_FONT,HORIZ_DIR,9);
		outtextxy(90,50,"MAIN MENU");
		setcolor(12);
		settextstyle(k,HORIZ_DIR,i);
		outtextxy(50,240,"3) Issue a book");
		setcolor(WHITE);
		settextstyle(SMALL_FONT,HORIZ_DIR,j);
		outtextxy(50,180,"1) Create book stock");
		outtextxy(50,210,"2) Modify stock");
		outtextxy(50,270,"4) Return a book");
		outtextxy(50,300,"5) View book stock");
		outtextxy(50,330,"6) Add to book stock");
		outtextxy(300,180,"7) Delete from book stock");
		outtextxy(300,210,"8) View student record");
		outtextxy(500,10,"Exit(Esc)");
	}
	void draw4(int i,int j,int k)
	{
		randomize();
		cleardevice();
		graphdefaults();
		line(10,10,10,465);
		line(622,10,622,465);
		line(10,465,622,465);
		line(40,40,40,435);
		line(592,40,592,435);
		line(40,435,10,465);
		line(40,40,10,10);
		line(592,40,622,10);
		line(592,435,622,465);
		for(int l=0;l<30;l+=3)
		{
			line(592+l,40-l,592+l,435+l);       //right
			line(40-l,40-l,40-l,435+l);     //left
			line(40-l,435+l,285,435+l);//lower left
			line(335,435+l,592+l,435+l);//lower right
			arc(335,460,90,180,25);
		}
		for(float y=0;y<39;y+=3)
		{
			arc(285,465,0,90,27-y);
			arc(335,465,90,180,27-y);
		}
		line(40,435,285,435);
		line(335,435,592,435);
		line(310,10,310,465);
		line(40,40,285,40);
		line(335,40,592,40);
		arc(285,460,0,90,25);
		arc(285,15,270,360,25);
		arc(335,460,90,180,25);
		arc(335,15,180,270,25);
		setcolor(YELLOW);
		settextstyle(SANS_SERIF_FONT,HORIZ_DIR,9);
		outtextxy(90,50,"MAIN MENU");
		setcolor(12);
		settextstyle(k,HORIZ_DIR,i);
		outtextxy(50,270,"4) Return a book");
		setcolor(WHITE);
		settextstyle(SMALL_FONT,HORIZ_DIR,j);
		outtextxy(50,180,"1) Create book stock");
		outtextxy(50,210,"2) Modify stock");
		outtextxy(50,240,"3) Issue a book");
		outtextxy(50,300,"5) View book stock");
		outtextxy(50,330,"6) Add to book stock");
		outtextxy(300,180,"7) Delete from book stock");
		outtextxy(300,210,"8) View student record");
		outtextxy(500,10,"Exit(Esc)");
	}
	void draw5(int i,int j,int k)
	{
		randomize();
		cleardevice();
		graphdefaults();
		line(10,10,10,465);
		line(622,10,622,465);
		line(10,465,622,465);
		line(40,40,40,435);
		line(592,40,592,435);
		line(40,435,10,465);
		line(40,40,10,10);
		line(592,40,622,10);
		line(592,435,622,465);
		for(int l=0;l<30;l+=3)
		{
			line(592+l,40-l,592+l,435+l);       //right
			line(40-l,40-l,40-l,435+l);     //left
			line(40-l,435+l,285,435+l);//lower left
			line(335,435+l,592+l,435+l);//lower right
			arc(335,460,90,180,25);
		}
		for(float y=0;y<39;y+=3)
		{
			arc(285,465,0,90,27-y);
			arc(335,465,90,180,27-y);
		}
		line(40,435,285,435);
		line(335,435,592,435);
		line(310,10,310,465);
		line(40,40,285,40);
		line(335,40,592,40);
		arc(285,460,0,90,25);
		arc(285,15,270,360,25);
		arc(335,460,90,180,25);
		arc(335,15,180,270,25);
		setcolor(YELLOW);
		settextstyle(SANS_SERIF_FONT,HORIZ_DIR,9);
		outtextxy(90,50,"MAIN MENU");
		setcolor(12);
		settextstyle(k,HORIZ_DIR,i);
		outtextxy(50,300,"5) View book stock");
		setcolor(WHITE);
		settextstyle(SMALL_FONT,HORIZ_DIR,j);
		outtextxy(50,180,"1) Create book stock");
		outtextxy(50,210,"2) Modify stock");
		outtextxy(50,240,"3) Issue a book");
		outtextxy(50,270,"4) Return a book");
		outtextxy(50,330,"6) Add to book stock");
		outtextxy(300,180,"7) Delete from book stock");
		outtextxy(300,210,"8) View student record");
		outtextxy(500,10,"Exit(Esc)");
	}
	void draw6(int i,int j,int k)
	{
		randomize();
		cleardevice();
		graphdefaults();
		line(10,10,10,465);
		line(622,10,622,465);
		line(10,465,622,465);
		line(40,40,40,435);
		line(592,40,592,435);
		line(40,435,10,465);
		line(40,40,10,10);
		line(592,40,622,10);
		line(592,435,622,465);
		for(int l=0;l<30;l+=3)
		{
			line(592+l,40-l,592+l,435+l);       //right
			line(40-l,40-l,40-l,435+l);     //left
			line(40-l,435+l,285,435+l);//lower left
			line(335,435+l,592+l,435+l);//lower right
			arc(335,460,90,180,25);
		}
		for(float y=0;y<39;y+=3)
		{
			arc(285,465,0,90,27-y);
			arc(335,465,90,180,27-y);
		}
		line(40,435,285,435);
		line(335,435,592,435);
		line(310,10,310,465);
		line(40,40,285,40);
		line(335,40,592,40);
		arc(285,460,0,90,25);
		arc(285,15,270,360,25);
		arc(335,460,90,180,25);
		arc(335,15,180,270,25);
		setcolor(YELLOW);
		settextstyle(SANS_SERIF_FONT,HORIZ_DIR,9);
		outtextxy(90,50,"MAIN MENU");
		setcolor(12);
		settextstyle(k,HORIZ_DIR,i);
		outtextxy(50,330,"6) Add to book stock");
		setcolor(WHITE);
		settextstyle(SMALL_FONT,HORIZ_DIR,j);
		outtextxy(50,180,"1) Create book stock");
		outtextxy(50,210,"2) Modify stock");
		outtextxy(50,240,"3) Issue a book");
		outtextxy(50,270,"4) Return a book");
		outtextxy(50,300,"5) View book stock");
		outtextxy(300,180,"7) Delete from book stock");
		outtextxy(300,210,"8) View student record");
		outtextxy(500,10,"Exit(Esc)");
	}
	void draw7(int i,int j,int k)
	{
		randomize();
		cleardevice();
		graphdefaults();
		line(10,10,10,465);
		line(622,10,622,465);
		line(10,465,622,465);
		line(40,40,40,435);
		line(592,40,592,435);
		line(40,435,10,465);
		line(40,40,10,10);
		line(592,40,622,10);
		line(592,435,622,465);
		for(int l=0;l<30;l+=3)
		{
			line(592+l,40-l,592+l,435+l);       //right
			line(40-l,40-l,40-l,435+l);     //left
			line(40-l,435+l,285,435+l);//lower left
			line(335,435+l,592+l,435+l);//lower right
			arc(335,460,90,180,25);
		}
		for(float y=0;y<39;y+=3)
		{
			arc(285,465,0,90,27-y);
			arc(335,465,90,180,27-y);
		}
		line(40,435,285,435);
		line(335,435,592,435);
		line(310,10,310,465);
		line(40,40,285,40);
		line(335,40,592,40);
		arc(285,460,0,90,25);
		arc(285,15,270,360,25);
		arc(335,460,90,180,25);
		arc(335,15,180,270,25);
		setcolor(YELLOW);
		settextstyle(SANS_SERIF_FONT,HORIZ_DIR,9);
		outtextxy(90,50,"MAIN MENU");
		setcolor(12);
		settextstyle(k,HORIZ_DIR,i);
		outtextxy(300,180,"7) Delete from book stock");
		setcolor(WHITE);
		settextstyle(SMALL_FONT,HORIZ_DIR,j);
		outtextxy(50,180,"1) Create book stock");
		outtextxy(50,210,"2) Modify stock");
		outtextxy(50,240,"3) Issue a book");
		outtextxy(50,270,"4) Return a book");
		outtextxy(50,300,"5) View book stock");
		outtextxy(50,330,"6) Add to book stock");
		outtextxy(300,210,"8) View student record");
		outtextxy(500,10,"Exit(Esc)");
	}
	void draw8(int i,int j,int k)
	{
		randomize();
		cleardevice();
		graphdefaults();
		line(10,10,10,465);
		line(622,10,622,465);
		line(10,465,622,465);
		line(40,40,40,435);
		line(592,40,592,435);
		line(40,435,10,465);
		line(40,40,10,10);
		line(592,40,622,10);
		line(592,435,622,465);
		for(int l=0;l<30;l+=3)
		{
			line(592+l,40-l,592+l,435+l);       //right
			line(40-l,40-l,40-l,435+l);     //left
			line(40-l,435+l,285,435+l);//lower left
			line(335,435+l,592+l,435+l);//lower right
			arc(335,460,90,180,25);
		}
		for(float y=0;y<39;y+=3)
		{
			arc(285,465,0,90,27-y);
			arc(335,465,90,180,27-y);
		}
		line(40,435,285,435);
		line(335,435,592,435);
		line(310,10,310,465);
		line(40,40,285,40);
		line(335,40,592,40);
		arc(285,460,0,90,25);
		arc(285,15,270,360,25);
		arc(335,460,90,180,25);
		arc(335,15,180,270,25);
		setcolor(YELLOW);
		settextstyle(SANS_SERIF_FONT,HORIZ_DIR,9);
		outtextxy(90,50,"MAIN MENU");
		setcolor(12);
		settextstyle(k,HORIZ_DIR,i);
		outtextxy(300,210,"8) View student record");
		setcolor(WHITE);
		settextstyle(SMALL_FONT,HORIZ_DIR,j);
		outtextxy(50,180,"1) Create book stock");
		outtextxy(50,210,"2) Modify stock");
		outtextxy(50,240,"3) Issue a book");
		outtextxy(50,270,"4) Return a book");
		outtextxy(50,300,"5) View book stock");
		outtextxy(50,330,"6) Add to book stock");
		outtextxy(300,180,"7) Delete from book stock");
		outtextxy(500,10,"Exit(Esc)");
	}
};

void funcno(int n)
{
	drawmenu ob;
	if(n==1)
	{
		cleardevice();
		ob.draw1(3,7,7);
	}
	else if(n==2)
	{
		cleardevice();
		ob.draw2(3,7,7);
	}
	if(n==3)
	{
		cleardevice();
		ob.draw3(3,7,7);
	}
	if(n==4)
	{
		cleardevice();
		ob.draw4(3,7,7);
	}
	if(n==5)
	{
		cleardevice();
		ob.draw5(3,7,7);
	}
	if(n==6)
	{
		cleardevice();
		ob.draw6(3,7,7);
	}
	if(n==7)
	{
		cleardevice();
		ob.draw7(3,7,7);
	}
	if(n==8)
	{
		cleardevice();
		ob.draw8(3,7,7);
	}
}

int getkey()
{
	int ch=0;
	ch=getch();
	if(ch==0)
	{
		ch=getch();
		return ch;
	}
	return ch;
}

class createstock
{
	char bookname[20],author[20];
	int no_of_copy,bookno;
	public:
	void getbookdata();
	void showrecord(createstock *add,int size);
	void modifyrecord(createstock *add,int size);
	void bookissue(createstock *add,int size);
	void bookreturn(createstock *add,int size);
	void addbook();
	void deletebook(createstock *add,int size);
};
class studentrecord
{
	public:
	char name[20];
	int roll,bookcode,dayi,monthi,yeari,dayr,monthr,yearr;
	void getstudentdata();
	void showstudentdata(studentrecord *add,int size);
};

void createstock::getbookdata()
{
	graphdefaults();
	line(10,10,10,465);
	line(10,10,622,10);
	line(622,10,622,465);
	line(10,465,622,465);
	line(40,40,40,435);
	line(40,40,592,40);
	line(592,40,592,435);
	line(40,435,592,435);
	randomize();
	int rand=random(14)+1;
	setfillstyle(SOLID_FILL,rand);
	floodfill(20,20,WHITE);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
	outtextxy(45,40,"Name of the book:");
	gotoxy(28,4);
	gets(bookname);
	outtextxy(45,105,"Name of the author:");
	gotoxy(30,8);
	gets(author);
	outtextxy(45,169,"Number of copies of the book:");
	gotoxy(41,12);
	cin>>no_of_copy;
	outtextxy(45,233,"Book code:");
	gotoxy(19,16);
	cin>>bookno;
}

void createstock::addbook()
{
	graphdefaults();
	line(10,10,10,465);
	line(10,10,622,10);
	line(622,10,622,465);
	line(10,465,622,465);
	line(40,40,40,435);
	line(40,40,592,40);
	line(592,40,592,435);
	line(40,435,592,435);
	randomize();
	int rand=random(14)+1;
	setfillstyle(SOLID_FILL,rand);
	floodfill(20,20,WHITE);
	fstream addfile;
	addfile.open("RECORDS.DAT",ios::out|ios::app);
	if(addfile.fail())
	{
		cout<<"cannot open file";
		exit(0);
	}
	createstock a;
	a.getbookdata();
	addfile.write((char *) &a,sizeof(a));
	outtextxy(45,270,"Stock has been updated");
	outtextxy(45,290,"Press Esc to go to main menu");
	do
	{
		int key=getkey();
		if(key==27)
		{
			addfile.close();
			break;
		}
	}while(1);
}

void createstock::deletebook(createstock *add,int size)
{
	graphdefaults();
	line(10,10,10,465);
	line(10,10,622,10);
	line(622,10,622,465);
	line(10,465,622,465);
	line(40,40,40,435);
	line(40,40,592,40);
	line(592,40,592,435);
	line(40,435,592,435);
	randomize();
	int rand=random(14)+1;
	setfillstyle(SOLID_FILL,rand);
	floodfill(20,20,WHITE);
	fstream delfile,tempfile;
	there:
	delfile.open("RECORDS.DAT",ios::in|ios::binary|ios::app);
	if(delfile.fail())
	{
		cout<<"cannot open file";
		exit(0);
	}
	tempfile.open("TEMP.DAT",ios::out|ios::binary);
	if(tempfile.fail())
	{
		cout<<"cannot open file";
		delfile.close();
		exit(0);
	}
	int code;
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
	outtextxy(45,119,"Enter book code to be deleted:");
	gotoxy(46,9);
	cin>>code;
	int f=0;
	while(delfile.read((char *) add,size))
	{
		if(code!=(*add).bookno)
			tempfile.write((char *) add,size);
		else
			f=1;
	}
	tempfile.close();
	delfile.close();
	remove("RECORDS.DAT");
	rename("TEMP.DAT","RECORDS.DAT");
	if(f==0)
	{
		char c;
		outtextxy(45,150,"Your book is not available in the stock");
		outtextxy(45,180,"Do you want to try again?(y/n)");
		gotoxy(48,13);
		fflush(stdin);
		cin>>c;
		if(c=='y')
		{
			cleardevice();
			goto there;
		}
	}
	else
	{
		outtextxy(45,150,"Book stock has been updated");
		outtextxy(45,180,"Press Esc to go to main menu");
		do
		{
			int key=getkey();
			if(key==27)
			{
				break;
			}
		}while(1);
	}
}

void createstock::showrecord(createstock *add,int size)
{
	int no=0,y=5;
	fstream showfile;
	showfile.open("RECORDS.DAT",ios::in|ios::binary);
	if(showfile.fail())
	{
		cout<<"cannot open file";
		exit(1);
	}
	setcolor(MAGENTA);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
	outtextxy(5,10,"S No.");
	outtextxy(90,10,"Book name");
	outtextxy(225,10,"Author");
	outtextxy(320,10,"Number of copies");
	outtextxy(530,10,"Book code");
	outtextxy(560,450,"Exit(Esc)");
	while(showfile.read((char *) add,size))
	{
		gotoxy(3,y);
		no++;
		cout<<no<<setw(16)<<bookname<<setw(17)<<author<<setw(18)<<no_of_copy<<setw(20)<<bookno;
		y=y+2;
		if(showfile.eof())
			break;
	}
	do
	{
		int key=getkey();
		if(key==27)
		{
			showfile.close();
			break;
		}
	}while(1);
}

void createstock::modifyrecord(createstock *add,int size)
{
	there:
	graphdefaults();
	line(10,10,10,465);
	line(10,10,622,10);
	line(622,10,622,465);
	line(10,465,622,465);
	line(40,40,40,435);
	line(40,40,592,40);
	line(592,40,592,435);
	line(40,435,592,435);
	randomize();
	int rand=random(14)+1;
	setfillstyle(SOLID_FILL,rand);
	floodfill(20,20,WHITE);
	int code;
	char str[20];
	fstream modfile;
	modfile.open("RECORDS.DAT",ios::binary|ios::ate|ios::in|ios::out);
	if(modfile.fail())
	{
		cout<<"cannot open file";
		exit(1);
	}
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
	outtextxy(45,119,"Enter Book code:");
	gotoxy(29,9);
	cin>>code;
	cleardevice();
	modfile.seekg(0,ios::beg);
	int f=0;
	modfile.read((char *) add,size);
	while(!modfile.eof())
	{
		if(code==(*add).bookno)
		{
			modfile.seekg(0,ios::cur);
			cleardevice();
			(*add).getbookdata();
			modfile.seekp(modfile.tellg()-size);
			modfile.write((char *) add,size);
			outtextxy(45,300,"New record has been saved");
			outtextxy(45,320,"press Esc to go to the menu");
			f=1;
			do
			{
				int key=getkey();
				if(key==27)
				{
					break;
				}
			}while(1);
		}
		else
			modfile.read((char *) add,size);
		if(f==1)
			break;
	}
	if(f==0)
	{
		char c;
		outtextxy(45,53,"Your book is not available in the stock");
		outtextxy(45,73,"Do you want to try again?(y/n)");
		gotoxy(47,6);
		fflush(stdin);
		cin>>c;
		if(c=='y')
		{
			cleardevice();
			goto there;
		}
	}
	modfile.close();
}

void studentrecord::getstudentdata()
{
	graphdefaults();
	line(10,10,10,465);
	line(10,10,622,10);
	line(622,10,622,465);
	line(10,465,622,465);
	line(40,40,40,435);
	line(40,40,592,40);
	line(592,40,592,435);
	line(40,435,592,435);
	randomize();
	int rand=random(14)+1;
	setfillstyle(SOLID_FILL,rand);
	floodfill(20,20,WHITE);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
	outtextxy(45,40,"Name of the student:");
	gotoxy(31,4);
	gets(name);
	outtextxy(45,105,"Student roll number:");
	gotoxy(30,8);
	cin>>roll;
	outtextxy(45,169,"Book code:");
	gotoxy(18,12);
	cin>>bookcode;
	outtextxy(45,234,"Date of issue");
	outtextxy(40,250,"Day:");
	outtextxy(40,265,"Month:");
	outtextxy(40,280,"Year:");
	gotoxy(11,17);
	cin>>dayi;
	gotoxy(13,18);
	cin>>monthi;
	gotoxy(12,19);
	cin>>yeari;
	outtextxy(45,330,"Date of return");
	outtextxy(40,346,"Day:");
	outtextxy(40,362,"Month:");
	outtextxy(40,378,"Year:");
	gotoxy(11,23);
	cin>>dayr;
	gotoxy(13,24);
	cin>>monthr;
	gotoxy(12,25);
	cin>>yearr;
}

void studentrecord::showstudentdata(studentrecord *add,int size)
{
	int no=0,y=7;
	fstream showfile;
	showfile.open("STUDENT.DAT",ios::in|ios::binary);
	if(showfile.fail())
	{
		cout<<"cannot open file";
		exit(1);
	}
	setcolor(MAGENTA);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
	outtextxy(5,10,"S No.");
	outtextxy(90,10,"Student");
	outtextxy(90,30,"name");
	outtextxy(205,10,"Roll");
	outtextxy(205,30,"number");
	outtextxy(320,10,"Book code");
	outtextxy(320,30,"issued");
	outtextxy(450,10,"Issue date");
	outtextxy(580,10,"Return");
	outtextxy(580,30,"date");
	outtextxy(560,450,"Exit(Esc)");
	while(showfile.read((char *) add,size))
	{
		gotoxy(3,y);
		no++;
		cout<<no<<setw(14)<<name<<setw(12)<<roll<<setw(17)<<bookcode<<setw(12)<<dayi<<"/"<<monthi<<"/"<<yeari<<setw(8)<<dayr<<"/"<<monthr<<"/"<<yearr;
		y=y+3;
		if(showfile.eof())
			break;
	}
	do
	{
		int key=getkey();
		if(key==27)
		{
			showfile.close();
			break;
		}
	}while(1);
	getch();
}

void createstock::bookissue(createstock *add,int size)
{
	there:
	graphdefaults();
	line(10,10,10,465);
	line(10,10,622,10);
	line(622,10,622,465);
	line(10,465,622,465);
	line(40,40,40,435);
	line(40,40,592,40);
	line(592,40,592,435);
	line(40,435,592,435);
	randomize();
	int rand=random(14)+1;
	setfillstyle(SOLID_FILL,rand);
	floodfill(20,20,WHITE);
	int code;
	fstream issuefile,tempfile;
	issuefile.open("RECORDS.DAT",ios::binary|ios::out|ios::in|ios::ate);
	if(issuefile.fail())
	{
		cout<<"cannot open file";
		exit(0);
	}
	tempfile.open("TEMP.DAT",ios::binary|ios::in|ios::app);
	if(tempfile.fail())
	{
		cout<<"cannot open file";
		issuefile.close();
		exit(0);
	}
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
	outtextxy(45,119,"Enter Book code to be issued:");
	gotoxy(44,9);
	cin>>code;
	issuefile.seekg(0,ios::beg);
	int f=0;
	while(issuefile.read((char *) add,size))
	{
		if(code==(*add).bookno)
		{
			issuefile.seekg(0,ios::cur);
			if((*add).no_of_copy!=0)
			{
				cleardevice();
				fstream sfile;
				sfile.open("STUDENT.DAT",ios::binary|ios::out);
				if(sfile.fail())
				{
					cout<<"cannot open file";
					issuefile.close();
					exit(1);
				}
				studentrecord obj;
				obj.getstudentdata();
				sfile.write((char *) &obj,sizeof(obj));
				createstock r;
				strcpy(r.bookname,(*add).bookname);
				strcpy(r.author,(*add).author);
				r.no_of_copy=(*add).no_of_copy-1;
				r.bookno=(*add).bookno;
				tempfile.write((char *) &r,sizeof(r));
				//issuefile.seekp(issuefile.tellg()-sizeof((*add).no_of_copy));
				//(*add).no_of_copy=(*add).no_of_copy-1;
				//issuefile.write((char *) add,size);
				f=1;
				outtextxy(230,200,"Book issue process has been successful");
				outtextxy(250,220,"press Esc to go to the menu");
				do
				{
					int key=getkey();
					if(key==27)
					{
						sfile.close();
						break;
					}
				}while(1);
			}
			else
			{
				tempfile.write((char *) add,size);
				f=2;
			}
		}
		else
			tempfile.write((char *) add,size);
	}
	if(f==0)
	{
		char c;
		outtextxy(45,150,"Your book is not available in the stock");
		outtextxy(45,180,"Do you want to try again?(y/n)");
		gotoxy(48,13);
		fflush(stdin);
		cin>>c;
		if(c=='y')
		{
			cleardevice();
			goto there;
		}
	}
	if(f==2)
	{
		char c;
		outtextxy(45,150,"Your book is out of stock");
		outtextxy(45,180,"Do you want to try again?(y/n)");
		gotoxy(48,13);
		fflush(stdin);
		cin>>c;
		if(c=='y')
		{
			cleardevice();
			goto there;
		}
	}
	issuefile.close();
	tempfile.close();
	remove("RECORDS.DAT");
	rename("TEMP.DAT","RECORDS.DAT");
}

void createstock::bookreturn(createstock *add,int size)
{
	there:
	graphdefaults();
	line(10,10,10,465);
	line(10,10,622,10);
	line(622,10,622,465);
	line(10,465,622,465);
	line(40,40,40,435);
	line(40,40,592,40);
	line(592,40,592,435);
	line(40,435,592,435);
	randomize();
	int rand=random(14)+1;
	setfillstyle(SOLID_FILL,rand);
	floodfill(20,20,WHITE);
	fstream rfile,tempfile,sfile,temp2file;
	int rollno,code;
	rfile.open("RECORDS.DAT",ios::binary|ios::in|ios::ate);
	if(rfile.fail())
	{
		cout<<"cannot open file";
		exit(0);
	}
	tempfile.open("TEMP.DAT",ios::binary|ios::out|ios::app);
	if(tempfile.fail())
	{
		cout<<"cannot open file";
		rfile.close();
		exit(0);
	}
	sfile.open("STUDENT.DAT",ios::binary|ios::in|ios::ate);
	if(sfile.fail())
	{
		cout<<"cannot open file";
		rfile.close();
		tempfile.close();
		exit(0);
	}
	temp2file.open("TEMP2.DAT",ios::binary|ios::out|ios::app);
	if(temp2file.fail())
	{
		cout<<"cannot open file";
		rfile.close();
		tempfile.close();
		sfile.close();
		exit(0);
	}
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
	outtextxy(45,119,"Enter student roll number:");
	gotoxy(39,9);
	cin>>rollno;
	outtextxy(45,167,"Enter book code:");
	gotoxy(28,12);
	cin>>code;
	rfile.seekg(0,ios::beg);
	sfile.seekg(0,ios::beg);
	int f=0,d,m,y;
	studentrecord r;
	while(sfile.read((char *) &r,sizeof(r)))
	{
		if(r.roll==rollno)
		{
			if(r.bookcode==code)
			{
				sfile.seekg(0,ios::cur);
				cleardevice();
				settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
				outtextxy(45,80,"Enter date of return:");
				outtextxy(40,105,"Day:");
				outtextxy(40,120,"Month:");
				outtextxy(40,135,"Year:");
				gotoxy(12,8);
				cin>>d;
				gotoxy(14,9);
				cin>>m;
				gotoxy(13,10);
				cin>>y;
				f=1;
				while(rfile.read((char *) add,size))
				{
					if(code==(*add).bookno)
					{
						createstock s;
						strcpy(s.bookname,(*add).bookname);
						strcpy(s.author,(*add).author);
						s.no_of_copy=(*add).no_of_copy+1;
						s.bookno=(*add).bookno;
						tempfile.write((char *) &s,sizeof(s));
					}
					else
						tempfile.write((char *) add,size);
				}
				outtextxy(200,200,"Book return process has been successful");
				outtextxy(230,220,"press Esc to go to the menu");
				do
				{
					int key=getkey();
					if(key==27)
					{
						break;
					}
				}while(1);
			}
			else
			{
				f=2;
				temp2file.write((char *) &r,sizeof(r));
			}
		}
		else
		{
			temp2file.write((char *) &r,sizeof(r));
		}
	}
	if(f==0)
	{
		char c;
		outtextxy(10,200,"This student does not exist in the record");
		outtextxy(10,230,"Do you want to try again?(y/n)");
		gotoxy(44,15);
		fflush(stdin);
		cin>>c;
		if(c=='y')
		{
			cleardevice();
			goto there;
		}
	}
	if(f==2)
	{
		char c;
		outtextxy(10,200,"The student has not issued this book");
		outtextxy(10,230,"Do you want to try again?(y/n)");
		gotoxy(44,15);
		fflush(stdin);
		cin>>c;
		if(c=='y')
		{
			cleardevice();
			goto there;
		}
	}
	tempfile.close();
	rfile.close();
	sfile.close();
	temp2file.close();
	remove("RECORDS.DAT");
	rename("TEMP.DAT","RECORDS.DAT");
	remove("STUDENT.DAT");
	rename("TEMP2.DAT","STUDENT.DAT");
}

void main()
{
	int gd=DETECT,gm;
	int i,no,k;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	line(5,5,5,475);
	line(5,5,632,5);
	line(632,5,632,475);
	line(5,475,632,475);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(1,1,WHITE);
	setcolor(6);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
	outtextxy(30,100,"LIBRARY MANAGEMENT");
	outtextxy(200,150,"SYSTEM");
	setcolor(CYAN);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
	outtextxy(10,400,"Loading");
	line(90,410,630,410);
	line(90,425,630,425);
	line(90,410,90,425);
	randomize();
	for(i=90;i<=630;i+=3)
	{
		delay(random(100)+1);
		line(i,410,i,425);
	}
	drawmenu ob;
	do
	{
		ob.draw1(3,7,7);
		no=1;
		do
		{
			k=getkey();
			if(k==80)
			{
				if(no<8)
					funcno(++no);
			}
			else if(k==72)
			{
				if(no>=1)
					funcno(--no);
			}
			if(k==13)
				break;
			if(k==27)
				break;
		}while(1);
		if(k==13)
		{
			cleardevice();
			graphdefaults();
			createstock s1;
			studentrecord s;
			switch(no)
			{
				case 1: fstream crfile;
					char ch;
					int key;
					crfile.open("RECORDS.DAT",ios::out|ios::in|ios::binary|ios::trunc|ios::app);
					if(crfile.fail())
					{
						cout<<"cannot open file";
						exit(1);
					}
					do
					{
						s1.getbookdata();
						crfile.write((char *)&s1,sizeof(s1));
						outtextxy(45,330,"Do you want to enter another record?(y/n):");
						gotoxy(57,22);
						fflush(stdin);
						cin>>ch;
						if(ch=='y')
							cleardevice();
					}while(ch=='y');
					if(ch=='n')
					{
						outtextxy(45,370,"Press Esc to go to the main menu");
					}
					do
					{
						key=getkey();
						if(key==27)
						{
							crfile.close();
							break;
						}
					}while(1);
					break;
				case 2: s1.modifyrecord(&s1,sizeof(s1));
					break;
				case 3: cleardevice();
					s1.bookissue(&s1,sizeof(s1));
					break;
				case 4: cleardevice();
					s1.bookreturn(&s1,sizeof(s1));
					break;
				case 5:	s1.showrecord(&s1,sizeof(s1));
					break;
				case 6: cleardevice();
					s1.addbook();
					break;
				case 7: cleardevice();
					s1.deletebook(&s1,sizeof(s1));
					break;
				case 8: cleardevice();
					s.showstudentdata(&s,sizeof(s));
					break;
			}
		}
	}while(k!=27);
	closegraph();
}