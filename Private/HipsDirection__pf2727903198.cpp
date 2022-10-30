#include "NativizedAssets.h"
#include "HipsDirection__pf2727903198.h"
FText E__HipsDirection__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__HipsDirection__pf>(InValue);
	switch(EnumValue)
	{
		case E__HipsDirection__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[30B5B81045EA691E309044B5DAD24A83]\", \"E00CA08C4BB2AA7A046475AD825D8FFB\", \"F\")"), Text); break;
		case E__HipsDirection__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[30B5B81045EA691E309044B5DAD24A83]\", \"AE69F0C84152818F95AA35A67B9DE712\", \"B\")"), Text); break;
		case E__HipsDirection__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[30B5B81045EA691E309044B5DAD24A83]\", \"D2437B304A683F299872159BC50AB7C9\", \"RF\")"), Text); break;
		case E__HipsDirection__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[30B5B81045EA691E309044B5DAD24A83]\", \"2C64AB93491ADF86C17DD785C495EDC9\", \"RB\")"), Text); break;
		case E__HipsDirection__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[30B5B81045EA691E309044B5DAD24A83]\", \"9453603E424B9EBA578B2BA2222209BB\", \"LF\")"), Text); break;
		case E__HipsDirection__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[30B5B81045EA691E309044B5DAD24A83]\", \"B0FC7035437061056906C4970EA18E6C\", \"LB\")"), Text); break;
		case E__HipsDirection__pf::E__HipsDirection__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Hips Direction MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
