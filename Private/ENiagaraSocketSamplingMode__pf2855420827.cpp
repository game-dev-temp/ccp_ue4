#include "NativizedAssets.h"
#include "ENiagaraSocketSamplingMode__pf2855420827.h"
FText E__ENiagaraSocketSamplingMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraSocketSamplingMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraSocketSamplingMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DDBF28384A88A63D0BE771974CD0DC51]\", \"DB5BDAB4487457401E2D8A97E366BF61\", \"Random (Filtered Sockets)\")"), Text); break;
		case E__ENiagaraSocketSamplingMode__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DDBF28384A88A63D0BE771974CD0DC51]\", \"90D7EC094C93C89DB057769F2DBD67D2\", \"Direct (Filtered Sockets)\")"), Text); break;
		case E__ENiagaraSocketSamplingMode__pf::E__ENiagaraSocketSamplingMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Socket Sampling Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
