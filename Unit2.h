//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Start;
	TLabel *Activity;
	TRadioButton *sport1;
	TRadioButton *sport2;
	TRadioButton *sport3;
	TLabel *Food;
	TRadioButton *BFood1;
	TRadioButton *BFood2;
	TRadioButton *BFood3;
	TLabel *Cigarettes;
	TRadioButton *Bcigarettes1;
	TRadioButton *Bcigarettes2;
	TRadioButton *Bcigarettes3;
	TButton *BNext1;
	void __fastcall BNext1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
