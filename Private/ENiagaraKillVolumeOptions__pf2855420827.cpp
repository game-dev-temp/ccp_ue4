#include "NativizedAssets.h"
#include "ENiagaraKillVolumeOptions__pf2855420827.h"
FText E__ENiagaraKillVolumeOptions__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraKillVolumeOptions__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraKillVolumeOptions__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[76650C2F436C34B2EF936D800CF94A76]\", \"DBC659384B30F5C904383EAFED810F7D\", \"Sphere\")"), Text); break;
		case E__ENiagaraKillVolumeOptions__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[76650C2F436C34B2EF936D800CF94A76]\", \"D91712884D81C5B1489FC38C8A9E56DD\", \"Box\")"), Text); break;
		case E__ENiagaraKillVolumeOptions__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[76650C2F436C34B2EF936D800CF94A76]\", \"83D99FD241BF56329D23FEA6E3FCE5A7\", \"Plane\")"), Text); break;
		case E__ENiagaraKillVolumeOptions__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[76650C2F436C34B2EF936D800CF94A76]\", \"C45FAB3F4832127988DD0DB7B233CC4B\", \"Slab\")"), Text); break;
		case E__ENiagaraKillVolumeOptions__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[76650C2F436C34B2EF936D800CF94A76]\", \"74D49B3F4410CF59977AE29003242CA7\", \"Cone\")"), Text); break;
		case E__ENiagaraKillVolumeOptions__pf::E__ENiagaraKillVolumeOptions__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Kill Volume Options MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
