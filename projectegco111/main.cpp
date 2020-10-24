#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <string.h>
#include<windows.h>


void greentext()
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    //à»ÅÕèÂ¹ÊÕµÒÁ·ÕèªÍº
     SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);



}
void bluetext()
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    //à»ÅÕèÂ¹ÊÕµÒÁ·ÕèªÍº
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);

}
void redtext()
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    //à»ÅÕèÂ¹ÊÕµÒÁ·ÕèªÍº
     SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

}
void textrun(char text[])
{

    for(int i=0;i<104;i++)
    {
        printf("%s",text);
        Sleep(10);
        system("cls");
        for(int j=0;j<=i;j++)
        printf(" ");

        if(i==103)
        {
            for(int k = 0;k<104;k++)
            {
               printf("%s",text);
                Sleep(5);
                system("cls");
                for(int l=0;l<=k;l++)
                printf(" ");

            }
        }
    }
}
void hello()
{
    char name[100],hello[100] = "Hello " ;
    bluetext();
    printf("Please enter your name : ");
    scanf("%s",name);
    strcat(hello,name);
    textrun(hello);
}




int main()
{

    char next[100],llist_outcome1[100][100],llist_income1[100][100];
    char llist_outcome2[100][100],llist_income2[100][100];
    char llist_outcome3[100][100],llist_income3[100][100];
    int number_list_income1,number_list_outcome1,day=1;
    int number_list_income2,number_list_outcome2;
    int number_list_income3,number_list_outcome3;
    char temp_income1[100][100],temp_outcome1[100][100],total_income=0,total_outcome=0;
    int total_income1=0,total_outcome1=0;
    int total_income2=0,total_outcome2=0;
    int total_income3=0,total_outcome3=0;
    char temp_income2[100][100],temp_outcome2[100][100];
    char temp_income3[100][100],temp_outcome3[100][100];
	int temp_income,temp_outcome;
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    hello();
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("\n");



    do
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
        WORD saved_attributes;
        /* Save current attributes */
        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
        saved_attributes = consoleInfo.wAttributes;
        greentext();
        switch(day)
        {
           case 1:
                do{
                    printf("day %d Please enter number of your income list (max of list = 2): ",day);
                    scanf("%d",&number_list_income1);
                    if(number_list_income1>2)
                        printf("out of range please try again\n");
                  }while(number_list_income1>2);
                printf("--------------------------------------------------\n");
                for(int i=0;i<number_list_income1;i++)
                {
                    printf("list%d please type your income list: ",i+1);
                    scanf("%s",llist_income1[i]);
                    printf("--------------------------------------------------\n");
                    printf("value : ");
                    scanf("%d",&temp_income);
                    printf("--------------------------------------------------\n");
                    sprintf(temp_income1[i],"%d",temp_income);
					total_income+=temp_income;
                    total_income1+=temp_income;
                }
                redtext();
                do{
                    printf("day %d Please enter number of your outcome list(max of list = 5): ",day);
                    scanf("%d",&number_list_outcome1);
                    if(number_list_outcome1>5)
                        printf("out of range please try again\n");
                  }while(number_list_outcome1>5);
                printf("--------------------------------------------------\n");
                for(int i=0;i<number_list_outcome1;i++)
                {
                    printf("list%d please type your outcome list: ",i+1);
                    scanf("%s",llist_outcome1[i]);
                    printf("--------------------------------------------------\n");
                    printf("value : ");
                    scanf("%d",&temp_outcome);
                    printf("--------------------------------------------------\n");
                    sprintf(temp_outcome1[i],"%d",temp_outcome);
					total_income+=temp_outcome;
                    total_income1+=temp_outcome;
                }
                break;
                case 2:
                do{
                    printf("day %d Please enter number of your income list(max of list = 2): ",day);
                    scanf("%d",&number_list_income2);
                    if(number_list_income2>2)
                        printf("out of range please try again\n");
                  }while(number_list_income2>2);
                printf("--------------------------------------------------\n");
                for(int i=0;i<number_list_income2;i++)
                {
                    printf("list%d please type your income list: ",i+1);
                    scanf("%s",llist_income2[i]);
                    printf("--------------------------------------------------\n");
                    printf("value : ");
                    scanf("%d",&temp_income);
                    printf("--------------------------------------------------\n");
                    sprintf(temp_income2[i],"%d",temp_income);
					total_income+=temp_income;
                    total_income2+=temp_income;
                }
                redtext();
                do{
                    printf("day %d Please enter number of your outcome list (max of list = 5): ",day);
                    scanf("%d",&number_list_outcome2);
                    if(number_list_outcome2>5)
                        printf("out of range please try again\n");
                  }while(number_list_outcome2>5);
                printf("--------------------------------------------------\n");
                for(int i=0;i<number_list_outcome2;i++)
                {
                    printf("list%d please type your outcome list: ",i+1);
                    scanf("%s",llist_outcome2[i]);
                    printf("--------------------------------------------------\n");
                    printf("value : ");
                    scanf("%d",&temp_outcome);
                    printf("--------------------------------------------------\n");
                    sprintf(temp_outcome2[i],"%d",temp_outcome);
					total_outcome+=temp_outcome;
                    total_outcome2+=temp_outcome;
                }
                break;
                case 3:
                do{
                    printf("day %d Please enter number of your income list (max of list = 2): ",day);
                    scanf("%d",&number_list_income3);
                    if(number_list_income3>2)
                        printf("out of range please try again\n");
                  }while(number_list_income3>2);
                printf("--------------------------------------------------\n");
                for(int i=0;i<number_list_income3;i++)
                {
                    printf("list%d please type your income list: ",i+1);
                    scanf("%s",llist_income3[i]);
                    printf("--------------------------------------------------\n");
                    printf("value : ");
                    scanf("%d",&temp_income);
                    printf("--------------------------------------------------\n");
                    sprintf(temp_income3[i],"%d",temp_income);
					total_income+=temp_income;
                    total_income3+=temp_income;
                }
                redtext();
                do{
                    printf("day %d Please enter number of your outcome list (max of list = 5): ",day);
                    scanf("%d",&number_list_outcome3);
                    if(number_list_outcome3>5)
                        printf("out of range please try again\n");
                  }while(number_list_outcome3>5);
                printf("--------------------------------------------------\n");
                for(int i=0;i<number_list_outcome3;i++)
                {
                    printf("list%d please type your outcome list: ",i+1);
                    scanf("%s",llist_outcome3[i]);
                    printf("--------------------------------------------------\n");
                    printf("value : ");
                    scanf("%d",&temp_outcome);
                    printf("--------------------------------------------------\n");
                    sprintf(temp_outcome3[i],"%d",temp_outcome);
					total_outcome+=temp_outcome;
                    total_outcome3+=temp_outcome;
                }
                break;

        }
        day+=1;
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("%s",temp_income1[0]);
        printf("Are you want to make audit next day(Yes/No)");
        scanf("%s",next);


    }while(strcmp(next,"No")!=0);




using namespace sf;
    RenderWindow window(VideoMode(500,888), "My window");
    char msj1[100] = "this is test";
   //------------------------------------------------------------------------------------------
    Font font;
    font.loadFromFile("chi.ttf");

    Text tlist_income1[100],tlist_outcome1[100];
    Text tlist_income2[100],tlist_outcome2[100];
    Text tlist_income3[100],tlist_outcome3[100];
    Text ttemp_income1[100],ttemp_outcome1[100];
    Text ttemp_income2[100],ttemp_outcome2[100];
    Text ttemp_income3[100],ttemp_outcome3[100];
    Text text[100];
    int add = 0;
    for(int i=0;i<number_list_outcome1;i++)
{
    tlist_outcome1[i].setFont(font);
    tlist_outcome1[i].setString(llist_outcome1[i]);
    tlist_outcome1[i].setCharacterSize(24);
    tlist_outcome1[i].setFillColor(Color::Red);
    tlist_outcome1[i].setStyle(Text::Bold | Text::Underlined);
    tlist_outcome1[i].setPosition(16, 449+add);
    add+=70;
}

    add = 0;
    for(int i=0;i<number_list_outcome1;i++)
{
    ttemp_outcome1[i].setFont(font);
    ttemp_outcome1[i].setString(temp_outcome1[i]);
    ttemp_outcome1[i].setCharacterSize(24);
    ttemp_outcome1[i].setFillColor(Color::Red);
    ttemp_outcome1[i].setStyle(Text::Bold | Text::Underlined);
    ttemp_outcome1[i].setPosition(350, 449+add);
    add+=70;
}

    add = 0;
    for(int i=0;i<number_list_income1;i++)
{
    tlist_income1[i].setFont(font);
    tlist_income1[i].setString(llist_income1[i]);
    tlist_income1[i].setCharacterSize(24);
    tlist_income1[i].setFillColor(Color::Red);
    tlist_income1[i].setStyle(Text::Bold | Text::Underlined);
    tlist_income1[i].setPosition(16, 136+add);
    add+=64;
}

    add = 0;
    for(int i=0;i<number_list_income1;i++)
{
    ttemp_income1[i].setFont(font);
    ttemp_income1[i].setString(temp_income1[i]);
    ttemp_income1[i].setCharacterSize(24);
    ttemp_income1[i].setFillColor(Color::Red);
    ttemp_income1[i].setStyle(Text::Bold | Text::Underlined);
    ttemp_income1[i].setPosition(340, 136+add);
    add+=64;
}
    add = 0;


//-----------------------------------------------------------------------------------------
    Texture menuhome,listmenu;
    menuhome.loadFromFile("Menu.png");
    listmenu.loadFromFile("list.png");

//-----------------------------------------------------------------------------------------

    Sprite smenuhome,slistmenu;
    smenuhome.setTexture(menuhome); slistmenu.setTexture(listmenu);
//-----------------------------------------------------------------------------------------


    int menuevent = 0;
        while (window.isOpen())
        {
            Vector2i pos = Mouse::getPosition(window);
            int x = pos.x;
            int y = pos.y;

            sf::Event event,event1;
            while (window.pollEvent(event))
            {

                if (event.type == sf::Event::Closed)
                    window.close();

                //เข้าไปทำบัญชีรายรับรายจ่าย
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(x>=56&&x<=450)&&(y>=112&&y<=230)&&(menuevent==0))
                {

                    menuevent=1;
                    window.clear();
                    window.draw(slistmenu);
                    window.display();


                }
                //ตอนกดปุ่มquit
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(x>=364&&x<=441)&&(y>=17&&y<=51))
                        window.close();



            }

               window.clear();
               window.draw(slistmenu);
               for(int i=0;i<number_list_outcome1;i++)
               {
                   window.draw(tlist_outcome1[i]);
               }
               for(int i=0;i<number_list_outcome1;i++)
               {
                   window.draw(ttemp_outcome1[i]);
               }
               for(int i=0;i<number_list_income1;i++)
               {
                   window.draw(tlist_income1[i]);
               }
               for(int i=0;i<number_list_outcome1;i++)
               {
                   window.draw(ttemp_income1[i]);
               }
               window.display();

        }

return 0;




}



