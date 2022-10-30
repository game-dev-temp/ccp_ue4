#include "NativizedAssets.h"
#include "E_Mei_ChangeVariableOperation__pf424568635.h"
FText E__E_Mei_ChangeVariableOperation__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Mei_ChangeVariableOperation__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Mei_ChangeVariableOperation__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2E2DF13A4F5D7BFA4E2C75B0A0A02C88]\", \"F3E71CB9440A188AE5D9F88BC302CD11\", \"Increase\")"), Text); break;
		case E__E_Mei_ChangeVariableOperation__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2E2DF13A4F5D7BFA4E2C75B0A0A02C88]\", \"17274E4F44DC50CD64B018BD60659C16\", \"Decrease\")"), Text); break;
		case E__E_Mei_ChangeVariableOperation__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2E2DF13A4F5D7BFA4E2C75B0A0A02C88]\", \"E60A141C497D46039557ABADA77DE390\", \"Set\")"), Text); break;
		case E__E_Mei_ChangeVariableOperation__pf::E__E_Mei_ChangeVariableOperation__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E Mei MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
