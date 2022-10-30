#include "NativizedAssets.h"
#include "S_Pickupinfo__pf4194264409.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
FS_Pickupinfo__pf4194264409::FS_Pickupinfo__pf4194264409()
{
	bpv__PickupType_22_E0AB3CDB4F696F48808D34A3993ED85B__pf = E__E_PickupTypes__pf::NewEnumerator0;
	bpv__PickupImage_10_A4EA764045786AD9A812969E2837BF03__pf = nullptr;
	bpv__LightDamage_25_909D8F7345520B6C716F7CAA487B865B__pf = 0.000000f;
	bpv__HeavyDamage_26_53D2251648CCE8FC8CBBF5B4A5D35124__pf = 0.000000f;
	bpv__Armor_17_6502631540B865EBC6572FB44963FEE2__pf = 0.000000f;
	bpv__BlockValue_18_E2EC433F4C3FD78E0296FB994804CF01__pf = 0.000000f;
	bpv__BlendspaceInt_19_392162DB48797DE15D20508292F9585D__pf = 0;
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_Pickupinfo__pf4194264409::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Texture2D 
		{90, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/Pickup/E_PickupTypes.E_PickupTypes 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_Pickupinfo__pf4194264409
{
	FRegisterHelper__FS_Pickupinfo__pf4194264409()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/Pickup/S_Pickupinfo"), &FS_Pickupinfo__pf4194264409::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_Pickupinfo__pf4194264409 Instance;
};
FRegisterHelper__FS_Pickupinfo__pf4194264409 FRegisterHelper__FS_Pickupinfo__pf4194264409::Instance;
