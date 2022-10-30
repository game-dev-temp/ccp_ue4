#include "NativizedAssets.h"
#include "E_PickupTypes__pf4194264409.h"
FText E__E_PickupTypes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_PickupTypes__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_PickupTypes__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[85E2CDBE41C2E09192C71FBE52F57388]\", \"88FB0E6A4556272A97C9528F25129CDE\", \"Weapon\")"), Text); break;
		case E__E_PickupTypes__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[85E2CDBE41C2E09192C71FBE52F57388]\", \"E2256B014185556765FF7C9A83E70FDB\", \"Shield\")"), Text); break;
		case E__E_PickupTypes__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[85E2CDBE41C2E09192C71FBE52F57388]\", \"445B6F2B44C18318516C4DBDE2C2F3EA\", \"Light\")"), Text); break;
		case E__E_PickupTypes__pf::E__E_PickupTypes__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
