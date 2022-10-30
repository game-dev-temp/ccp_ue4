#include "NativizedAssets.h"
#include "BP_Character_Mei__pf4244024795.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputTouchDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/Components/SceneCaptureComponent2D.h"
#include "Runtime/Engine/Classes/Components/SceneCaptureComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "BP_TargetingSystem__pf4244024795.h"
#include "Runtime/Engine/Classes/Components/SplineComponent.h"
#include "BP_PredictionEnd__pf939916524.h"
#include "BP_BasePickup__pf4194264409.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponent.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraSystem.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEffectType.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraPlatformSet.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEmitterHandle.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEmitter.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScript.h"
#include "../Plugins/FX/Niagara/Source/NiagaraShader/Public/NiagaraScriptBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraParameterStore.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterface.h"
#include "../Plugins/FX/Niagara/Source/NiagaraCore/Public/NiagaraDataInterfaceBase.h"
#include "../Plugins/FX/Niagara/Source/NiagaraCore/Public/NiagaraMergeable.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraScriptExecutionParameterStore.h"
#include "../Plugins/FX/Niagara/Source/NiagaraCore/Public/NiagaraCompileHash.h"
#include "../Plugins/FX/Niagara/Source/NiagaraShader/Public/NiagaraShared.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraParameters.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraParameterCollection.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraConvertInPlaceUtilityBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScriptHighlight.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScriptSourceBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataSet.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraRendererProperties.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraSimulationStageBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraEditorDataBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraMessageDataBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraUserRedirectionParameterStore.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraVariant.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "ABP_Mei__pf4244024795.h"
#include "BP_Bow__pf905050247.h"
#include "W_Crosshair__pf2670873798.h"
#include "BP_Arrow__pf905050247.h"
#include "BP_Throw__pf939916524.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Public/Net/NetPushModelHelpers.h"
#include "S_Pickupinfo__pf4194264409.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraFunctionLibrary.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponentPool.h"
#include "Runtime/Engine/Classes/Engine/VolumeTexture.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/UMG/Public/Blueprint/SlateBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/HeadMountedDisplay/Public/XRGestureConfig.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionStimuliSourceComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Sight.h"
#include "ALS_MovementState__pf116373702.h"
#include "ALS_MovementAction__pf116373702.h"
#include "ALS_RotationMode__pf116373702.h"
#include "ALS_Gait__pf116373702.h"
#include "ALS_ViewMode__pf116373702.h"
#include "ALS_OverlayState__pf116373702.h"
#include "E_MovementState__pf2727903198.h"
#include "E_MovementAction__pf2727903198.h"
#include "E_RotationMode__pf2727903198.h"
#include "E_Gait__pf2727903198.h"
#include "E_Stance__pf2727903198.h"
#include "E_ViewMode__pf2727903198.h"
#include "E_OverlayState__pf2727903198.h"
#include "INT_Character__pf1977901695.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Character_Mei_C__pf4244024795::ABP_Character_Mei_C__pf4244024795(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		auto& __Local__3 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
		auto& __Local__4 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__3), FCollisionResponse::__PPO__ResponseArray() )));
		__Local__4 = TArray<FResponseChannel> ();
		__Local__4.AddUninitialized(3);
		FResponseChannel::StaticStruct()->InitializeStruct(__Local__4.GetData(), 3);
		auto& __Local__5 = __Local__4[0];
		__Local__5.Channel = FName(TEXT("Visibility"));
		__Local__5.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__6 = __Local__4[1];
		__Local__6.Channel = FName(TEXT("Camera"));
		__Local__6.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__7 = __Local__4[2];
		__Local__7.Channel = FName(TEXT("Pickups"));
		__Local__7.Response = ECollisionResponse::ECR_Ignore;
		__Local__0->SetCollisionProfileName(FName(TEXT("Custom")));
		static TWeakFieldPtr<FProperty> __Local__9{};
		const FProperty* __Local__8 = __Local__9.Get();
		if (nullptr == __Local__8)
		{
			__Local__8 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__8);
			__Local__9 = __Local__8;
		}
		(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		__Local__1->RotationRate = FRotator(0.000000, 720.000000, 0.000000);
		__Local__1->bOrientRotationToMovement = true;
		__Local__1->NavAgentProps.bCanCrouch = true;
		static TWeakFieldPtr<FProperty> __Local__11{};
		const FProperty* __Local__10 = __Local__11.Get();
		if (nullptr == __Local__10)
		{
			__Local__10 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__10);
			__Local__11 = __Local__10;
		}
		(((FBoolProperty*)__Local__10)->SetPropertyValue_InContainer((__Local__1), false, 0));
		static TWeakFieldPtr<FProperty> __Local__13{};
		const FProperty* __Local__12 = __Local__13.Get();
		if (nullptr == __Local__12)
		{
			__Local__12 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__12);
			__Local__13 = __Local__12;
		}
		(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->AnimClass = UABP_Mei_C__pf4244024795::StaticClass();
		__Local__2->AnimationData.AnimToPlay = CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
		__Local__2->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
		__Local__2->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		__Local__2->SetCollisionProfileName(FName(TEXT("NoCollision")));
		auto& __Local__14 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__14 = __Local__0;
		static TWeakFieldPtr<FProperty> __Local__16{};
		const FProperty* __Local__15 = __Local__16.Get();
		if (nullptr == __Local__15)
		{
			__Local__15 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__15);
			__Local__16 = __Local__15;
		}
		(((FBoolProperty*)__Local__15)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__SpringArm2__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm2"));
	bpv__MinimapCapture__pf = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("MinimapCapture"));
	bpv__BP_TargetingSystem__pf = CreateDefaultSubobject<UBP_TargetingSystem_C__pf4244024795>(TEXT("BP_TargetingSystem"));
	bpv__Umbrella__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Umbrella"));
	bpv__SpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	bpv__LeftArrow__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("LeftArrow"));
	bpv__TopLeftArrow__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("TopLeftArrow"));
	bpv__TopRigthtArrow__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("TopRigthtArrow"));
	bpv__RightArrow__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("RightArrow"));
	bpv__Spline__pf = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	bpv__SpringArm2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpringArm2__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpringArm2__pf->bInheritPitch = false;
	bpv__SpringArm2__pf->bInheritYaw = false;
	bpv__SpringArm2__pf->bInheritRoll = false;
	auto& __Local__17 = (*(AccessPrivateProperty<FRotator >((bpv__SpringArm2__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__17 = FRotator(-90.000000, 0.000000, 0.000000);
	static TWeakFieldPtr<FProperty> __Local__19{};
	const FProperty* __Local__18 = __Local__19.Get();
	if (nullptr == __Local__18)
	{
		__Local__18 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__18);
		__Local__19 = __Local__18;
	}
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__SpringArm2__pf), false, 0));
	bpv__MinimapCapture__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MinimapCapture__pf->AttachToComponent(bpv__SpringArm2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__MinimapCapture__pf->ProjectionType = ECameraProjectionMode::Type::Orthographic;
	bpv__MinimapCapture__pf->OrthoWidth = 1024.000000f;
	bpv__MinimapCapture__pf->TextureTarget = CastChecked<UTextureRenderTarget2D>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__20 = (*(AccessPrivateProperty<FVector >((bpv__MinimapCapture__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__20 = FVector(-300.000000, 0.000000, 0.000000);
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__MinimapCapture__pf), false, 0));
	bpv__BP_TargetingSystem__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__22{};
	const FProperty* __Local__21 = __Local__22.Get();
	if (nullptr == __Local__21)
	{
		__Local__21 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bReplicates")));
		check(__Local__21);
		__Local__22 = __Local__21;
	}
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((bpv__BP_TargetingSystem__pf), true, 0));
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__BP_TargetingSystem__pf), false, 0));
	bpv__Umbrella__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Umbrella__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__23 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Umbrella__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__23 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Umbrella__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__24 = (*(AccessPrivateProperty<FVector >((bpv__Umbrella__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__24 = FVector(-19.643110, 16.918943, 179.564667);
	auto& __Local__25 = (*(AccessPrivateProperty<FVector >((bpv__Umbrella__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__25 = FVector(0.220000, 0.220000, 0.220000);
	static TWeakFieldPtr<FProperty> __Local__27{};
	const FProperty* __Local__26 = __Local__27.Get();
	if (nullptr == __Local__26)
	{
		__Local__26 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bVisible")));
		check(__Local__26);
		__Local__27 = __Local__26;
	}
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((bpv__Umbrella__pf), false, 0));
	bpv__Umbrella__pf->bHiddenInGame = true;
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__Umbrella__pf), true, 0));
	bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpringArm__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpringArm__pf->TargetArmLength = 200.000000f;
	bpv__SpringArm__pf->SocketOffset = FVector(0.000000, 60.000000, 0.000000);
	bpv__SpringArm__pf->bUsePawnControlRotation = true;
	bpv__SpringArm__pf->bInheritRoll = false;
	bpv__SpringArm__pf->bEnableCameraLag = true;
	bpv__SpringArm__pf->bEnableCameraRotationLag = true;
	auto& __Local__28 = (*(AccessPrivateProperty<FVector >((bpv__SpringArm__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__28 = FVector(0.000000, 0.000000, 55.000000);
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__SpringArm__pf), false, 0));
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__SpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__Camera__pf), false, 0));
	bpv__LeftArrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__LeftArrow__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__29 = (*(AccessPrivateProperty<FVector >((bpv__LeftArrow__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__29 = FVector(0.000000, -65.000000, 90.000000);
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__LeftArrow__pf), false, 0));
	bpv__TopLeftArrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TopLeftArrow__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__30 = (*(AccessPrivateProperty<FVector >((bpv__TopLeftArrow__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__30 = FVector(40.000000, 0.000000, 145.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<FRotator >((bpv__TopLeftArrow__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__31 = FRotator(0.000000, -90.000000, 0.000000);
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__TopLeftArrow__pf), false, 0));
	bpv__TopRigthtArrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TopRigthtArrow__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TopRigthtArrow__pf->ArrowColor = FColor(0, 13, 255, 255);
	auto& __Local__32 = (*(AccessPrivateProperty<FVector >((bpv__TopRigthtArrow__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__32 = FVector(40.000000, 0.000000, 145.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<FRotator >((bpv__TopRigthtArrow__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__33 = FRotator(0.000000, 90.000000, 0.000000);
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__TopRigthtArrow__pf), false, 0));
	bpv__RightArrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__RightArrow__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__RightArrow__pf->ArrowColor = FColor(0, 77, 255, 255);
	auto& __Local__34 = (*(AccessPrivateProperty<FVector >((bpv__RightArrow__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__34 = FVector(0.000000, 65.000000, 90.000000);
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__RightArrow__pf), false, 0));
	bpv__Spline__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Spline__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__Spline__pf), false, 0));
	bpv__Sprinting__pf = false;
	bpv__Rolling__pf = false;
	bpv__Attacks__pf = E__E_PlayerAttacks__pf::NewEnumerator0;
	bpv__CurrentlyAttacking__pf = false;
	bpv__JogSpeed__pf = 400.000000f;
	bpv__SprintSpeed__pf = 700.000000f;
	bpv__OverlappedPickup__pf = nullptr;
	bpv__EquippedWeapon__pf = nullptr;
	bpv__EquippedShield__pf = nullptr;
	bpv__EquippedLight__pf = nullptr;
	bpv__PlayerStats__pf.bpv__CurrentHealth_3_1E66A4DA44A2F7EAB6B277BD7D825224__pf = 100.000000f;
	bpv__PlayerStats__pf.bpv__MaxHealth_5_E64C5A5A494BA87CC3114CB325EAB047__pf = 100.000000f;
	bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf = 100.000000f;
	bpv__PlayerStats__pf.bpv__MaxStamina_9_673463104FFD0F393D82E48AA88F409E__pf = 100.000000f;
	bpv__PlayerStats__pf.bpv__CurrentMana_12_B816CBB64B019D056822B1A87DD0A652__pf = 100.000000f;
	bpv__PlayerStats__pf.bpv__MaxMana_20_D2377E564CA3E00F0EC1EAA10239904D__pf = 100.000000f;
	bpv__PlayerDead__pf = false;
	bpv__CanMove__pf = false;
	bpv__Charging__pf = false;
	bpv__ChargeDamage__pf = 0.000000f;
	bpv__ChargeCount__pf = 0;
	bpv__LightAttackMontage__pf = CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__HeavyAttackMontage__pf = CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__FullBody__pf = false;
	bpv__Blocking__pf = false;
	bpv__IsTargeting__pf = false;
	bpv__LockedOn__pf = false;
	bpv__Target__pf = nullptr;
	bpv__Gliding__pf = false;
	bpv__ChargeAttackMontage__pf = CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__Location__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__ImpactxNormal__pfT = FVector(0.000000, 0.000000, 0.000000);
	bpv__HeightLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__charginparticle__pf = nullptr;
	bpv__IsHanging__pf = false;
	bpv__PlayerAnimInstance__pf = nullptr;
	bpv__RightAxisxValue__pfT = 0.000000f;
	bpv__JumpHeight__pf = 0.000000f;
	bpv__Height__pf = 0.000000f;
	bpv__SelfDamage__pf = 0.000000f;
	bpv__Bow__pf = nullptr;
	bpv__Crosshair__pf = nullptr;
	bpv__IsBowMode__pf = false;
	bpv__Arrow__pf = nullptr;
	bpv__IsInCollision__pf = false;
	bpv__HitxActor__pfT = nullptr;
	bpv__IsHolding__pf = false;
	bpv__AnimRef__pf = nullptr;
	bpv__PredectionScale__pf = 1000.000000f;
	bpv__PredictionEnd__pf = nullptr;
	bpv__PredictionPathMeshes__pf = TArray<USplineMeshComponent*> ();
	bpv__Velocity__pf = FVector(0.000000, 0.000000, 0.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__35 = __Local__2;
	auto& __Local__36 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__36 = __Local__1;
	auto& __Local__37 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__37 = __Local__0;
	auto& __Local__38 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__38 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	Tags = TArray<FName> ();
	Tags.Reserve(1);
	Tags.Add(FName(TEXT("Player")));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Character_Mei_C__pf4244024795::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SpringArm2__pf)
	{
		bpv__SpringArm2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MinimapCapture__pf)
	{
		bpv__MinimapCapture__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__BP_TargetingSystem__pf)
	{
		bpv__BP_TargetingSystem__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Umbrella__pf)
	{
		bpv__Umbrella__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SpringArm__pf)
	{
		bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__LeftArrow__pf)
	{
		bpv__LeftArrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TopLeftArrow__pf)
	{
		bpv__TopLeftArrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TopRigthtArrow__pf)
	{
		bpv__TopRigthtArrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__RightArrow__pf)
	{
		bpv__RightArrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Spline__pf)
	{
		bpv__Spline__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Character_Mei_C__pf4244024795::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Mei/BP/Character/E_PlayerAttacks.E_PlayerAttacks")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Mei/BP/Pickup/E_PickupTypes.E_PickupTypes")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UBP_TargetingSystem_C__pf4244024795::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_PredictionEnd_C__pf939916524::StaticClass());
	extern UClass* Z_Construct_UClass_UINT_MeiAnimBP_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UINT_MeiAnimBP_C());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_BasePickup_C__pf4194264409::StaticClass());
	extern UClass* Z_Construct_UClass_UINT_Controller_Mei_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UINT_Controller_Mei_C());
	extern UClass* Z_Construct_UClass_UINT_Pickups_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UINT_Pickups_C());
	InDynamicClass->ReferencedConvertedFields.Add(UABP_Mei_C__pf4244024795::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Bow_C__pf905050247::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UW_Crosshair_C__pf2670873798::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Arrow_C__pf905050247::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Throw_C__pf939916524::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Character_C__pf2151050371::StaticClass());
	extern UClass* Z_Construct_UClass_UINT_Character_Mei_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UINT_Character_Mei_C());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FS_Pickupinfo__pf4194264409();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FS_Pickupinfo__pf4194264409());
	extern UScriptStruct* Z_Construct_UScriptStruct_FS_EquippedItems__pf4244024795();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FS_EquippedItems__pf4244024795());
	extern UScriptStruct* Z_Construct_UScriptStruct_FS_PlayerStats__pf4244024795();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FS_PlayerStats__pf4244024795());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__39 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__39);
	auto __Local__40 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__40);
	auto __Local__41 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__41);
	auto __Local__42 = NewObject<UInputAxisKeyDelegateBinding>(InDynamicClass, UInputAxisKeyDelegateBinding::StaticClass(), TEXT("InputAxisKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__42);
	auto __Local__43 = NewObject<UInputTouchDelegateBinding>(InDynamicClass, UInputTouchDelegateBinding::StaticClass(), TEXT("InputTouchDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__43);
	auto __Local__44 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__44);
	auto __Local__45 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__45);
	__Local__39->SplineParams.StartScale = FVector2D(0.100000, 0.100000);
	__Local__39->SplineParams.EndScale = FVector2D(0.100000, 0.100000);
	__Local__39->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__46 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__39), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__46 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__39->OverrideMaterials = TArray<UMaterialInterface*> ();
	__Local__39->OverrideMaterials.Reserve(1);
	__Local__39->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
	static TWeakFieldPtr<FProperty> __Local__48{};
	const FProperty* __Local__47 = __Local__48.Get();
	if (nullptr == __Local__47)
	{
		__Local__47 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__47);
		__Local__48 = __Local__47;
	}
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__39), true, 0));
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__40), false, 0));
	__Local__41->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__41->InputActionDelegateBindings.AddUninitialized(16);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__41->InputActionDelegateBindings.GetData(), 16);
	auto& __Local__49 = __Local__41->InputActionDelegateBindings[0];
	__Local__49.InputActionName = FName(TEXT("Jump"));
	__Local__49.InputKeyEvent = EInputEvent::IE_Released;
	__Local__49.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_15"));
	__Local__49.bOverrideParentBinding = false;
	auto& __Local__50 = __Local__41->InputActionDelegateBindings[1];
	__Local__50.InputActionName = FName(TEXT("Jump"));
	__Local__50.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_14"));
	__Local__50.bOverrideParentBinding = false;
	auto& __Local__51 = __Local__41->InputActionDelegateBindings[2];
	__Local__51.InputActionName = FName(TEXT("ResetVR"));
	__Local__51.FunctionNameToBind = FName(TEXT("InpActEvt_ResetVR_K2Node_InputActionEvent_13"));
	auto& __Local__52 = __Local__41->InputActionDelegateBindings[3];
	__Local__52.InputActionName = FName(TEXT("Backflip"));
	__Local__52.FunctionNameToBind = FName(TEXT("InpActEvt_Backflip_K2Node_InputActionEvent_12"));
	auto& __Local__53 = __Local__41->InputActionDelegateBindings[4];
	__Local__53.InputActionName = FName(TEXT("Sprint"));
	__Local__53.InputKeyEvent = EInputEvent::IE_Released;
	__Local__53.FunctionNameToBind = FName(TEXT("InpActEvt_Sprint_K2Node_InputActionEvent_11"));
	auto& __Local__54 = __Local__41->InputActionDelegateBindings[5];
	__Local__54.InputActionName = FName(TEXT("Sprint"));
	__Local__54.FunctionNameToBind = FName(TEXT("InpActEvt_Sprint_K2Node_InputActionEvent_10"));
	auto& __Local__55 = __Local__41->InputActionDelegateBindings[6];
	__Local__55.InputActionName = FName(TEXT("Rolling"));
	__Local__55.FunctionNameToBind = FName(TEXT("InpActEvt_Rolling_K2Node_InputActionEvent_9"));
	auto& __Local__56 = __Local__41->InputActionDelegateBindings[7];
	__Local__56.InputActionName = FName(TEXT("Primary"));
	__Local__56.InputKeyEvent = EInputEvent::IE_Released;
	__Local__56.FunctionNameToBind = FName(TEXT("InpActEvt_Primary_K2Node_InputActionEvent_8"));
	auto& __Local__57 = __Local__41->InputActionDelegateBindings[8];
	__Local__57.InputActionName = FName(TEXT("Primary"));
	__Local__57.FunctionNameToBind = FName(TEXT("InpActEvt_Primary_K2Node_InputActionEvent_7"));
	auto& __Local__58 = __Local__41->InputActionDelegateBindings[9];
	__Local__58.InputActionName = FName(TEXT("Secondary"));
	__Local__58.FunctionNameToBind = FName(TEXT("InpActEvt_Secondary_K2Node_InputActionEvent_6"));
	auto& __Local__59 = __Local__41->InputActionDelegateBindings[10];
	__Local__59.InputActionName = FName(TEXT("Crouch"));
	__Local__59.FunctionNameToBind = FName(TEXT("InpActEvt_Crouch_K2Node_InputActionEvent_0"));
	auto& __Local__60 = __Local__41->InputActionDelegateBindings[11];
	__Local__60.InputActionName = FName(TEXT("Glide"));
	__Local__60.FunctionNameToBind = FName(TEXT("InpActEvt_Glide_K2Node_InputActionEvent_1"));
	auto& __Local__61 = __Local__41->InputActionDelegateBindings[12];
	__Local__61.InputActionName = FName(TEXT("Targeting"));
	__Local__61.FunctionNameToBind = FName(TEXT("InpActEvt_Targeting_K2Node_InputActionEvent_2"));
	auto& __Local__62 = __Local__41->InputActionDelegateBindings[13];
	__Local__62.InputActionName = FName(TEXT("Blocking"));
	__Local__62.FunctionNameToBind = FName(TEXT("InpActEvt_Blocking_K2Node_InputActionEvent_3"));
	auto& __Local__63 = __Local__41->InputActionDelegateBindings[14];
	__Local__63.InputActionName = FName(TEXT("Blocking"));
	__Local__63.InputKeyEvent = EInputEvent::IE_Released;
	__Local__63.FunctionNameToBind = FName(TEXT("InpActEvt_Blocking_K2Node_InputActionEvent_4"));
	auto& __Local__64 = __Local__41->InputActionDelegateBindings[15];
	__Local__64.InputActionName = FName(TEXT("Interact"));
	__Local__64.FunctionNameToBind = FName(TEXT("InpActEvt_Interact_K2Node_InputActionEvent_5"));
	__Local__42->InputAxisKeyDelegateBindings = TArray<FBlueprintInputAxisKeyDelegateBinding> ();
	__Local__42->InputAxisKeyDelegateBindings.AddUninitialized(1);
	FBlueprintInputAxisKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__42->InputAxisKeyDelegateBindings.GetData(), 1);
	auto& __Local__65 = __Local__42->InputAxisKeyDelegateBindings[0];
	__Local__65.AxisKey = FKey(TEXT("MouseWheelAxis"));
	__Local__65.FunctionNameToBind = FName(TEXT("InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_0"));
	__Local__43->InputTouchDelegateBindings = TArray<FBlueprintInputTouchDelegateBinding> ();
	__Local__43->InputTouchDelegateBindings.AddUninitialized(2);
	FBlueprintInputTouchDelegateBinding::StaticStruct()->InitializeStruct(__Local__43->InputTouchDelegateBindings.GetData(), 2);
	auto& __Local__66 = __Local__43->InputTouchDelegateBindings[0];
	__Local__66.InputKeyEvent = EInputEvent::IE_Released;
	__Local__66.FunctionNameToBind = FName(TEXT("InpTchEvt_Released"));
	auto& __Local__67 = __Local__43->InputTouchDelegateBindings[1];
	__Local__67.FunctionNameToBind = FName(TEXT("InpTchEvt_Pressed"));
	__Local__44->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__44->InputAxisDelegateBindings.AddUninitialized(6);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__44->InputAxisDelegateBindings.GetData(), 6);
	auto& __Local__68 = __Local__44->InputAxisDelegateBindings[0];
	__Local__68.InputAxisName = FName(TEXT("LookUp"));
	__Local__68.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_1"));
	auto& __Local__69 = __Local__44->InputAxisDelegateBindings[1];
	__Local__69.InputAxisName = FName(TEXT("Turn"));
	__Local__69.FunctionNameToBind = FName(TEXT("InpAxisEvt_Turn_K2Node_InputAxisEvent_0"));
	auto& __Local__70 = __Local__44->InputAxisDelegateBindings[2];
	__Local__70.InputAxisName = FName(TEXT("LookUpRate"));
	__Local__70.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53"));
	auto& __Local__71 = __Local__44->InputAxisDelegateBindings[3];
	__Local__71.InputAxisName = FName(TEXT("TurnRate"));
	__Local__71.FunctionNameToBind = FName(TEXT("InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38"));
	auto& __Local__72 = __Local__44->InputAxisDelegateBindings[4];
	__Local__72.InputAxisName = FName(TEXT("MoveRight"));
	__Local__72.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90"));
	__Local__72.bOverrideParentBinding = false;
	auto& __Local__73 = __Local__44->InputAxisDelegateBindings[5];
	__Local__73.InputAxisName = FName(TEXT("MoveForward"));
	__Local__73.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79"));
	__Local__73.bOverrideParentBinding = false;
	__Local__45->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__45->InputKeyDelegateBindings.AddUninitialized(6);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__45->InputKeyDelegateBindings.GetData(), 6);
	auto& __Local__74 = __Local__45->InputKeyDelegateBindings[0];
	__Local__74.InputChord.Key = FKey(TEXT("RightMouseButton"));
	__Local__74.FunctionNameToBind = FName(TEXT("InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0"));
	auto& __Local__75 = __Local__45->InputKeyDelegateBindings[1];
	__Local__75.InputChord.Key = FKey(TEXT("RightMouseButton"));
	__Local__75.InputKeyEvent = EInputEvent::IE_Released;
	__Local__75.FunctionNameToBind = FName(TEXT("InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1"));
	auto& __Local__76 = __Local__45->InputKeyDelegateBindings[2];
	__Local__76.InputChord.Key = FKey(TEXT("LeftMouseButton"));
	__Local__76.FunctionNameToBind = FName(TEXT("InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2"));
	auto& __Local__77 = __Local__45->InputKeyDelegateBindings[3];
	__Local__77.InputChord.Key = FKey(TEXT("LeftMouseButton"));
	__Local__77.FunctionNameToBind = FName(TEXT("InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3"));
	auto& __Local__78 = __Local__45->InputKeyDelegateBindings[4];
	__Local__78.InputChord.Key = FKey(TEXT("One"));
	__Local__78.FunctionNameToBind = FName(TEXT("InpActEvt_One_K2Node_InputKeyEvent_4"));
	auto& __Local__79 = __Local__45->InputKeyDelegateBindings[5];
	__Local__79.InputChord.Key = FKey(TEXT("X"));
	__Local__79.FunctionNameToBind = FName(TEXT("InpActEvt_X_K2Node_InputKeyEvent_5"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_0(int32 bpp__EntryPoint__pf)
{
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf{};
	ABP_Throw_C__pf939916524* bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf{};
	check(bpp__EntryPoint__pf == 512);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__HitxActor__pfT))
	{
		b1l__CallFunc_GetTransform_ReturnValue_2__pf = bpv__HitxActor__pfT->AActor::GetTransform();
	}
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_Throw_C__pf939916524::StaticClass(), b1l__CallFunc_GetTransform_ReturnValue_2__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
	UKismetSystemLibrary::SetVectorPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf, FName(TEXT("Velocity")), bpv__Velocity__pf);
	if(::IsValid(bpv__HitxActor__pfT))
	{
		b1l__CallFunc_GetTransform_ReturnValue_2__pf = bpv__HitxActor__pfT->AActor::GetTransform();
	}
	bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf = CastChecked<ABP_Throw_C__pf939916524>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf, b1l__CallFunc_GetTransform_ReturnValue_2__pf), ECastCheckedType::NullAllowed);
	if(::IsValid(bpv__HitxActor__pfT))
	{
		bpv__HitxActor__pfT->K2_DestroyActor();
	}
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_1(int32 bpp__EntryPoint__pf)
{
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf{};
	ABP_Arrow_C__pf905050247* bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 232);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_5__pf = b1l__K2Node_CustomEvent_NotifyName_3__pf;
	b1l__CallFunc_GetTransform_ReturnValue_1__pf = AActor::GetTransform();
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_Arrow_C__pf905050247::StaticClass(), b1l__CallFunc_GetTransform_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
	b1l__CallFunc_GetTransform_ReturnValue_1__pf = AActor::GetTransform();
	bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf = CastChecked<ABP_Arrow_C__pf905050247>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, b1l__CallFunc_GetTransform_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
	UKismetSystemLibrary::PrintString(this, FString(TEXT("set\u76f4\u524d")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	bpv__Arrow__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf;
	if(::IsValid(bpv__Arrow__pf))
	{
		bpv__Arrow__pf->bpf__Stop__pf();
	}
	if(::IsValid(bpv__Arrow__pf))
	{
		bpv__Arrow__pf->AActor::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("S_arrow_hand_r")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepRelative, true);
	}
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 517);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable_5__pf = b1l__K2Node_InputActionEvent_Key_15__pf;
	// optimized KCST_UnconditionalGoto
	StopJumping();
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_3(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_8__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 246:
			{
				__CurrentState = 247;
				break;
			}
		case 247:
			{
				bool  __Local__80 = false;
				if (!((::IsValid(bpv__AnimRef__pf)) ? (bpv__AnimRef__pf->bpv__ReadyToThrow__pf) : (__Local__80)))
				{
					__CurrentState = 250;
					break;
				}
			}
		case 248:
			{
				if(::IsValid(bpv__AnimRef__pf))
				{
					bpv__AnimRef__pf->bpv__Throw__pf = true;
				}
			}
		case 249:
			{
				bpv__IsHolding__pf = false;
				__CurrentState = -1;
				break;
			}
		case 250:
			{
				if (!bpv__IsInCollision__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 251:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_7__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_5__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_8__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetActorForwardVector_ReturnValue_5__pf, 200.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_7__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_8__pf);
				bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf = UKismetSystemLibrary::SphereTraceSingle(this, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_7__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf, 40.000000, ETraceTypeQuery::TraceTypeQuery1, false, b1l__Temp_object_Variable__pf, EDrawDebugTrace::ForDuration, /*out*/ b1l__CallFunc_SphereTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 252:
			{
				if (!bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 253:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_SphereTraceSingle_OutHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_1__pf);
				bpv__HitxActor__pfT = b1l__CallFunc_BreakHitResult_HitActor_1__pf;
			}
		case 254:
			{
				if(::IsValid(bpv__HitxActor__pfT))
				{
					bpv__HitxActor__pfT->AActor::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("weapon_hand_r")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepRelative, true);
				}
			}
		case 255:
			{
				if(::IsValid(bpv__HitxActor__pfT))
				{
					bpv__HitxActor__pfT->AActor::SetActorEnableCollision(false);
				}
			}
		case 256:
			{
				bpv__IsHolding__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_4(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 510);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b1l__K2Node_InputAxisKeyEvent_AxisValue__pf, 100.000000);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__PredectionScale__pf);
	bpfv__CallFunc_FClamp_ReturnValue_1__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf, 0.000000, 2000.000000);
	bpv__PredectionScale__pf = bpfv__CallFunc_FClamp_ReturnValue_1__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_5(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_SphereOverlapActors_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_ApplyDamage_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_HasAuthority_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 406:
			{
				__CurrentState = 407;
				break;
			}
		case 407:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue_2__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 408:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_1__pf = AActor::GetActorForwardVector();
				b1l__K2Node_MakeArray_Array_2__pf.SetNum(1, true);
				b1l__K2Node_MakeArray_Array_2__pf[0] = EObjectTypeQuery::ObjectTypeQuery3;
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetActorForwardVector_ReturnValue_1__pf, 130.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf);
				b1l__K2Node_MakeArray_Array_3__pf.SetNum(1, true);
				b1l__K2Node_MakeArray_Array_3__pf[0] = this;
				(b1l__CallFunc_SphereOverlapActors_OutActors_1__pf).Reset();
				bpfv__CallFunc_SphereOverlapActors_ReturnValue_1__pf = UKismetSystemLibrary::SphereOverlapActors(this, bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, 80.000000, b1l__K2Node_MakeArray_Array_2__pf, ABP_Character_C__pf2151050371::StaticClass(), b1l__K2Node_MakeArray_Array_3__pf, /*out*/ b1l__CallFunc_SphereOverlapActors_OutActors_1__pf);
			}
		case 409:
			{
				if (!bpfv__CallFunc_SphereOverlapActors_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 410:
			{
				b1l__Temp_int_Loop_Counter_Variable_2__pf = 0;
			}
		case 411:
			{
				b1l__Temp_int_Array_Index_Variable_2__pf = 0;
			}
		case 412:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_SphereOverlapActors_OutActors_1__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable_2__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 417;
					break;
				}
			}
		case 413:
			{
				b1l__Temp_int_Array_Index_Variable_2__pf = b1l__Temp_int_Loop_Counter_Variable_2__pf;
			}
		case 414:
			{
				__StateStack.Push(416);
			}
		case 415:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_SphereOverlapActors_OutActors_1__pf, b1l__Temp_int_Array_Index_Variable_2__pf, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				float  __Local__81 = 0.000000;
				bpfv__CallFunc_ApplyDamage_ReturnValue_1__pf = UGameplayStatics::ApplyDamage(b1l__CallFunc_Array_Get_Item_1__pf, ((::IsValid(bpv__EquippedWeapon__pf)) ? (bpv__EquippedWeapon__pf->bpv__PickupInfo__pf.bpv__HeavyDamage_26_53D2251648CCE8FC8CBBF5B4A5D35124__pf) : (__Local__81)), ((AController*)nullptr), this, UDamageType::StaticClass());
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 416:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable_2__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
				__CurrentState = 412;
				break;
			}
		case 417:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf = AActor::K2_GetActorLocation();
				bpf__Multi_PlayHitSound__pf(((USoundBase*)nullptr), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 289:
			{
				Jump();
			}
		case 290:
			{
				bpf__GrabxLedge__pfT();
				__CurrentState = -1;
				break;
			}
		case 475:
			{
				if (!bpv__IsHanging__pf)
				{
					__CurrentState = 289;
					break;
				}
			}
		case 476:
			{
				bpf__Climb__pf();
				__CurrentState = -1;
				break;
			}
		case 508:
			{
				__CurrentState = 509;
				break;
			}
		case 509:
			{
				b1l__Temp_struct_Variable_5__pf = b1l__K2Node_InputActionEvent_Key_14__pf;
				__CurrentState = 475;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_7(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue_4__pf{};
	check(bpp__EntryPoint__pf == 257);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable_2__pf = b1l__K2Node_InputKeyEvent_Key_1__pf;
	if(::IsValid(bpv__AnimRef__pf))
	{
		bpv__AnimRef__pf->bpv__ReadyToThrow__pf = false;
	}
	bpf__DestroyPredictionPathMeshes__pf();
	bpfv__CallFunc_IsValid_ReturnValue_4__pf = UKismetSystemLibrary::IsValid(bpv__PredictionEnd__pf);
	if (!bpfv__CallFunc_IsValid_ReturnValue_4__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__PredictionEnd__pf))
	{
		bpv__PredictionEnd__pf->K2_DestroyActor();
	}
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_8(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_GetSocketTransform_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf{};
	bool bpfv__CallFunc_DeprojectScreenToWorld_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue_3__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_12__pf{};
	bool bpfv__CallFunc_K2_SetActorTransform_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(10);
			}
		case 2:
			{
				if(::IsValid(bpv__Bow__pf) && ::IsValid(bpv__Bow__pf->bpv__SkeletalMesh__pf))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue_3__pf = bpv__Bow__pf->bpv__SkeletalMesh__pf->USkeletalMeshComponent::GetAnimInstance();
				}
				if(::IsValid(bpfv__CallFunc_GetAnimInstance_ReturnValue_3__pf))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue_3__pf->UAnimInstance::Montage_JumpToSection(FName(TEXT("Shoot")), ((UAnimMontage*)nullptr));
				}
			}
		case 3:
			{
				b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf = UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed), 1.000000, 0.000000, FName(TEXT("None")));
			}
		case 4:
			{
				b1l__CallFunc_IsValid_ReturnValue_11__pf = UKismetSystemLibrary::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf);
				if (!b1l__CallFunc_IsValid_ReturnValue_11__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_25__pf.BindUFunction(this,FName(TEXT("OnCompleted_8A28C1684DE6D99CD9B2238705FA27D2")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf->OnCompleted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_25__pf);
				}
			}
		case 6:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_24__pf.BindUFunction(this,FName(TEXT("OnBlendOut_8A28C1684DE6D99CD9B2238705FA27D2")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf->OnBlendOut.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_24__pf);
				}
			}
		case 7:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_23__pf.BindUFunction(this,FName(TEXT("OnInterrupted_8A28C1684DE6D99CD9B2238705FA27D2")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf->OnInterrupted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_23__pf);
				}
			}
		case 8:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_22__pf.BindUFunction(this,FName(TEXT("OnNotifyBegin_8A28C1684DE6D99CD9B2238705FA27D2")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf->OnNotifyBegin.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_22__pf);
				}
			}
		case 9:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_21__pf.BindUFunction(this,FName(TEXT("OnNotifyEnd_8A28C1684DE6D99CD9B2238705FA27D2")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf->OnNotifyEnd.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_21__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				b1l__Temp_bool_IsClosed_Variable__pf = false;
			}
		case 11:
			{
				b1l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 206:
			{
				__CurrentState = 207;
				break;
			}
		case 207:
			{
				if (!bpv__IsBowMode__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 208:
			{
				bpfv__CallFunc_IsValid_ReturnValue_12__pf = UKismetSystemLibrary::IsValid(bpv__Arrow__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_12__pf)
				{
					__CurrentState = 213;
					break;
				}
			}
		case 209:
			{
				if(::IsValid(bpv__Arrow__pf))
				{
					bpv__Arrow__pf->AActor::K2_DetachFromActor(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative);
				}
			}
		case 210:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_GetSocketTransform_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->GetSocketTransform(FName(TEXT("S_Bow")), ERelativeTransformSpace::RTS_World);
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetSocketTransform_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakTransform_Location__pf, /*out*/ b1l__CallFunc_BreakTransform_Rotation__pf, /*out*/ b1l__CallFunc_BreakTransform_Scale__pf);
				if(::IsValid(bpv__Crosshair__pf) && ::IsValid(bpv__Crosshair__pf->bpv__Center__pf))
				{
					b1l__CallFunc_GetCachedGeometry_ReturnValue__pf = bpv__Crosshair__pf->bpv__Center__pf->UWidget::GetCachedGeometry();
				}
				bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
				USlateBlueprintLibrary::LocalToViewport(this, b1l__CallFunc_GetCachedGeometry_ReturnValue__pf, FVector2D(0.000000,0.000000), /*out*/ b1l__CallFunc_LocalToViewport_PixelPosition__pf, /*out*/ b1l__CallFunc_LocalToViewport_ViewportPosition__pf);
				bpfv__CallFunc_DeprojectScreenToWorld_ReturnValue__pf = UGameplayStatics::DeprojectScreenToWorld(bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf, b1l__CallFunc_LocalToViewport_PixelPosition__pf, /*out*/ b1l__CallFunc_DeprojectScreenToWorld_WorldPosition__pf, /*out*/ b1l__CallFunc_DeprojectScreenToWorld_WorldDirection__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_7__pf = UKismetMathLibrary::Multiply_VectorFloat(b1l__CallFunc_DeprojectScreenToWorld_WorldDirection__pf, 1000.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf = UKismetMathLibrary::Add_VectorVector(b1l__CallFunc_DeprojectScreenToWorld_WorldPosition__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_7__pf);
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(b1l__CallFunc_BreakTransform_Location__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(b1l__CallFunc_BreakTransform_Location__pf, bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				if(::IsValid(bpv__Arrow__pf))
				{
					bpfv__CallFunc_K2_SetActorTransform_ReturnValue__pf = bpv__Arrow__pf->AActor::K2_SetActorTransform(bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, false, /*out*/ b1l__CallFunc_K2_SetActorTransform_SweepHitResult__pf, false);
				}
			}
		case 211:
			{
				if(::IsValid(bpv__Arrow__pf))
				{
					bpv__Arrow__pf->bpf__Start__pf();
				}
			}
		case 212:
			{
				bpv__Arrow__pf = ((ABP_Arrow_C__pf905050247*)nullptr);
				__CurrentState = 1;
				break;
			}
		case 213:
			{
				__StateStack.Push(215);
			}
		case 214:
			{
				if (!b1l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 217;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 215:
			{
				if (!b1l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 216;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 216:
			{
				b1l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = 2;
				break;
			}
		case 217:
			{
				b1l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 218:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 219:
			{
				b1l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_9(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	ABP_PredictionEnd_C__pf939916524* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 263);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable_2__pf = b1l__K2Node_InputKeyEvent_Key__pf;
	if (!bpv__IsHolding__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__AnimRef__pf))
	{
		bpv__AnimRef__pf->bpv__ReadyToThrow__pf = true;
	}
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_PredictionEnd_C__pf939916524::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_PredictionEnd_C__pf939916524>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
	bpv__PredictionEnd__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
	if(::IsValid(bpv__PredictionEnd__pf))
	{
		bpv__PredictionEnd__pf->SetActorHiddenInGame(true);
	}
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 505);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable_4__pf = b1l__K2Node_InputTouchEvent_Location_1__pf;
	b1l__Temp_byte_Variable_3__pf = b1l__K2Node_InputTouchEvent_FingerIndex_1__pf;
	// optimized KCST_UnconditionalGoto
	StopJumping();
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 344);
	// optimized KCST_UnconditionalGoto
	b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf = UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(b1l__K2Node_CustomEvent_InSkeletalMeshComponent_2__pf, b1l__K2Node_CustomEvent_MontageToPlay_1__pf, 1.000000, 0.000000, b1l__K2Node_CustomEvent_StartingSection__pf);
	b1l__CallFunc_IsValid_ReturnValue_6__pf = UKismetSystemLibrary::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf);
	if (!b1l__CallFunc_IsValid_ReturnValue_6__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b1l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnCompleted_7A6AF41A48F0F96CB2F848BBC71B1D21")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf->OnCompleted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate__pf);
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_29__pf.BindUFunction(this,FName(TEXT("OnBlendOut_7A6AF41A48F0F96CB2F848BBC71B1D21")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf->OnBlendOut.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_29__pf);
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_31__pf.BindUFunction(this,FName(TEXT("OnInterrupted_7A6AF41A48F0F96CB2F848BBC71B1D21")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf->OnInterrupted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_31__pf);
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_33__pf.BindUFunction(this,FName(TEXT("OnNotifyBegin_7A6AF41A48F0F96CB2F848BBC71B1D21")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf->OnNotifyBegin.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_33__pf);
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_34__pf.BindUFunction(this,FName(TEXT("OnNotifyEnd_7A6AF41A48F0F96CB2F848BBC71B1D21")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf->OnNotifyEnd.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_34__pf);
	}
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 503);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable__pf = b1l__K2Node_CustomEvent_NotifyName_29__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_13(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 184:
			{
				__CurrentState = 185;
				break;
			}
		case 185:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b1l__Temp_bool_Variable__pf);
				b1l__Temp_bool_Variable__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
			}
		case 186:
			{
				if (!b1l__Temp_bool_Variable__pf)
				{
					__CurrentState = 200;
					break;
				}
			}
		case 187:
			{
				if(::IsValid(bpv__Bow__pf))
				{
					bpv__Bow__pf->SetActorHiddenInGame(false);
				}
			}
		case 188:
			{
				if(::IsValid(bpv__SpringArm__pf))
				{
					bpv__SpringArm__pf->TargetArmLength = 80.000000;
				}
			}
		case 189:
			{
				if(::IsValid(bpv__SpringArm__pf))
				{
					bpv__SpringArm__pf->SocketOffset = FVector(0.000000,45.000000,20.000000);
				}
			}
		case 190:
			{
				bUseControllerRotationYaw = true;
			}
		case 191:
			{
				if(::IsValid(bpv__Crosshair__pf))
				{
					bpv__Crosshair__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 192:
			{
				bpv__IsBowMode__pf = true;
			}
		case 193:
			{
				USkeletalMeshComponent*  __Local__82 = ((USkeletalMeshComponent*)nullptr);
				b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf = UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(((::IsValid(bpv__Bow__pf)) ? (bpv__Bow__pf->bpv__SkeletalMesh__pf) : (__Local__82)), CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed), 1.000000, 0.000000, FName(TEXT("None")));
			}
		case 194:
			{
				b1l__CallFunc_IsValid_ReturnValue_10__pf = UKismetSystemLibrary::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf);
				if (!b1l__CallFunc_IsValid_ReturnValue_10__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 195:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_20__pf.BindUFunction(this,FName(TEXT("OnCompleted_7073083B4ADF877E75368A8EE3A45B76")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf->OnCompleted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_20__pf);
				}
			}
		case 196:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_19__pf.BindUFunction(this,FName(TEXT("OnBlendOut_7073083B4ADF877E75368A8EE3A45B76")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf->OnBlendOut.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_19__pf);
				}
			}
		case 197:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_18__pf.BindUFunction(this,FName(TEXT("OnInterrupted_7073083B4ADF877E75368A8EE3A45B76")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf->OnInterrupted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_18__pf);
				}
			}
		case 198:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_17__pf.BindUFunction(this,FName(TEXT("OnNotifyBegin_7073083B4ADF877E75368A8EE3A45B76")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf->OnNotifyBegin.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_17__pf);
				}
			}
		case 199:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_16__pf.BindUFunction(this,FName(TEXT("OnNotifyEnd_7073083B4ADF877E75368A8EE3A45B76")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf->OnNotifyEnd.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_16__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 200:
			{
				if(::IsValid(bpv__Bow__pf))
				{
					bpv__Bow__pf->SetActorHiddenInGame(true);
				}
			}
		case 201:
			{
				if(::IsValid(bpv__SpringArm__pf))
				{
					bpv__SpringArm__pf->TargetArmLength = 200.000000;
				}
			}
		case 202:
			{
				if(::IsValid(bpv__SpringArm__pf))
				{
					bpv__SpringArm__pf->SocketOffset = FVector(0.000000,60.000000,0.000000);
				}
			}
		case 203:
			{
				bUseControllerRotationYaw = false;
			}
		case 204:
			{
				if(::IsValid(bpv__Crosshair__pf))
				{
					bpv__Crosshair__pf->RemoveFromParent();
				}
			}
		case 205:
			{
				bpv__IsBowMode__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 500);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable_4__pf = b1l__K2Node_InputTouchEvent_Location__pf;
	b1l__Temp_byte_Variable_3__pf = b1l__K2Node_InputTouchEvent_FingerIndex__pf;
	// optimized KCST_UnconditionalGoto
	Jump();
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_15(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_SphereOverlapActors_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_ApplyDamage_ReturnValue__pf{};
	UNiagaraComponent* bpfv__CallFunc_SpawnSystemAtLocation_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_HasAuthority_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 282:
			{
				__StateStack.Push(284);
			}
		case 283:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_SphereOverlapActors_OutActors__pf, b1l__Temp_int_Array_Index_Variable__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				float  __Local__83 = 0.000000;
				bpfv__CallFunc_ApplyDamage_ReturnValue__pf = UGameplayStatics::ApplyDamage(b1l__CallFunc_Array_Get_Item__pf, ((::IsValid(bpv__EquippedWeapon__pf)) ? (bpv__EquippedWeapon__pf->bpv__PickupInfo__pf.bpv__LightDamage_25_909D8F7345520B6C716F7CAA487B865B__pf) : (__Local__83)), ((AController*)nullptr), this, UDamageType::StaticClass());
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 284:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 285:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_SphereOverlapActors_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 287;
					break;
				}
			}
		case 286:
			{
				b1l__Temp_int_Array_Index_Variable__pf = b1l__Temp_int_Loop_Counter_Variable__pf;
				__CurrentState = 282;
				break;
			}
		case 287:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_SphereOverlapActors_OutActors__pf, b1l__Temp_int_Array_Index_Variable__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b1l__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf = b1l__CallFunc_Array_Get_Item__pf->AActor::K2_GetRootComponent();
				}
				if(::IsValid(bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_SpawnSystemAtLocation_ReturnValue__pf = UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, CastChecked<UNiagaraSystem>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000), true, true, ENCPoolMethod::None, true);
			}
		case 288:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf = AActor::K2_GetActorLocation();
				bpf__Multi_PlayHitSound__pf(CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 308:
			{
				b1l__Temp_int_Array_Index_Variable__pf = 0;
				__CurrentState = 285;
				break;
			}
		case 373:
			{
				__CurrentState = 374;
				break;
			}
		case 374:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue_1__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 375:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
				b1l__K2Node_MakeArray_Array__pf.SetNum(1, true);
				b1l__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery3;
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf, 130.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				b1l__K2Node_MakeArray_Array_1__pf.SetNum(1, true);
				b1l__K2Node_MakeArray_Array_1__pf[0] = this;
				(b1l__CallFunc_SphereOverlapActors_OutActors__pf).Reset();
				bpfv__CallFunc_SphereOverlapActors_ReturnValue__pf = UKismetSystemLibrary::SphereOverlapActors(this, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, 80.000000, b1l__K2Node_MakeArray_Array__pf, ABP_Character_C__pf2151050371::StaticClass(), b1l__K2Node_MakeArray_Array_1__pf, /*out*/ b1l__CallFunc_SphereOverlapActors_OutActors__pf);
			}
		case 376:
			{
				if (!bpfv__CallFunc_SphereOverlapActors_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 377:
			{
				b1l__Temp_int_Loop_Counter_Variable__pf = 0;
				__CurrentState = 308;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_16(int32 bpp__EntryPoint__pf)
{
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	ABP_Bow_C__pf905050247* bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UW_Crosshair_C__pf2670873798* bpfv__CallFunc_Create_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 494);
	// optimized KCST_UnconditionalGoto
	b1l__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_Bow_C__pf905050247::StaticClass(), b1l__CallFunc_GetTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
	b1l__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
	bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<ABP_Bow_C__pf905050247>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, b1l__CallFunc_GetTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
	bpv__Bow__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf;
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Bow__pf))
	{
		bpv__Bow__pf->SetActorHiddenInGame(true);
	}
	if(::IsValid(bpv__Bow__pf))
	{
		bpv__Bow__pf->AActor::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("S_Bow")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepRelative, true);
	}
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UW_Crosshair_C__pf2670873798>(UWidgetBlueprintLibrary::Create(this, UW_Crosshair_C__pf2670873798::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
	bpv__Crosshair__pf = bpfv__CallFunc_Create_ReturnValue__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 499);
	// optimized KCST_UnconditionalGoto
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(0.000000, EOrientPositionSelector::OrientationAndPosition);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_18(int32 bpp__EntryPoint__pf)
{
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	float bpfv__CallFunc_Montage_Play_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 498);
	// optimized KCST_UnconditionalGoto
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
	}
	if(::IsValid(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf))
	{
		bpfv__CallFunc_Montage_Play_ReturnValue__pf = bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->UAnimInstance::Montage_Play(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed), 1.000000, EMontagePlayReturnType::MontageLength, 0.000000, true);
	}
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_19(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 148:
			{
				b1l__Temp_byte_Variable__pf = EMoveComponentAction::Move;
			}
		case 149:
			{
				UKismetMathLibrary::BreakVector(bpv__HeightLocation__pf, /*out*/ b1l__CallFunc_BreakVector_X__pf, /*out*/ b1l__CallFunc_BreakVector_Y__pf, /*out*/ b1l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__ImpactxNormal__pfT, -1.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(b1l__CallFunc_BreakVector_Z__pf, 85.000000);
				bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf);
				UKismetMathLibrary::BreakVector(bpv__Location__pf, /*out*/ b1l__CallFunc_BreakVector_X_2__pf, /*out*/ b1l__CallFunc_BreakVector_Y_2__pf, /*out*/ b1l__CallFunc_BreakVector_Z_2__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(b1l__CallFunc_BreakVector_X_2__pf, b1l__CallFunc_BreakVector_Y_2__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf);
				UKismetSystemLibrary::MoveComponentTo((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() ))), bpfv__CallFunc_MakeVector_ReturnValue_1__pf, bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf, true, true, 0.200000, false, b1l__Temp_byte_Variable__pf, FLatentActionInfo(-1, -1776000434, TEXT("ExecuteUbergraph_BP_Character_Mei"), this));
				__CurrentState = -1;
				break;
			}
		case 481:
			{
				__CurrentState = 482;
				break;
			}
		case 482:
			{
				bpv__IsHanging__pf = false;
			}
		case 483:
			{
				if ( bpv__PlayerAnimInstance__pf && bpv__PlayerAnimInstance__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_5__pf.SetObject(bpv__PlayerAnimInstance__pf);
					void* IAddress = bpv__PlayerAnimInstance__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_5__pf.SetInterface(IAddress);
				}
				else
				{
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_5__pf.SetObject(nullptr);
				}
				b1l__K2Node_DynamicCast_bSuccess_11__pf = (b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_5__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_11__pf)
				{
					__CurrentState = 485;
					break;
				}
			}
		case 484:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_5__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__HangingState__pf(b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_5__pf.GetObject() , bpv__IsHanging__pf);
				}
			}
		case 485:
			{
				b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf = UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed), 1.000000, 0.000000, FName(TEXT("None")));
			}
		case 486:
			{
				b1l__CallFunc_IsValid_ReturnValue_9__pf = UKismetSystemLibrary::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf);
				if (!b1l__CallFunc_IsValid_ReturnValue_9__pf)
				{
					__CurrentState = 148;
					break;
				}
			}
		case 487:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_10__pf.BindUFunction(this,FName(TEXT("OnCompleted_FF70D8AF4AF4E3E4E60B1389D2726387")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf->OnCompleted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_10__pf);
				}
			}
		case 488:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_9__pf.BindUFunction(this,FName(TEXT("OnBlendOut_FF70D8AF4AF4E3E4E60B1389D2726387")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf->OnBlendOut.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_9__pf);
				}
			}
		case 489:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_8__pf.BindUFunction(this,FName(TEXT("OnInterrupted_FF70D8AF4AF4E3E4E60B1389D2726387")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf->OnInterrupted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_8__pf);
				}
			}
		case 490:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_7__pf.BindUFunction(this,FName(TEXT("OnNotifyBegin_FF70D8AF4AF4E3E4E60B1389D2726387")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf->OnNotifyBegin.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_7__pf);
				}
			}
		case 491:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_6__pf.BindUFunction(this,FName(TEXT("OnNotifyEnd_FF70D8AF4AF4E3E4E60B1389D2726387")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf->OnNotifyEnd.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_6__pf);
				}
				__CurrentState = 148;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_20(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_ApplyDamage_ReturnValue_3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 180:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__Height__pf, 200.000000, 400.000000, false, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 182;
					break;
				}
			}
		case 181:
			{
				bpv__SelfDamage__pf = 30.000000;
				__CurrentState = -1;
				break;
			}
		case 182:
			{
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__Height__pf, 400.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 183:
			{
				bpfv__CallFunc_ApplyDamage_ReturnValue_3__pf = UGameplayStatics::ApplyDamage(this, 50.000000, ((AController*)nullptr), this, ((UClass*)nullptr));
				__CurrentState = -1;
				break;
			}
		case 492:
			{
				__CurrentState = 493;
				break;
			}
		case 493:
			{
				UGameplayStatics::BreakHitResult(b1l__K2Node_Event_Hit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd__pf);
				UKismetMathLibrary::BreakVector(b1l__CallFunc_BreakHitResult_Location__pf, /*out*/ b1l__CallFunc_BreakVector_X_6__pf, /*out*/ b1l__CallFunc_BreakVector_Y_6__pf, /*out*/ b1l__CallFunc_BreakVector_Z_6__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__JumpHeight__pf, b1l__CallFunc_BreakVector_Z_6__pf);
				bpv__Height__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf;
				__CurrentState = 180;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_21(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_6__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 448:
			{
				__CurrentState = 449;
				break;
			}
		case 449:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(b1l__K2Node_Event_NewMovementMode__pf), static_cast<uint8>(EMovementMode::MOVE_Walking));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 451;
					break;
				}
			}
		case 450:
			{
				bpf__f_DisableGlider__pf();
				__CurrentState = -1;
				break;
			}
		case 451:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(b1l__K2Node_Event_NewMovementMode__pf), static_cast<uint8>(EMovementMode::MOVE_Falling));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 452:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_6__pf = AActor::K2_GetActorLocation();
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_6__pf, /*out*/ b1l__CallFunc_BreakVector_X_5__pf, /*out*/ b1l__CallFunc_BreakVector_Y_5__pf, /*out*/ b1l__CallFunc_BreakVector_Z_5__pf);
				bpv__JumpHeight__pf = b1l__CallFunc_BreakVector_Z_5__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_22(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 170:
			{
				__CurrentState = 171;
				break;
			}
		case 171:
			{
				if (!bpv__IsHanging__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 172:
			{
				bpv__IsHanging__pf = false;
			}
		case 173:
			{
				if ( bpv__PlayerAnimInstance__pf && bpv__PlayerAnimInstance__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_4__pf.SetObject(bpv__PlayerAnimInstance__pf);
					void* IAddress = bpv__PlayerAnimInstance__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_4__pf.SetInterface(IAddress);
				}
				else
				{
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_4__pf.SetObject(nullptr);
				}
				b1l__K2Node_DynamicCast_bSuccess_10__pf = (b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_4__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_10__pf)
				{
					__CurrentState = 175;
					break;
				}
			}
		case 174:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_4__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__HangingState__pf(b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_4__pf.GetObject() , bpv__IsHanging__pf);
				}
			}
		case 175:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->SetMovementMode(EMovementMode::MOVE_Walking, 0);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_23(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 479);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable_3__pf = b1l__K2Node_InputActionEvent_Key_11__pf;
	// optimized KCST_UnconditionalGoto
	bpf__f_SprintSwitch__pf(false);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_24(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 295:
			{
				__CurrentState = 296;
				break;
			}
		case 296:
			{
				bpv__RightAxisxValue__pfT = b1l__K2Node_InputAxisEvent_AxisValue_4__pf;
			}
		case 297:
			{
				if (!bpv__CanMove__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 298:
			{
				if (!bpv__IsHanging__pf)
				{
					__CurrentState = 305;
					break;
				}
			}
		case 299:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__RightAxisxValue__pfT, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 301;
					break;
				}
			}
		case 300:
			{
				bpf__SetMoveSide__pf(false, true, bpv__TopRigthtArrow__pf, EDrawDebugTrace::ForOneFrame, bpv__RightArrow__pf);
				__CurrentState = -1;
				break;
			}
		case 301:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__RightAxisxValue__pfT, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 303;
					break;
				}
			}
		case 302:
			{
				bpf__SetMoveSide__pf(true, false, bpv__TopLeftArrow__pf, EDrawDebugTrace::None, bpv__LeftArrow__pf);
				__CurrentState = -1;
				break;
			}
		case 303:
			{
				if ( bpv__PlayerAnimInstance__pf && bpv__PlayerAnimInstance__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_3__pf.SetObject(bpv__PlayerAnimInstance__pf);
					void* IAddress = bpv__PlayerAnimInstance__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_3__pf.SetInterface(IAddress);
				}
				else
				{
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_3__pf.SetObject(nullptr);
				}
				b1l__K2Node_DynamicCast_bSuccess_9__pf = (b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_3__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_9__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 304:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_3__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__HangingMoveState__pf(b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_3__pf.GetObject() , false, false);
				}
				__CurrentState = -1;
				break;
			}
		case 305:
			{
				bpfv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakRotator_Roll__pf, /*out*/ b1l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b1l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b1l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpfv__CallFunc_MakeRotator_ReturnValue__pf);
				AddMovementInput(bpfv__CallFunc_GetRightVector_ReturnValue__pf, bpv__RightAxisxValue__pfT, false);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_25(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf{};
	check(bpp__EntryPoint__pf == 477);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable_3__pf = b1l__K2Node_InputActionEvent_Key_10__pf;
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf = UKismetMathLibrary::Not_PreBool(bpv__Blocking__pf);
	if (!bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__f_SprintSwitch__pf(true);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_26(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 291:
			{
				__CurrentState = 292;
				break;
			}
		case 292:
			{
				if (!bpv__CanMove__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 293:
			{
				if (!bpv__IsHanging__pf)
				{
					__CurrentState = 294;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 294:
			{
				bpfv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakRotator_Roll__pf, /*out*/ b1l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b1l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b1l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_MakeRotator_ReturnValue__pf);
				AddMovementInput(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, b1l__K2Node_InputAxisEvent_AxisValue_5__pf, false);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_27(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_6__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 78:
			{
				__CurrentState = 79;
				break;
			}
		case 79:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->SetMovementMode(EMovementMode::MOVE_Flying, 0);
				}
			}
		case 80:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->StopMovementImmediately();
				}
				__CurrentState = -1;
				break;
			}
		case 168:
			{
				b1l__Temp_byte_Variable_2__pf = EMoveComponentAction::Move;
			}
		case 169:
			{
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_4__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_5__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetActorForwardVector_ReturnValue_4__pf, -15.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf = UKismetMathLibrary::Add_VectorVector(bpv__Location__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_5__pf);
				UKismetMathLibrary::BreakVector(bpv__HeightLocation__pf, /*out*/ b1l__CallFunc_BreakVector_X_3__pf, /*out*/ b1l__CallFunc_BreakVector_Y_3__pf, /*out*/ b1l__CallFunc_BreakVector_Z_3__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf, /*out*/ b1l__CallFunc_BreakVector_X_4__pf, /*out*/ b1l__CallFunc_BreakVector_Y_4__pf, /*out*/ b1l__CallFunc_BreakVector_Z_4__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Subtract_FloatFloat(b1l__CallFunc_BreakVector_Z_3__pf, 170.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_2__pf = UKismetMathLibrary::MakeVector(b1l__CallFunc_BreakVector_X_4__pf, b1l__CallFunc_BreakVector_Y_4__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_6__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__ImpactxNormal__pfT, -1.000000);
				bpfv__CallFunc_Conv_VectorToRotator_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_6__pf);
				UKismetSystemLibrary::MoveComponentTo((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() ))), bpfv__CallFunc_MakeVector_ReturnValue_2__pf, bpfv__CallFunc_Conv_VectorToRotator_ReturnValue_1__pf, true, true, 0.200000, false, b1l__Temp_byte_Variable_2__pf, FLatentActionInfo(78, -1664010607, TEXT("ExecuteUbergraph_BP_Character_Mei_27"), this));
				__CurrentState = -1;
				break;
			}
		case 469:
			{
				bpf__DetectLedge__pf(EDrawDebugTrace::ForDuration, /*out*/ b1l__CallFunc_DetectLedge_Detect__pf);
			}
		case 470:
			{
				if (!b1l__CallFunc_DetectLedge_Detect__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 471:
			{
				bpv__IsHanging__pf = true;
			}
		case 472:
			{
				if ( bpv__PlayerAnimInstance__pf && bpv__PlayerAnimInstance__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf.SetObject(bpv__PlayerAnimInstance__pf);
					void* IAddress = bpv__PlayerAnimInstance__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf.SetInterface(IAddress);
				}
				else
				{
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf.SetObject(nullptr);
				}
				b1l__K2Node_DynamicCast_bSuccess_7__pf = (b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_7__pf)
				{
					__CurrentState = 168;
					break;
				}
			}
		case 473:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__HangingState__pf(b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf.GetObject() , bpv__IsHanging__pf);
				}
				__CurrentState = 168;
				break;
			}
		case 474:
			{
				__CurrentState = 469;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_28(int32 bpp__EntryPoint__pf)
{
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 390);
	// optimized KCST_UnconditionalGoto
	IINT_Character_Mei_C::Execute_bpf__UpdateMovement__pf(this , true, /*out*/ b1l__CallFunc_UpdateMovement_Return__pf);
	if(::IsValid(bpv__BP_TargetingSystem__pf))
	{
		bpv__BP_TargetingSystem__pf->bpf__Initialize__pf();
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		bpfv__CallFunc_GetAnimInstance_ReturnValue_2__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
	}
	bpv__PlayerAnimInstance__pf = bpfv__CallFunc_GetAnimInstance_ReturnValue_2__pf;
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		bpfv__CallFunc_GetAnimInstance_ReturnValue_2__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
	}
	b1l__K2Node_DynamicCast_AsABP_Mei__pf = Cast<UABP_Mei_C__pf4244024795>(bpfv__CallFunc_GetAnimInstance_ReturnValue_2__pf);
	b1l__K2Node_DynamicCast_bSuccess_8__pf = (b1l__K2Node_DynamicCast_AsABP_Mei__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess_8__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpv__AnimRef__pf = b1l__K2Node_DynamicCast_AsABP_Mei__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_29(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 137);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_2__pf = b1l__K2Node_CustomEvent_NotifyName_18__pf;
	b1l__Temp_byte_Variable_1__pf = EMoveComponentAction::Move;
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__ImpactxNormal__pfT, -1.000000);
	bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf);
	bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf = UKismetMathLibrary::Add_VectorVector(bpv__HeightLocation__pf, FVector(0.000000,0.000000,20.000000));
	bpfv__CallFunc_GetActorForwardVector_ReturnValue_3__pf = AActor::GetActorForwardVector();
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetActorForwardVector_ReturnValue_3__pf, 10.000000);
	bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf);
	UKismetSystemLibrary::MoveComponentTo((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() ))), bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf, bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf, true, true, 0.200000, false, b1l__Temp_byte_Variable_1__pf, FLatentActionInfo(-1, -2042943630, TEXT("ExecuteUbergraph_BP_Character_Mei"), this));
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_30(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 145);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_2__pf = b1l__K2Node_CustomEvent_NotifyName_15__pf;
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->SetMovementMode(EMovementMode::MOVE_Walking, 0);
	}
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_31(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	UAudioComponent* bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 66:
			{
				__CurrentState = 67;
				break;
			}
		case 67:
			{
				bpf__Charge__pf();
				__CurrentState = -1;
				break;
			}
		case 76:
			{
				__CurrentState = 77;
				break;
			}
		case 77:
			{
				bpf__Charge__pf();
				__CurrentState = -1;
				break;
			}
		case 126:
			{
				if (!bpv__Charging__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 127:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__ChargeDamage__pf, 10.000000);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000, 25.000000);
				bpv__ChargeDamage__pf = bpfv__CallFunc_FClamp_ReturnValue__pf;
			}
		case 128:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpv__ChargeCount__pf, 1);
				bpv__ChargeCount__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
			}
		case 129:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__ChargeCount__pf, 1);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 134;
					break;
				}
			}
		case 130:
			{
				bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf = UGameplayStatics::SpawnSoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), true);
			}
		case 131:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USceneComponent::K2_GetComponentLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, /*out*/ b1l__CallFunc_BreakVector_X_1__pf, /*out*/ b1l__CallFunc_BreakVector_Y_1__pf, /*out*/ b1l__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(b1l__CallFunc_BreakVector_Z_1__pf, 80.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b1l__CallFunc_BreakVector_X_1__pf, b1l__CallFunc_BreakVector_Y_1__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf);
				b1l__CallFunc_SpawnSystemAtLocation_ReturnValue_1__pf = UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, CastChecked<UNiagaraSystem>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed), bpfv__CallFunc_MakeVector_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000), true, true, ENCPoolMethod::None, true);
			}
		case 132:
			{
				bpv__charginparticle__pf = b1l__CallFunc_SpawnSystemAtLocation_ReturnValue_1__pf;
			}
		case 133:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(66, -757172455, TEXT("ExecuteUbergraph_BP_Character_Mei_31"), this));
				__CurrentState = -1;
				break;
			}
		case 134:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(76, 1892278123, TEXT("ExecuteUbergraph_BP_Character_Mei_31"), this));
				__CurrentState = -1;
				break;
			}
		case 163:
			{
				__CurrentState = 164;
				break;
			}
		case 164:
			{
				b1l__Temp_struct_Variable_1__pf = b1l__K2Node_InputActionEvent_Key_7__pf;
			}
		case 165:
			{
				if (!bpv__EquippedItems__pf.bpv__EquippedWeapon_3_2AEADD3C4CED507C2F25B7B821C8A7A4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 166:
			{
				bpf__chargexonxserver__pfTT();
			}
		case 167:
			{
				bpv__Charging__pf = true;
				__CurrentState = 126;
				break;
			}
		case 453:
			{
				__CurrentState = 126;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_32(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 271:
			{
				__CurrentState = 272;
				break;
			}
		case 272:
			{
				b1l__Temp_struct_Variable_1__pf = b1l__K2Node_InputActionEvent_Key_8__pf;
			}
		case 273:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpv__ChargeCount__pf, 1);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 278;
					break;
				}
			}
		case 274:
			{
				bpv__Charging__pf = false;
			}
		case 275:
			{
				bpv__ChargeCount__pf = 0;
			}
		case 276:
			{
				bpf__Server_TryToActivateAbiltiy__pf(E__E_PlayerAttacks__pf::NewEnumerator3);
			}
		case 277:
			{
				if(::IsValid(bpv__charginparticle__pf))
				{
					bpv__charginparticle__pf->UActorComponent::K2_DestroyComponent(this);
				}
				__CurrentState = -1;
				break;
			}
		case 278:
			{
				bpv__Charging__pf = false;
			}
		case 279:
			{
				bpv__ChargeCount__pf = 0;
			}
		case 280:
			{
				if (!bpv__EquippedItems__pf.bpv__EquippedWeapon_3_2AEADD3C4CED507C2F25B7B821C8A7A4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 281:
			{
				bpf__Server_TryToActivateAbiltiy__pf(E__E_PlayerAttacks__pf::NewEnumerator0);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_33(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_HasAuthority_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_SphereOverlapActors_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_5__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_ApplyDamage_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 357:
			{
				b1l__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 358:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_SphereOverlapActors_OutActors_2__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 364;
					break;
				}
			}
		case 359:
			{
				b1l__Temp_int_Array_Index_Variable_1__pf = b1l__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 360:
			{
				__StateStack.Push(363);
			}
		case 361:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_SphereOverlapActors_OutActors_2__pf, b1l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b1l__CallFunc_Array_Get_Item_2__pf);
				bpfv__CallFunc_ApplyDamage_ReturnValue_2__pf = UGameplayStatics::ApplyDamage(b1l__CallFunc_Array_Get_Item_2__pf, bpv__ChargeDamage__pf, ((AController*)nullptr), this, UDamageType::StaticClass());
			}
		case 362:
			{
				bpv__ChargeDamage__pf = 0.000000;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 363:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable_1__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 358;
				break;
			}
		case 364:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_5__pf = AActor::K2_GetActorLocation();
				bpf__Multi_PlayHitSound__pf(((USoundBase*)nullptr), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_5__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 433:
			{
				b1l__Temp_int_Loop_Counter_Variable_1__pf = 0;
				__CurrentState = 357;
				break;
			}
		case 442:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 443:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_4__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_2__pf = AActor::GetActorForwardVector();
				b1l__K2Node_MakeArray_Array_4__pf.SetNum(1, true);
				b1l__K2Node_MakeArray_Array_4__pf[0] = EObjectTypeQuery::ObjectTypeQuery3;
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetActorForwardVector_ReturnValue_2__pf, 130.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_4__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf);
				b1l__K2Node_MakeArray_Array_5__pf.SetNum(1, true);
				b1l__K2Node_MakeArray_Array_5__pf[0] = this;
				(b1l__CallFunc_SphereOverlapActors_OutActors_2__pf).Reset();
				bpfv__CallFunc_SphereOverlapActors_ReturnValue_2__pf = UKismetSystemLibrary::SphereOverlapActors(this, bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf, 80.000000, b1l__K2Node_MakeArray_Array_4__pf, ABP_Character_C__pf2151050371::StaticClass(), b1l__K2Node_MakeArray_Array_5__pf, /*out*/ b1l__CallFunc_SphereOverlapActors_OutActors_2__pf);
			}
		case 444:
			{
				if (!bpfv__CallFunc_SphereOverlapActors_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 433;
				break;
			}
		case 466:
			{
				__CurrentState = 442;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_34(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 467);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable__pf = b1l__K2Node_CustomEvent_NotifyName_28__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_35(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 465);
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__CanMove__pf = false;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 33, FName(TEXT("CanMove")));
	AActor::FlushNetDormancy();
	bpv__FullBody__pf = true;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 34, FName(TEXT("FullBody")));
	bpf__OnRep_FullBody__pf();
	bpf__charginganimation__pf((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_36(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 456);
	// optimized KCST_UnconditionalGoto
	b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf = UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(b1l__K2Node_CustomEvent_InSkeletalMeshComponent__pf, b1l__K2Node_CustomEvent_Montage__pf, 1.000000, 0.000000, FName(TEXT("None")));
	b1l__CallFunc_IsValid_ReturnValue_8__pf = UKismetSystemLibrary::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf);
	if (!b1l__CallFunc_IsValid_ReturnValue_8__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_15__pf.BindUFunction(this,FName(TEXT("OnCompleted_8E168B8B40A94CD12C3D7D928A8A2FDD")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf->OnCompleted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_15__pf);
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_14__pf.BindUFunction(this,FName(TEXT("OnBlendOut_8E168B8B40A94CD12C3D7D928A8A2FDD")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf->OnBlendOut.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_14__pf);
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_13__pf.BindUFunction(this,FName(TEXT("OnInterrupted_8E168B8B40A94CD12C3D7D928A8A2FDD")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf->OnInterrupted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_13__pf);
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_12__pf.BindUFunction(this,FName(TEXT("OnNotifyBegin_8E168B8B40A94CD12C3D7D928A8A2FDD")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf->OnNotifyBegin.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_12__pf);
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_11__pf.BindUFunction(this,FName(TEXT("OnNotifyEnd_8E168B8B40A94CD12C3D7D928A8A2FDD")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf->OnNotifyEnd.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_11__pf);
	}
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_37(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 464);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__PlayerStats__pf.bpv__CurrentHealth_3_1E66A4DA44A2F7EAB6B277BD7D825224__pf, 15.000000);
	if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(bpv__Rolling__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpv__CanMove__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__Server_Rolling__pf(true);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_38(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 454);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::PlaySoundAtLocation(this, b1l__K2Node_CustomEvent_Sound__pf, b1l__K2Node_CustomEvent_Location__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), ((AActor*)nullptr));
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_39(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_8__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 121:
			{
				__CurrentState = 122;
				break;
			}
		case 122:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_8__pf = UKismetMathLibrary::Not_PreBool(b1l__Temp_bool_Variable_1__pf);
				b1l__Temp_bool_Variable_1__pf = bpfv__CallFunc_Not_PreBool_ReturnValue_8__pf;
			}
		case 123:
			{
				if (!b1l__Temp_bool_Variable_1__pf)
				{
					__CurrentState = 125;
					break;
				}
			}
		case 124:
			{
				Crouch(false);
				__CurrentState = -1;
				break;
			}
		case 125:
			{
				UnCrouch(false);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_40(int32 bpp__EntryPoint__pf)
{
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 321:
			{
				__CurrentState = 322;
				break;
			}
		case 322:
			{
				if (!b1l__K2Node_CustomEvent_Stete__pf)
				{
					__CurrentState = 333;
					break;
				}
			}
		case 323:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				if ( bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf && bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetObject(bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf);
					void* IAddress = bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetInterface(IAddress);
				}
				else
				{
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetObject(nullptr);
				}
				b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 325;
					break;
				}
			}
		case 324:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__RollingState__pf(b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.GetObject() , true);
				}
			}
		case 325:
			{
				bpf__f_ReduceStamina__pf(15.000000);
			}
		case 326:
			{
				b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf = UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(b1l__K2Node_CustomEvent_Mesh__pf, b1l__K2Node_CustomEvent_Montage_1__pf, 1.000000, 0.000000, FName(TEXT("None")));
			}
		case 327:
			{
				b1l__CallFunc_IsValid_ReturnValue_5__pf = UKismetSystemLibrary::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf);
				if (!b1l__CallFunc_IsValid_ReturnValue_5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 328:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_26__pf.BindUFunction(this,FName(TEXT("OnCompleted_16F9A0764D14782FBC5F9DA2F2AEC61C")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnCompleted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_26__pf);
				}
			}
		case 329:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_27__pf.BindUFunction(this,FName(TEXT("OnBlendOut_16F9A0764D14782FBC5F9DA2F2AEC61C")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnBlendOut.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_27__pf);
				}
			}
		case 330:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_28__pf.BindUFunction(this,FName(TEXT("OnInterrupted_16F9A0764D14782FBC5F9DA2F2AEC61C")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnInterrupted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_28__pf);
				}
			}
		case 331:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_30__pf.BindUFunction(this,FName(TEXT("OnNotifyBegin_16F9A0764D14782FBC5F9DA2F2AEC61C")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnNotifyBegin.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_30__pf);
				}
			}
		case 332:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_32__pf.BindUFunction(this,FName(TEXT("OnNotifyEnd_16F9A0764D14782FBC5F9DA2F2AEC61C")));
				if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf))
				{
					b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf->OnNotifyEnd.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_32__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 333:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				if ( bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf && bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetObject(bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf);
					void* IAddress = bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetInterface(IAddress);
				}
				else
				{
					b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetObject(nullptr);
				}
				b1l__K2Node_DynamicCast_bSuccess_1__pf = (b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 334:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__RollingState__pf(b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.GetObject() , false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_41(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 338:
			{
				__CurrentState = 339;
				break;
			}
		case 339:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf = UKismetMathLibrary::Not_PreBool(bpv__CurrentlyAttacking__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf = UKismetMathLibrary::Not_PreBool(bpv__Rolling__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf, bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 340:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b1l__K2Node_CustomEvent_Attacks__pf), static_cast<uint8>(E__E_PlayerAttacks__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 342;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b1l__K2Node_CustomEvent_Attacks__pf), static_cast<uint8>(E__E_PlayerAttacks__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 341;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b1l__K2Node_CustomEvent_Attacks__pf), static_cast<uint8>(E__E_PlayerAttacks__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 343;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 341:
			{
				bpf__f_PlayerAttack__pf(bpv__HeavyAttackMontage__pf);
				__CurrentState = -1;
				break;
			}
		case 342:
			{
				bpf__f_PlayerAttack__pf(bpv__LightAttackMontage__pf);
				__CurrentState = -1;
				break;
			}
		case 343:
			{
				bpf__f_PlayerAttack__pf(bpv__ChargeAttackMontage__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_42(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsFalling_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 116:
			{
				__CurrentState = 117;
				break;
			}
		case 117:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					bpfv__CallFunc_IsFalling_ReturnValue__pf = (*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->IsFalling();
				}
				if (!bpfv__CallFunc_IsFalling_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 118:
			{
				if (!bpv__Gliding__pf)
				{
					__CurrentState = 120;
					break;
				}
			}
		case 119:
			{
				bpf__f_DisableGlider__pf();
				__CurrentState = -1;
				break;
			}
		case 120:
			{
				bpf__f_EnableGlider__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_43(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 446);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_6__pf = b1l__K2Node_CustomEvent_NotifyName_34__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_44(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 56:
			{
				AActor::FlushNetDormancy();
			}
		case 57:
			{
				bpv__LockedOn__pf = b1l__K2Node_Event_Lock__pf;
			}
		case 58:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 36, FName(TEXT("LockedOn")));
			}
		case 59:
			{
				if (!bpv__LockedOn__pf)
				{
					__CurrentState = 63;
					break;
				}
			}
		case 60:
			{
				AActor::FlushNetDormancy();
			}
		case 61:
			{
				bpv__Target__pf = b1l__K2Node_Event_Target__pf;
			}
		case 62:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 37, FName(TEXT("Target")));
				__CurrentState = -1;
				break;
			}
		case 63:
			{
				AActor::FlushNetDormancy();
			}
		case 64:
			{
				bpv__Target__pf = ((AActor*)nullptr);
			}
		case 65:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 37, FName(TEXT("Target")));
				__CurrentState = -1;
				break;
			}
		case 445:
			{
				__CurrentState = 56;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_45(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 398:
			{
				__CurrentState = 399;
				break;
			}
		case 399:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf = UKismetMathLibrary::Not_PreBool(bpv__LockedOn__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf)
				{
					__CurrentState = 401;
					break;
				}
			}
		case 400:
			{
				AddControllerYawInput(b1l__K2Node_InputAxisEvent_AxisValue_1__pf);
				__CurrentState = -1;
				break;
			}
		case 401:
			{
				bpf__f_LockOn__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_46(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf{};
	check(bpp__EntryPoint__pf == 402);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf = UKismetMathLibrary::Not_PreBool(bpv__LockedOn__pf);
	if (!bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	AddControllerPitchInput(b1l__K2Node_InputAxisEvent_AxisValue__pf);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_47(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 113);
	// optimized KCST_UnconditionalGoto
	if (!bpv__CanMove__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__BP_TargetingSystem__pf))
	{
		bpv__BP_TargetingSystem__pf->bpf__LockOnTarget__pf();
	}
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_48(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 436);
	// optimized KCST_UnconditionalGoto
	bpv__PlayerStats__pf.bpv__SoulsCollected_17_42D7C17A4D6F9590461E41B199396162__pf = b1l__K2Node_Event_SoulsXP__pf;
	bpf__Multi_SpawnSoulsParticle__pf(((UNiagaraSystem*)nullptr), (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))));
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_49(int32 bpp__EntryPoint__pf)
{
	UNiagaraComponent* bpfv__CallFunc_SpawnSystemAttached_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 440);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_SpawnSystemAttached_ReturnValue_1__pf = UNiagaraFunctionLibrary::SpawnSystemAttached(b1l__K2Node_CustomEvent_SystemTemplate__pf, b1l__K2Node_CustomEvent_AttachToComponent__pf, FName(TEXT("None")), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), EAttachLocation::KeepRelativeOffset, false, true, ENCPoolMethod::None, true);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_50(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 434);
	// optimized KCST_UnconditionalGoto
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__JogSpeed__pf;
	}
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_51(int32 bpp__EntryPoint__pf)
{
	UNiagaraComponent* bpfv__CallFunc_SpawnSystemAttached_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 423);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_SpawnSystemAttached_ReturnValue__pf = UNiagaraFunctionLibrary::SpawnSystemAttached(b1l__K2Node_CustomEvent_SystemTemplate_1__pf, ((USceneComponent*)nullptr), b1l__K2Node_CustomEvent_AttachPointName__pf, b1l__K2Node_CustomEvent_Location_1__pf, FRotator(0.000000,0.000000,0.000000), EAttachLocation::KeepRelativeOffset, false, true, ENCPoolMethod::None, true);
	UGameplayStatics::PlaySoundAtLocation(this, b1l__K2Node_CustomEvent_Sound_1__pf, b1l__K2Node_CustomEvent_Location_1__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), ((AActor*)nullptr));
	b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf = UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(b1l__K2Node_CustomEvent_InSkeletalMeshComponent_1__pf, b1l__K2Node_CustomEvent_MontageToPlay__pf, 1.000000, 0.000000, FName(TEXT("None")));
	b1l__CallFunc_IsValid_ReturnValue_7__pf = UKismetSystemLibrary::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf);
	if (!b1l__CallFunc_IsValid_ReturnValue_7__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_5__pf.BindUFunction(this,FName(TEXT("OnCompleted_76C161CC4EE93442D074F9810B60A62F")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf->OnCompleted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_5__pf);
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_4__pf.BindUFunction(this,FName(TEXT("OnBlendOut_76C161CC4EE93442D074F9810B60A62F")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf->OnBlendOut.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_4__pf);
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_3__pf.BindUFunction(this,FName(TEXT("OnInterrupted_76C161CC4EE93442D074F9810B60A62F")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf->OnInterrupted.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_3__pf);
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_2__pf.BindUFunction(this,FName(TEXT("OnNotifyBegin_76C161CC4EE93442D074F9810B60A62F")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf->OnNotifyBegin.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_2__pf);
	}
	b1l__K2Node_CreateDelegate_OutputDelegate_1__pf.BindUFunction(this,FName(TEXT("OnNotifyEnd_76C161CC4EE93442D074F9810B60A62F")));
	if(::IsValid(b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf))
	{
		b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf->OnNotifyEnd.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_1__pf);
	}
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_52(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 378:
			{
				__CurrentState = 379;
				break;
			}
		case 379:
			{
				if (!bpv__Blocking__pf)
				{
					__CurrentState = 383;
					break;
				}
			}
		case 380:
			{
				bpf__f_CheckBlockingDirection__pf(b1l__K2Node_Event_DamageCauser__pf, /*out*/ b1l__CallFunc_f_CheckBlockingDirection_Return__pf);
			}
		case 381:
			{
				if (!b1l__CallFunc_f_CheckBlockingDirection_Return__pf)
				{
					__CurrentState = 383;
					break;
				}
			}
		case 382:
			{
				bpf__Multi_BlockingEffects__pf(FName(TEXT("None")), ((UAnimMontage*)nullptr), ((USkeletalMeshComponent*)nullptr), FVector(0.000000,0.000000,0.000000), ((USoundBase*)nullptr), CastChecked<UNiagaraSystem>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
				__CurrentState = -1;
				break;
			}
		case 383:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__PlayerStats__pf.bpv__CurrentHealth_3_1E66A4DA44A2F7EAB6B277BD7D825224__pf, b1l__K2Node_Event_Damage__pf);
				bpv__PlayerStats__pf.bpv__CurrentHealth_3_1E66A4DA44A2F7EAB6B277BD7D825224__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 384:
			{
				bpfv__CallFunc_GetController_ReturnValue_1__pf = APawn::GetController();
				if ( bpfv__CallFunc_GetController_ReturnValue_1__pf && bpfv__CallFunc_GetController_ReturnValue_1__pf->GetClass()->ImplementsInterface(UINT_Controller_Mei_C::StaticClass()) )
				{
					b1l__K2Node_DynamicCast_AsINT_Controller_Mei_2__pf.SetObject(bpfv__CallFunc_GetController_ReturnValue_1__pf);
					void* IAddress = bpfv__CallFunc_GetController_ReturnValue_1__pf->GetInterfaceAddress(UINT_Controller_Mei_C::StaticClass());
					b1l__K2Node_DynamicCast_AsINT_Controller_Mei_2__pf.SetInterface(IAddress);
				}
				else
				{
					b1l__K2Node_DynamicCast_AsINT_Controller_Mei_2__pf.SetObject(nullptr);
				}
				b1l__K2Node_DynamicCast_bSuccess_5__pf = (b1l__K2Node_DynamicCast_AsINT_Controller_Mei_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = 386;
					break;
				}
			}
		case 385:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__PlayerStats__pf.bpv__CurrentHealth_3_1E66A4DA44A2F7EAB6B277BD7D825224__pf, bpv__PlayerStats__pf.bpv__MaxHealth_5_E64C5A5A494BA87CC3114CB325EAB047__pf);
				if(::IsValid(b1l__K2Node_DynamicCast_AsINT_Controller_Mei_2__pf))
				{
					IINT_Controller_Mei_C::Execute_bpf__UpdateHealthUI__pf(b1l__K2Node_DynamicCast_AsINT_Controller_Mei_2__pf.GetObject() , bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				}
			}
		case 386:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__PlayerStats__pf.bpv__CurrentHealth_3_1E66A4DA44A2F7EAB6B277BD7D825224__pf, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 387:
			{
				bpf__Death__pf(((AActor*)nullptr));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_53(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 48:
			{
				bpf__OnRep_Blocking__pf();
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 35, FName(TEXT("Blocking")));
				__CurrentState = 48;
				break;
			}
		case 50:
			{
				AActor::FlushNetDormancy();
			}
		case 51:
			{
				bpv__Blocking__pf = true;
				__CurrentState = 49;
				break;
			}
		case 52:
			{
				bpf__OnRep_Blocking__pf();
				__CurrentState = -1;
				break;
			}
		case 53:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 35, FName(TEXT("Blocking")));
				__CurrentState = 52;
				break;
			}
		case 54:
			{
				AActor::FlushNetDormancy();
			}
		case 55:
			{
				bpv__Blocking__pf = false;
				__CurrentState = 53;
				break;
			}
		case 420:
			{
				__CurrentState = 421;
				break;
			}
		case 421:
			{
				if (!b1l__K2Node_CustomEvent_State__pf)
				{
					__CurrentState = 54;
					break;
				}
				__CurrentState = 50;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_54(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 96);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable__pf = b1l__K2Node_InputActionEvent_Key_4__pf;
	bpf__Server_Blocking__pf(false);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_55(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf{};
	check(bpp__EntryPoint__pf == 99);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable__pf = b1l__K2Node_InputActionEvent_Key_3__pf;
	bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf = UKismetMathLibrary::Not_PreBool(bpv__Blocking__pf);
	if (!bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpf__Server_Blocking__pf(true);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_56(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 83:
			{
				__CurrentState = 84;
				break;
			}
		case 84:
			{
				b1l__Temp_name_Variable__pf = b1l__K2Node_CustomEvent_NotifyName_25__pf;
			}
		case 85:
			{
				bpf__Server_EndAttack__pf();
				__CurrentState = -1;
				break;
			}
		case 418:
			{
				__CurrentState = 419;
				break;
			}
		case 419:
			{
				b1l__Temp_name_Variable__pf = b1l__K2Node_CustomEvent_NotifyName_27__pf;
				__CurrentState = 85;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_57(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 354);
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__CurrentlyAttacking__pf = false;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 25, FName(TEXT("CurrentlyAttacking")));
	AActor::FlushNetDormancy();
	bpv__CanMove__pf = true;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 33, FName(TEXT("CanMove")));
	if (!bpv__FullBody__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	AActor::FlushNetDormancy();
	bpv__FullBody__pf = false;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 34, FName(TEXT("FullBody")));
	bpf__OnRep_FullBody__pf();
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_58(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 388);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf = UKismetMathLibrary::Not_PreBool(bpv__PlayerDead__pf);
	if (!bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__PlayerDead__pf = true;
	// optimized KCST_UnconditionalGoto
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 32, FName(TEXT("PlayerDead")));
	// optimized KCST_UnconditionalGoto
	bpf__OnRep_PlayerDead__pf();
	IINT_Character_Mei_C::Execute_bpf__UpdateMovement__pf(this , false, /*out*/ b1l__CallFunc_UpdateMovement_Return_1__pf);
	bpfv__CallFunc_GetController_ReturnValue_2__pf = APawn::GetController();
	if ( bpfv__CallFunc_GetController_ReturnValue_2__pf && bpfv__CallFunc_GetController_ReturnValue_2__pf->GetClass()->ImplementsInterface(UINT_Controller_Mei_C::StaticClass()) )
	{
		b1l__K2Node_DynamicCast_AsINT_Controller_Mei_3__pf.SetObject(bpfv__CallFunc_GetController_ReturnValue_2__pf);
		void* IAddress = bpfv__CallFunc_GetController_ReturnValue_2__pf->GetInterfaceAddress(UINT_Controller_Mei_C::StaticClass());
		b1l__K2Node_DynamicCast_AsINT_Controller_Mei_3__pf.SetInterface(IAddress);
	}
	else
	{
		b1l__K2Node_DynamicCast_AsINT_Controller_Mei_3__pf.SetObject(nullptr);
	}
	b1l__K2Node_DynamicCast_bSuccess_6__pf = (b1l__K2Node_DynamicCast_AsINT_Controller_Mei_3__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess_6__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b1l__K2Node_DynamicCast_AsINT_Controller_Mei_3__pf))
	{
		IINT_Controller_Mei_C::Execute_bpf__DeathScreenUI__pf(b1l__K2Node_DynamicCast_AsINT_Controller_Mei_3__pf.GetObject() );
	}
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_59(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 396);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_6__pf = b1l__K2Node_CustomEvent_NotifyName_33__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_60(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 90:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__EquippedWeapon__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 91;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 91:
			{
				bpf__f_EquipWeapon__pf(bpv__OverlappedPickup__pf);
				__CurrentState = -1;
				break;
			}
		case 92:
			{
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpv__EquippedShield__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = 93;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 93:
			{
				bpf__f_EquipShield__pf(bpv__OverlappedPickup__pf);
				__CurrentState = -1;
				break;
			}
		case 94:
			{
				bpfv__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(bpv__EquippedLight__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_3__pf)
				{
					__CurrentState = 95;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 95:
			{
				bpf__f_EquipLight__pf(bpv__OverlappedPickup__pf);
				__CurrentState = -1;
				break;
			}
		case 366:
			{
				__CurrentState = 367;
				break;
			}
		case 367:
			{
				if ( bpv__OverlappedPickup__pf && bpv__OverlappedPickup__pf->GetClass()->ImplementsInterface(UINT_Pickups_C::StaticClass()) )
				{
					b1l__K2Node_DynamicCast_AsINT_Pickups__pf.SetObject(bpv__OverlappedPickup__pf);
					void* IAddress = bpv__OverlappedPickup__pf->GetInterfaceAddress(UINT_Pickups_C::StaticClass());
					b1l__K2Node_DynamicCast_AsINT_Pickups__pf.SetInterface(IAddress);
				}
				else
				{
					b1l__K2Node_DynamicCast_AsINT_Pickups__pf.SetObject(nullptr);
				}
				b1l__K2Node_DynamicCast_bSuccess_4__pf = (b1l__K2Node_DynamicCast_AsINT_Pickups__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = 370;
					break;
				}
			}
		case 368:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsINT_Pickups__pf))
				{
					IINT_Pickups_C::Execute_bpf__GetPickupType__pf(b1l__K2Node_DynamicCast_AsINT_Pickups__pf.GetObject() , /*out*/ b1l__CallFunc_GetPickupType_PickupType__pf);
				}
			}
		case 369:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b1l__CallFunc_GetPickupType_PickupType__pf), static_cast<uint8>(E__E_PickupTypes__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 90;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b1l__CallFunc_GetPickupType_PickupType__pf), static_cast<uint8>(E__E_PickupTypes__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 92;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b1l__CallFunc_GetPickupType_PickupType__pf), static_cast<uint8>(E__E_PickupTypes__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 94;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 370:
			{
				b1l__CallFunc_GetPickupType_PickupType__pf = E__E_PickupTypes__pf::NewEnumerator0;
				__CurrentState = 369;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_61(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 160);
	// optimized KCST_UnconditionalGoto
	if (!bpv__EquippedItems__pf.bpv__EquippedWeapon_3_2AEADD3C4CED507C2F25B7B821C8A7A4__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpf__Server_TryToActivateAbiltiy__pf(E__E_PlayerAttacks__pf::NewEnumerator1);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_62(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 365);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__OverlappedPickup__pf);
	if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpf__HandlePickup__pf();
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_63(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 371);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_6__pf = b1l__K2Node_CustomEvent_NotifyName_32__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_64(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 86);
	// optimized KCST_UnconditionalGoto
	bpf__Server_InteractWithObject__pf();
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_65(int32 bpp__EntryPoint__pf)
{
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 31:
			{
				AActor::FlushNetDormancy();
			}
		case 32:
			{
				bpv__OverlappedPickup__pf = b1l__K2Node_Event_PickupActor__pf;
			}
		case 33:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 26, FName(TEXT("OverlappedPickup")));
			}
		case 34:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if ( bpfv__CallFunc_GetController_ReturnValue__pf && bpfv__CallFunc_GetController_ReturnValue__pf->GetClass()->ImplementsInterface(UINT_Controller_Mei_C::StaticClass()) )
				{
					b1l__K2Node_DynamicCast_AsINT_Controller_Mei__pf.SetObject(bpfv__CallFunc_GetController_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetController_ReturnValue__pf->GetInterfaceAddress(UINT_Controller_Mei_C::StaticClass());
					b1l__K2Node_DynamicCast_AsINT_Controller_Mei__pf.SetInterface(IAddress);
				}
				else
				{
					b1l__K2Node_DynamicCast_AsINT_Controller_Mei__pf.SetObject(nullptr);
				}
				b1l__K2Node_DynamicCast_bSuccess_2__pf = (b1l__K2Node_DynamicCast_AsINT_Controller_Mei__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 35:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsINT_Controller_Mei__pf))
				{
					FText  __Local__89 = FText::GetEmpty();
					IINT_Controller_Mei_C::Execute_bpf__ShowPickupName__pf(b1l__K2Node_DynamicCast_AsINT_Controller_Mei__pf.GetObject() , true, ((::IsValid(bpv__OverlappedPickup__pf)) ? (bpv__OverlappedPickup__pf->bpv__PickupInfo__pf.bpv__PickupName_7_9C6C5E9D41EB7A429D43D0B4D16782C9__pf) : (__Local__89)));
				}
				__CurrentState = -1;
				break;
			}
		case 36:
			{
				AActor::FlushNetDormancy();
			}
		case 37:
			{
				bpv__OverlappedPickup__pf = ((ABP_BasePickup_C__pf4194264409*)nullptr);
			}
		case 38:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 26, FName(TEXT("OverlappedPickup")));
			}
		case 39:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if ( bpfv__CallFunc_GetController_ReturnValue__pf && bpfv__CallFunc_GetController_ReturnValue__pf->GetClass()->ImplementsInterface(UINT_Controller_Mei_C::StaticClass()) )
				{
					b1l__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf.SetObject(bpfv__CallFunc_GetController_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetController_ReturnValue__pf->GetInterfaceAddress(UINT_Controller_Mei_C::StaticClass());
					b1l__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf.SetInterface(IAddress);
				}
				else
				{
					b1l__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf.SetObject(nullptr);
				}
				b1l__K2Node_DynamicCast_bSuccess_3__pf = (b1l__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 40:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf))
				{
					IINT_Controller_Mei_C::Execute_bpf__ShowPickupName__pf(b1l__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf.GetObject() , false, FText::GetEmpty());
				}
				__CurrentState = -1;
				break;
			}
		case 355:
			{
				__CurrentState = 356;
				break;
			}
		case 356:
			{
				if (!b1l__K2Node_Event_Overlapping__pf)
				{
					__CurrentState = 36;
					break;
				}
				__CurrentState = 31;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_66(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 352);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_6__pf = b1l__K2Node_CustomEvent_NotifyName_31__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_67(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 12:
			{
				AActor::FlushNetDormancy();
			}
		case 13:
			{
				bpv__Rolling__pf = true;
			}
		case 14:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 24, FName(TEXT("Rolling")));
			}
		case 15:
			{
				bpf__Multi_Rolliing__pf(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(ABP_Character_Mei_C__pf4244024795::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed), (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), true);
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				AActor::FlushNetDormancy();
			}
		case 17:
			{
				bpv__Rolling__pf = false;
			}
		case 18:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 24, FName(TEXT("Rolling")));
			}
		case 19:
			{
				bpf__Multi_Rolliing__pf(((UAnimMontage*)nullptr), ((USkeletalMeshComponent*)nullptr), false);
				__CurrentState = -1;
				break;
			}
		case 318:
			{
				__CurrentState = 319;
				break;
			}
		case 319:
			{
				if (!b1l__K2Node_CustomEvent_Rolling__pf)
				{
					__CurrentState = 16;
					break;
				}
				__CurrentState = 12;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_68(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 335);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_6__pf = b1l__K2Node_CustomEvent_NotifyName_30__pf;
	bpf__Server_Rolling__pf(false);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_69(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 313);
	// optimized KCST_UnconditionalGoto
	bpf__f_SprintSwitch__pf(b1l__K2Node_CustomEvent_State_1__pf);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_70(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 309);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_71(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 307);
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_72(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 244);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_5__pf = b1l__K2Node_CustomEvent_NotifyName__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_73(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 242);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_5__pf = b1l__K2Node_CustomEvent_NotifyName_1__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_74(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 240);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_5__pf = b1l__K2Node_CustomEvent_NotifyName_2__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_75(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 230);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_5__pf = b1l__K2Node_CustomEvent_NotifyName_4__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_76(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 228);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_4__pf = b1l__K2Node_CustomEvent_NotifyName_5__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_77(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 226);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_4__pf = b1l__K2Node_CustomEvent_NotifyName_6__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_78(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 224);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_4__pf = b1l__K2Node_CustomEvent_NotifyName_7__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_79(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 222);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_4__pf = b1l__K2Node_CustomEvent_NotifyName_8__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_80(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 220);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_4__pf = b1l__K2Node_CustomEvent_NotifyName_9__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_81(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 158);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_3__pf = b1l__K2Node_CustomEvent_NotifyName_10__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_82(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 156);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_3__pf = b1l__K2Node_CustomEvent_NotifyName_11__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_83(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 154);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_3__pf = b1l__K2Node_CustomEvent_NotifyName_12__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_84(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 152);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_3__pf = b1l__K2Node_CustomEvent_NotifyName_13__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_85(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 150);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_3__pf = b1l__K2Node_CustomEvent_NotifyName_14__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_86(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 143);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_2__pf = b1l__K2Node_CustomEvent_NotifyName_16__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_87(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 141);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_2__pf = b1l__K2Node_CustomEvent_NotifyName_17__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_88(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 135);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_2__pf = b1l__K2Node_CustomEvent_NotifyName_19__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_89(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 111);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_1__pf = b1l__K2Node_CustomEvent_NotifyName_20__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_90(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 109);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_1__pf = b1l__K2Node_CustomEvent_NotifyName_21__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_91(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 107);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_1__pf = b1l__K2Node_CustomEvent_NotifyName_22__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_92(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 105);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_1__pf = b1l__K2Node_CustomEvent_NotifyName_23__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_93(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 103);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable_1__pf = b1l__K2Node_CustomEvent_NotifyName_24__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__ExecuteUbergraph_BP_Character_Mei__pf_94(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 81);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_name_Variable__pf = b1l__K2Node_CustomEvent_NotifyName_26__pf;
	return; //KCST_EndOfThread
}
void ABP_Character_Mei_C__pf4244024795::bpf__Throw__pf()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_0(512);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_0__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisKeyEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_4(510);
}
void ABP_Character_Mei_C__pf4244024795::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_16(494);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnLanded__pf(FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__90;
	T__Local__90& bpp__Hit__pf = *const_cast<T__Local__90 *>(&bpp__Hit__pf__const);
	b1l__K2Node_Event_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_20(492);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Climb__pf()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_19(481);
}
void ABP_Character_Mei_C__pf4244024795::bpf__GrabxLedge__pfT()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_27(474);
}
void ABP_Character_Mei_C__pf4244024795::bpf__ChargexAttack__pfT()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_33(466);
}
void ABP_Character_Mei_C__pf4244024795::bpf__chargexonxserver__pfTT_Implementation()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_35(465);
}
void ABP_Character_Mei_C__pf4244024795::bpf__charginganimation__pf_Implementation(USkeletalMeshComponent* bpp__InSkeletalMeshComponent__pf, UAnimMontage* bpp__Montage__pf)
{
	b1l__K2Node_CustomEvent_InSkeletalMeshComponent__pf = bpp__InSkeletalMeshComponent__pf;
	b1l__K2Node_CustomEvent_Montage__pf = bpp__Montage__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_36(456);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Multi_PlayHitSound__pf_Implementation(USoundBase* bpp__Sound__pf, FVector bpp__Location__pf)
{
	b1l__K2Node_CustomEvent_Sound__pf = bpp__Sound__pf;
	b1l__K2Node_CustomEvent_Location__pf = bpp__Location__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_38(454);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Charge__pf_Implementation()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_31(453);
}
void ABP_Character_Mei_C__pf4244024795::bpf__K2_OnMovementModeChanged__pf(EMovementMode bpp__PrevMovementMode__pf, EMovementMode bpp__NewMovementMode__pf, uint8 bpp__PrevCustomMode__pf, uint8 bpp__NewCustomMode__pf)
{
	b1l__K2Node_Event_PrevMovementMode__pf = bpp__PrevMovementMode__pf;
	b1l__K2Node_Event_NewMovementMode__pf = bpp__NewMovementMode__pf;
	b1l__K2Node_Event_PrevCustomMode__pf = bpp__PrevCustomMode__pf;
	b1l__K2Node_Event_NewCustomMode__pf = bpp__NewCustomMode__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_21(448);
}
void ABP_Character_Mei_C__pf4244024795::bpf__LockCamera__pf(bool bpp__Lock__pf, AActor* bpp__Target__pf)
{
	b1l__K2Node_Event_Lock__pf = bpp__Lock__pf;
	b1l__K2Node_Event_Target__pf = bpp__Target__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_44(445);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Multi_SpawnSoulsParticle__pf_Implementation(UNiagaraSystem* bpp__SystemTemplate__pf, USceneComponent* bpp__AttachToComponent__pf)
{
	b1l__K2Node_CustomEvent_SystemTemplate__pf = bpp__SystemTemplate__pf;
	b1l__K2Node_CustomEvent_AttachToComponent__pf = bpp__AttachToComponent__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_49(440);
}
void ABP_Character_Mei_C__pf4244024795::bpf__SpawnSoulsParticle__pf(int32 bpp__SoulsXP__pf)
{
	b1l__K2Node_Event_SoulsXP__pf = bpp__SoulsXP__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_48(436);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Client_Jogging__pf_Implementation()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_50(434);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Multi_BlockingEffects__pf(FName bpp__AttachPointName__pf, UAnimMontage* bpp__MontageToPlay__pf, USkeletalMeshComponent* bpp__InSkeletalMeshComponent__pf, FVector bpp__Location__pf, USoundBase* bpp__Sound__pf, UNiagaraSystem* bpp__SystemTemplate__pf)
{
	b1l__K2Node_CustomEvent_AttachPointName__pf = bpp__AttachPointName__pf;
	b1l__K2Node_CustomEvent_MontageToPlay__pf = bpp__MontageToPlay__pf;
	b1l__K2Node_CustomEvent_InSkeletalMeshComponent_1__pf = bpp__InSkeletalMeshComponent__pf;
	b1l__K2Node_CustomEvent_Location_1__pf = bpp__Location__pf;
	b1l__K2Node_CustomEvent_Sound_1__pf = bpp__Sound__pf;
	b1l__K2Node_CustomEvent_SystemTemplate_1__pf = bpp__SystemTemplate__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_51(423);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Server_Blocking__pf_Implementation(bool bpp__State__pf)
{
	b1l__K2Node_CustomEvent_State__pf = bpp__State__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_53(420);
}
void ABP_Character_Mei_C__pf4244024795::bpf__HeavyAttack__pf()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_5(406);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_46(402);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_45(398);
}
void ABP_Character_Mei_C__pf4244024795::bpf__ReceivePossessed__pf(AController* bpp__NewController__pf)
{
	b1l__K2Node_Event_NewController__pf = bpp__NewController__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_28(390);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Death__pf_Implementation(AActor* bpp__Player__pf)
{
	b1l__K2Node_Event_Player__pf = bpp__Player__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_58(388);
}
void ABP_Character_Mei_C__pf4244024795::bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf)
{
	typedef UDamageType*  T__Local__91;
	T__Local__91& bpp__DamageType__pf = *const_cast<T__Local__91 *>(&bpp__DamageType__pf__const);
	b1l__K2Node_Event_Damage__pf = bpp__Damage__pf;
	b1l__K2Node_Event_DamageType__pf = bpp__DamageType__pf;
	b1l__K2Node_Event_InstigatedBy__pf = bpp__InstigatedBy__pf;
	b1l__K2Node_Event_DamageCauser__pf = bpp__DamageCauser__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_52(378);
}
void ABP_Character_Mei_C__pf4244024795::bpf__LightAttack__pf()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_15(373);
}
void ABP_Character_Mei_C__pf4244024795::bpf__HandlePickup__pf()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_60(366);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Server_InteractWithObject__pf_Implementation()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_62(365);
}
void ABP_Character_Mei_C__pf4244024795::bpf__SetPickupInfo__pf(ABP_BasePickup_C__pf4194264409* bpp__PickupActor__pf, bool bpp__Overlapping__pf)
{
	b1l__K2Node_Event_PickupActor__pf = bpp__PickupActor__pf;
	b1l__K2Node_Event_Overlapping__pf = bpp__Overlapping__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_65(355);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Server_EndAttack__pf_Implementation()
{
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_57(354);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Multi_PlayMontage__pf_Implementation(USkeletalMeshComponent* bpp__InSkeletalMeshComponent__pf, UAnimMontage* bpp__MontageToPlay__pf, FName bpp__StartingSection__pf)
{
	b1l__K2Node_CustomEvent_InSkeletalMeshComponent_2__pf = bpp__InSkeletalMeshComponent__pf;
	b1l__K2Node_CustomEvent_MontageToPlay_1__pf = bpp__MontageToPlay__pf;
	b1l__K2Node_CustomEvent_StartingSection__pf = bpp__StartingSection__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_11(344);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Server_TryToActivateAbiltiy__pf_Implementation(E__E_PlayerAttacks__pf bpp__Attacks__pf)
{
	b1l__K2Node_CustomEvent_Attacks__pf = bpp__Attacks__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_41(338);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Multi_Rolliing__pf_Implementation(UAnimMontage* bpp__Montage__pf, USkeletalMeshComponent* bpp__Mesh__pf, bool bpp__Stete__pf)
{
	b1l__K2Node_CustomEvent_Montage_1__pf = bpp__Montage__pf;
	b1l__K2Node_CustomEvent_Mesh__pf = bpp__Mesh__pf;
	b1l__K2Node_CustomEvent_Stete__pf = bpp__Stete__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_40(321);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Server_Rolling__pf_Implementation(bool bpp__Rolling__pf)
{
	b1l__K2Node_CustomEvent_Rolling__pf = bpp__Rolling__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_67(318);
}
void ABP_Character_Mei_C__pf4244024795::bpf__Server_ToggleSprint__pf_Implementation(bool bpp__State__pf)
{
	b1l__K2Node_CustomEvent_State_1__pf = bpp__State__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_69(313);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_70(309);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_71(307);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_4__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_24(295);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_5__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_26(291);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_9(263);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputKeyEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_7(257);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputKeyEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_3(246);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnCompleted_8A28C1684DE6D99CD9B2238705FA27D2__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_72(244);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnBlendOut_8A28C1684DE6D99CD9B2238705FA27D2__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_1__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_73(242);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnInterrupted_8A28C1684DE6D99CD9B2238705FA27D2__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_2__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_74(240);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyBegin_8A28C1684DE6D99CD9B2238705FA27D2__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_3__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_1(232);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyEnd_8A28C1684DE6D99CD9B2238705FA27D2__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_4__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_75(230);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnCompleted_7073083B4ADF877E75368A8EE3A45B76__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_5__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_76(228);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnBlendOut_7073083B4ADF877E75368A8EE3A45B76__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_6__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_77(226);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnInterrupted_7073083B4ADF877E75368A8EE3A45B76__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_7__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_78(224);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyBegin_7073083B4ADF877E75368A8EE3A45B76__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_8__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_79(222);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyEnd_7073083B4ADF877E75368A8EE3A45B76__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_9__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_80(220);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputKeyEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_8(206);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_One_K2Node_InputKeyEvent_4__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputKeyEvent_Key_4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_13(184);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_X_K2Node_InputKeyEvent_5__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputKeyEvent_Key_5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_22(170);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnCompleted_8E168B8B40A94CD12C3D7D928A8A2FDD__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_10__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_81(158);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnBlendOut_8E168B8B40A94CD12C3D7D928A8A2FDD__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_11__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_82(156);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnInterrupted_8E168B8B40A94CD12C3D7D928A8A2FDD__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_12__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_83(154);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyBegin_8E168B8B40A94CD12C3D7D928A8A2FDD__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_13__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_84(152);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyEnd_8E168B8B40A94CD12C3D7D928A8A2FDD__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_14__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_85(150);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnCompleted_FF70D8AF4AF4E3E4E60B1389D2726387__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_15__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_30(145);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnBlendOut_FF70D8AF4AF4E3E4E60B1389D2726387__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_16__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_86(143);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnInterrupted_FF70D8AF4AF4E3E4E60B1389D2726387__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_17__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_87(141);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyBegin_FF70D8AF4AF4E3E4E60B1389D2726387__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_18__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_29(137);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyEnd_FF70D8AF4AF4E3E4E60B1389D2726387__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_19__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_88(135);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Crouch_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_39(121);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Glide_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_42(116);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Targeting_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_47(113);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnCompleted_76C161CC4EE93442D074F9810B60A62F__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_20__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_89(111);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnBlendOut_76C161CC4EE93442D074F9810B60A62F__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_21__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_90(109);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnInterrupted_76C161CC4EE93442D074F9810B60A62F__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_22__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_91(107);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyBegin_76C161CC4EE93442D074F9810B60A62F__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_23__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_92(105);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyEnd_76C161CC4EE93442D074F9810B60A62F__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_24__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_93(103);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Blocking_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_55(99);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Blocking_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_54(96);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Interact_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_64(86);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnCompleted_7A6AF41A48F0F96CB2F848BBC71B1D21__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_25__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_56(83);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnBlendOut_7A6AF41A48F0F96CB2F848BBC71B1D21__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_26__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_94(81);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnInterrupted_7A6AF41A48F0F96CB2F848BBC71B1D21__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_27__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_56(418);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyBegin_7A6AF41A48F0F96CB2F848BBC71B1D21__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_28__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_34(467);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyEnd_7A6AF41A48F0F96CB2F848BBC71B1D21__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_29__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_12(503);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Secondary_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_61(160);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Primary_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_31(163);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Primary_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_8__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_32(271);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnCompleted_16F9A0764D14782FBC5F9DA2F2AEC61C__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_30__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_68(335);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnBlendOut_16F9A0764D14782FBC5F9DA2F2AEC61C__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_31__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_66(352);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnInterrupted_16F9A0764D14782FBC5F9DA2F2AEC61C__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_32__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_63(371);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyBegin_16F9A0764D14782FBC5F9DA2F2AEC61C__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_33__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_59(396);
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnNotifyEnd_16F9A0764D14782FBC5F9DA2F2AEC61C__pf(FName bpp__NotifyName__pf)
{
	b1l__K2Node_CustomEvent_NotifyName_34__pf = bpp__NotifyName__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_43(446);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Rolling_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_9__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_37(464);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Sprint_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_10__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_25(477);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Sprint_K2Node_InputActionEvent_11__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_11__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_23(479);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Backflip_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_12__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_18(498);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_13__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_17(499);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpTchEvt_Pressed__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf)
{
	b1l__K2Node_InputTouchEvent_FingerIndex__pf = bpp__FingerIndex__pf;
	b1l__K2Node_InputTouchEvent_Location__pf = bpp__Location__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_14(500);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpTchEvt_Released__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf)
{
	b1l__K2Node_InputTouchEvent_FingerIndex_1__pf = bpp__FingerIndex__pf;
	b1l__K2Node_InputTouchEvent_Location_1__pf = bpp__Location__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_10(505);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Jump_K2Node_InputActionEvent_14__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_14__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_6(508);
}
void ABP_Character_Mei_C__pf4244024795::bpf__InpActEvt_Jump_K2Node_InputActionEvent_15__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_15__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Character_Mei__pf_2(517);
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_SprintSwitch__pf(bool bpp__SprintState__pf)
{
	bool bpfv__LocalSprint__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue_1__pf{};
	bool bpfv__CallFunc_HasAuthority_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalSprint__pf = bpp__SprintState__pf;
			}
		case 2:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				if (!bpfv__LocalSprint__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 4:
			{
				if (!bpv__isCrouching__pf)
				{
					__CurrentState = 23;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpf__Server_ToggleSprint__pf(bpfv__LocalSprint__pf);
			}
		case 6:
			{
				if (!bpfv__LocalSprint__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 7:
			{
				if (!bpv__isCrouching__pf)
				{
					__CurrentState = 32;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				if (!bpv__isCrouching__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				bpv__isSprinting__pf = false;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__JogSpeed__pf;
				}
			}
		case 11:
			{
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				if (!bpv__isCrouching__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 13:
			{
				bpv__isSprinting__pf = false;
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__JogSpeed__pf;
				}
			}
		case 15:
			{
				AActor::FlushNetDormancy();
			}
		case 16:
			{
				bpv__Sprinting__pf = false;
			}
		case 17:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 23, FName(TEXT("Sprinting")));
			}
		case 18:
			{
				bpf__OnRep_Sprinting__pf();
			}
		case 19:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__DrainStaminaHandle__pf);
			}
		case 20:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("f_RecoverStamina")), 0.200000, true, 0.000000, 0.000000);
			}
		case 21:
			{
				bpv__RecoverStaminaHandle__pf = bpfv__CallFunc_K2_SetTimer_ReturnValue__pf;
			}
		case 22:
			{
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__SprintSpeed__pf;
				}
			}
		case 24:
			{
				AActor::FlushNetDormancy();
			}
		case 25:
			{
				bpv__Sprinting__pf = true;
			}
		case 26:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 23, FName(TEXT("Sprinting")));
			}
		case 27:
			{
				bpf__OnRep_Sprinting__pf();
			}
		case 28:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__RecoverStaminaHandle__pf);
			}
		case 29:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue_1__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("f_DrainStamina")), 0.200000, true, 0.000000, 0.000000);
			}
		case 30:
			{
				bpv__DrainStaminaHandle__pf = bpfv__CallFunc_K2_SetTimer_ReturnValue_1__pf;
			}
		case 31:
			{
				__CurrentState = -1;
				break;
			}
		case 32:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__SprintSpeed__pf;
				}
				__CurrentState = 11;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_BlockAngleCheck__pf(/*out*/ bool& bpp__FacingAIx__pfzy)
{
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll_1__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch_1__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw_1__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	if(::IsValid(bpv__AttackingActor__pf))
	{
		bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf = bpv__AttackingActor__pf->AActor::K2_GetActorRotation();
	}
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll_1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch_1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw_1__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_BreakRotator_Yaw__pf, bpfv__CallFunc_BreakRotator_Yaw_1__pf);
	bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 150.000000);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, -150.000000);
	bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf);
	bpp__FacingAIx__pfzy = bpfv__CallFunc_BooleanOR_ReturnValue__pf;
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnRep_Sprinting__pf()
{
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	TScriptInterface<IINT_MeiAnimBP_C> bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	TScriptInterface<IINT_MeiAnimBP_C> bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__Sprinting__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				if ( bpfv__CallFunc_GetAnimInstance_ReturnValue__pf && bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetObject(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__SprintState__pf(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.GetObject() , true);
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				if ( bpfv__CallFunc_GetAnimInstance_ReturnValue__pf && bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetObject(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__SprintState__pf(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.GetObject() , false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_EquipWeapon__pf(ABP_BasePickup_C__pf4194264409* bpp__EquippedWeapon__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__EquippedItems__pf.bpv__EquippedWeapon_3_2AEADD3C4CED507C2F25B7B821C8A7A4__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				AActor::FlushNetDormancy();
			}
		case 3:
			{
				bpv__EquippedWeapon__pf = bpp__EquippedWeapon__pf;
			}
		case 4:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 27, FName(TEXT("EquippedWeapon")));
			}
		case 5:
			{
				bpf__OnRep_EquippedWeapon__pf();
			}
		case 6:
			{
				bpv__EquippedItems__pf.bpv__EquippedWeapon_3_2AEADD3C4CED507C2F25B7B821C8A7A4__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnRep_EquippedWeapon__pf()
{
	TScriptInterface<IINT_Pickups_C> bpfv__K2Node_DynamicCast_AsINT_Pickups__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__EquippedWeapon__pf))
				{
					bpv__EquippedWeapon__pf->AActor::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("weapon_hand_r")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepRelative, true);
				}
			}
		case 2:
			{
				if ( bpv__EquippedWeapon__pf && bpv__EquippedWeapon__pf->GetClass()->ImplementsInterface(UINT_Pickups_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Pickups__pf.SetObject(bpv__EquippedWeapon__pf);
					void* IAddress = bpv__EquippedWeapon__pf->GetInterfaceAddress(UINT_Pickups_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Pickups__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Pickups__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsINT_Pickups__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Pickups__pf))
				{
					IINT_Pickups_C::Execute_bpf__DisablePhysics__pf(bpfv__K2Node_DynamicCast_AsINT_Pickups__pf.GetObject() );
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_EquipShield__pf(ABP_BasePickup_C__pf4194264409* bpp__EquippedSheild__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__EquippedItems__pf.bpv__EquippedShield_5_0609C5CD44C254686A858AB0ECD355AF__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				AActor::FlushNetDormancy();
			}
		case 3:
			{
				bpv__EquippedShield__pf = bpp__EquippedSheild__pf;
			}
		case 4:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 29, FName(TEXT("EquippedShield")));
			}
		case 5:
			{
				bpf__OnRep_EquippedShield__pf();
			}
		case 6:
			{
				bpv__EquippedItems__pf.bpv__EquippedShield_5_0609C5CD44C254686A858AB0ECD355AF__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnRep_EquippedShield__pf()
{
	TScriptInterface<IINT_Pickups_C> bpfv__K2Node_DynamicCast_AsINT_Pickups__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__EquippedShield__pf))
				{
					bpv__EquippedShield__pf->AActor::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepRelative, true);
				}
			}
		case 2:
			{
				if ( bpv__EquippedShield__pf && bpv__EquippedShield__pf->GetClass()->ImplementsInterface(UINT_Pickups_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Pickups__pf.SetObject(bpv__EquippedShield__pf);
					void* IAddress = bpv__EquippedShield__pf->GetInterfaceAddress(UINT_Pickups_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Pickups__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Pickups__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsINT_Pickups__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Pickups__pf))
				{
					IINT_Pickups_C::Execute_bpf__DisablePhysics__pf(bpfv__K2Node_DynamicCast_AsINT_Pickups__pf.GetObject() );
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_EquipLight__pf(ABP_BasePickup_C__pf4194264409* bpp__EquippedLight__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__EquippedItems__pf.bpv__EquippedLight_6_05598BE34059841F652C64B36AE9E36C__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				AActor::FlushNetDormancy();
			}
		case 3:
			{
				bpv__EquippedLight__pf = bpp__EquippedLight__pf;
			}
		case 4:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 30, FName(TEXT("EquippedLight")));
			}
		case 5:
			{
				bpf__OnRep_EquippedLight__pf();
			}
		case 6:
			{
				bpv__EquippedItems__pf.bpv__EquippedLight_6_05598BE34059841F652C64B36AE9E36C__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnRep_EquippedLight__pf()
{
	TScriptInterface<IINT_Pickups_C> bpfv__K2Node_DynamicCast_AsINT_Pickups__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__EquippedLight__pf))
				{
					bpv__EquippedLight__pf->AActor::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepRelative, true);
				}
			}
		case 2:
			{
				if ( bpv__EquippedLight__pf && bpv__EquippedLight__pf->GetClass()->ImplementsInterface(UINT_Pickups_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Pickups__pf.SetObject(bpv__EquippedLight__pf);
					void* IAddress = bpv__EquippedLight__pf->GetInterfaceAddress(UINT_Pickups_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Pickups__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Pickups__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsINT_Pickups__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Pickups__pf))
				{
					IINT_Pickups_C::Execute_bpf__DisablePhysics__pf(bpfv__K2Node_DynamicCast_AsINT_Pickups__pf.GetObject() );
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnRep_PlayerDead__pf()
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__PlayerDead__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(::IsValid((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))))
				{
					(*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))->SetCollisionProfileName(FName(TEXT("Ragdoll")), true);
				}
			}
		case 3:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetCollisionProfileName(FName(TEXT("Ragdoll")), true);
				}
			}
		case 4:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetSimulatePhysics(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_PlayerAttack__pf(UAnimMontage* bpp__MontageToPlay__pf)
{
	AActor::FlushNetDormancy();
	bpv__CurrentlyAttacking__pf = true;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 25, FName(TEXT("CurrentlyAttacking")));
	AActor::FlushNetDormancy();
	bpv__CanMove__pf = false;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 33, FName(TEXT("CanMove")));
	AActor::FlushNetDormancy();
	bpv__FullBody__pf = true;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 34, FName(TEXT("FullBody")));
	bpf__OnRep_FullBody__pf();
	bpf__Multi_PlayMontage__pf((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), bpp__MontageToPlay__pf, FName(TEXT("None")));
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnRep_FullBody__pf()
{
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	TScriptInterface<IINT_MeiAnimBP_C> bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	TScriptInterface<IINT_MeiAnimBP_C> bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__FullBody__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				if ( bpfv__CallFunc_GetAnimInstance_ReturnValue__pf && bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetObject(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__FullBodyState__pf(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.GetObject() , true);
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				if ( bpfv__CallFunc_GetAnimInstance_ReturnValue__pf && bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetObject(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__FullBodyState__pf(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.GetObject() , false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__OnRep_Blocking__pf()
{
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	TScriptInterface<IINT_MeiAnimBP_C> bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	TScriptInterface<IINT_MeiAnimBP_C> bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__Blocking__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				if ( bpfv__CallFunc_GetAnimInstance_ReturnValue__pf && bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetObject(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__BlockingState__pf(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.GetObject() , true);
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				if ( bpfv__CallFunc_GetAnimInstance_ReturnValue__pf && bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetObject(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__BlockingState__pf(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.GetObject() , false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_CheckBlockingDirection__pf(AActor* bpp__Actor__pf, /*out*/ bool& bpp__Return__pf)
{
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_GetDirectionUnitVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	FVector bpfv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Dot_VectorVector_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
	if(::IsValid(bpp__Actor__pf))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpp__Actor__pf->AActor::K2_GetActorLocation();
	}
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_GetDirectionUnitVector_ReturnValue__pf = UKismetMathLibrary::GetDirectionUnitVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, FVector(0.000000,0.000000,0.000000));
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetDirectionUnitVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
	bpfv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_MakeVector_ReturnValue__pf, 0.000100);
	bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X_1__pf, bpfv__CallFunc_BreakVector_Y_1__pf, 0.000000);
	bpfv__CallFunc_Normal_ReturnValue_1__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, 0.000100);
	bpfv__CallFunc_Dot_VectorVector_ReturnValue__pf = UKismetMathLibrary::Dot_VectorVector(bpfv__CallFunc_Normal_ReturnValue__pf, bpfv__CallFunc_Normal_ReturnValue_1__pf);
	bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Dot_VectorVector_ReturnValue__pf, -0.400000);
	bpp__Return__pf = bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf;
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_DrainStamina__pf()
{
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsFalling_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	TScriptInterface<IINT_Controller_Mei_C> bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpf__f_SprintSwitch__pf(false);
			}
		case 3:
			{
				bpf__Client_Jogging__pf();
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_GetVelocity_ReturnValue__pf = GetVelocity();
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					bpfv__CallFunc_IsFalling_ReturnValue__pf = (*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->IsFalling();
				}
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_IsFalling_ReturnValue__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf, 1.000000);
				bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 6:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if ( bpfv__CallFunc_GetController_ReturnValue__pf && bpfv__CallFunc_GetController_ReturnValue__pf->GetClass()->ImplementsInterface(UINT_Controller_Mei_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf.SetObject(bpfv__CallFunc_GetController_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetController_ReturnValue__pf->GetInterfaceAddress(UINT_Controller_Mei_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf, bpv__PlayerStats__pf.bpv__MaxStamina_9_673463104FFD0F393D82E48AA88F409E__pf);
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf))
				{
					IINT_Controller_Mei_C::Execute_bpf__UpdateStaminaUI__pf(bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf.GetObject() , bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpf__f_RecoverStamina__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_RecoverStamina__pf()
{
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	TScriptInterface<IINT_Controller_Mei_C> bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue_1__pf{};
	TScriptInterface<IINT_Controller_Mei_C> bpfv__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf, 0.500000);
				bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf, 0.500000);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpv__PlayerStats__pf.bpv__MaxStamina_9_673463104FFD0F393D82E48AA88F409E__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__RecoverStaminaHandle__pf);
			}
		case 4:
			{
				bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf = bpv__PlayerStats__pf.bpv__MaxStamina_9_673463104FFD0F393D82E48AA88F409E__pf;
			}
		case 5:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if ( bpfv__CallFunc_GetController_ReturnValue__pf && bpfv__CallFunc_GetController_ReturnValue__pf->GetClass()->ImplementsInterface(UINT_Controller_Mei_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf.SetObject(bpfv__CallFunc_GetController_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetController_ReturnValue__pf->GetInterfaceAddress(UINT_Controller_Mei_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf))
				{
					IINT_Controller_Mei_C::Execute_bpf__UpdateStaminaUI__pf(bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf.GetObject() , 1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_GetController_ReturnValue_1__pf = APawn::GetController();
				if ( bpfv__CallFunc_GetController_ReturnValue_1__pf && bpfv__CallFunc_GetController_ReturnValue_1__pf->GetClass()->ImplementsInterface(UINT_Controller_Mei_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf.SetObject(bpfv__CallFunc_GetController_ReturnValue_1__pf);
					void* IAddress = bpfv__CallFunc_GetController_ReturnValue_1__pf->GetInterfaceAddress(UINT_Controller_Mei_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf, bpv__PlayerStats__pf.bpv__MaxStamina_9_673463104FFD0F393D82E48AA88F409E__pf);
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf))
				{
					IINT_Controller_Mei_C::Execute_bpf__UpdateStaminaUI__pf(bpfv__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf.GetObject() , bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_ReduceStamina__pf(float bpp__StaminaToReduce__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	TScriptInterface<IINT_Controller_Mei_C> bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf, bpp__StaminaToReduce__pf);
				bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if ( bpfv__CallFunc_GetController_ReturnValue__pf && bpfv__CallFunc_GetController_ReturnValue__pf->GetClass()->ImplementsInterface(UINT_Controller_Mei_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf.SetObject(bpfv__CallFunc_GetController_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetController_ReturnValue__pf->GetInterfaceAddress(UINT_Controller_Mei_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__PlayerStats__pf.bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf, bpv__PlayerStats__pf.bpv__MaxStamina_9_673463104FFD0F393D82E48AA88F409E__pf);
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf))
				{
					IINT_Controller_Mei_C::Execute_bpf__UpdateStaminaUI__pf(bpfv__K2Node_DynamicCast_AsINT_Controller_Mei__pf.GetObject() , bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				}
			}
		case 4:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__Sprinting__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("f_RecoverStamina")), 0.200000, true, 0.000000, 0.000000);
			}
		case 6:
			{
				bpv__RecoverStaminaHandle__pf = bpfv__CallFunc_K2_SetTimer_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_LockOn__pf()
{
	APlayerCameraManager* bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetCameraLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
	if(::IsValid(bpv__Target__pf))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__Target__pf->AActor::K2_GetActorLocation();
	}
	if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
	{
		bpfv__CallFunc_GetCameraLocation_ReturnValue__pf = bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->GetCameraLocation();
	}
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetCameraLocation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
	bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X_1__pf, bpfv__CallFunc_BreakVector_Y_1__pf, 0.000000);
	bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
	bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_BreakRotator_Pitch__pf, 20.000000);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(bpfv__CallFunc_BreakRotator_Roll__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpfv__CallFunc_BreakRotator_Yaw__pf);
	if(::IsValid(bpfv__CallFunc_GetController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetController_ReturnValue__pf->SetControlRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf);
	}
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_EnableGlider__pf()
{
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	bpv__Gliding__pf = true;
	if(::IsValid(bpv__Umbrella__pf))
	{
		bpv__Umbrella__pf->USceneComponent::SetHiddenInGame(false, false);
	}
	FVector  __Local__92 = FVector(0.000000,0.000000,0.000000);
	UKismetMathLibrary::BreakVector(((::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() ))))) ? ((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->Velocity) : (__Local__92)), /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_BreakVector_X__pf, 6.000000);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, 6.000000);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf, -300.000000);
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->Velocity = bpfv__CallFunc_MakeVector_ReturnValue__pf;
	}
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->GravityScale = 0.000000;
	}
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_DisableGlider__pf()
{
	bpv__Gliding__pf = false;
	if(::IsValid(bpv__Umbrella__pf))
	{
		bpv__Umbrella__pf->USceneComponent::SetHiddenInGame(true, false);
	}
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->GravityScale = 1.000000;
	}
}
void ABP_Character_Mei_C__pf4244024795::bpf__f_Charge__pf(UAnimMontage* bpp__MontageToPlay__pf)
{
	AActor::FlushNetDormancy();
	bpv__CanMove__pf = false;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 33, FName(TEXT("CanMove")));
	AActor::FlushNetDormancy();
	bpv__FullBody__pf = true;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 34, FName(TEXT("FullBody")));
	bpf__OnRep_FullBody__pf();
	bpf__charginganimation__pf(((USkeletalMeshComponent*)nullptr), bpp__MontageToPlay__pf);
}
void ABP_Character_Mei_C__pf4244024795::bpf__DetectLedge__pf(EDrawDebugTrace::Type bpp__DrawDebugType__pf, /*out*/ bool& bpp__Detect__pf)
{
	TArray<AActor*> bpfv__Temp_object_Variable__pf{};
	TArray<AActor*> bpfv__Temp_object_Variable_1__pf{};
	FVector bpfv__CallFunc_GetSocketLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_SphereTraceSingle_OutHit__pf{};
	bool bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_SphereTraceSingle_OutHit_1__pf{};
	bool bpfv__CallFunc_SphereTraceSingle_ReturnValue_1__pf{};
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit_1__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap_1__pf{};
	float bpfv__CallFunc_BreakHitResult_Time_1__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance_1__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal_1__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat_1__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor_1__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent_1__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName_1__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem_1__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex_1__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_1__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetActorForwardVector_ReturnValue_1__pf, 80.000000);
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf);
				bpfv__CallFunc_SphereTraceSingle_ReturnValue_1__pf = UKismetSystemLibrary::SphereTraceSingle(this, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf, 20.000000, ETraceTypeQuery::TraceTypeQuery1, false, bpfv__Temp_object_Variable_1__pf, bpp__DrawDebugType__pf, /*out*/ bpfv__CallFunc_SphereTraceSingle_OutHit_1__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 2:
			{
				if (!bpfv__CallFunc_SphereTraceSingle_ReturnValue_1__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 3:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_SphereTraceSingle_OutHit_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd_1__pf);
				bpv__Location__pf = bpfv__CallFunc_BreakHitResult_Location_1__pf;
			}
		case 4:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_SphereTraceSingle_OutHit_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart_1__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd_1__pf);
				bpv__ImpactxNormal__pfT = bpfv__CallFunc_BreakHitResult_ImpactNormal_1__pf;
			}
		case 5:
			{
				bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf, 20.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__Location__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, FVector(0.000000,0.000000,200.000000));
				bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf = UKismetSystemLibrary::SphereTraceSingle(this, bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, 32.000000, ETraceTypeQuery::TraceTypeQuery1, false, bpfv__Temp_object_Variable__pf, bpp__DrawDebugType__pf, /*out*/ bpfv__CallFunc_SphereTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 6:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_GetSocketLocation_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->GetSocketLocation(FName(TEXT("head")));
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetSocketLocation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_SphereTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_BreakVector_Z_1__pf, bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf, bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 7:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_SphereTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__HeightLocation__pf = bpfv__CallFunc_BreakHitResult_ImpactPoint__pf;
			}
		case 8:
			{
				bpp__Detect__pf = true;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpp__Detect__pf = false;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpp__Detect__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__SetMoveSide__pf(bool bpp__Left__pf, bool bpp__Right__pf, USceneComponent* bpp__TopArrow__pf, EDrawDebugTrace::Type bpp__DrawDebugType__pf, USceneComponent* bpp__SideArrow__pf)
{
	TArray<AActor*> bpfv__Temp_object_Variable__pf{};
	bool bpfv__CallFunc_DetectLedge_Detect__pf{};
	TScriptInterface<IINT_MeiAnimBP_C> bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	TArray<AActor*> bpfv__Temp_object_Variable_1__pf{};
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	TScriptInterface<IINT_MeiAnimBP_C> bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	FHitResult bpfv__CallFunc_SphereTraceSingle_OutHit__pf{};
	bool bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf(EForceInit::ForceInit);
	TScriptInterface<IINT_MeiAnimBP_C> bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetActorRightVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_SphereTraceSingle_OutHit_1__pf{};
	bool bpfv__CallFunc_SphereTraceSingle_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if ( bpv__PlayerAnimInstance__pf && bpv__PlayerAnimInstance__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf.SetObject(bpv__PlayerAnimInstance__pf);
					void* IAddress = bpv__PlayerAnimInstance__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__HangingMoveState__pf(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf.GetObject() , bpp__Left__pf, bpp__Right__pf);
				}
			}
		case 3:
			{
				bpf__DetectLedge__pf(bpp__DrawDebugType__pf, /*out*/ bpfv__CallFunc_DetectLedge_Detect__pf);
			}
		case 4:
			{
				if(::IsValid(bpp__TopArrow__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf = bpp__TopArrow__pf->USceneComponent::GetForwardVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf, 80.000000);
				if(::IsValid(bpp__TopArrow__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpp__TopArrow__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf);
				bpfv__CallFunc_SphereTraceSingle_ReturnValue_1__pf = UKismetSystemLibrary::SphereTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, 5.000000, ETraceTypeQuery::TraceTypeQuery1, false, bpfv__Temp_object_Variable__pf, bpp__DrawDebugType__pf, /*out*/ bpfv__CallFunc_SphereTraceSingle_OutHit_1__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 5:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_SphereTraceSingle_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpp__SideArrow__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpp__SideArrow__pf->USceneComponent::GetForwardVector();
				}
				if(::IsValid(bpp__SideArrow__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpp__SideArrow__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, 90.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf = UKismetSystemLibrary::SphereTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, 5.000000, ETraceTypeQuery::TraceTypeQuery1, false, bpfv__Temp_object_Variable_1__pf, bpp__DrawDebugType__pf, /*out*/ bpfv__CallFunc_SphereTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 7:
			{
				if (!bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_GetActorRightVector_ReturnValue__pf = AActor::GetActorRightVector();
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetActorRightVector_ReturnValue__pf, bpv__RightAxisxValue__pfT);
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf);
				bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = AActor::K2_SetActorLocation(bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf, false);
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				if ( bpv__PlayerAnimInstance__pf && bpv__PlayerAnimInstance__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetObject(bpv__PlayerAnimInstance__pf);
					void* IAddress = bpv__PlayerAnimInstance__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__HangingMoveState__pf(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf.GetObject() , false, false);
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				if ( bpv__PlayerAnimInstance__pf && bpv__PlayerAnimInstance__pf->GetClass()->ImplementsInterface(UINT_MeiAnimBP_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetObject(bpv__PlayerAnimInstance__pf);
					void* IAddress = bpv__PlayerAnimInstance__pf->GetInterfaceAddress(UINT_MeiAnimBP_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 12:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf))
				{
					IINT_MeiAnimBP_C::Execute_bpf__HangingMoveState__pf(bpfv__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf.GetObject() , false, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__CreatePredictionPath__pf()
{
	int32 bpfv__Index_Local__pf{};
	TArray<FVector> bpfv__SplineLocation_Local__pf{};
	FTransform bpfv__Temp_struct_Variable__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetNumberOfSplineSegments_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	TArray<AActor*> bpfv__K2Node_MakeArray_Array__pf{};
	FTransform bpfv__CallFunc_GetSocketTransform_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutHit__pf{};
	TArray<FVector> bpfv__CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutPathPositions__pf{};
	FVector bpfv__CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutLastTraceDestination__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bool  __Local__93 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(((::IsValid(bpv__AnimRef__pf)) ? (bpv__AnimRef__pf->bpv__Throw__pf) : (__Local__93)));
				bool  __Local__94 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(((::IsValid(bpv__AnimRef__pf)) ? (bpv__AnimRef__pf->bpv__ReadyToThrow__pf) : (__Local__94)), bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				__StateStack.Push(9);
			}
		case 3:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_GetSocketTransform_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->GetSocketTransform(FName(TEXT("throw_hand_r")), ERelativeTransformSpace::RTS_World);
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetSocketTransform_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_BreakTransform_Rotation__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, bpv__PredectionScale__pf);
				bpv__Velocity__pf = bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf;
			}
		case 4:
			{
				bpfv__K2Node_MakeArray_Array__pf.SetNum(1, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = this;
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_GetSocketTransform_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->GetSocketTransform(FName(TEXT("throw_hand_r")), ERelativeTransformSpace::RTS_World);
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetSocketTransform_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				(bpfv__CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutPathPositions__pf).Reset();
				bpfv__CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_ReturnValue__pf = UGameplayStatics::Blueprint_PredictProjectilePath_ByTraceChannel(this, /*out*/ bpfv__CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutHit__pf, /*out*/ bpfv__CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutPathPositions__pf, /*out*/ bpfv__CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutLastTraceDestination__pf, bpfv__CallFunc_BreakTransform_Location__pf, bpv__Velocity__pf, true, 20.000000, ECollisionChannel::ECC_Visibility, false, bpfv__K2Node_MakeArray_Array__pf, EDrawDebugTrace::None, 0.000000, 15.000000, 2.000000, 0.000000);
			}
		case 5:
			{
				bpfv__SplineLocation_Local__pf = bpfv__CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutPathPositions__pf;
			}
		case 6:
			{
				if (!bpfv__CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_ReturnValue__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(bpv__PredictionEnd__pf))
				{
					bpv__PredictionEnd__pf->SetActorHiddenInGame(false);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__PredictionEnd__pf))
				{
					bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = bpv__PredictionEnd__pf->AActor::K2_SetActorLocation(bpfv__CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutLastTraceDestination__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpf__DestroyPredictionPathMeshes__pf();
			}
		case 10:
			{
				if(::IsValid(bpv__Spline__pf))
				{
					bpv__Spline__pf->USplineComponent::SetSplinePoints(bpfv__SplineLocation_Local__pf, ESplineCoordinateSpace::World, true);
				}
			}
		case 11:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 12:
			{
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetNumberOfSplineSegments_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetNumberOfSplineSegments();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetNumberOfSplineSegments_ReturnValue__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				__StateStack.Push(18);
			}
		case 14:
			{
				bpfv__Index_Local__pf = bpfv__Temp_int_Variable__pf;
			}
		case 15:
			{
				bpfv__Temp_struct_Variable__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-0")), true, bpfv__Temp_struct_Variable__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 16:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__PredictionPathMeshes__pf, bpfv__CallFunc_AddComponent_ReturnValue__pf);
			}
		case 17:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__Index_Local__pf, 1);
				if(::IsValid(bpv__Spline__pf))
				{
					bpv__Spline__pf->USplineComponent::GetLocationAndTangentAtSplinePoint(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, /*out*/ bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location__pf, /*out*/ bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent__pf, ESplineCoordinateSpace::World);
				}
				if(::IsValid(bpv__Spline__pf))
				{
					bpv__Spline__pf->USplineComponent::GetLocationAndTangentAtSplinePoint(bpfv__Index_Local__pf, /*out*/ bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location_1__pf, /*out*/ bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1__pf, ESplineCoordinateSpace::World);
				}
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->USplineMeshComponent::SetStartAndEnd(bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location_1__pf, bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1__pf, bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location__pf, bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent__pf, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 12;
				break;
			}
		case 19:
			{
				if(::IsValid(bpv__PredictionEnd__pf))
				{
					bpv__PredictionEnd__pf->SetActorHiddenInGame(true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__DestroyPredictionPathMeshes__pf()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	USplineMeshComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__PredictionPathMeshes__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(8);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__PredictionPathMeshes__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UActorComponent::K2_DestroyComponent(this);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Clear(bpv__PredictionPathMeshes__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Character_Mei_C__pf4244024795::bpf__UpdateMovement__pf(bool bpp__CanMove__pf, /*out*/ bool& bpp__Return__pf)
{
	AActor::FlushNetDormancy();
	bpv__CanMove__pf = bpp__CanMove__pf;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 33, FName(TEXT("CanMove")));
	bpp__Return__pf = bpv__CanMove__pf;
}
void ABP_Character_Mei_C__pf4244024795::bpf__IsDead__pf(/*out*/ bool& bpp__Dead__pf)
{
	bpp__Dead__pf = bpv__PlayerDead__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Character_Mei_C__pf4244024795::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{215, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Glide.A_Glide 
		{216, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Mei/Mesh/Character/Mei/SK_Mei.SK_Mei 
		{164, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  TextureRenderTarget2D /Game/Mei/UI/Minimap/RT_Minimap.RT_Minimap 
		{192, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Mei/test/umbrella/SM_Umbrella.SM_Umbrella 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Thrust_1_Montage.Thrust_1_Montage 
		{213, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimMontage /Game/Mei/Anim/Mei/HeavyThrust_Montage.HeavyThrust_Montage 
		{214, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Attack_Charge_AttackPart_Montage.Attack_Charge_AttackPart_Montage 
		{190, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder 
		{191, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Mei/BP/Pickup/self/Throw/M_PredictionPath.M_PredictionPath 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Standing_Aim_Recoil_Montage.Standing_Aim_Recoil_Montage 
		{205, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimMontage /Game/Mei/BP/Pickup/self/Bow/Bow_Montage.Bow_Montage 
		{207, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  NiagaraSystem /Game/Mei/VFX/Weapon/Hit/FX_HIt.FX_Hit 
		{208, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Game/Mei/Sound/audio/hit_robot1.hit_robot1 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Backflip_Montage.Backflip_Montage 
		{210, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Braced_Hang_To_Crouch_Montage.Braced_Hang_To_Crouch_Montage 
		{203, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Game/Mei/Sound/audio/power_charge.power_charge 
		{204, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  NiagaraSystem /Game/Mei/VFX/Charge/FX_Charge.FX_Charge 
		{202, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Attack_Charge_ChargePart_Montage.Attack_Charge_ChargePart_Montage 
		{209, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  NiagaraSystem /Game/Mei/VFX/Shield/FX_Shield.FX_Shield 
		{201, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Rolling_Montage.Rolling_Montage 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Character_Mei_C__pf4244024795::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{342, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BaseClasses/BP_Character.BP_Character_C 
		{339, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/Character/INT_Character_Mei.INT_Character_Mei_C 
		{157, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpringArmComponent 
		{163, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneCaptureComponent2D 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{158, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{159, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ArrowComponent 
		{193, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SplineComponent 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{194, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature 
		{71, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/InputCore.Key 
		{195, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AnimInstance 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AnimMontage 
		{155, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{196, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Controller 
		{30, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DamageType 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SoundBase 
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Niagara.NiagaraSystem 
		{198, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EMovementMode 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AudioComponent 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerController 
		{165, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Character 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Pawn 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Texture2D 
		{145, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{177, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CapsuleComponent 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Border 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Widget 
		{206, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.SlateBlueprintLibrary 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ActorComponent 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{211, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EDrawDebugTrace 
		{212, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MovementComponent 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{45, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIController 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SphereComponent 
		{161, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIPerceptionStimuliSourceComponent 
		{162, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AISense_Sight 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Thrust_1.A_Thrust_1 
		{217, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{218, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/StarterContent/Props/MaterialSphere.MaterialSphere 
		{219, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{222, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Mei/BP/Pickup/self/Bow/SK_Bow.SK_Bow 
		{223, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/Mei/BP/Pickup/self/Bow/Bow_Skeleton.Bow_Skeleton 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{220, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Mei/BP/Pickup/self/Bow/SM_Arrow.SM_Arrow 
		{221, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Mei/UI/crosshair.crosshair 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/Mei/Mesh/Character/Mei/SK_Mei_Skeleton.SK_Mei_Skeleton 
		{234, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/PhysicsCore.EPhysicalSurface 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{235, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_ModifyBone 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByBool 
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{236, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundCue /Game/Mei/Sound/cue/Rock_Cue.Rock_Cue 
		{237, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundCue /Game/Mei/Sound/cue/Grass_Cue.Grass_Cue 
		{238, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Game/Mei/Sound/cue/Dirt_01.Dirt_01 
		{239, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK 
		{240, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_UseCachedPose 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_SaveCachedPose 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{241, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator 
		{242, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByInt 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{243, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/KawaiiPhysics.AnimNode_KawaiiPhysics 
		{244, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_ConvertLocalToComponentSpace 
		{245, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_ConvertComponentToLocalSpace 
		{246, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Throw.A_Throw 
		{247, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jogging.A_Jogging 
		{248, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Braced_Hang_Shimmy_Left.A_Braced_Hang_Shimmy_Left 
		{249, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Braced_Hang_Shimmy_Right.A_Braced_Hang_Shimmy_Right 
		{250, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Crouch_Walk.A_Crouch_Walk 
		{251, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Crouch_Idle.A_Crouch_Idle 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jump_end.A_Jump_end 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jump_loop.A_Jump_loop 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jump_start.A_Jump_start 
		{252, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Sprinting.A_Sprinting 
		{253, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Standing_Aim_Walk_Forward.A_Standing_Aim_Walk_Forward 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Guard.A_Guard 
		{254, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jogging_Old.A_Jogging_Old 
		{255, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Guard_WeaponDrawn_Loop.A_Guard_WeaponDrawn_Loop 
		{256, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Idle.A_Idle 
		{257, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/EngineMeshes/MaterialSphere.MaterialSphere 
		{224, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Mei/BP/Pickup/self/Throw/M_PredictionEnd.M_PredictionEnd 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{258, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetComponent 
		{259, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{260, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{261, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{262, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{263, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{264, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{265, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{266, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{267, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{268, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  NiagaraSystem /Game/Mei/VFX/Vanish/FX_Vanish.FX_Vanish 
		{269, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{270, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{271, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.PawnSensingComponent 
		{272, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameStateBase 
		{225, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.DetourCrowdAIController 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.ProgressBar 
		{226, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Mei/UI/T_Target.T_Target 
		{352, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Character/BP_TargetingSystem.BP_TargetingSystem_C 
		{353, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Pickup/self/Throw/BP_PredictionEnd.BP_PredictionEnd_C 
		{139, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/Character/INT_MeiAnimBP.INT_MeiAnimBP_C 
		{350, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Pickup/BP_BasePickup.BP_BasePickup_C 
		{330, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/Character/INT_Controller_Mei.INT_Controller_Mei_C 
		{338, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/Pickup/INT_Pickups.INT_Pickups_C 
		{354, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Mei/BP/Character/ABP_Mei.ABP_Mei_C 
		{355, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Pickup/self/Bow/BP_Bow.BP_Bow_C 
		{356, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/W_Crosshair.W_Crosshair_C 
		{357, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Pickup/self/Bow/BP_Arrow.BP_Arrow_C 
		{358, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Pickup/self/Throw/BP_Throw.BP_Throw_C 
		{340, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/Pickup/S_Pickupinfo.S_Pickupinfo 
		{359, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/Character/S_EquippedItems.S_EquippedItems 
		{360, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/Character/S_PlayerStats.S_PlayerStats 
		{361, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/Character/E_PlayerAttacks.E_PlayerAttacks 
		{90, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/Pickup/E_PickupTypes.E_PickupTypes 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Character_Mei_C__pf4244024795
{
	FRegisterHelper__ABP_Character_Mei_C__pf4244024795()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/Character/BP_Character_Mei"), &ABP_Character_Mei_C__pf4244024795::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Character_Mei_C__pf4244024795 Instance;
};
FRegisterHelper__ABP_Character_Mei_C__pf4244024795 FRegisterHelper__ABP_Character_Mei_C__pf4244024795::Instance;
void ABP_Character_Mei_C__pf4244024795::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__Sprinting__pf, FName(TEXT("Sprinting")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__Rolling__pf, FName(TEXT("Rolling")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__CurrentlyAttacking__pf, FName(TEXT("CurrentlyAttacking")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__OverlappedPickup__pf, FName(TEXT("OverlappedPickup")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__EquippedWeapon__pf, FName(TEXT("EquippedWeapon")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__EquippedItems__pf, FName(TEXT("EquippedItems")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__EquippedShield__pf, FName(TEXT("EquippedShield")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__EquippedLight__pf, FName(TEXT("EquippedLight")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__PlayerStats__pf, FName(TEXT("PlayerStats")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__PlayerDead__pf, FName(TEXT("PlayerDead")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__CanMove__pf, FName(TEXT("CanMove")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__FullBody__pf, FName(TEXT("FullBody")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__Blocking__pf, FName(TEXT("Blocking")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__LockedOn__pf, FName(TEXT("LockedOn")));
	DOREPLIFETIME_DIFFNAMES(ABP_Character_Mei_C__pf4244024795, bpv__Target__pf, FName(TEXT("Target")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
