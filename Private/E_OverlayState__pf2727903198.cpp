#include "NativizedAssets.h"
#include "E_OverlayState__pf2727903198.h"
FText E__E_OverlayState__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_OverlayState__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_OverlayState__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"952807D348B30E802A017C9BAA7EF923\", \"Default\")"), Text); break;
		case E__E_OverlayState__pf::NewEnumerator12: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"9B0A61364C3F77E8D6940286D293FABC\", \"Masculine\")"), Text); break;
		case E__E_OverlayState__pf::NewEnumerator13: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"6EFBDE694DB32E9D00249DA722CA3D94\", \"Feminine\")"), Text); break;
		case E__E_OverlayState__pf::NewEnumerator14: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"D0400B964359DD51D5CC91AB835D53B8\", \"Injured\")"), Text); break;
		case E__E_OverlayState__pf::NewEnumerator15: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"27DAD3EC49D4F525EBE1B8A816130535\", \"HandsTied\")"), Text); break;
		case E__E_OverlayState__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"99D0BA4C4E28335F7734488573D7CED8\", \"Rifle\")"), Text); break;
		case E__E_OverlayState__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"08411EE242DCAB660E8105AFBB65A673\", \"Pistol 1H\")"), Text); break;
		case E__E_OverlayState__pf::NewEnumerator10: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"C0E6811F40C4F1AE306AE78CF00955C9\", \"Pistol 2H\")"), Text); break;
		case E__E_OverlayState__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"2FBCF958483F1652A40C3EA41BD67768\", \"Bow\")"), Text); break;
		case E__E_OverlayState__pf::NewEnumerator7: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"AEF4BB2D483EFA922E86E9A6983708CF\", \"Torch\")"), Text); break;
		case E__E_OverlayState__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"B7B7E6764EF54B5033D1D692FFE845F5\", \"Binoculars\")"), Text); break;
		case E__E_OverlayState__pf::NewEnumerator9: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"43AB57F746C19D4254FC95833B7DE9D9\", \"Box\")"), Text); break;
		case E__E_OverlayState__pf::NewEnumerator11: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7EB6CD9D4E2C34C2216B429C1A1E8988]\", \"1D51F343454852FD9AB47183616A15AF\", \"Barrel\")"), Text); break;
		case E__E_OverlayState__pf::E__E_OverlayState__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
