#include "NativizedAssets.h"
#include "MantleType__pf2727903198.h"
FText E__MantleType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__MantleType__pf>(InValue);
	switch(EnumValue)
	{
		case E__MantleType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7762548B493A2C51A1E60791D233A427]\", \"F65B781F45EC5BF15391908BDCE85702\", \"HighMantle\")"), Text); break;
		case E__MantleType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7762548B493A2C51A1E60791D233A427]\", \"B7B4F04A4DF2AFF3427CE8BC9517DCB2\", \"LowMantle\")"), Text); break;
		case E__MantleType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7762548B493A2C51A1E60791D233A427]\", \"ABF749FA409DE5EC5FB4DE81600CA7B0\", \"FallingCatch\")"), Text); break;
		case E__MantleType__pf::E__MantleType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Mantle Type MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
