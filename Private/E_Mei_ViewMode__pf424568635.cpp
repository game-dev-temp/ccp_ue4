#include "NativizedAssets.h"
#include "E_Mei_ViewMode__pf424568635.h"
FText E__E_Mei_ViewMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Mei_ViewMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Mei_ViewMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[659B0CC641A24606B1E9B9BEDDCF2162]\", \"39CC9D344B33FF4FA4F5DFBD55C039E7\", \"FirstPerson\")"), Text); break;
		case E__E_Mei_ViewMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[659B0CC641A24606B1E9B9BEDDCF2162]\", \"FDE28D024934833E3AD50EB0812B0428\", \"ThirdPerson\")"), Text); break;
		case E__E_Mei_ViewMode__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[659B0CC641A24606B1E9B9BEDDCF2162]\", \"E8A382D743C6D4527A76D08279CC8100\", \"TopDown\")"), Text); break;
		case E__E_Mei_ViewMode__pf::E__E_Mei_ViewMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E Mei MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
