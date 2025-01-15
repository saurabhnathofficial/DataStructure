#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int formulla(int a , int b, int c)
{
		int x=0;
		if(a-c==0)
		x=0;

		if(a-c!=0)
		{
		x=(b/2)-abs(a-c);

		if(c>a)
		{
		if(x>=0)
		x=x*(-1);

		}
		if(a>c)
		{if(x<0)
		 x=abs(x);
		}
		}
		return x;
//
}

void graph(int a,int b){

		    initwindow(800, 800);
		//   circle(320,270,80);
		//    circle(120,270,40);
		int x=a*10, y=b*10;
		cout<<" \n\n Enter cordinates " <<x <<" "<< y;
		//cin>>x>> y;


		setcolor(2);
		line(0,400,800,400);
		line(400,0,400,800);
		line(420,380,420,420);
		setcolor(6);
		//line(0,0,300, 300);
		circle(400+x,400-y, 20);


		// auto detection
    int gdriver = DETECT,gmode,i;

    // initialize graphics mode
    initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");


        setcolor(5);

        // set text style as
        // settextstyle(font, orientation, size)
        settextstyle(8,0,4);

        // print text at coordinate x,y;
        outtextxy(0,380," Introvert");
        setcolor(3);
        outtextxy(650,380," Extrovert");
         setcolor(4);
        outtextxy(320,0," Thinking Based");
        setcolor(7);
        outtextxy(320,760," Feeling  Based");




		delay(50000);
}



int personalitytst1(){
    int a,b,c,x;
char ch;
a=0;
b=0;
c=0;

cout<<" \n\nQ1. The ends can justify the means.” What do you think about this sentence?\n";

cout<<" A: Yes, I agree with that. \n";
cout<<" B: No, I disagree. \n";
cout<<" C: ???????????\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;

cout<<" \n\n Q2. What is your priority when advising someone? \n\n";
cout<<" A: Being as objective as possible. \n";
cout<<" B: Being subjective and considering their current situation \n";
cout<<" C: ?????????????\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;

cout<<" \n\n Q3 What would you ground your decisions on if you were a lawmaker? \n\n";
cout<<" A: Scientific facts \n";
cout<<" B: Social statistics. \n";
cout<<" C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;

cout<<" \n\n Q4. Which one can be named or referred to as the humans savior? \n\n";
cout<<"A: Education \n";
cout<<"B: Empathy \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;


cout<<" \n\n Q5. Whats one of the challenges you face when expressing your ideas? \n\n";
cout<<"A: Finding words that others can relate to. \n";
cout<<"B: Remaining as objective as possible. \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;


cout<<" \n Q6. Which one is a sounder approach to talking about controversial topics? \n";
cout<<"A: Using logic and data to explain the topic. \n";
cout<<"B: Leaving room for emotions. \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;


cout<<" \n Q7. Exceptions dont bother the rules. What do you think about that? \n";
cout<<"A: Yes, its true. \n";
cout<<"B: No, its true. \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;


cout<<" \n Q8. Do you agree that fixating on facts could be a toxic trait? \n";
cout<<"A: No, I dont agree with that. \n";
cout<<"B: Yes, it could be pretty toxic \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;


cout<<" \n Q9. Imagine you re the CEO of a company that needs to lay off some employees. Which approach do you think is better? \n";
cout<<"A: Laying off low-performing workers. \n";
cout<<"B: Laying off workers that are more likely to find a new job. \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;


cout<<" \n\n Q10. which one is a must-have for a person in charge of a team? \n\n";
cout<<"A: Common sense \n";
cout<<"B: b.)   Compassion \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;


return formulla(a,b,c);

}

int personalitytst2(){
    int a,b,c,x;
char ch;
a=0;
b=0;
c=0;

cout<<" \n\nQ11. What is your natural reaction when a friend tells you about a relationship problem?\n";

cout<<" A: I will help the person find a solution \n";
cout<<" B: I will listen very carefully so I can understand and connect with the person \n";
cout<<" C: ???????????\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;

cout<<" \n\n Q12. Be honest here, what is the best way to persuade you? \n\n";
cout<<" A: Strong emotional appeal \n";
cout<<" B: A great logical explanation \n";
cout<<" C: ?????????????\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;

cout<<" \n\n Q13 Which of these qualities suits your personality? \n\n";
cout<<" A: Blunt \n";
cout<<" B: Honest \n";
cout<<" C: Emotional \n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;

cout<<" \n\n Q14. Choose any famous person whom you admire the most.  \n\n";
cout<<"A: Swami Vivekanand \n";
cout<<"B: Amir Khan \n";
cout<<"C: Dr.APJ Abdul kalam\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;


cout<<" \n\n Q15.What is your favorite subject area? \n\n";
cout<<"A: Technical and scientific fields where logic is important. \n";
cout<<"B: Anything that includes communications orientation.  \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;


cout<<" \n Q16. It is often believed that telling the truth is more important than being tactful. What do you think about this? \n";
cout<<"A: This statement sounds completely perfect to me. \n";
cout<<"B: I don't completely agree with this statement. I believe that sometimes being tactful is more important than telling the cold truth.  \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;


cout<<" \n Q17. What would be an ideal adjective that describes you? \n";
cout<<"A: Idealistic \n";
cout<<"B: Task-oriented \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;


cout<<" \n Q 18. Do you agree that fixating on facts could be a toxic trait? \n";
cout<<"A: No, I dont agree with that. \n";
cout<<"B: Yes, it could be pretty toxic \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;


cout<<" \n Q19. Imagine you re the CEO of a company that needs to lay off some employees. Which approach do you think is better? \n";
cout<<"A: Laying off low-performing workers. \n";
cout<<"B: Laying off workers that are more likely to find a new job. \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;
else if(ch=='e')
return 0;


cout<<" \n\n Q20. which one is a must-have for a person in charge of a team? \n\n";
cout<<"A: Common sense \n";
cout<<"B: b.)   Compassion \n";
cout<<"C: Prepare? My friends have to drag me out most nights\n";
cout<<" Enter your choice : ";
cin>>ch;
if (ch=='A'||ch=='a')
a=a+1;
else if (ch=='B'||ch=='b')
b=b+1;
else if(ch=='C'||ch=='c')
c=c+1;


return formulla(a,b,c);

}

int main(){
    cout<<" \n\t  WELCOME TO PERSONALITY QUADRANT TEST \n";
string name;//, sur[5];
//system("color 0F");
cout<<" \n   ANSWER THE FOLLOWING QUERIES AS PER YOUR BEST KNOWLEDGE of SELF\n";
cout<<"\n Enter your name : ";
cin>> name;


int x = personalitytst1();

int y= personalitytst2();





cout<<"\n\n\n\t Value of x : " <<x<<endl<<endl;
cout<<"\n\t Value of y : " <<y<<endl<<endl;
cout<<endl;
cout<<endl;





for (int  i = 0; i <= 20; i++)
 {
    cout<<"***";
 }
 cout<<endl;
 for (int j = 0; j < 2; j++)
 {
 for (int  i = 0; i < 20; i++)
 {
    if (i==0 )
    {
        cout<<"*";
    }
    if (i==19)
    {
        cout<<"    *";
    }

    else
    cout<<"   ";
 }
 cout<<endl;
 }


 if (x>5)
{
    cout<<"*                   You are an Introvert                      *";
}
 if (x<5)
{
    cout<<"*                   You are an Extrovert                      *";
}
 cout<<endl;
  for (int j = 0; j < 2; j++)
 {
 for (int  i = 0; i < 20; i++)
 {
    if (i==0 )
    {
        cout<<"*";
    }
    if (i==19)
    {
        cout<<"    *";
    }

    else
    cout<<"   ";
 }
 cout<<endl;}
 for (int  i = 0; i <= 20; i++)
 {
    cout<<"***";
 }

cout<<endl;
cout<<endl;




for (int  i = 0; i <= 20; i++)
 {
    cout<<"***";
 }
 cout<<endl;
 for (int j = 0; j < 2; j++)
 {
 for (int  i = 0; i < 20; i++)
 {
    if (i==0 )
    {
        cout<<"*";
    }
    if (i==19)
    {
        cout<<"    *";
    }

    else
    cout<<"   ";
 }
 cout<<endl;
 }


 if (y>5)
{
    cout<<"*                You are an Thinking Based                    *";
}
 if (y<5)
{
    cout<<"*                 You are an Feeling Based                    *";
}
 cout<<endl;
  for (int j = 0; j < 2; j++)
 {
 for (int  i = 0; i < 20; i++)
 {
    if (i==0 )
    {
        cout<<"*";
    }
    if (i==19)
    {
        cout<<"    *";
    }

    else
    cout<<"   ";
 }
 cout<<endl;}
 for (int  i = 0; i <= 20; i++)
 {
    cout<<"***";
 }






////////////////////////////////////////////////////////////////////////////////////////////////
graph(x,y);


     return 0;
 }
