#include "NativizedAssets.h"
#include "E_Mei_BuildingType__pf424568635.h"
FText E__E_Mei_BuildingType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Mei_BuildingType__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Mei_BuildingType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"C2DCCA854B7C1ABE47FB94B27F1B4B31\", \"None\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"0263A5F4415743DDF82E82AFDCBD9EC6\", \"Foundation\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator12: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"B6D85C5A411C95898BEDCCA1085FB9B8\", \"FoundationTriangle\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"D769997E4FB8E907600119A32D37FDE3\", \"Ramp\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"45876CBB4F7A20C73031BB921ECF1AAB\", \"Wall\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"EC2A66E049BC696498C060AE6B42516E\", \"DoorFrame\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"508F37E7434071ABDE37948B8A7A516E\", \"WindowFrame\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"87932E3C470086E4F1D265952944B02A\", \"Ceiling\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator13: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"2F70C73F44D695450AF4799F16ED6F9F\", \"CeilingTriangle\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator7: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"4565AE62421399EEE423B4AE58BF4403\", \"Stairs\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"1D59B69B4F266BE74E45E5A1075FD94C\", \"Door\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator9: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"810D7A654444F7B9336487941D1E1D63\", \"Window\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator10: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"4DD15B294B90D66CFF4A2DA42FD6E07A\", \"FloorObject\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator11: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"3D00D36B49189B2329E2098E2CD4C5A6\", \"DoorLock\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator14: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"4E374E724B23E25EC65477A50FD14D69\", \"WallObject\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator17: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"F7C9171344F297583C6AFA8823B755A9\", \"Fence\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator15: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"08F67230438CCE9A9F99D989E47B07AF\", \"RoofWall\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator18: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"5C42ED6F42CC0117443E2189DC65F459\", \"RoofWallTop\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator16: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"FED39644436E971EB0EE6480DEF87812\", \"Roof\")"), Text); break;
		case E__E_Mei_BuildingType__pf::NewEnumerator19: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A9FB092344B311E210A14E938403A959]\", \"6812F9304FA6DF4DC1AB86A888DAC357\", \"RoofTop\")"), Text); break;
		case E__E_Mei_BuildingType__pf::E__E_Mei_BuildingType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E Mei MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
