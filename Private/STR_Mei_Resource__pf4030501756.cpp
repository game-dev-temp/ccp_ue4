#include "NativizedAssets.h"
#include "STR_Mei_Resource__pf4030501756.h"
FSTR_Mei_Resource__pf4030501756::FSTR_Mei_Resource__pf4030501756()
{
	bpv__ResourceType_6_D839516245388D23CCB06795553F0FCF__pf = E__E_Mei_ResourceType__pf::NewEnumerator0;
	bpv__Value_5_D8F48190416B9B24013CA5AE0F13F196__pf = 0.000000f;
}
PRAGMA_DISABLE_OPTIMIZATION
void FSTR_Mei_Resource__pf4030501756::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_ResourceType.E_Mei_ResourceType 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FSTR_Mei_Resource__pf4030501756
{
	FRegisterHelper__FSTR_Mei_Resource__pf4030501756()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/BuildingSystem/Structures/STR_Mei_Resource"), &FSTR_Mei_Resource__pf4030501756::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FSTR_Mei_Resource__pf4030501756 Instance;
};
FRegisterHelper__FSTR_Mei_Resource__pf4030501756 FRegisterHelper__FSTR_Mei_Resource__pf4030501756::Instance;
