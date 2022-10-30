#pragma once
#include "E_PlayerAttacks__pf4244024795.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/Character/E_PlayerAttacks.E_PlayerAttacks", OverrideNativeName="E_PlayerAttacks", EnumDisplayNameFn="E__E_PlayerAttacks__pf__GetUserFriendlyName") )
enum class E__E_PlayerAttacks__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_PlayerAttacks::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_PlayerAttacks::NewEnumerator1"),
	NewEnumerator3 = 2 UMETA(OverrideName = "E_PlayerAttacks::NewEnumerator3"),
	NewEnumerator2 = 3 UMETA(OverrideName = "E_PlayerAttacks::NewEnumerator2"),
	E__E_PlayerAttacks__pf_MAX = 4 UMETA(OverrideName = "E_PlayerAttacks::E_MAX"),
};
FText E__E_PlayerAttacks__pf__GetUserFriendlyName(int32 InValue);
