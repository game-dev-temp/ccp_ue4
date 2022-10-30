#include "NativizedAssets.h"
#include "ENiagaraCollisionRadiusOptions__pf2855420827.h"
FText E__ENiagaraCollisionRadiusOptions__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraCollisionRadiusOptions__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraCollisionRadiusOptions__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B0E8A5124DDABB740C248CB6F6733361]\", \"C797880045595D9146147DBF924BF140\", \"Sprite\")"), Text); break;
		case E__ENiagaraCollisionRadiusOptions__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B0E8A5124DDABB740C248CB6F6733361]\", \"548132034DB24143E0787790861BCEA3\", \"Mesh\")"), Text); break;
		case E__ENiagaraCollisionRadiusOptions__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B0E8A5124DDABB740C248CB6F6733361]\", \"A697FADC4A1F7B3806C8F4A2B36E6B12\", \"Custom\")"), Text); break;
		case E__ENiagaraCollisionRadiusOptions__pf::E__ENiagaraCollisionRadiusOptions__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Collision Radius Options MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
