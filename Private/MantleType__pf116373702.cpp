#include "NativizedAssets.h"
#include "MantleType__pf116373702.h"
FText E__MantleType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__MantleType__pf>(InValue);
	switch(EnumValue)
	{
		case E__MantleType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[86039B5A4D0437B9ACA403A96EA8E7FA]\", \"EB6E27A84E2CBA3100D47A811914C95F\", \"HighMantle\")"), Text); break;
		case E__MantleType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[86039B5A4D0437B9ACA403A96EA8E7FA]\", \"3F2B5F93455C68BA7505449DFF493EFD\", \"LowMantle\")"), Text); break;
		case E__MantleType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[86039B5A4D0437B9ACA403A96EA8E7FA]\", \"8E970DF441DA0F0F0DDBE5AE27CE5EA7\", \"FallingCatch\")"), Text); break;
		case E__MantleType__pf::E__MantleType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Mantle Type 0 MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
