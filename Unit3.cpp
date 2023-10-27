//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop


#include "Unit3.h"
#include "Unit2.h"
#include "Unit4.h"

#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm3 *Form3;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------
bool isToggled=false;
void __fastcall TForm3::LanguageBClick(TObject *Sender)
{
	if(isToggled) {
		LanguageB->Text="En/Ro";
		Intro->Text="Current climate policies will reduce emissions, but not quickly enough to reach international targets";
		CO2Calculator->Text="Calculate your CO2 footprint";
		graphCO2->Text="Historical CO2 emissions graphic representation";
	}
	else
	{
		LanguageB->Text="Ro/En";
		Intro->Text="Politicile curente ce fac referire la climat vor reduce emisiile, dar nu destul de repede pentru a atinge scopurile internationale";
		CO2Calculator->Text="Calculeaza amprenta ta de CO2";
		graphCO2->Text="Reprezentare grafică istorică a emisiilor de CO2";
	}
	isToggled = !isToggled;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::CO2CalculatorClick(TObject *Sender)
{
    TForm2 *newForm = new TForm2(this);
	newForm->Show();
}
//---------------------------------------------------------------------------

