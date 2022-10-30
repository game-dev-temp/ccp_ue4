#include "NativizedAssets.h"
#include "E_ViewMode__pf2727903198.h"
FText E__E_ViewMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_ViewMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_ViewMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2DFBDEAC45E7F50AE9D6E6A42F4734C7]\", \"B8DA39A0430387114231C8AF868A3DA7\", \"ThirdPerson\")"), Text); break;
		case E__E_ViewMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2DFBDEAC45E7F50AE9D6E6A42F4734C7]\", \"499A63124A849DCE92F6DDBFA343147A\", \"FirstPerson\")"), Text); break;
		case E__E_ViewMode__pf::E__E_ViewMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
