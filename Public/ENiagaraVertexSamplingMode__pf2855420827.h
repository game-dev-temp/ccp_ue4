#pragma once
#include "ENiagaraVertexSamplingMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagaraVertexSamplingMode.ENiagaraVertexSamplingMode", OverrideNativeName="ENiagaraVertexSamplingMode", EnumDisplayNameFn="E__ENiagaraVertexSamplingMode__pf__GetUserFriendlyName") )
enum class E__ENiagaraVertexSamplingMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagaraVertexSamplingMode::NewEnumerator0"),
	NewEnumerator5 = 1 UMETA(OverrideName = "ENiagaraVertexSamplingMode::NewEnumerator5"),
	NewEnumerator7 = 2 UMETA(OverrideName = "ENiagaraVertexSamplingMode::NewEnumerator7"),
	NewEnumerator8 = 3 UMETA(OverrideName = "ENiagaraVertexSamplingMode::NewEnumerator8"),
	E__ENiagaraVertexSamplingMode__pf_MAX = 4 UMETA(OverrideName = "ENiagaraVertexSamplingMode::ENiagaraVertexSamplingMode_MAX"),
};
FText E__ENiagaraVertexSamplingMode__pf__GetUserFriendlyName(int32 InValue);
