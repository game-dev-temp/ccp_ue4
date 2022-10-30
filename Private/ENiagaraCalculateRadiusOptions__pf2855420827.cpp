#include "NativizedAssets.h"
#include "ENiagaraCalculateRadiusOptions__pf2855420827.h"
FText E__ENiagaraCalculateRadiusOptions__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraCalculateRadiusOptions__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraCalculateRadiusOptions__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AFB1728E4BC746F1843677A4AE912338]\", \"178C652A426A0ECE1E5612B9C2BE87FD\", \"Bounds\")"), Text); break;
		case E__ENiagaraCalculateRadiusOptions__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AFB1728E4BC746F1843677A4AE912338]\", \"B1F0B6904836E7A3596B48B57ED3D9C6\", \"Minimum Axis\")"), Text); break;
		case E__ENiagaraCalculateRadiusOptions__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AFB1728E4BC746F1843677A4AE912338]\", \"BE25843A48E728F40F8A67A0C775793B\", \"Maximum Axis\")"), Text); break;
		case E__ENiagaraCalculateRadiusOptions__pf::E__ENiagaraCalculateRadiusOptions__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Calculate Radius Options MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
