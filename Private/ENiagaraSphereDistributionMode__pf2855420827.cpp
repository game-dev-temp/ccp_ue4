#include "NativizedAssets.h"
#include "ENiagaraSphereDistributionMode__pf2855420827.h"
FText E__ENiagaraSphereDistributionMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraSphereDistributionMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraSphereDistributionMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DF828F1C4AC74B176EC5E4BE7518A41F]\", \"BA4A47B147D2CDCDB68DA9A900EA83BA\", \"Random\")"), Text); break;
		case E__ENiagaraSphereDistributionMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DF828F1C4AC74B176EC5E4BE7518A41F]\", \"C6287364436F79B6695EA6A72D6B9C30\", \"Direct\")"), Text); break;
		case E__ENiagaraSphereDistributionMode__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DF828F1C4AC74B176EC5E4BE7518A41F]\", \"B457966947726D3AFE9933A04F80942C\", \"Uniform\")"), Text); break;
		case E__ENiagaraSphereDistributionMode__pf::E__ENiagaraSphereDistributionMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Sphere Distribution Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
