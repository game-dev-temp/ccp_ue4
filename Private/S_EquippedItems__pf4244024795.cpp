#include "NativizedAssets.h"
#include "S_EquippedItems__pf4244024795.h"
FS_EquippedItems__pf4244024795::FS_EquippedItems__pf4244024795()
{
	bpv__EquippedWeapon_3_2AEADD3C4CED507C2F25B7B821C8A7A4__pf = false;
	bpv__EquippedShield_5_0609C5CD44C254686A858AB0ECD355AF__pf = false;
	bpv__EquippedLight_6_05598BE34059841F652C64B36AE9E36C__pf = false;
	bpv__EquippedStaff_8_2F1945F749BA6AF922ED16B05891C3EC__pf = false;
	bpv__EquippedConsumable_10_719331B64D895A8CAD0490BA2F3AE114__pf = false;
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_EquippedItems__pf4244024795::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_EquippedItems__pf4244024795
{
	FRegisterHelper__FS_EquippedItems__pf4244024795()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/Character/S_EquippedItems"), &FS_EquippedItems__pf4244024795::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_EquippedItems__pf4244024795 Instance;
};
FRegisterHelper__FS_EquippedItems__pf4244024795 FRegisterHelper__FS_EquippedItems__pf4244024795::Instance;
