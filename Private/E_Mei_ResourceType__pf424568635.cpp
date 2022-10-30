#include "NativizedAssets.h"
#include "E_Mei_ResourceType__pf424568635.h"
FText E__E_Mei_ResourceType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Mei_ResourceType__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Mei_ResourceType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8272B2AC4EBB177FA0AC458032BF6315]\", \"E36FBBD94B69F7116261F6981931AFA1\", \"Wood\")"), Text); break;
		case E__E_Mei_ResourceType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8272B2AC4EBB177FA0AC458032BF6315]\", \"E121F6B247C115E634D017A93C4C1F4C\", \"Stone\")"), Text); break;
		case E__E_Mei_ResourceType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8272B2AC4EBB177FA0AC458032BF6315]\", \"441461EB4E9A777146DA72A330E1124E\", \"Metal\")"), Text); break;
		case E__E_Mei_ResourceType__pf::E__E_Mei_ResourceType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E Mei MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
