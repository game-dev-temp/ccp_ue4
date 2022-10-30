#pragma once
#include "ENiagara_GPUCollisionType__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagara_GPUCollisionType.ENiagara_GPUCollisionType", OverrideNativeName="ENiagara_GPUCollisionType", EnumDisplayNameFn="E__ENiagara_GPUCollisionType__pf__GetUserFriendlyName") )
enum class E__ENiagara_GPUCollisionType__pf  : uint8
{
	NewEnumerator1 = 0 UMETA(OverrideName = "ENiagara_GPUCollisionType::NewEnumerator1"),
	NewEnumerator2 = 1 UMETA(OverrideName = "ENiagara_GPUCollisionType::NewEnumerator2"),
	NewEnumerator3 = 2 UMETA(OverrideName = "ENiagara_GPUCollisionType::NewEnumerator3"),
	E__ENiagara_GPUCollisionType__pf_MAX = 3 UMETA(OverrideName = "ENiagara_GPUCollisionType::ENiagara_MAX"),
};
FText E__ENiagara_GPUCollisionType__pf__GetUserFriendlyName(int32 InValue);
