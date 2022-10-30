#include "NativizedAssets.h"
#include "ENiagaraSkelSamplingModeFull__pf2855420827.h"
FText E__ENiagaraSkelSamplingModeFull__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraSkelSamplingModeFull__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraSkelSamplingModeFull__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DCF384454B231D8519F5C886E8C1F3E8]\", \"F39635AC426BD124277E828C65B48FC2\", \"Skeleton (Bones)\")"), Text); break;
		case E__ENiagaraSkelSamplingModeFull__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DCF384454B231D8519F5C886E8C1F3E8]\", \"F30F64B14D898F8875C19EAFB85FF94D\", \"Skeleton (Sockets)\")"), Text); break;
		case E__ENiagaraSkelSamplingModeFull__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DCF384454B231D8519F5C886E8C1F3E8]\", \"B5AC5B9A42C305D76238E9896E2D712F\", \"Skeleton (Bones and Sockets)\")"), Text); break;
		case E__ENiagaraSkelSamplingModeFull__pf::NewEnumerator7: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DCF384454B231D8519F5C886E8C1F3E8]\", \"E38FB2FF496A02F1903C24BFC1DCA963\", \"Surface (Triangles)\")"), Text); break;
		case E__ENiagaraSkelSamplingModeFull__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DCF384454B231D8519F5C886E8C1F3E8]\", \"24318C354F1A72E908C63CB7858A308C\", \"Surface (Vertices)\")"), Text); break;
		case E__ENiagaraSkelSamplingModeFull__pf::E__ENiagaraSkelSamplingModeFull__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Skel Sampling Mode Full MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
