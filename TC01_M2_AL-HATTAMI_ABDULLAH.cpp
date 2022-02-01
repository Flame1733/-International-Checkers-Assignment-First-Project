/********|***********|*********|
program; TC01_M2_AL-HATTAMI_ABDULLAH.cpp
Course; Computer sciencek
Year: 2019/20 Trimester 2
Name: Al-Hattami Abdullah Ali Dawod
ID: 1191302084
Lecture section:TC01
Tutorial section; TT02
Email: 1191302084@student.mmu.edu.my
Phone: 0139361922
*********|************|********/


#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
void print(char theboard [10][10]);
void interface();
void rulse();
void firstplayer(char theboard[10][10]);
void secondplayer(char theboard[10][10]);
void note();
void save(char theboard[10][10]);
void load(char theboard[10][10]);
string player1 , player2;
string xyfrom, xyto;
int xfrom,yfrom,xto,yto;
//***********************************************************************************//

int main ()
{
  char b ;            //varible to pass and control input and output
  int choice ;
  char theboard[10][10]= {                              //array of the theboard
        {' ','b',' ','b',' ','b',' ','b',' ','b'},
        {'b',' ','b',' ','b',' ','b',' ','b',' '},
        {' ','b',' ','b',' ','b',' ','b',' ','b'},
        {'b',' ','b',' ','b',' ','b',' ','b',' '},
        {' ','#',' ','#',' ','#',' ','#',' ','#'},
        {'#',' ','#',' ','#',' ','#',' ','#',' '},
        {' ','a',' ','a',' ','a',' ','a',' ','a'},
        {'a',' ','a',' ','a',' ','a',' ','a',' '},
        {' ','a',' ','a',' ','a',' ','a',' ','a'},
        {'a',' ','a',' ','a',' ','a',' ','a',' '},
        };


    cout << "\t\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*" <<endl;          //the welcoming window
    cout << "\t\t\t\t\t ||                           WELCOME                       ||" <<endl;          //when the player start open the program
    cout << "\t\t\t\t\t ||                             TO                          ||" <<endl;
    cout << "\t\t\t\t\t ||                 INTERNATIONAL CHECKERS GAME             ||" <<endl;
    cout << "\t\t\t\t\t ||              > PRESS ANY BUTTOM TO GO MAIN MENU         ||" <<endl;
    cout << "\t\t\t\t\t ||                                                         ||" <<endl;
    cout << "\t\t\t\t\t ||                     ~~~@AL-HATTAMI~~~                   ||" <<endl;
    cout << "\t\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*" <<endl;
    cin >> b;           //as i mention this to skip the welcoming text
    system("cls");


    do{             //loop for the main menu
    interface();
    cin >> choice; //choice for choose one of chosen of main menu

        if (choice == 1)
        {
                system("cls");                          //to clean screen
                note();                                 //the function of note
                cin >> b;                               //to pass the note
                system("cls");
                cout << "Let's play" << endl;
                cout << "The first player name=> ";
                cin >> player1;                         //input first name of player
                cout << "The second player=> ";
                cin >> player2;                         //input second name of second player

                do {                                    //loop of the playing
            system("cls");
            print(theboard);                            //the function of print
            firstplayer(theboard);                      //the function of first player and his turn
            print(theboard);
            secondplayer(theboard);                     //the function of first player and his turn

            }while(1) ;

        }

         else if (choice == 2)
         {
             load(theboard);            //load fucntion after saving
             do {
            system("cls");
            print(theboard);
            firstplayer(theboard);
            print(theboard);
            secondplayer(theboard);

            }while(1) ;
         }


        else if (choice == 3)
            {
            system("cls");
            rulse();                  //the function of the rulse
            cin >> b;
            system("cls");

            }

         else if (choice == 4)
            {
             system("cls");
             cout <<"see you again"<<endl;
             exit(0);                           // to exit from the program
            }

    }while( choice = 3 );                       //if player choose 3(rulse) the mean menu will return




         return 0;

}

//***********************************************************************************//
void print(char theboard [10][10])
{


    for ( int x =0 ; x<10 ; ++x)
    {
       if(x < 9)
            cout << "   |---+---+---+---+---+---+---+---+---+---|\n " << x+1 << " ";        //x to 9 because at last it will be 10
        else                                                                                // 10 has two number (1 &0)
            cout << "   |---+---+---+---+---+---+---+---+---+---|\n" << x+1 << " ";         //it will help tp print the board correct

    for ( int y =0 ; y<10 ; ++y)
    {
        cout << "| " << theboard[x][y] << " ";
    }
        cout << "|" << endl;

    }
     cout <<"   |---+---+---+---+---+---+---+---+---+---|"<<endl;                           //for last line on the board
     cout <<"     a   b   c   d   e   f   g   h   i   j  "<<endl;

}

//***********************************************************************************//
void interface()                                                                            //the function for show interface
{
    cout << "\t\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*" <<endl;
    cout << "\t\t\t\t\t ||                     ~~~ Main Menu ~~~                   ||" <<endl;
    cout << "\t\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*" <<endl;
    cout << "\t\t\t\t\t || (1) New Game                                            ||" <<endl;      // to start the game
    cout << "\t\t\t\t\t || (2) Load Game                                           ||" <<endl;
    cout << "\t\t\t\t\t || (3) Rulse                                               ||" <<endl;      // to show the rulse
    cout << "\t\t\t\t\t || (4) Exit                                                ||" <<endl;      // to exit
    cout << "\t\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*" <<endl;
    cout << "\t\t\t\t\t Your choice => ";
}

//***********************************************************************************//             //the function for show the rulse
void rulse()
{
    cout <<"\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*==*===*===*===*===*===*===*"<<endl;
    cout <<"\t\t\t\t ||                                     ~~~Rulse~~~                                    ||"<<endl;
    cout <<"\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*==*===*===*===*===*===*===*"<<endl; //rulse of rthe game
    cout <<"\t\t\t\t || 1) The general rule is that all moves and captures are made diagonally.            ||"<<endl;
    cout <<"\t\t\t\t || 2) All references to squares refer to the dark squares only.                       ||"<<endl;
    cout <<"\t\t\t\t || 3)The main differences from English draughts are:                                  ||"<<endl;
    cout <<"\t\t\t\t ||  -the size of the board (10×10),                                                   ||"<<endl;
    cout <<"\t\t\t\t ||  -pieces can also capture backward                                                 ||"<<endl;
    cout <<"\t\t\t\t ||  -the long-range moving and capturing capability of kings known as flying          ||"<<endl;
    cout <<"\t\t\t\t ||  -the maximum number of men be captured whenever a player has capturing options.   ||"<<endl;
    cout <<"\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*==*===*===*===*===*===*===*"<<endl;
    cout <<"\t\t\t\t || ( Back ) => press any buttom                                                       ||"<<endl;  //to go bace the main menu
    cout <<"\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*==*===*===*===*===*===*===*"<<endl;
}
//***********************************************************************************//

void firstplayer(char theboard[10][10])
{
    cout <<"Your Turn, "<< player1 << endl;
    cout << "From => ";
    cin >> xyfrom;                          //the move from but the letter first then number example ;b7
    cout << "To => ";
    cin >> xyto;                            //the move to

    xfrom= xyfrom[0]-'a' ;                  //the way i used here to
    yfrom = xyfrom[1]-'1';                  //input place of is by assci table
    xto = xyto[0]-'a';
    yto = xyto[1]-'1';

	if ( xyfrom == "save")                 //if the pkayer write save on xyfrom will save the game
    {
        save(theboard);
        cout <<"The game already save";
        exit(0);
    }

      else if ( !(xfrom==xto) && !(yfrom==yto) ) //this for locted move to uo,down,right and rhif
        {
            theboard[yfrom][xfrom] = '#';       //the place move from will change to #
            theboard[yto][xto] = 'a';           //the place move to will change to  a
        }

}


//***********************************************************************************//
void secondplayer(char theboard[10][10])
{
    cout <<cout <<" Your Turn, "<< player2 << endl;
    cout << "From => ";
    cin  >> xyfrom;
    cout << "To => ";
    cin  >> xyto;

    xfrom= xyfrom[0]-'a' ,
    yfrom = xyfrom[1]-'1',
    xto = xyto[0]-'a',
    yto = xyto[1]-'1';

    if ( xyfrom == "save")
    {
        save(theboard);
        cout <<"The game already save";
        exit(0);
    }


       else if ( !(xfrom==xto) && !(yfrom==yto) )
        {
            theboard[yfrom][xfrom] = '#';
            theboard[yto][xto] = 'b';               //the place move to will change to b
        }
}

//***********************************************************************************//
void note()
{
    cout <<"\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*==*===*===*===*===*===*===*"<<endl;
    cout <<"\t\t\t\t ||                                        NOTE!!                                      ||"<<endl;
    cout <<"\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*==*===*===*===*===*===*===*"<<endl; //rulse of rthe game
    cout <<"\t\t\t\t || #The way to play and move the pieces, you have put the litter then the number;     ||"<<endl;
    cout <<"\t\t\t\t || #Example: From =>b7                                                                ||"<<endl;
    cout <<"\t\t\t\t ||            To =>a6                                                                 ||"<<endl;
    cout <<"\t\t\t\t ||   and moveing to the space which has hashtag '#'                                   ||"<<endl;
    cout <<"\t\t\t\t || #for save if the player write save it will save it and close the program           ||"<<endl;
    cout <<"\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*==*===*===*===*===*===*===*"<<endl;
    cout <<"\t\t\t\t || ( next ) => press any buttom                                                       ||"<<endl;  //to go bace the main menu
    cout <<"\t\t\t\t *===*===*===*===*===*===*===*===*===*===*===*===*===*===*===*==*===*===*===*===*===*===*"<<endl;
}
//***********************************************************************************//
void save(char theboard[10][10])
{
    ofstream save;                                      //this function to save on file it calld amazing
    save.open("amazing.txt");                           // and creat it

    for ( int x =0 ; x<10 ; ++x)
    {

        for ( int y =0 ; y<10 ; ++y)
        {
            save << theboard[x][y];
        }
        save << endl;
    }



    save.close();
}
//***********************************************************************************//
void load(char theboard[10][10])
{

    ifstream load;                                   //this function to load from file it calld amazing
    string space;
    load.open("amazing.txt");

    for ( int x =0 ; x<10 ; ++x)
    {
        getline(load,space);
        for ( int y =0 ; y<10 ; ++y)
        {
           theboard[x][y] = space[y];
        }

    }

    load.close();
    print(theboard);
}
//***********************************************************************************//





