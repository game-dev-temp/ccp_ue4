#pragma once
#include "E_MovementState__pf2727903198.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/copy_from_als_enums/E_MovementState.E_MovementState", OverrideNativeName="E_MovementState", EnumDisplayNameFn="E__E_MovementState__pf__GetUserFriendlyName") )
enum class E__E_MovementState__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_MovementState::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_MovementState::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_MovementState::NewEnumerator2"),
	NewEnumerator4 = 3 UMETA(OverrideName = "E_MovementState::NewEnumerator4"),
	NewEnumerator3 = 4 UMETA(OverrideName = "E_MovementState::NewEnumerator3"),
	E__E_MovementState__pf_MAX = 5 UMETA(OverrideName = "E_MovementState::E_MAX"),
};
FText E__E_MovementState__pf__GetUserFriendlyName(int32 InValue);
