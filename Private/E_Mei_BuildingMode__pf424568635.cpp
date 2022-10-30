#include "NativizedAssets.h"
#include "E_Mei_BuildingMode__pf424568635.h"
FText E__E_Mei_BuildingMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Mei_BuildingMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Mei_BuildingMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[986AC89C4DFD7E1D0039079ADCB9A021]\", \"D991B5FE4813411914981A98133FA3D7\", \"None\")"), Text); break;
		case E__E_Mei_BuildingMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[986AC89C4DFD7E1D0039079ADCB9A021]\", \"17E0FC764450F352F13148B5439D7E44\", \"Build\")"), Text); break;
		case E__E_Mei_BuildingMode__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[986AC89C4DFD7E1D0039079ADCB9A021]\", \"B956B97A47C3396E4C8DC7A024B897F6\", \"Repair\")"), Text); break;
		case E__E_Mei_BuildingMode__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[986AC89C4DFD7E1D0039079ADCB9A021]\", \"49AED29F4CB33CAE4D0FC9BAB761E532\", \"Upgrade\")"), Text); break;
		case E__E_Mei_BuildingMode__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[986AC89C4DFD7E1D0039079ADCB9A021]\", \"0D23A0C74541B25BBF2CF8BD44B3F52C\", \"Destruct\")"), Text); break;
		case E__E_Mei_BuildingMode__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[986AC89C4DFD7E1D0039079ADCB9A021]\", \"9CE8C0494DFA451C04F565A2A509B480\", \"Remove\")"), Text); break;
		case E__E_Mei_BuildingMode__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[986AC89C4DFD7E1D0039079ADCB9A021]\", \"82126CF44EBCD94D34487C88C984F78C\", \"Rotate\")"), Text); break;
		case E__E_Mei_BuildingMode__pf::E__E_Mei_BuildingMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E Mei MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
