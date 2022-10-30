#pragma once
#include "E_AIAttackTypes__pf4023375717.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/AI/Enemy/E_AIAttackTypes.E_AIAttackTypes", OverrideNativeName="E_AIAttackTypes", EnumDisplayNameFn="E__E_AIAttackTypes__pf__GetUserFriendlyName") )
enum class E__E_AIAttackTypes__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_AIAttackTypes::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_AIAttackTypes::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_AIAttackTypes::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "E_AIAttackTypes::NewEnumerator3"),
	NewEnumerator4 = 4 UMETA(OverrideName = "E_AIAttackTypes::NewEnumerator4"),
	E__E_AIAttackTypes__pf_MAX = 5 UMETA(OverrideName = "E_AIAttackTypes::E_MAX"),
};
FText E__E_AIAttackTypes__pf__GetUserFriendlyName(int32 InValue);
