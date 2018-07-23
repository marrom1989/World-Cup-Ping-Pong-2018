//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "mmsystem.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;


int vertical;
int horizontal;
int left_goal = 0;
int right_goal = 0;
bool game_start = false;

void start() {


        randomize();
        for(int i = 1; i < 3; i++){
        int number = random(32)+1;
        switch(number){
        case 1: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Argentina.bmp");
                Form1->left_team_name->Caption = "ARG";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Argentina.bmp");
                Form1->right_team_name->Caption = "ARG";
                break;
                }}
        case 2: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Australia.bmp");
                Form1->left_team_name->Caption = "AUS";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Australia.bmp");
                Form1->right_team_name->Caption = "AUS";
                break;
                }}
        case 3: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Belgium.bmp");
                Form1->left_team_name->Caption = "BEL";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Belgium.bmp");
                Form1->right_team_name->Caption = "BEL";
                break;
                }}
        case 4: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Brazil.bmp");
                Form1->left_team_name->Caption = "BRA";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Brazil.bmp");
                Form1->right_team_name->Caption = "BRA";
                break;
                }}
        case 5: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Colombia.bmp");
                Form1->left_team_name->Caption = "COL";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Colombia.bmp");
                Form1->right_team_name->Caption = "COL";
                break;
                }}
        case 6: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Costarica.bmp");
                Form1->left_team_name->Caption = "CRC";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Costarica.bmp");
                Form1->right_team_name->Caption = "CRC";
                break;
                }}
        case 7: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Croatia.bmp");
                Form1->left_team_name->Caption = "CRO";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Croatia.bmp");
                Form1->right_team_name->Caption = "CRO";
                break;
                }}
        case 8: {
                if( i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Denmark.bmp");
                Form1->left_team_name->Caption = "DEN";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Denmark.bmp");
                Form1->right_team_name->Caption = "DEN";
                break;
                }}
        case 9: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Egypt.bmp");
                Form1->left_team_name->Caption = "EGY";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Egypt.bmp");
                Form1->right_team_name->Caption = "EGY";
                break;
                }}
        case 10: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/England.bmp");
                Form1->left_team_name->Caption = "ENG";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/England.bmp");
                Form1->right_team_name->Caption = "ENG";
                break;
                }}
        case 11: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/France.bmp");
                Form1->left_team_name->Caption = "FRA";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/France.bmp");
                Form1->right_team_name->Caption = "FRA";
                break;
                }}
        case 12: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Germany.bmp");
                Form1->left_team_name->Caption = "GER";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Germany.bmp");
                Form1->right_team_name->Caption = "GER";
                break;
                }}
        case 13: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Iceland.bmp");
                Form1->left_team_name->Caption = "ISL";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Iceland.bmp");
                Form1->right_team_name->Caption = "ISL";
                break;
                }}
        case 14: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Iran.bmp");
                Form1->left_team_name->Caption = "IRN";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Iran.bmp");
                Form1->right_team_name->Caption = "IRN";
                break;
                }}
        case 15: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Japan.bmp");
                Form1->left_team_name->Caption = "JPN";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Japan.bmp");
                Form1->right_team_name->Caption = "JPN";
                break;
                }}
        case 16: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Marocco.bmp");
                Form1->left_team_name->Caption = "MAR";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Marocco.bmp");
                Form1->right_team_name->Caption = "MAR";
                break;
                }}
        case 17: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Mexico.bmp");
                Form1->left_team_name->Caption = "MEX";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Mexico.bmp");
                Form1->right_team_name->Caption = "MEX";
                break;
                }}
        case 18: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Nigeria.bmp");
                Form1->left_team_name->Caption = "NGA";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Nigeria.bmp");
                Form1->right_team_name->Caption = "NGA";
                break;
                }}
        case 19: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Panama.bmp");
                Form1->left_team_name->Caption = "PAN";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Panama.bmp");
                Form1->right_team_name->Caption = "PAN";
                break;
                }}
        case 20: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Peru.bmp");
                Form1->left_team_name->Caption = "PER";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Peru.bmp");
                Form1->right_team_name->Caption = "PER";
                break;
                }}
        case 21: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Poland.bmp");
                Form1->left_team_name->Caption = "POL";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Poland.bmp");
                Form1->right_team_name->Caption = "POL";
                break;
                }}
        case 22: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Portugal.bmp");
                Form1->left_team_name->Caption = "POR";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Portugal.bmp");
                Form1->right_team_name->Caption = "POR";
                break;
                }}
        case 23: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Russia.bmp");
                Form1->left_team_name->Caption = "RUS";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Russia.bmp");
                Form1->right_team_name->Caption = "RUS";
                break;
                }}
        case 24: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/SaudiArabia.bmp");
                Form1->left_team_name->Caption = "KSA";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/SaudiArabia.bmp");
                Form1->right_team_name->Caption = "KSA";
                break;
                }}
        case 25: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Senegal.bmp");
                Form1->left_team_name->Caption = "SEN";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Senegal.bmp");
                Form1->right_team_name->Caption = "SEN";
                break;
                }}
        case 26: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Serbia.bmp");
                Form1->left_team_name->Caption = "SCG";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Serbia.bmp");
                Form1->right_team_name->Caption = "SCG";
                break;
                }}
        case 27: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/SouthKorea.bmp");
                Form1->left_team_name->Caption = "KOR";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/SouthKorea.bmp");
                Form1->right_team_name->Caption = "KOR";
                break;
                }}
        case 28: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Spain.bmp");
                Form1->left_team_name->Caption = "ESP";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Spain.bmp");
                Form1->right_team_name->Caption = "ESP";
                break;
                }}
        case 29: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Sweeden.bmp");
                Form1->left_team_name->Caption = "SWE";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Sweeden.bmp");
                Form1->right_team_name->Caption = "SWE";
                break;
                }}
        case 30: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Switzerland.bmp");
                Form1->left_team_name->Caption = "SUI";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Switzerland.bmp");
                Form1->right_team_name->Caption = "SUI";
                break;
                }}
        case 31: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Tunisia.bmp");
                Form1->left_team_name->Caption = "TUN";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Tunisia.bmp");
                Form1->right_team_name->Caption = "TUN";
                break;
                }}
        case 32: {
                if(i == 1){
                Form1->left_team->Picture->LoadFromFile("img/flags/Uruguay.bmp");
                Form1->left_team_name->Caption = "URU";
                break;
                } else {
                Form1->right_team->Picture->LoadFromFile("img/flags/Uruguay.bmp");
                Form1->right_team_name->Caption = "URU";
                break;
                }}}}

        Form1->new_game->Visible = false;
        Form1->new_game->Caption = "New game";
        Form1->next_round->Visible = false;
        Form1->left_score->Visible = true;
        Form1->right_score->Visible = true;
        Form1->left_team_name->Visible = true;
        Form1->right_team_name->Visible = true;

        Form1->left_paddle->Enabled = true;
        Form1->right_paddle->Enabled = true;
        Form1->left_winner->Visible = false;
        Form1->right_winner->Visible = false;
        Form1->goal->Visible = false;

        Form1->show_message->Visible = true;
        Form1->show_message->Caption = "Match start in: 3";
        Application->ProcessMessages(); Sleep(1000);
        Form1->show_message->Caption = "Match start in: 2";
        Application->ProcessMessages(); Sleep(1000);
        Form1->show_message->Caption = "Match start in: 1";
        Application->ProcessMessages(); Sleep(1000);
        Form1->show_message->Visible = false;
        sndPlaySound("snd/once_whistle.wav", SND_ASYNC);
        Application->ProcessMessages(); Sleep(1000);

        Form1->Timer_ball->Enabled = true;
        Form1->ball->Left = 776;
        Form1->ball->Top = 376;
        Form1->ball->Visible = true;
        vertical = -6;
        horizontal = -8;
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer_ballTimer(TObject *Sender)
{

   ball->Left += horizontal;
   ball->Top += vertical;

   //reflection from top
   if(ball->Top - 5 <= field->Top) vertical = -vertical;

   //reflection from bottom
   if(ball->Top + ball->Height >= field->Height) vertical = -vertical;

   //goal left paddle
   if(ball->Left >= right_paddle->Left + right_paddle->Width)
   {

        sndPlaySound("snd/crowd.wav", SND_ASYNC);
        Timer_ball->Enabled = false;
        ball-> Visible = false;
        left_goal++;
        goal->Visible = true;
        left_score->Caption = left_goal;
        next_round->Visible = true;
        new_game->Visible = true;
        field->Enabled = false;

        if(left_goal == 6) {

      next_round->Visible = false;
      right_winner->Visible = true;
      sndPlaySound("snd/third_whistle.wav", SND_ASYNC);
      ball->Visible = false;
      Timer_ball->Enabled = false;
      field->Enabled = false;
      new_game->Visible = true;
      new_game->Caption = "One more time?";
      game_start = false;
      }
   }
   //goal right paddle
   else if (ball->Left <= left_paddle->Left - left_paddle->Width)
   {
      sndPlaySound("snd/crowd.wav", SND_ASYNC);
      Timer_ball->Enabled = false;
      ball-> Visible = false;
      right_goal++;
      goal->Visible = true;
      right_score->Caption = right_goal;
      next_round->Visible = true;
      new_game->Visible = true;
      field->Enabled = false;

      if(right_goal == 6) {

      next_round->Visible = false;
      right_winner->Visible = true;
      sndPlaySound("snd/third_whistle.wav", SND_ASYNC);
      ball->Visible = false;
      Timer_ball->Enabled = false;
      field->Enabled = false;
      new_game->Visible = true;
      new_game->Caption = "One more time?";
      game_start = false;
      }
   }
   else if(ball->Left <= left_paddle->Left + left_paddle->Width && ball->Top > left_paddle->Top - ball->Height/2
   && ball->Top < left_paddle->Top + left_paddle->Height)
   {
       if(vertical < 0) horizontal = -horizontal;
   }
   else if(ball->Left + ball->Width >= right_paddle->Left && ball->Top > right_paddle->Top - ball->Height/2
   && ball->Top < right_paddle->Top + right_paddle->Height)
   {
       if(vertical > 0) horizontal = -horizontal;
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::right_upTimer(TObject *Sender)
{
       if(right_paddle->Top > 15) right_paddle->Top -= 15;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::right_downTimer(TObject *Sender)
{
       if(right_paddle->Top + right_paddle->Height < field->Height - 15){

        right_paddle->Top += 15;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        //right paddle
        if(Key == VK_UP) right_up->Enabled = true;
        if(Key == VK_DOWN) right_down->Enabled = true;

        //left paddle
        if(Key == 0x41) left_up->Enabled = true;
        if(Key == 0x5A) left_down->Enabled = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        //right paddle
        if(Key == VK_UP) right_up->Enabled = false;
        if(Key == VK_DOWN) right_down->Enabled = false;

        //left paddle
        if(Key == 0x41) left_up->Enabled = false;
        if(Key == 0x5A) left_down->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::left_upTimer(TObject *Sender)
{
      if(left_paddle->Top > 15) left_paddle->Top -= 15;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::left_downTimer(TObject *Sender)
{
        if(left_paddle->Top + left_paddle->Height < field->Height - 15){

                left_paddle->Top += 15;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::next_roundClick(TObject *Sender)
{
        int interval = 14;
        ball->Left = 776;
        ball->Top = 376;
        ball->Visible = true;
        if(left_score >= right_score  ){
        vertical = vertical;
        horizontal = horizontal;
        } else {
        vertical = vertical;
        horizontal = -horizontal;
        }
        horizontal = horizontal * 1.2;

        next_round->Visible = false;
        new_game->Visible = false;
        goal->Visible = false;
        Timer_ball->Enabled = true;
        left_paddle->Enabled = true;
        right_paddle->Enabled = true;
        sndPlaySound("snd/once_whistle.wav", SND_ASYNC);
        Application->ProcessMessages(); Sleep(1000);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::new_gameClick(TObject *Sender)
{
        if(game_start == false){
        game_start = true;
        left_goal = 0; right_goal = 0;
        Form1->left_score->Caption = left_goal;
        Form1->right_score->Caption = right_goal;
        start();
        }else if(game_start == true) {
                if(Application->MessageBox("Do you want start new game" , "Confirm" ,
                MB_OKCANCEL | MB_ICONQUESTION) == IDOK){
                left_goal = 0; right_goal = 0;
                Form1->left_score->Caption = left_goal;
                Form1->right_score->Caption = right_goal;
                start();
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::message_boxClick(TObject *Sender)
{
  ShowMessage("Welcome in World Cup Ping Pong Finals 2018.\n\n"
              "Left player use A and Z keys to move the paddle.\n"
              "Right player use arrow UP and DOWN to move the paddle.\n\n"
              "The players who scores 6 goals wins.\n."
              "After score the goal, ball will speed up.\n"
              "Size of the filed is unchangeable.\n\n"
              "Have nice fun !!!");
}
//---------------------------------------------------------------------------

