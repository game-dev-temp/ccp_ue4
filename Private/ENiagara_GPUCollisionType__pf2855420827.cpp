#include "NativizedAssets.h"
#include "ENiagara_GPUCollisionType__pf2855420827.h"
FText E__ENiagara_GPUCollisionType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagara_GPUCollisionType__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagara_GPUCollisionType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5847AD594C8B72FCE5DA66B2BA72FFA8]\", \"F66333014D754DF3F8B7BBABE57A80AE\", \"GPU Depth Buffer\")"), Text); break;
		case E__ENiagara_GPUCollisionType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5847AD594C8B72FCE5DA66B2BA72FFA8]\", \"AB80D7F74A2EFED5C628C9B4A4AA59F9\", \"GPU Distance Fields\")"), Text); break;
		case E__ENiagara_GPUCollisionType__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5847AD594C8B72FCE5DA66B2BA72FFA8]\", \"7E282BBE443D6D9BAA26BA8947846A4F\", \"Analytical Planes\")"), Text); break;
		case E__ENiagara_GPUCollisionType__pf::E__ENiagara_GPUCollisionType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
