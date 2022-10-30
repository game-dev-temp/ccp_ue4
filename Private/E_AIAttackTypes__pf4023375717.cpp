#include "NativizedAssets.h"
#include "E_AIAttackTypes__pf4023375717.h"
FText E__E_AIAttackTypes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_AIAttackTypes__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_AIAttackTypes__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[01E6BFA34C58F72DC6145EA5ECAC555A]\", \"F4D944694A40DB4D9F40A0A1705226D9\", \"Light\")"), Text); break;
		case E__E_AIAttackTypes__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[01E6BFA34C58F72DC6145EA5ECAC555A]\", \"F364A31A490368A9AE0DF6A20E493E26\", \"Heavy\")"), Text); break;
		case E__E_AIAttackTypes__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[01E6BFA34C58F72DC6145EA5ECAC555A]\", \"FEFC093146CB615DC32877909C83B8E4\", \"Range\")"), Text); break;
		case E__E_AIAttackTypes__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[01E6BFA34C58F72DC6145EA5ECAC555A]\", \"F65B7426412F9F94E63B4FB00F689C59\", \"Charge\")"), Text); break;
		case E__E_AIAttackTypes__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[01E6BFA34C58F72DC6145EA5ECAC555A]\", \"478F335A4AEF6BA719633AA0EA142566\", \"Beam\")"), Text); break;
		case E__E_AIAttackTypes__pf::E__E_AIAttackTypes__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
