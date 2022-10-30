#include "NativizedAssets.h"
#include "ENiagaraMeshTransforms__pf2855420827.h"
FText E__ENiagaraMeshTransforms__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraMeshTransforms__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraMeshTransforms__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E69F7F14A499002B138CE96F0523BF5]\", \"D8B7E68C4E52366DBB981EA18CA89ED1\", \"Simulation\")"), Text); break;
		case E__ENiagaraMeshTransforms__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E69F7F14A499002B138CE96F0523BF5]\", \"464EA933411D263CCD0978836A41124A\", \"World\")"), Text); break;
		case E__ENiagaraMeshTransforms__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E69F7F14A499002B138CE96F0523BF5]\", \"0E8D06034BC9326AB0E787802C8775DB\", \"Local\")"), Text); break;
		case E__ENiagaraMeshTransforms__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E69F7F14A499002B138CE96F0523BF5]\", \"6259CC844D7AFB40CE274DA4E96C6C99\", \"Mesh\")"), Text); break;
		case E__ENiagaraMeshTransforms__pf::E__ENiagaraMeshTransforms__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Mesh Transforms MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
