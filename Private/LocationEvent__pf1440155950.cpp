#include "NativizedAssets.h"
#include "LocationEvent__pf1440155950.h"
FLocationEvent__pf1440155950::FLocationEvent__pf1440155950()
{
	bpv__Position_2_53BB17B340F2F8CBDB00619E8ACA8A8F__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__Velocity_4_6147F7B84D206402EBDD6CAEC72CB864__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__Acceleration_24_1A2DB79F440455DC0602B5A462D5F37F__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__RibbonID_18_5946869544681B0D2B8C48BAD6380BBC__pf.Index = 0;
	bpv__RibbonID_18_5946869544681B0D2B8C48BAD6380BBC__pf.AcquireTag = 0;
	bpv__NormalizedAge_11_A3BB598447BD630CE9BE078C0CB3DCAC__pf = 0.000000f;
	bpv__RandomNormalizedFloat_17_2CCDADFB4F6411E0CA2698A4EB43EB80__pf = 0.000000f;
}
PRAGMA_DISABLE_OPTIMIZATION
void FLocationEvent__pf1440155950::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{91, FBlueprintDependencyType(true, false, false, false)},  //  ScriptStruct /Script/Niagara.NiagaraID 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FLocationEvent__pf1440155950
{
	FRegisterHelper__FLocationEvent__pf1440155950()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Niagara/DefaultAssets/Structs/LocationEvent"), &FLocationEvent__pf1440155950::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FLocationEvent__pf1440155950 Instance;
};
FRegisterHelper__FLocationEvent__pf1440155950 FRegisterHelper__FLocationEvent__pf1440155950::Instance;
