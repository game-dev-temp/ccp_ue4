#include "NativizedAssets.h"
#include "ENiagaraRestitutionMergeType__pf2855420827.h"
FText E__ENiagaraRestitutionMergeType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraRestitutionMergeType__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraRestitutionMergeType__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5D5AFBC840956F1BCB5148BF53A5DF9E]\", \"B48A576E47E3FDEF13AEA8A866DD2955\", \"Ignore\")"), Text); break;
		case E__ENiagaraRestitutionMergeType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5D5AFBC840956F1BCB5148BF53A5DF9E]\", \"1CEB75324280885CD4D7D0B707D02308\", \"Min\")"), Text); break;
		case E__ENiagaraRestitutionMergeType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5D5AFBC840956F1BCB5148BF53A5DF9E]\", \"74DB0CF04260CAC30B9092BF5A488DC9\", \"Max\")"), Text); break;
		case E__ENiagaraRestitutionMergeType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5D5AFBC840956F1BCB5148BF53A5DF9E]\", \"9137783741E99794513339AA4E39D734\", \"Average\")"), Text); break;
		case E__ENiagaraRestitutionMergeType__pf::E__ENiagaraRestitutionMergeType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Restitution Merge Type MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
