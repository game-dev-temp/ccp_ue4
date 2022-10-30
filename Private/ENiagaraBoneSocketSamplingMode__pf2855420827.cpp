#include "NativizedAssets.h"
#include "ENiagaraBoneSocketSamplingMode__pf2855420827.h"
FText E__ENiagaraBoneSocketSamplingMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraBoneSocketSamplingMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraBoneSocketSamplingMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[40591FC041D87B54022178A917AD35BB]\", \"2ECA71854855F98059F06FBD573F63CF\", \"Random (Filtered Bone or Sockets)\")"), Text); break;
		case E__ENiagaraBoneSocketSamplingMode__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[40591FC041D87B54022178A917AD35BB]\", \"22A6719B4B65104969F94782A95560D6\", \"Direct (Filtered Bone or Sockets)\")"), Text); break;
		case E__ENiagaraBoneSocketSamplingMode__pf::E__ENiagaraBoneSocketSamplingMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Bone Socket Sampling Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
