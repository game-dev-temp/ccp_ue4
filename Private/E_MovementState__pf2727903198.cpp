#include "NativizedAssets.h"
#include "E_MovementState__pf2727903198.h"
FText E__E_MovementState__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_MovementState__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_MovementState__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0509D5DB4434EFE7EA01E188CCA3607E]\", \"F322873E478F9667944F8FABD39A305D\", \"None\")"), Text); break;
		case E__E_MovementState__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0509D5DB4434EFE7EA01E188CCA3607E]\", \"F37D619C43FF786B364F709AC84E521E\", \"Grounded\")"), Text); break;
		case E__E_MovementState__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0509D5DB4434EFE7EA01E188CCA3607E]\", \"F63B99734026B8F837A51F9B002CD5CE\", \"In Air\")"), Text); break;
		case E__E_MovementState__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0509D5DB4434EFE7EA01E188CCA3607E]\", \"9995A9B9494D0FB3FC5D2A9D642C3192\", \"Mantling\")"), Text); break;
		case E__E_MovementState__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0509D5DB4434EFE7EA01E188CCA3607E]\", \"5EAC50014BD7AED4B0FD6F87E5B4A6FC\", \"Ragdoll\")"), Text); break;
		case E__E_MovementState__pf::E__E_MovementState__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
