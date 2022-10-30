#include "NativizedAssets.h"
#include "ENiagara_CPUCollisionType__pf2855420827.h"
FText E__ENiagara_CPUCollisionType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagara_CPUCollisionType__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagara_CPUCollisionType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[10A637744C879C3D7E5EC28550715141]\", \"298B5B434E129D9A745FDE84BCF03F2C\", \"Ray Traced\")"), Text); break;
		case E__ENiagara_CPUCollisionType__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[10A637744C879C3D7E5EC28550715141]\", \"A039387E47CBF1F94401B1953B35D535\", \"Analytical Planes\")"), Text); break;
		case E__ENiagara_CPUCollisionType__pf::E__ENiagara_CPUCollisionType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
