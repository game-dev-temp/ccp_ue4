#include "NativizedAssets.h"
#include "HipsDirection__pf116373702.h"
FText E__HipsDirection__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__HipsDirection__pf>(InValue);
	switch(EnumValue)
	{
		case E__HipsDirection__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6702C0DB4D901003292A38B288D2F809]\", \"9A8976BD4D407689D4A87B912F3A285A\", \"F\")"), Text); break;
		case E__HipsDirection__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6702C0DB4D901003292A38B288D2F809]\", \"C82059BA41340088B43BD39ECCDDD604\", \"B\")"), Text); break;
		case E__HipsDirection__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6702C0DB4D901003292A38B288D2F809]\", \"4F9C89B542FCB4E98E25DFA43256FA48\", \"RF\")"), Text); break;
		case E__HipsDirection__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6702C0DB4D901003292A38B288D2F809]\", \"FC264A594382374A581635A46DA4334E\", \"RB\")"), Text); break;
		case E__HipsDirection__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6702C0DB4D901003292A38B288D2F809]\", \"B50872D2465AAFE30F2E6B9E5456FA48\", \"LF\")"), Text); break;
		case E__HipsDirection__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6702C0DB4D901003292A38B288D2F809]\", \"E5098A314DC0A5CE9A35F9AA85123EB5\", \"LB\")"), Text); break;
		case E__HipsDirection__pf::E__HipsDirection__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Hips Direction 0 MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
