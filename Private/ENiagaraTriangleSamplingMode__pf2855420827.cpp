#include "NativizedAssets.h"
#include "ENiagaraTriangleSamplingMode__pf2855420827.h"
FText E__ENiagaraTriangleSamplingMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraTriangleSamplingMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraTriangleSamplingMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6051F80B4FEE42A98796869101E93F3F]\", \"75A0F8954B5C771755DEE5A67B53F31A\", \"Random (All Triangles)\")"), Text); break;
		case E__ENiagaraTriangleSamplingMode__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6051F80B4FEE42A98796869101E93F3F]\", \"FBD25CD845C8940FD6BBDF8B000FBD33\", \"Random (Sampling Regions)\")"), Text); break;
		case E__ENiagaraTriangleSamplingMode__pf::NewEnumerator7: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6051F80B4FEE42A98796869101E93F3F]\", \"2EB940114782D047C0CB2C8652CE756C\", \"Direct (All Triangles)\")"), Text); break;
		case E__ENiagaraTriangleSamplingMode__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6051F80B4FEE42A98796869101E93F3F]\", \"A83C3B1E4D205E849F95AE93D4C72849\", \"Direct (Sampling Regions)\")"), Text); break;
		case E__ENiagaraTriangleSamplingMode__pf::E__ENiagaraTriangleSamplingMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Triangle Sampling Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
