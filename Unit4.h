//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TLabel *HouseIntro;
	TButton *BNext2;
	TLabel *House1;
	TRadioButton *BHouse1;
	TRadioButton *BHouse2;
	TLabel *HouseElectric;
	TRadioButton *BSolar;
	TRadioButton *BRetea;
	TRadioButton *BHybrid;
	TLabel *KWHElectricity;
	TEdit *EditElectric;
	TLabel *KE;
	TLabel *KWHGas;
	TEdit *Edit1;
	TLabel *KG;
	void __fastcall BNext2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
