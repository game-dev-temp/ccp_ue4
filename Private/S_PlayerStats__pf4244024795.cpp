#include "NativizedAssets.h"
#include "S_PlayerStats__pf4244024795.h"
FS_PlayerStats__pf4244024795::FS_PlayerStats__pf4244024795()
{
	bpv__CurrentHealth_3_1E66A4DA44A2F7EAB6B277BD7D825224__pf = 0.000000f;
	bpv__MaxHealth_5_E64C5A5A494BA87CC3114CB325EAB047__pf = 0.000000f;
	bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf = 0.000000f;
	bpv__MaxStamina_9_673463104FFD0F393D82E48AA88F409E__pf = 0.000000f;
	bpv__CurrentMana_12_B816CBB64B019D056822B1A87DD0A652__pf = 0.000000f;
	bpv__MaxMana_20_D2377E564CA3E00F0EC1EAA10239904D__pf = 0.000000f;
	bpv__ArmorValue_14_872817194819E8CF9509179528FF0DBB__pf = 0.000000f;
	bpv__SoulsCollected_17_42D7C17A4D6F9590461E41B199396162__pf = 0;
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_PlayerStats__pf4244024795::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_PlayerStats__pf4244024795
{
	FRegisterHelper__FS_PlayerStats__pf4244024795()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/Character/S_PlayerStats"), &FS_PlayerStats__pf4244024795::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_PlayerStats__pf4244024795 Instance;
};
FRegisterHelper__FS_PlayerStats__pf4244024795 FRegisterHelper__FS_PlayerStats__pf4244024795::Instance;
