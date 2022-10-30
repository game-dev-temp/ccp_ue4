#pragma once
#include "ENiagara_CPUCollisionType__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagara_CPUCollisionType.ENiagara_CPUCollisionType", OverrideNativeName="ENiagara_CPUCollisionType", EnumDisplayNameFn="E__ENiagara_CPUCollisionType__pf__GetUserFriendlyName") )
enum class E__ENiagara_CPUCollisionType__pf  : uint8
{
	NewEnumerator1 = 0 UMETA(OverrideName = "ENiagara_CPUCollisionType::NewEnumerator1"),
	NewEnumerator3 = 1 UMETA(OverrideName = "ENiagara_CPUCollisionType::NewEnumerator3"),
	E__ENiagara_CPUCollisionType__pf_MAX = 2 UMETA(OverrideName = "ENiagara_CPUCollisionType::ENiagara_MAX"),
};
FText E__ENiagara_CPUCollisionType__pf__GetUserFriendlyName(int32 InValue);
