#include "NativizedAssets.h"
#include "E_MovementAction__pf2727903198.h"
FText E__E_MovementAction__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_MovementAction__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_MovementAction__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1BCFD6BA4DE715F7E48F9F88A25FD1E5]\", \"235C7C4E40B1518AB1B84F9D3ABB2061\", \"None\")"), Text); break;
		case E__E_MovementAction__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1BCFD6BA4DE715F7E48F9F88A25FD1E5]\", \"09DD904C4D0DC4C262C5DBB04BBC02B5\", \"LowMantle\")"), Text); break;
		case E__E_MovementAction__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1BCFD6BA4DE715F7E48F9F88A25FD1E5]\", \"ABDB2B1A438E415419C54396517A8144\", \"HighMantle\")"), Text); break;
		case E__E_MovementAction__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1BCFD6BA4DE715F7E48F9F88A25FD1E5]\", \"BAA2F616460FEBED9E75AD89EB035CE8\", \"Rolling\")"), Text); break;
		case E__E_MovementAction__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1BCFD6BA4DE715F7E48F9F88A25FD1E5]\", \"896210324AB5CDBDF744C7AF8E89347F\", \"GettingUp\")"), Text); break;
		case E__E_MovementAction__pf::E__E_MovementAction__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
