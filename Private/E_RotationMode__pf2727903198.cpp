#include "NativizedAssets.h"
#include "E_RotationMode__pf2727903198.h"
FText E__E_RotationMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_RotationMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_RotationMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EDE4A6C846DBED02335E52831EFC455C]\", \"E98FDBD74B0EDF23E37E828C291FDFDD\", \"VelocityDirection\")"), Text); break;
		case E__E_RotationMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EDE4A6C846DBED02335E52831EFC455C]\", \"9E10A2DD4E959AD06CD73C8C548FD6D2\", \"LookingDirection\")"), Text); break;
		case E__E_RotationMode__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EDE4A6C846DBED02335E52831EFC455C]\", \"855DFFA245CA17EBF00295A85E2F1C1A\", \"Aiming\")"), Text); break;
		case E__E_RotationMode__pf::E__E_RotationMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
