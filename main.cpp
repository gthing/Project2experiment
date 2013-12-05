/*
    Giovanni Villarreal
    date 11/27/2013
    project 2
*/

//Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//No global constants

//No prototype functions

//Execution begins here
int main(int argv,char *argc[]){
//Declare variables
char a[] = { 49, 50, 51, 52, 53, 54, 55, 56, 57 };
int choice,choice1,plr,comch=rand()%10;
char letter=79;
char letter1=88;
int outcome;

//Display tic-tac-toe.
cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
cout<<a[3]<<" "<<a[4]<<" "<<a[5]<<endl;
cout<<a[6]<<" "<<a[7]<<" "<<a[8]<<endl;
cout<<endl;
cout<<"1 player or 2?"<<endl;
cin>>plr;

//Two player
if (plr==2){
do{

cout<<"player1's turn."<<endl;
cin>>choice;
cout<<endl;
cout<<"player2's turn."<<endl;
cin>>choice1;
cout<<endl;

if (choice==1)
    (swap(a[0],letter));




 if(choice==2)
     (swap(a[1],letter));




 if(choice==3)
     (swap(a[2],letter));


  if(choice==4)
      (swap(a[3],letter));



  if(choice==5)
      (swap(a[4],letter));



   if(choice==6)
       (swap(a[5],letter));



   if(choice==7)
       (swap(a[6],letter));



    if(choice==8)
        (swap(a[7],letter));



    if(choice==9)
        (swap(a[8],letter));



    if (choice1==1)

        (swap(a[0],letter1));


     if(choice1==2)
         (swap(a[1],letter1));



     if(choice1==3)
         (swap(a[2],letter1));



      if(choice1==4)
          (swap(a[3],letter1));



      if(choice1==5)
          (swap(a[4],letter1));



       if(choice1==6)
           (swap(a[5],letter1));



       if(choice1==7)
           (swap(a[6],letter1));



        if(choice1==8)
            (swap(a[7],letter1));



        if(choice1==9)
            (swap(a[8],letter1));

        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
        cout<<a[3]<<" "<<a[4]<<" "<<a[5]<<endl;
        cout<<a[6]<<" "<<a[7]<<" "<<a[8]<<endl;
       cout<<endl;
    cout<<"player1, type 0 if won, loss or a draw. if player2, type 1; any other number to continue marking"<<endl;
   cin>>outcome;

}
while (outcome>0);
if (outcome==0){
cout<<"player 1 wins!!!"<<endl;
}
if(outcome==1){
cout<<"player 2 wins!!!!"<<endl;
}

}

//One player
if (plr==1){
do{
//loop moves
    cout<<"player1's turn."<<endl;
    cin>>choice;
    cout<<endl;
    cout<<"computer's turn."<<endl;
    cout<<comch;
    cout<<endl;


//Player one moves
    if (choice==1)
        (swap(a[0],letter));

     if(choice==2)
         (swap(a[1],letter));

     if(choice==3)
         (swap(a[2],letter));


      if(choice==4)
          (swap(a[3],letter));



      if(choice==5)
          (swap(a[4],letter));



       if(choice==6)
           (swap(a[5],letter));



       if(choice==7)
           (swap(a[6],letter));



        if(choice==8)
            (swap(a[7],letter));



        if(choice==9)
            (swap(a[8],letter));

//Computers moves
        if (comch==1)
            (swap(a[0],letter1));


         if(comch==2)
             (swap(a[1],letter1));



         if(comch==3)
             (swap(a[2],letter1));



          if(comch==4)
              (swap(a[3],letter1));



          if(comch==5)
              (swap(a[4],letter1));



           if(comch==6)
               (swap(a[5],letter1));



           if(comch==7)
               (swap(a[6],letter1));



            if(comch==8)
                (swap(a[7],letter1));



            if(comch==9)
                (swap(a[8],letter1));

           //displays outcome
           cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
           cout<<a[3]<<" "<<a[4]<<" "<<a[5]<<endl;
           cout<<a[6]<<" "<<a[7]<<" "<<a[8]<<endl;
          cout<<endl;

        //have to work on this
       cout<<"player1, type 0 if won, loss or a draw. if player2, type 1; any other number to continue marking"<<endl;
      cin>>outcome;

}
    //outcome ends loop
    while (outcome>0);
    if (outcome==0){
        cout<<"player 1 wins"<<endl;
    }
    if (outcome==1){
        cout<<"player 2 wins"<<endl;
    }
}
return 0;
}

