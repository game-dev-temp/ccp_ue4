#include "NativizedAssets.h"
#include "MovementDirection__pf2727903198.h"
FText E__MovementDirection__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__MovementDirection__pf>(InValue);
	switch(EnumValue)
	{
		case E__MovementDirection__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0CEF0EDF42023090A15BCFA6C334A444]\", \"5571771C481D06E40AD47C8A3290ED18\", \"Forward\")"), Text); break;
		case E__MovementDirection__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0CEF0EDF42023090A15BCFA6C334A444]\", \"93D639F043100EC7DEF314BD2582CFB3\", \"Right\")"), Text); break;
		case E__MovementDirection__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0CEF0EDF42023090A15BCFA6C334A444]\", \"97D0BC754E9B08FAC3E21BB2217554F5\", \"Left\")"), Text); break;
		case E__MovementDirection__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0CEF0EDF42023090A15BCFA6C334A444]\", \"CD67A314415D26C850136A832C426A69\", \"Backward\")"), Text); break;
		case E__MovementDirection__pf::E__MovementDirection__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Movement Direction MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
