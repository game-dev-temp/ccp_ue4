#include "NativizedAssets.h"
#include "BP_Mei_EditorBuildingUtility__pf2220187047.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
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
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
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
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
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
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
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
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "BP_Mei_Building_BaseObject__pf2826203124.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "BPI_Mei_SaveGame__pf685842786.h"
#include "STR_Mei_SaveData_Level__pf2864127960.h"
#include "STR_Mei_SaveData_BuildingObject__pf2864127960.h"
#include "BPI_Mei_SaveObject__pf685842786.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintMapLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "STR_Mei_SaveData_Actor__pf2864127960.h"
#include "BP_Mei_SaveGame__pf3770675254.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Mei_EditorBuildingUtility_C__pf2220187047::ABP_Mei_EditorBuildingUtility_C__pf2220187047(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Billboard__pf = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	bpv__TextRender__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRender"));
	bpv__MoveCollision__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("MoveCollision"));
	RootComponent = bpv__Billboard__pf;
	bpv__Billboard__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Billboard__pf), false, 0));
	bpv__TextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TextRender__pf->AttachToComponent(bpv__Billboard__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TextRender__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[792BBA4646304B1D211D31BC0B98A57C]\", \"C186A2FF4088F15EDF163890B506A8ED\", \"Editor Building Utility\")")	);
	bpv__TextRender__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__TextRender__pf->TextRenderColor = FColor(255, 0, 0, 255);
	auto& __Local__2 = (*(AccessPrivateProperty<FVector >((bpv__TextRender__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__2 = FVector(0.000000, 0.000000, 50.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__TextRender__pf), false, 0));
	bpv__MoveCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MoveCollision__pf->AttachToComponent(bpv__Billboard__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__MoveCollision__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__3 = FVector(0.000000, 0.000000, 0.000000);
	bpv__MoveCollision__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__MoveCollision__pf), true, 0));
	bpv__SelectCollisionExtent__pf = FVector(400.000000, 400.000000, 400.000000);
	bpv__SelectedObjects__pf = TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*> ();
	bpv__ReadyForTheConsequences__pf = false;
	bpv__SaveSlotName__pf = FString(TEXT("TestSave"));
	static TWeakFieldPtr<FProperty> __Local__5{};
	const FProperty* __Local__4 = __Local__5.Get();
	if (nullptr == __Local__4)
	{
		__Local__4 = (AActor::StaticClass())->FindPropertyByName(FName(TEXT("bHidden")));
		check(__Local__4);
		__Local__5 = __Local__4;
	}
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((this), true, 0));
	auto& __Local__6 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__6 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Billboard__pf)
	{
		bpv__Billboard__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TextRender__pf)
	{
		bpv__TextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MoveCollision__pf)
	{
		bpv__MoveCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_Mei_SaveGame_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_SaveGame_C());
	extern UClass* Z_Construct_UClass_UBPI_Mei_SaveObject_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_SaveObject_C());
	InDynamicClass->ReferencedConvertedFields.Add(UBP_Mei_SaveGame_C__pf3770675254::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_SaveData_Level__pf2864127960();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_SaveData_Level__pf2864127960());
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_SaveData_Actor__pf2864127960();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_SaveData_Actor__pf2864127960());
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_SaveData_BuildingObject__pf2864127960();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_SaveData_BuildingObject__pf2864127960());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__7 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__7);
	static TWeakFieldPtr<FProperty> __Local__9{};
	const FProperty* __Local__8 = __Local__9.Get();
	if (nullptr == __Local__8)
	{
		__Local__8 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__8);
		__Local__9 = __Local__8;
	}
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((__Local__7), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::bpf__UserConstructionScript__pf()
{
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	UKismetMathLibrary::BreakVector(bpv__SelectCollisionExtent__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_BreakVector_Z__pf, -1.000000);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	if(::IsValid(bpv__MoveCollision__pf))
	{
		bpv__MoveCollision__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
	}
	if(::IsValid(bpv__MoveCollision__pf))
	{
		bpv__MoveCollision__pf->UBoxComponent::SetBoxExtent(bpv__SelectCollisionExtent__pf, true);
	}
}
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::bpf__AddSelectedObjects__pf()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	TArray<AActor*> bpfv__Temp_object_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetScaledBoxExtent_ReturnValue__pf(EForceInit::ForceInit);
	TArray<FHitResult> bpfv__CallFunc_BoxTraceMulti_OutHits__pf{};
	bool bpfv__CallFunc_BoxTraceMulti_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
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
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__MoveCollision__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__MoveCollision__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__MoveCollision__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__MoveCollision__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__MoveCollision__pf))
				{
					bpfv__CallFunc_GetScaledBoxExtent_ReturnValue__pf = bpv__MoveCollision__pf->UBoxComponent::GetScaledBoxExtent();
				}
				(bpfv__CallFunc_BoxTraceMulti_OutHits__pf).Reset();
				bpfv__CallFunc_BoxTraceMulti_ReturnValue__pf = UKismetSystemLibrary::BoxTraceMulti(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_GetScaledBoxExtent_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, ETraceTypeQuery::TraceTypeQuery1, false, bpfv__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ bpfv__CallFunc_BoxTraceMulti_OutHits__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_BoxTraceMulti_OutHits__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(9);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_BoxTraceMulti_OutHits__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf = Cast<ABP_Mei_Building_BaseObject_C__pf2826203124>(bpfv__CallFunc_BreakHitResult_HitActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_Array_AddUnique_ReturnValue__pf = FCustomThunkTemplates::Array_AddUnique(bpv__SelectedObjects__pf, bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::bpf__CopySelectedObjects__pf()
{
	TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*> bpfv__LocalCopyActors__pf{};
	UBP_Mei_SaveGame_C__pf3770675254* bpfv__LocalSaveGame__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	TArray<UObject*> bpfv__K2Node_MakeArray_Array__pf{};
	UObject* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	TScriptInterface<IBPI_Mei_SaveObject_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_2__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_3__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_Array_Get_Item_1__pf{};
	FHitResult bpfv__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_Array_Get_Item_2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	TScriptInterface<IBPI_Mei_SaveObject_C> bpfv__CallFunc_LoadData_BPI_self_CastInput__pf{};
	bool bpfv__CallFunc_LoadData_BPI_Success__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	TScriptInterface<IBPI_Mei_SaveGame_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	TArray<FSTR_Mei_SaveData_BuildingObject__pf2864127960> bpfv__CallFunc_Map_Values_Values__pf{};
	FSTR_Mei_SaveData_BuildingObject__pf2864127960 bpfv__CallFunc_Array_Get_Item_3__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_3__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	bool bpfv__CallFunc_InitActor_BPI_Success__pf{};
	bool bpfv__CallFunc_SaveData_BPI_Success__pf{};
	TScriptInterface<IBPI_Mei_SaveGame_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	bool bpfv__CallFunc_InitActor_BPI_Success_1__pf{};
	UBP_Mei_SaveGame_C__pf3770675254* bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__DetachSelectedObjects__pf();
			}
		case 2:
			{
				bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf = CastChecked<UBP_Mei_SaveGame_C__pf3770675254>(UGameplayStatics::CreateSaveGameObject(UBP_Mei_SaveGame_C__pf3770675254::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				bpfv__LocalSaveGame__pf = bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf;
			}
		case 4:
			{
				bpfv__LocalCopyActors__pf = bpv__SelectedObjects__pf;
			}
		case 5:
			{
				bpfv__Temp_int_Loop_Counter_Variable_3__pf = 0;
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable_3__pf = 0;
			}
		case 7:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__LocalCopyActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_3__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 8:
			{
				bpfv__Temp_int_Array_Index_Variable_3__pf = bpfv__Temp_int_Loop_Counter_Variable_3__pf;
			}
		case 9:
			{
				__StateStack.Push(42);
			}
		case 10:
			{
				if ( bpfv__LocalSaveGame__pf && bpfv__LocalSaveGame__pf->GetClass()->ImplementsInterface(UBPI_Mei_SaveGame_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf.SetObject(bpfv__LocalSaveGame__pf);
					void* IAddress = bpfv__LocalSaveGame__pf->GetInterfaceAddress(UBPI_Mei_SaveGame_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 43;
					break;
				}
			}
		case 11:
			{
				FCustomThunkTemplates::Array_Get(bpfv__LocalCopyActors__pf, bpfv__Temp_int_Array_Index_Variable_3__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf))
				{
					IBPI_Mei_SaveGame_C::Execute_bpf__InitActor_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf.GetObject() , bpfv__CallFunc_Array_Get_Item_1__pf, /*out*/ bpfv__CallFunc_InitActor_BPI_Success_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__Temp_int_Loop_Counter_Variable_2__pf = 0;
			}
		case 13:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 14:
			{
				bpfv__K2Node_MakeArray_Array__pf.SetNum(0, true);
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__K2Node_MakeArray_Array__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_2__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 15:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable_2__pf;
			}
		case 16:
			{
				__StateStack.Push(44);
			}
		case 17:
			{
				bpfv__K2Node_MakeArray_Array__pf.SetNum(0, true);
				FCustomThunkTemplates::Array_Get(bpfv__K2Node_MakeArray_Array__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if ( bpfv__CallFunc_Array_Get_Item__pf && bpfv__CallFunc_Array_Get_Item__pf->GetClass()->ImplementsInterface(UBPI_Mei_SaveObject_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf.SetObject(bpfv__CallFunc_Array_Get_Item__pf);
					void* IAddress = bpfv__CallFunc_Array_Get_Item__pf->GetInterfaceAddress(UBPI_Mei_SaveObject_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 45;
					break;
				}
			}
		case 18:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf))
				{
					IBPI_Mei_SaveObject_C::Execute_bpf__SaveData_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf.GetObject() , bpfv__LocalSaveGame__pf, /*out*/ bpfv__CallFunc_SaveData_BPI_Success__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				FCustomThunkTemplates::Array_Clear(bpv__SelectedObjects__pf);
			}
		case 20:
			{
				TMap<int32,AActor*>  __Local__10 = {};
				FCustomThunkTemplates::Map_Clear(((::IsValid(bpfv__LocalSaveGame__pf)) ? (bpfv__LocalSaveGame__pf->bpv__SavedActors__pf) : (__Local__10)));
			}
		case 21:
			{
				(bpfv__CallFunc_Map_Values_Values__pf).Reset();
				TMap<int32,FSTR_Mei_SaveData_BuildingObject__pf2864127960>  __Local__11 = {};
				FCustomThunkTemplates::Map_Values(((::IsValid(bpfv__LocalSaveGame__pf)) ? (bpfv__LocalSaveGame__pf->bpv__SavedBuildingsData__pf) : (__Local__11)), /*out*/ bpfv__CallFunc_Map_Values_Values__pf);
			}
		case 22:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 23:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 24:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_3__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_Map_Values_Values__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf)
				{
					__CurrentState = 34;
					break;
				}
			}
		case 25:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 26:
			{
				__StateStack.Push(46);
			}
		case 27:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_Map_Values_Values__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, bpfv__CallFunc_Array_Get_Item_3__pf.bpv__Class_20_BD365C9A46D9D73813A1B5A1BD782B3F__pf, bpfv__CallFunc_Array_Get_Item_3__pf.bpv__Transform_5_C9D83ABA45C3317FD7AC2DB6BEC331F5__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 28:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_Map_Values_Values__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				FCustomThunkTemplates::SetStructurePropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("BuildingObjectHandle")), bpfv__CallFunc_Array_Get_Item_3__pf.bpv__SpawnHandle_10_9E9105DA401F7954AF49BD9DA9E7B490__pf);
			}
		case 29:
			{
				UKismetSystemLibrary::SetBoolPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Built")), true);
			}
		case 30:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_Map_Values_Values__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_Mei_Building_BaseObject_C__pf2826203124>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_Array_Get_Item_3__pf.bpv__Transform_5_C9D83ABA45C3317FD7AC2DB6BEC331F5__pf), ECastCheckedType::NullAllowed);
			}
		case 31:
			{
				if ( bpfv__LocalSaveGame__pf && bpfv__LocalSaveGame__pf->GetClass()->ImplementsInterface(UBPI_Mei_SaveGame_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf.SetObject(bpfv__LocalSaveGame__pf);
					void* IAddress = bpfv__LocalSaveGame__pf->GetInterfaceAddress(UBPI_Mei_SaveGame_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 47;
					break;
				}
			}
		case 32:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf))
				{
					IBPI_Mei_SaveGame_C::Execute_bpf__InitActor_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf.GetObject() , bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf, /*out*/ bpfv__CallFunc_InitActor_BPI_Success__pf);
				}
			}
		case 33:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__SelectedObjects__pf, bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 35:
			{
				bpfv__Temp_int_Array_Index_Variable_2__pf = 0;
			}
		case 36:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpv__SelectedObjects__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 40;
					break;
				}
			}
		case 37:
			{
				bpfv__Temp_int_Array_Index_Variable_2__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 38:
			{
				__StateStack.Push(48);
			}
		case 39:
			{
				FCustomThunkTemplates::Array_Get(bpv__SelectedObjects__pf, bpfv__Temp_int_Array_Index_Variable_2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_2__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_2__pf))
				{
					IBPI_Mei_SaveObject_C::Execute_bpf__LoadData_BPI__pf(bpfv__CallFunc_Array_Get_Item_2__pf , bpfv__LocalSaveGame__pf, /*out*/ bpfv__CallFunc_LoadData_BPI_Success__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				bpf__AttachSelectedObjects__pf();
			}
		case 41:
			{
				AActor::K2_AddActorWorldOffset(FVector(500.000000,0.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf, true);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 42:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_3__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
				__CurrentState = 7;
				break;
			}
		case 43:
			{
				bpfv__CallFunc_InitActor_BPI_Success_1__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_2__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = 14;
				break;
			}
		case 45:
			{
				bpfv__CallFunc_SaveData_BPI_Success__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 46:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 24;
				break;
			}
		case 47:
			{
				bpfv__CallFunc_InitActor_BPI_Success__pf = false;
				__CurrentState = 33;
				break;
			}
		case 48:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 36;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::bpf__DestroySelectedObjects__pf()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
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
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__SelectedObjects__pf);
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
				__StateStack.Push(9);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__SelectedObjects__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->K2_DestroyActor();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Clear(bpv__SelectedObjects__pf);
			}
		case 8:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Success! Building objects have been removed from the level.")), true, true, FLinearColor(0.000000,1.000000,0.000000,1.000000), 10.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
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
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::bpf__AttachSelectedObjects__pf()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	AActor* bpfv__CallFunc_GetAttachParentActor_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
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
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__SelectedObjects__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(7);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__SelectedObjects__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetAttachParentActor_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->AActor::GetAttachParentActor();
				}
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetAttachParentActor_ReturnValue__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__SelectedObjects__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_AttachToActor(this, FName(TEXT("None")), EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, true);
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
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::bpf__DetachSelectedObjects__pf()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	AActor* bpfv__CallFunc_GetAttachParentActor_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
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
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__SelectedObjects__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
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
				FCustomThunkTemplates::Array_Get(bpv__SelectedObjects__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetAttachParentActor_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->AActor::GetAttachParentActor();
				}
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpfv__CallFunc_GetAttachParentActor_ReturnValue__pf, this);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpv__SelectedObjects__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_DetachFromActor(EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld);
				}
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
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::bpf__ClearBuildingObjects__pf()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*> bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__ReadyForTheConsequences__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 2:
			{
				bpv__ReadyForTheConsequences__pf = false;
			}
		case 3:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass(), /*out*/ TArrayCaster<ABP_Mei_Building_BaseObject_C__pf2826203124*>(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 4:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 6:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 7:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 8:
			{
				__StateStack.Push(12);
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->K2_DestroyActor();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Warning! If you are ready for the consequences then check the Ready variable and try again.")), true, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), 10.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Success! Building objects have been removed from the level.")), true, true, FLinearColor(0.000000,1.000000,0.000000,1.000000), 10.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 6;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::bpf__SaveBuildingObjects__pf()
{
	TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*> bpfv__LocalBuildingObjects__pf{};
	UBP_Mei_SaveGame_C__pf3770675254* bpfv__LocalSaveGame__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*> bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf{};
	TScriptInterface<IBPI_Mei_SaveGame_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	UBP_Mei_SaveGame_C__pf3770675254* bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_InitActor_BPI_Success__pf{};
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
				bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf = CastChecked<UBP_Mei_SaveGame_C__pf3770675254>(UGameplayStatics::CreateSaveGameObject(UBP_Mei_SaveGame_C__pf3770675254::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 2:
			{
				bpfv__LocalSaveGame__pf = bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf;
			}
		case 3:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass(), /*out*/ TArrayCaster<ABP_Mei_Building_BaseObject_C__pf2826203124*>(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 4:
			{
				bpfv__LocalBuildingObjects__pf = bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf;
			}
		case 5:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 7:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__LocalBuildingObjects__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 9:
			{
				__StateStack.Push(12);
			}
		case 10:
			{
				if ( bpfv__LocalSaveGame__pf && bpfv__LocalSaveGame__pf->GetClass()->ImplementsInterface(UBPI_Mei_SaveGame_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf.SetObject(bpfv__LocalSaveGame__pf);
					void* IAddress = bpfv__LocalSaveGame__pf->GetInterfaceAddress(UBPI_Mei_SaveGame_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 11:
			{
				FCustomThunkTemplates::Array_Get(bpfv__LocalBuildingObjects__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf))
				{
					IBPI_Mei_SaveGame_C::Execute_bpf__InitActor_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf.GetObject() , bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_InitActor_BPI_Success__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 7;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_InitActor_BPI_Success__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::bpf__LoadBuildingObjects__pf()
{
	TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*> bpfv__LocalBuildingObjects__pf{};
	USaveGame* bpfv__LocalSaveGame__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	TScriptInterface<IBPI_Mei_SaveGame_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_LoadLevelData_BPI_Success__pf{};
	FSTR_Mei_SaveData_Level__pf2864127960 bpfv__CallFunc_LoadLevelData_BPI_LevelData__pf{};
	TArray<FSTR_Mei_SaveData_BuildingObject__pf2864127960> bpfv__CallFunc_Map_Values_Values__pf{};
	TArray<int32> bpfv__CallFunc_Map_Keys_Keys__pf{};
	FSTR_Mei_SaveData_BuildingObject__pf2864127960 bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Get_Item_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_SaveGame_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_InitActorWithSaveID_BPI_Success__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	bool bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_Array_Get_Item_2__pf{};
	TScriptInterface<IBPI_Mei_SaveObject_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LoadData_BPI_Success__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	FString bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__ReadyForTheConsequences__pf)
				{
					__CurrentState = 24;
					break;
				}
			}
		case 2:
			{
				bpv__ReadyForTheConsequences__pf = false;
			}
		case 3:
			{
				bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf = UGameplayStatics::GetCurrentLevelName(this, true);
			}
		case 4:
			{
				bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(bpv__SaveSlotName__pf, 0);
			}
		case 5:
			{
				if (!bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					__CurrentState = 25;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(bpv__SaveSlotName__pf, 0);
			}
		case 7:
			{
				bpfv__LocalSaveGame__pf = bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf;
			}
		case 8:
			{
				if ( bpfv__LocalSaveGame__pf && bpfv__LocalSaveGame__pf->GetClass()->ImplementsInterface(UBPI_Mei_SaveGame_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf.SetObject(bpfv__LocalSaveGame__pf);
					void* IAddress = bpfv__LocalSaveGame__pf->GetInterfaceAddress(UBPI_Mei_SaveGame_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf))
				{
					IBPI_Mei_SaveGame_C::Execute_bpf__LoadLevelData_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game__pf.GetObject() , FName(TEXT("None")), /*out*/ bpfv__CallFunc_LoadLevelData_BPI_Success__pf, /*out*/ bpfv__CallFunc_LoadLevelData_BPI_LevelData__pf);
				}
			}
		case 10:
			{
				if (!bpfv__CallFunc_LoadLevelData_BPI_Success__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				(bpfv__CallFunc_Map_Keys_Keys__pf).Reset();
				FCustomThunkTemplates::Map_Keys(bpfv__CallFunc_LoadLevelData_BPI_LevelData__pf.bpv__BuildingObjects_19_3FF1EF944E2E5E9C1CB112B6D43DCBC2__pf, /*out*/ bpfv__CallFunc_Map_Keys_Keys__pf);
			}
		case 12:
			{
				(bpfv__CallFunc_Map_Values_Values__pf).Reset();
				FCustomThunkTemplates::Map_Values(bpfv__CallFunc_LoadLevelData_BPI_LevelData__pf.bpv__BuildingObjects_19_3FF1EF944E2E5E9C1CB112B6D43DCBC2__pf, /*out*/ bpfv__CallFunc_Map_Values_Values__pf);
			}
		case 13:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 14:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 15:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_Map_Keys_Keys__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 28;
					break;
				}
			}
		case 16:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 17:
			{
				__StateStack.Push(40);
			}
		case 18:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_Map_Values_Values__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, bpfv__CallFunc_Array_Get_Item__pf.bpv__Class_20_BD365C9A46D9D73813A1B5A1BD782B3F__pf, bpfv__CallFunc_Array_Get_Item__pf.bpv__Transform_5_C9D83ABA45C3317FD7AC2DB6BEC331F5__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 19:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_Map_Values_Values__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				FCustomThunkTemplates::SetStructurePropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("BuildingObjectHandle")), bpfv__CallFunc_Array_Get_Item__pf.bpv__SpawnHandle_10_9E9105DA401F7954AF49BD9DA9E7B490__pf);
			}
		case 20:
			{
				UKismetSystemLibrary::SetBoolPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Built")), true);
			}
		case 21:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_Map_Values_Values__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_Mei_Building_BaseObject_C__pf2826203124>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_Array_Get_Item__pf.bpv__Transform_5_C9D83ABA45C3317FD7AC2DB6BEC331F5__pf), ECastCheckedType::NullAllowed);
			}
		case 22:
			{
				if ( bpfv__LocalSaveGame__pf && bpfv__LocalSaveGame__pf->GetClass()->ImplementsInterface(UBPI_Mei_SaveGame_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf.SetObject(bpfv__LocalSaveGame__pf);
					void* IAddress = bpfv__LocalSaveGame__pf->GetInterfaceAddress(UBPI_Mei_SaveGame_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 41;
					break;
				}
			}
		case 23:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_Map_Keys_Keys__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf))
				{
					IBPI_Mei_SaveGame_C::Execute_bpf__InitActorWithSaveID_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Game_1__pf.GetObject() , bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf, bpfv__CallFunc_Array_Get_Item_1__pf, /*out*/ bpfv__CallFunc_InitActorWithSaveID_BPI_Success__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Warning! If you are ready for the consequences then check the Ready variable and try again.")), true, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), 10.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Warning! Save game in target save slot is not exist!")), true, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), 10.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_LoadLevelData_BPI_Success__pf = false;
			}
		case 27:
			{
				auto __Local__12 = FSTR_Mei_SaveData_Level__pf2864127960{};
				bpfv__CallFunc_LoadLevelData_BPI_LevelData__pf = __Local__12;
				__CurrentState = 10;
				break;
			}
		case 28:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 29:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 30:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__LocalBuildingObjects__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 37;
					break;
				}
			}
		case 31:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 32:
			{
				__StateStack.Push(36);
			}
		case 33:
			{
				FCustomThunkTemplates::Array_Get(bpfv__LocalBuildingObjects__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_2__pf);
				if ( bpfv__CallFunc_Array_Get_Item_2__pf && bpfv__CallFunc_Array_Get_Item_2__pf->GetClass()->ImplementsInterface(UBPI_Mei_SaveObject_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf.SetObject(bpfv__CallFunc_Array_Get_Item_2__pf);
					void* IAddress = bpfv__CallFunc_Array_Get_Item_2__pf->GetInterfaceAddress(UBPI_Mei_SaveObject_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 35;
					break;
				}
			}
		case 34:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf))
				{
					IBPI_Mei_SaveObject_C::Execute_bpf__LoadData_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Save_Object__pf.GetObject() , bpfv__LocalSaveGame__pf, /*out*/ bpfv__CallFunc_LoadData_BPI_Success__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_LoadData_BPI_Success__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 30;
				break;
			}
		case 37:
			{
				bpv__SelectedObjects__pf = bpfv__LocalBuildingObjects__pf;
			}
		case 38:
			{
				bpf__AttachSelectedObjects__pf();
			}
		case 39:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Success! Building objects have been loaded from the save!")), true, true, FLinearColor(0.000000,1.000000,0.000000,1.000000), 10.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 15;
				break;
			}
		case 41:
			{
				bpfv__CallFunc_InitActorWithSaveID_BPI_Success__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Mei_EditorBuildingUtility_C__pf2220187047::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{458, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BillboardComponent 
		{459, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Engine/EditorResources/S_Actor.S_Actor 
		{123, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/Mesh/BuildingSystem/Structures/Dummy/SM_Dummy_Foundation.SM_Dummy_Foundation 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Dummy_Structures_Base.MI_Dummy_Structures_Base 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionResponse 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Landscape.Landscape 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETextGender 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/BuildingSystem/Dummy/Dummy.Dummy 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EDrawDebugTrace 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Can_Build.MI_Can_Build 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_CanNot_Build.MI_CanNot_Build 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/Mei/BP/BuildingSystem/DataTables/DT_Mei_BuildingObjects.DT_Mei_BuildingObjects 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimMontage 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBox 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBoxSlot 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleActor 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleMesh 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/BuildingObject/Base/BP_Mei_Building_BaseObject.BP_Mei_Building_BaseObject_C 
		{460, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_SaveGame.BPI_Mei_SaveGame_C 
		{312, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_SaveObject.BPI_Mei_SaveObject_C 
		{461, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/Game/BP_Mei_SaveGame.BP_Mei_SaveGame_C 
		{462, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/SaveData/STR_Mei_SaveData_Level.STR_Mei_SaveData_Level 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/SaveData/STR_Mei_SaveData_Actor.STR_Mei_SaveData_Actor 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/SaveData/STR_Mei_SaveData_BuildingObject.STR_Mei_SaveData_BuildingObject 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Mei_EditorBuildingUtility_C__pf2220187047
{
	FRegisterHelper__ABP_Mei_EditorBuildingUtility_C__pf2220187047()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/BuildingSystem/BuildingObject/Utilities/BP_Mei_EditorBuildingUtility"), &ABP_Mei_EditorBuildingUtility_C__pf2220187047::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Mei_EditorBuildingUtility_C__pf2220187047 Instance;
};
FRegisterHelper__ABP_Mei_EditorBuildingUtility_C__pf2220187047 FRegisterHelper__ABP_Mei_EditorBuildingUtility_C__pf2220187047::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
