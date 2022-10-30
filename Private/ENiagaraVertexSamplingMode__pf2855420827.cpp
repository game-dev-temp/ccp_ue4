#include "NativizedAssets.h"
#include "ENiagaraVertexSamplingMode__pf2855420827.h"
FText E__ENiagaraVertexSamplingMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraVertexSamplingMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraVertexSamplingMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FC0310304400617626DD32A60AF255D0]\", \"EB635AAD48AC5DF9AC2AB0918B305A45\", \"Random (All Vertices)\")"), Text); break;
		case E__ENiagaraVertexSamplingMode__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FC0310304400617626DD32A60AF255D0]\", \"BAE5D03E477EAB45C6908AA2E0CBF3B2\", \"Random (Sampling Regions)\")"), Text); break;
		case E__ENiagaraVertexSamplingMode__pf::NewEnumerator7: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FC0310304400617626DD32A60AF255D0]\", \"C709730E47D19F3F6087DFBC4D75292A\", \"Direct (All Vertices)\")"), Text); break;
		case E__ENiagaraVertexSamplingMode__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FC0310304400617626DD32A60AF255D0]\", \"B13496EE4A16BB71157160A6529C7161\", \"Direct (Sampling Regions)\")"), Text); break;
		case E__ENiagaraVertexSamplingMode__pf::E__ENiagaraVertexSamplingMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Vertex Sampling Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
