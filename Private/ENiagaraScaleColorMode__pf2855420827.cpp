#include "NativizedAssets.h"
#include "ENiagaraScaleColorMode__pf2855420827.h"
FText E__ENiagaraScaleColorMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraScaleColorMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraScaleColorMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DCC15DCD48BAB8AB093EF49563C3B2BF]\", \"5CC6955C43D0A1A6B1431F87F2A5C4C6\", \"RGB and Alpha Separately\")"), Text); break;
		case E__ENiagaraScaleColorMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DCC15DCD48BAB8AB093EF49563C3B2BF]\", \"7E47B90F463C457225E4A69BA2905F62\", \"RGBA Together\")"), Text); break;
		case E__ENiagaraScaleColorMode__pf::E__ENiagaraScaleColorMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Scale Color Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
