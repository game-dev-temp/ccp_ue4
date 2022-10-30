#include "NativizedAssets.h"
#include "E_InteractType__pf2151050371.h"
FText E__E_InteractType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_InteractType__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_InteractType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D932914E441A565B37023DADB685210D]\", \"136070A54AD5CAA1A633028747134878\", \"Pickups\")"), Text); break;
		case E__E_InteractType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D932914E441A565B37023DADB685210D]\", \"F2818ADE4F556E68575216A4783D4277\", \"Doors\")"), Text); break;
		case E__E_InteractType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D932914E441A565B37023DADB685210D]\", \"47015D5942A234761DF2EA844FF0D093\", \"Chests\")"), Text); break;
		case E__E_InteractType__pf::E__E_InteractType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
