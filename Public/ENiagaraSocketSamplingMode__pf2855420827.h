#pragma once
#include "ENiagaraSocketSamplingMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagaraSocketSamplingMode.ENiagaraSocketSamplingMode", OverrideNativeName="ENiagaraSocketSamplingMode", EnumDisplayNameFn="E__ENiagaraSocketSamplingMode__pf__GetUserFriendlyName") )
enum class E__ENiagaraSocketSamplingMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagaraSocketSamplingMode::NewEnumerator0"),
	NewEnumerator5 = 1 UMETA(OverrideName = "ENiagaraSocketSamplingMode::NewEnumerator5"),
	E__ENiagaraSocketSamplingMode__pf_MAX = 2 UMETA(OverrideName = "ENiagaraSocketSamplingMode::ENiagaraSocketSamplingMode_MAX"),
};
FText E__ENiagaraSocketSamplingMode__pf__GetUserFriendlyName(int32 InValue);
