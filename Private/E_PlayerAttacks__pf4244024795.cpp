#include "NativizedAssets.h"
#include "E_PlayerAttacks__pf4244024795.h"
FText E__E_PlayerAttacks__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_PlayerAttacks__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_PlayerAttacks__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[21D219DB4C4E3E4C334D79B7451CE99B]\", \"050F2C3D4316F07A27E0DEACADBD0835\", \"LightAttack\")"), Text); break;
		case E__E_PlayerAttacks__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[21D219DB4C4E3E4C334D79B7451CE99B]\", \"E478F31A407CFFEF51D86CB889734CCE\", \"HeavyAttack\")"), Text); break;
		case E__E_PlayerAttacks__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[21D219DB4C4E3E4C334D79B7451CE99B]\", \"35CCBFF648F3307C1ACFA79165F32E2D\", \"ChargeAttack\")"), Text); break;
		case E__E_PlayerAttacks__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[21D219DB4C4E3E4C334D79B7451CE99B]\", \"0D593D2042AADBC4DBA364A9457553EF\", \"Blocking\")"), Text); break;
		case E__E_PlayerAttacks__pf::E__E_PlayerAttacks__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
