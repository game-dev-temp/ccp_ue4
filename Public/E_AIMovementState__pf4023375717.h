#pragma once
#include "E_AIMovementState__pf4023375717.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/AI/Enemy/E_AIMovementState.E_AIMovementState", OverrideNativeName="E_AIMovementState", EnumDisplayNameFn="E__E_AIMovementState__pf__GetUserFriendlyName") )
enum class E__E_AIMovementState__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_AIMovementState::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_AIMovementState::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_AIMovementState::NewEnumerator2"),
	E__E_AIMovementState__pf_MAX = 3 UMETA(OverrideName = "E_AIMovementState::E_MAX"),
};
FText E__E_AIMovementState__pf__GetUserFriendlyName(int32 InValue);
