#include "NativizedAssets.h"
#include "E_Mei_InteractionType__pf424568635.h"
FText E__E_Mei_InteractionType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Mei_InteractionType__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Mei_InteractionType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[38AA51664C5547AF550FE3A5EB248D7E]\", \"7D1F588F489580E5D952B9B246B993F1\", \"None\")"), Text); break;
		case E__E_Mei_InteractionType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[38AA51664C5547AF550FE3A5EB248D7E]\", \"4641296F46C7AD83E66842BDB64B7D27\", \"Hatchet\")"), Text); break;
		case E__E_Mei_InteractionType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[38AA51664C5547AF550FE3A5EB248D7E]\", \"4EDB41CF4D1E4AD8982E038CF712B9E6\", \"Pickaxe\")"), Text); break;
		case E__E_Mei_InteractionType__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[38AA51664C5547AF550FE3A5EB248D7E]\", \"14C123074829145C940086ACD1EDDDD8\", \"Mallet\")"), Text); break;
		case E__E_Mei_InteractionType__pf::E__E_Mei_InteractionType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E Mei MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
