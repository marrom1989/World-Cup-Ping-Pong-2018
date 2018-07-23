//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *ball;
        TTimer *Timer_ball;
        TTimer *right_up;
        TTimer *right_down;
        TTimer *left_up;
        TTimer *left_down;
        TImage *left_paddle;
        TImage *right_paddle;
        TImage *field;
        TImage *goal;
        TLabel *left_score;
        TLabel *right_score;
        TBitBtn *next_round;
        TImage *left_winner;
        TImage *right_winner;
        TImage *left_team;
        TImage *right_team;
        TLabel *left_team_name;
        TLabel *right_team_name;
        TBitBtn *new_game;
        TLabel *show_message;
        TButton *message_box;
        void __fastcall Timer_ballTimer(TObject *Sender);
        void __fastcall right_upTimer(TObject *Sender);
        void __fastcall right_downTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall left_upTimer(TObject *Sender);
        void __fastcall left_downTimer(TObject *Sender);
        void __fastcall next_roundClick(TObject *Sender);
        void __fastcall new_gameClick(TObject *Sender);
        void __fastcall message_boxClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
