#include "NativizedAssets.h"
#include "ENiagaraFrictionMergeType__pf2855420827.h"
FText E__ENiagaraFrictionMergeType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraFrictionMergeType__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraFrictionMergeType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[51B55177401B1BB9324FE9A454156F2F]\", \"51F8262247C719F913E015B5E4BFAF8D\", \"Ignore\")"), Text); break;
		case E__ENiagaraFrictionMergeType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[51B55177401B1BB9324FE9A454156F2F]\", \"C1E883394BC9AEE5AF1C718712A13FC1\", \"Average\")"), Text); break;
		case E__ENiagaraFrictionMergeType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[51B55177401B1BB9324FE9A454156F2F]\", \"21FAC3D14EECC3A447E7C0A3AB5475EE\", \"Min\")"), Text); break;
		case E__ENiagaraFrictionMergeType__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[51B55177401B1BB9324FE9A454156F2F]\", \"0CFB2E394711F98971616894C6D488C0\", \"Max\")"), Text); break;
		case E__ENiagaraFrictionMergeType__pf::E__ENiagaraFrictionMergeType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Friction Merge Type MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
