#include "NativizedAssets.h"
#include "E_Stance__pf2727903198.h"
FText E__E_Stance__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Stance__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Stance__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1CCAD4B44B0807696FC94D8E989F62A5]\", \"86B9C5D1480B821F46E074ADB3AE0925\", \"Standing\")"), Text); break;
		case E__E_Stance__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1CCAD4B44B0807696FC94D8E989F62A5]\", \"4B6745FD446CDF0E5C96BAB69AE84582\", \"Crouching\")"), Text); break;
		case E__E_Stance__pf::E__E_Stance__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
