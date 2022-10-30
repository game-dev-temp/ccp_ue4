#include "NativizedAssets.h"
#include "ThirdPersonCharacter__pf2222656877.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputTouchDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
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
#include "Runtime/Engine/Classes/Materials/Material.h"
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
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
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
#include "Runtime/AIModule/Classes/Perception/AIPerceptionStimuliSourceComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Sight.h"
#include "Runtime/Engine/Classes/Components/SceneCaptureComponent2D.h"
#include "Runtime/Engine/Classes/Components/SceneCaptureComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "Inventory__pf2670873798.h"
#include "Widget_PlayerUI__pf2670873798.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
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
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/HeadMountedDisplay/Public/XRGestureConfig.h"
#include "ABP_Mei_v2__pf3826917018.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AThirdPersonCharacter_C__pf2222656877::AThirdPersonCharacter_C__pf2222656877(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		auto& __Local__3 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleHalfHeight() )));
		__Local__3 = 83.000000f;
		auto& __Local__4 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleRadius() )));
		__Local__4 = 30.000000f;
		__Local__0->AreaClass = UNavArea_Obstacle::StaticClass();
		static TWeakFieldPtr<FProperty> __Local__6{};
		const FProperty* __Local__5 = __Local__6.Get();
		if (nullptr == __Local__5)
		{
			__Local__5 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__5);
			__Local__6 = __Local__5;
		}
		(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		__Local__1->JumpZVelocity = 600.000000f;
		__Local__1->AirControl = 0.200000f;
		__Local__1->RotationRate = FRotator(0.000000, 540.000000, 0.000000);
		__Local__1->bOrientRotationToMovement = true;
		__Local__1->NavAgentProps.AgentRadius = 42.000000f;
		__Local__1->NavAgentProps.AgentHeight = 192.000000f;
		static TWeakFieldPtr<FProperty> __Local__8{};
		const FProperty* __Local__7 = __Local__8.Get();
		if (nullptr == __Local__7)
		{
			__Local__7 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__7);
			__Local__8 = __Local__7;
		}
		(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((__Local__1), false, 0));
		static TWeakFieldPtr<FProperty> __Local__10{};
		const FProperty* __Local__9 = __Local__10.Get();
		if (nullptr == __Local__9)
		{
			__Local__9 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__9);
			__Local__10 = __Local__9;
		}
		(((FBoolProperty*)__Local__9)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->AnimClass = UABP_Mei_v2_C__pf3826917018::StaticClass();
		__Local__2->AnimationData.AnimToPlay = CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
		__Local__2->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
		__Local__2->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
		__Local__2->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		auto& __Local__11 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__2->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
		auto& __Local__12 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__11), FCollisionResponse::__PPO__ResponseArray() )));
		__Local__12 = TArray<FResponseChannel> ();
		__Local__12.AddUninitialized(3);
		FResponseChannel::StaticStruct()->InitializeStruct(__Local__12.GetData(), 3);
		auto& __Local__13 = __Local__12[0];
		__Local__13.Channel = FName(TEXT("Pawn"));
		__Local__13.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__14 = __Local__12[1];
		__Local__14.Channel = FName(TEXT("Vehicle"));
		__Local__14.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__15 = __Local__12[2];
		__Local__15.Channel = FName(TEXT("Visibility"));
		__Local__15.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__16 = (*(AccessPrivateProperty<float >(&(__Local__2->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
		__Local__16 = 85.812500f;
		auto& __Local__17 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__17 = __Local__0;
		auto& __Local__18 = (*(AccessPrivateProperty<FVector >((__Local__2), USceneComponent::__PPO__RelativeLocation() )));
		__Local__18 = FVector(0.000000, 0.000856, -83.000000);
		auto& __Local__19 = (*(AccessPrivateProperty<FRotator >((__Local__2), USceneComponent::__PPO__RelativeRotation() )));
		__Local__19 = FRotator(0.000000, 270.000000, -0.000000);
		static TWeakFieldPtr<FProperty> __Local__21{};
		const FProperty* __Local__20 = __Local__21.Get();
		if (nullptr == __Local__20)
		{
			__Local__20 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__20);
			__Local__21 = __Local__20;
		}
		(((FBoolProperty*)__Local__20)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__CameraBoom__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	bpv__FollowCamera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	bpv__SpecialAttack__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("SpecialAttack"));
	bpv__S_Tact__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("S_Tact"));
	bpv__AIPerceptionStimuliSource__pf = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSource"));
	bpv__SpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	bpv__MinimapCapture__pf = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("MinimapCapture"));
	bpv__CameraBoom__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__CameraBoom__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__CameraBoom__pf->bUsePawnControlRotation = true;
	auto& __Local__22 = (*(AccessPrivateProperty<FVector >((bpv__CameraBoom__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__22 = FVector(0.000000, 0.000000, 8.492264);
	static TWeakFieldPtr<FProperty> __Local__24{};
	const FProperty* __Local__23 = __Local__24.Get();
	if (nullptr == __Local__23)
	{
		__Local__23 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__23);
		__Local__24 = __Local__23;
	}
	(((FBoolProperty*)__Local__23)->SetPropertyValue_InContainer((bpv__CameraBoom__pf), false, 0));
	bpv__FollowCamera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FollowCamera__pf->AttachToComponent(bpv__CameraBoom__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("SpringEndpoint"));
	(((FBoolProperty*)__Local__23)->SetPropertyValue_InContainer((bpv__FollowCamera__pf), false, 0));
	bpv__SpecialAttack__pf->CreationMethod = EComponentCreationMethod::Native;
	auto& __Local__25 = (*(AccessPrivateProperty<FVector >((bpv__SpecialAttack__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__25 = FVector(70.000000, 0.000000, 9.000000);
	(((FBoolProperty*)__Local__23)->SetPropertyValue_InContainer((bpv__SpecialAttack__pf), false, 0));
	bpv__S_Tact__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__S_Tact__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform , TEXT("weapon_hand_right"));
	auto& __Local__26 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__S_Tact__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__26 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__27 = (*(AccessPrivateProperty<FVector >((bpv__S_Tact__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__27 = FVector(-6.000984, 1.664568, -1.692814);
	auto& __Local__28 = (*(AccessPrivateProperty<FRotator >((bpv__S_Tact__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__28 = FRotator(46.816002, -1.050449, 3.148490);
	static TWeakFieldPtr<FProperty> __Local__30{};
	const FProperty* __Local__29 = __Local__30.Get();
	if (nullptr == __Local__29)
	{
		__Local__29 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bVisible")));
		check(__Local__29);
		__Local__30 = __Local__29;
	}
	(((FBoolProperty*)__Local__29)->SetPropertyValue_InContainer((bpv__S_Tact__pf), false, 0));
	(((FBoolProperty*)__Local__23)->SetPropertyValue_InContainer((bpv__S_Tact__pf), true, 0));
	bpv__AIPerceptionStimuliSource__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__32{};
	const FProperty* __Local__31 = __Local__32.Get();
	if (nullptr == __Local__31)
	{
		__Local__31 = (UAIPerceptionStimuliSourceComponent::StaticClass())->FindPropertyByName(FName(TEXT("bAutoRegisterAsSource")));
		check(__Local__31);
		__Local__32 = __Local__31;
	}
	(((FBoolProperty*)__Local__31)->SetPropertyValue_InContainer((bpv__AIPerceptionStimuliSource__pf), false, 0));
	auto& __Local__33 = (*(AccessPrivateProperty<TArray<TSubclassOf<UAISense> > >((bpv__AIPerceptionStimuliSource__pf), UAIPerceptionStimuliSourceComponent::__PPO__RegisterAsSourceForSenses() )));
	__Local__33 = TArray<TSubclassOf<UAISense> > ();
	__Local__33.Reserve(1);
	__Local__33.Add(UAISense_Sight::StaticClass());
	(((FBoolProperty*)__Local__23)->SetPropertyValue_InContainer((bpv__AIPerceptionStimuliSource__pf), false, 0));
	bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpringArm__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpringArm__pf->bInheritPitch = false;
	bpv__SpringArm__pf->bInheritYaw = false;
	bpv__SpringArm__pf->bInheritRoll = false;
	auto& __Local__34 = (*(AccessPrivateProperty<FRotator >((bpv__SpringArm__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__34 = FRotator(-90.000000, 0.000000, 0.000000);
	(((FBoolProperty*)__Local__23)->SetPropertyValue_InContainer((bpv__SpringArm__pf), false, 0));
	bpv__MinimapCapture__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MinimapCapture__pf->AttachToComponent(bpv__SpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__MinimapCapture__pf->ProjectionType = ECameraProjectionMode::Type::Orthographic;
	bpv__MinimapCapture__pf->OrthoWidth = 1024.000000f;
	bpv__MinimapCapture__pf->TextureTarget = CastChecked<UTextureRenderTarget2D>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	auto& __Local__35 = (*(AccessPrivateProperty<FVector >((bpv__MinimapCapture__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__35 = FVector(-299.999878, 0.000000, 0.000061);
	(((FBoolProperty*)__Local__23)->SetPropertyValue_InContainer((bpv__MinimapCapture__pf), false, 0));
	bpv__T_Crouching_Crounch_Alpha_2F1B7E36405C949BB4D4DBB391FA674A__pf = 0.000000f;
	bpv__T_Crouching__Direction_2F1B7E36405C949BB4D4DBB391FA674A__pf = ETimelineDirection::Type::Forward;
	bpv__T_Crouching__pf = nullptr;
	bpv__BaseTurnRate__pf = 45.000000f;
	bpv__BaseLookUpRate__pf = 45.000000f;
	bpv__TP_SprintSpeed__pf = 500.000000f;
	bpv__TP_MaxWalkSpeed__pf = 125.000000f;
	bpv__TP_JumpZVelocity__pf = 600.000000f;
	bpv__isSprinting__pf = false;
	bpv__isCrouching__pf = false;
	bpv__TP_MaxCrouchSpeed__pf = 100.000000f;
	bpv__Health__pf = 100.000000f;
	bpv__UMG_Healthbar__pf = nullptr;
	bpv__TargetLocked__pf = false;
	bpv__EquippedWeapon__pf = nullptr;
	bpv__WeaponDrawnx__pfzy = false;
	bpv__TargetType__pf = TArray<TEnumAsByte<EObjectTypeQuery> > ();
	bpv__TargetType__pf.Reserve(1);
	bpv__TargetType__pf.Add(EObjectTypeQuery::ObjectTypeQuery4);
	bpv__ReadyToAttackx__pfzy = false;
	bpv__Attackingx__pfzy = false;
	bpv__AttackCounter__pf = 0;
	bpv__SaveAttack__pf = false;
	bpv__LockedOnTarget__pf = nullptr;
	bpv__Blocking__pf = false;
	bpv__AttackingActor__pf = nullptr;
	bpv__InventoryWG__pf = nullptr;
	auto& __Local__36 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__36 = __Local__2;
	auto& __Local__37 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__37 = __Local__1;
	auto& __Local__38 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__38 = __Local__0;
	auto& __Local__39 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__39 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AThirdPersonCharacter_C__pf2222656877::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__CameraBoom__pf)
	{
		bpv__CameraBoom__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FollowCamera__pf)
	{
		bpv__FollowCamera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SpecialAttack__pf)
	{
		bpv__SpecialAttack__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__S_Tact__pf)
	{
		bpv__S_Tact__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__AIPerceptionStimuliSource__pf)
	{
		bpv__AIPerceptionStimuliSource__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SpringArm__pf)
	{
		bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MinimapCapture__pf)
	{
		bpv__MinimapCapture__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AThirdPersonCharacter_C__pf2222656877::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UInventory_C__pf2670873798::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWidget_PlayerUI_C__pf2670873798::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_Interaction_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Interaction_C());
	extern UClass* Z_Construct_UClass_UBPI_InteractWithWeapon_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_InteractWithWeapon_C());
	extern UClass* Z_Construct_UClass_UBPI_ThirdPersonCharacter_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_ThirdPersonCharacter_C());
	InDynamicClass->ReferencedConvertedFields.Add(UABP_Mei_v2_C__pf3826917018::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__40 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__40);
	auto __Local__41 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("T_Crouching_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__41);
	auto __Local__42 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__42);
	auto __Local__43 = NewObject<UInputTouchDelegateBinding>(InDynamicClass, UInputTouchDelegateBinding::StaticClass(), TEXT("InputTouchDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__43);
	auto __Local__44 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__44);
	auto __Local__45 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__45);
	static TWeakFieldPtr<FProperty> __Local__47{};
	const FProperty* __Local__46 = __Local__47.Get();
	if (nullptr == __Local__46)
	{
		__Local__46 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__46);
		__Local__47 = __Local__46;
	}
	(((FBoolProperty*)__Local__46)->SetPropertyValue_InContainer((__Local__40), false, 0));
	__Local__41->TimelineLength = 0.500000f;
	__Local__41->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__41->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__41->FloatTracks.GetData(), 1);
	auto& __Local__48 = __Local__41->FloatTracks[0];
	auto __Local__49 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__49);
	__Local__49->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__49->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__49->FloatCurve.Keys.GetData(), 2);
	auto& __Local__50 = __Local__49->FloatCurve.Keys[0];
	__Local__50.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__50.TangentMode = ERichCurveTangentMode::RCTM_User;
	auto& __Local__51 = __Local__49->FloatCurve.Keys[1];
	__Local__51.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__51.TangentMode = ERichCurveTangentMode::RCTM_User;
	__Local__51.Time = 0.500000f;
	__Local__51.Value = 1.000000f;
	__Local__48.CurveFloat = __Local__49;
	auto& __Local__52 = (*(AccessPrivateProperty<FName >(&(__Local__48), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__52 = FName(TEXT("T_Crouching_Crounch_Alpha_2F1B7E36405C949BB4D4DBB391FA674A"));
	auto& __Local__53 = (*(AccessPrivateProperty<FName >(&(__Local__48), FTTTrackBase::__PPO__TrackName() )));
	__Local__53 = FName(TEXT("Crounch_Alpha"));
	__Local__41->TimelineGuid = FGuid(0x2F1B7E36, 0x405C949B, 0xB4D4DBB3, 0x91FA674A);
	auto& __Local__54 = (*(AccessPrivateProperty<FName >((__Local__41), UTimelineTemplate::__PPO__VariableName() )));
	__Local__54 = FName(TEXT("T_Crouching"));
	auto& __Local__55 = (*(AccessPrivateProperty<FName >((__Local__41), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__55 = FName(TEXT("T_Crouching__Direction_2F1B7E36405C949BB4D4DBB391FA674A"));
	auto& __Local__56 = (*(AccessPrivateProperty<FName >((__Local__41), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__56 = FName(TEXT("T_Crouching__UpdateFunc"));
	auto& __Local__57 = (*(AccessPrivateProperty<FName >((__Local__41), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__57 = FName(TEXT("T_Crouching__FinishedFunc"));
	__Local__42->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__42->InputActionDelegateBindings.AddUninitialized(10);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__42->InputActionDelegateBindings.GetData(), 10);
	auto& __Local__58 = __Local__42->InputActionDelegateBindings[0];
	__Local__58.InputActionName = FName(TEXT("Backflip"));
	__Local__58.FunctionNameToBind = FName(TEXT("InpActEvt_Backflip_K2Node_InputActionEvent_5"));
	auto& __Local__59 = __Local__42->InputActionDelegateBindings[1];
	__Local__59.InputActionName = FName(TEXT("Sprint"));
	__Local__59.InputKeyEvent = EInputEvent::IE_Released;
	__Local__59.FunctionNameToBind = FName(TEXT("InpActEvt_Sprint_K2Node_InputActionEvent_4"));
	auto& __Local__60 = __Local__42->InputActionDelegateBindings[2];
	__Local__60.InputActionName = FName(TEXT("Sprint"));
	__Local__60.FunctionNameToBind = FName(TEXT("InpActEvt_Sprint_K2Node_InputActionEvent_3"));
	auto& __Local__61 = __Local__42->InputActionDelegateBindings[3];
	__Local__61.InputActionName = FName(TEXT("Jump"));
	__Local__61.InputKeyEvent = EInputEvent::IE_Released;
	__Local__61.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_9"));
	__Local__61.bOverrideParentBinding = false;
	auto& __Local__62 = __Local__42->InputActionDelegateBindings[4];
	__Local__62.InputActionName = FName(TEXT("Jump"));
	__Local__62.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_8"));
	__Local__62.bOverrideParentBinding = false;
	auto& __Local__63 = __Local__42->InputActionDelegateBindings[5];
	__Local__63.InputActionName = FName(TEXT("Crouch"));
	__Local__63.InputKeyEvent = EInputEvent::IE_Released;
	__Local__63.FunctionNameToBind = FName(TEXT("InpActEvt_Crouch_K2Node_InputActionEvent_2"));
	auto& __Local__64 = __Local__42->InputActionDelegateBindings[6];
	__Local__64.InputActionName = FName(TEXT("ResetVR"));
	__Local__64.FunctionNameToBind = FName(TEXT("InpActEvt_ResetVR_K2Node_InputActionEvent_7"));
	auto& __Local__65 = __Local__42->InputActionDelegateBindings[7];
	__Local__65.InputActionName = FName(TEXT("SpecialAttack"));
	__Local__65.FunctionNameToBind = FName(TEXT("InpActEvt_SpecialAttack_K2Node_InputActionEvent_6"));
	auto& __Local__66 = __Local__42->InputActionDelegateBindings[8];
	__Local__66.InputActionName = FName(TEXT("Interact"));
	__Local__66.FunctionNameToBind = FName(TEXT("InpActEvt_Interact_K2Node_InputActionEvent_0"));
	auto& __Local__67 = __Local__42->InputActionDelegateBindings[9];
	__Local__67.InputActionName = FName(TEXT("Crouch"));
	__Local__67.FunctionNameToBind = FName(TEXT("InpActEvt_Crouch_K2Node_InputActionEvent_1"));
	__Local__43->InputTouchDelegateBindings = TArray<FBlueprintInputTouchDelegateBinding> ();
	__Local__43->InputTouchDelegateBindings.AddUninitialized(2);
	FBlueprintInputTouchDelegateBinding::StaticStruct()->InitializeStruct(__Local__43->InputTouchDelegateBindings.GetData(), 2);
	auto& __Local__68 = __Local__43->InputTouchDelegateBindings[0];
	__Local__68.InputKeyEvent = EInputEvent::IE_Released;
	__Local__68.FunctionNameToBind = FName(TEXT("InpTchEvt_Released"));
	auto& __Local__69 = __Local__43->InputTouchDelegateBindings[1];
	__Local__69.FunctionNameToBind = FName(TEXT("InpTchEvt_Pressed"));
	__Local__44->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__44->InputAxisDelegateBindings.AddUninitialized(6);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__44->InputAxisDelegateBindings.GetData(), 6);
	auto& __Local__70 = __Local__44->InputAxisDelegateBindings[0];
	__Local__70.InputAxisName = FName(TEXT("LookUpRate"));
	__Local__70.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53"));
	auto& __Local__71 = __Local__44->InputAxisDelegateBindings[1];
	__Local__71.InputAxisName = FName(TEXT("TurnRate"));
	__Local__71.FunctionNameToBind = FName(TEXT("InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38"));
	auto& __Local__72 = __Local__44->InputAxisDelegateBindings[2];
	__Local__72.InputAxisName = FName(TEXT("MoveRight"));
	__Local__72.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90"));
	__Local__72.bOverrideParentBinding = false;
	auto& __Local__73 = __Local__44->InputAxisDelegateBindings[3];
	__Local__73.InputAxisName = FName(TEXT("MoveForward"));
	__Local__73.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79"));
	__Local__73.bOverrideParentBinding = false;
	auto& __Local__74 = __Local__44->InputAxisDelegateBindings[4];
	__Local__74.InputAxisName = FName(TEXT("Turn"));
	__Local__74.FunctionNameToBind = FName(TEXT("InpAxisEvt_Turn_K2Node_InputAxisEvent_47"));
	__Local__74.bOverrideParentBinding = false;
	auto& __Local__75 = __Local__44->InputAxisDelegateBindings[5];
	__Local__75.InputAxisName = FName(TEXT("LookUp"));
	__Local__75.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_40"));
	__Local__75.bOverrideParentBinding = false;
	__Local__45->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__45->InputKeyDelegateBindings.AddUninitialized(7);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__45->InputKeyDelegateBindings.GetData(), 7);
	auto& __Local__76 = __Local__45->InputKeyDelegateBindings[0];
	__Local__76.InputChord.Key = FKey(TEXT("I"));
	__Local__76.FunctionNameToBind = FName(TEXT("InpActEvt_I_K2Node_InputKeyEvent_0"));
	auto& __Local__77 = __Local__45->InputKeyDelegateBindings[1];
	__Local__77.InputChord.Key = FKey(TEXT("G"));
	__Local__77.FunctionNameToBind = FName(TEXT("InpActEvt_G_K2Node_InputKeyEvent_1"));
	auto& __Local__78 = __Local__45->InputKeyDelegateBindings[2];
	__Local__78.InputChord.Key = FKey(TEXT("G"));
	__Local__78.InputKeyEvent = EInputEvent::IE_Released;
	__Local__78.FunctionNameToBind = FName(TEXT("InpActEvt_G_K2Node_InputKeyEvent_2"));
	auto& __Local__79 = __Local__45->InputKeyDelegateBindings[3];
	__Local__79.InputChord.Key = FKey(TEXT("RightMouseButton"));
	__Local__79.FunctionNameToBind = FName(TEXT("InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3"));
	auto& __Local__80 = __Local__45->InputKeyDelegateBindings[4];
	__Local__80.InputChord.Key = FKey(TEXT("LeftMouseButton"));
	__Local__80.FunctionNameToBind = FName(TEXT("InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4"));
	auto& __Local__81 = __Local__45->InputKeyDelegateBindings[5];
	__Local__81.InputChord.Key = FKey(TEXT("E"));
	__Local__81.FunctionNameToBind = FName(TEXT("InpActEvt_E_K2Node_InputKeyEvent_5"));
	auto& __Local__82 = __Local__45->InputKeyDelegateBindings[6];
	__Local__82.InputChord.Key = FKey(TEXT("Tab"));
	__Local__82.FunctionNameToBind = FName(TEXT("InpActEvt_Tab_K2Node_InputKeyEvent_6"));
}
PRAGMA_ENABLE_OPTIMIZATION
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_PlayAnimMontage_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 190);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Beam HIt!!!!!")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimMontage_ReturnValue__pf = PlayAnimMontage(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), 1.000000, FName(TEXT("None")));
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_PlayAnimMontage_ReturnValue_6__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 174:
			{
				__CurrentState = 175;
				break;
			}
		case 175:
			{
				bpv__AttackingActor__pf = b0l__K2Node_Event_DamageCauser__pf;
			}
		case 176:
			{
				if (!bpv__Blocking__pf)
				{
					__CurrentState = 180;
					break;
				}
			}
		case 177:
			{
				bpf__BlockxAnglexCheck__pfTT(/*out*/ b0l__CallFunc_Block_Angle_Check_FacingAI___pf);
			}
		case 178:
			{
				if (!b0l__CallFunc_Block_Angle_Check_FacingAI___pf)
				{
					__CurrentState = 180;
					break;
				}
			}
		case 179:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("blocked!")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 180:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__Health__pf, b0l__K2Node_Event_Damage__pf);
				bpv__Health__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 181:
			{
				bpfv__CallFunc_PlayAnimMontage_ReturnValue_6__pf = PlayAnimMontage(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), 1.000000, FName(TEXT("None")));
			}
		case 182:
			{
				bpv__SaveAttack__pf = false;
			}
		case 183:
			{
				bpv__AttackCounter__pf = 0;
			}
		case 184:
			{
				bpv__Attackingx__pfzy = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 91:
			{
				__CurrentState = 92;
				break;
			}
		case 92:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_Variable__pf);
				b0l__Temp_bool_Variable__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
			}
		case 93:
			{
				if (!b0l__Temp_bool_Variable__pf)
				{
					__CurrentState = 97;
					break;
				}
			}
		case 94:
			{
				if(::IsValid(bpv__InventoryWG__pf))
				{
					bpv__InventoryWG__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 95:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = true;
				}
			}
		case 96:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(bpfv__CallFunc_GetPlayerController_ReturnValue__pf, bpv__InventoryWG__pf, EMouseLockMode::DoNotLock, true);
				__CurrentState = -1;
				break;
			}
		case 97:
			{
				if(::IsValid(bpv__InventoryWG__pf))
				{
					bpv__InventoryWG__pf->RemoveFromParent();
				}
			}
		case 98:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = false;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 189);
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_4(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Lerp_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 188);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Lerp_ReturnValue__pf = UKismetMathLibrary::Lerp(83.000000, 30.000000, bpv__T_Crouching_Crounch_Alpha_2F1B7E36405C949BB4D4DBB391FA674A__pf);
	if(::IsValid((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))))
	{
		(*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))->UCapsuleComponent::SetCapsuleHalfHeight(bpfv__CallFunc_Lerp_ReturnValue__pf, true);
	}
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 83);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputKeyEvent_Key_2__pf;
	bpv__Blocking__pf = false;
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_6(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue_2__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_RInterpTo_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 185);
	// optimized KCST_UnconditionalGoto
	if (!bpv__TargetLocked__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf = AActor::K2_GetActorLocation();
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue_2__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
	if(::IsValid(bpfv__CallFunc_GetController_ReturnValue__pf))
	{
		bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = bpfv__CallFunc_GetController_ReturnValue__pf->AActor::K2_GetActorRotation();
	}
	if(::IsValid(bpv__LockedOnTarget__pf))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf = bpv__LockedOnTarget__pf->AActor::K2_GetActorLocation();
	}
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll_1__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch_1__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw_1__pf);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakVector_Z__pf, 200.000000);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_BreakVector_X__pf, b0l__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf);
	bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
	bpfv__CallFunc_RInterpTo_ReturnValue__pf = UKismetMathLibrary::RInterpTo(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf, bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue_2__pf, 5.000000);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_RInterpTo_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll_2__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch_2__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw_2__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue_1__pf = UKismetMathLibrary::MakeRotator(b0l__CallFunc_BreakRotator_Roll_1__pf, b0l__CallFunc_BreakRotator_Pitch_2__pf, b0l__CallFunc_BreakRotator_Yaw_2__pf);
	if(::IsValid(bpfv__CallFunc_GetController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetController_ReturnValue__pf->SetControlRotation(bpfv__CallFunc_MakeRotator_ReturnValue_1__pf);
	}
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 86);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputKeyEvent_Key_1__pf;
	bpv__Blocking__pf = true;
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_8(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 111:
			{
				__CurrentState = 112;
				break;
			}
		case 112:
			{
				if (!bpv__TargetLocked__pf)
				{
					__CurrentState = 113;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 113:
			{
				AddControllerYawInput(b0l__K2Node_InputAxisEvent_AxisValue_4__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_9(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 108:
			{
				__CurrentState = 109;
				break;
			}
		case 109:
			{
				if (!bpv__TargetLocked__pf)
				{
					__CurrentState = 110;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 110:
			{
				AddControllerPitchInput(b0l__K2Node_InputAxisEvent_AxisValue_5__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_10(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue_1__pf{};
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 34:
			{
				__CurrentState = 35;
				break;
			}
		case 35:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 36:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 37:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 38:
			{
				(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 39:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 40:
			{
				__StateStack.Push(46);
			}
		case 41:
			{
				(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_DoesImplementInterface_ReturnValue_1__pf = UKismetSystemLibrary::DoesImplementInterface(b0l__CallFunc_Array_Get_Item__pf, UBPI_InteractWithWeapon_C::StaticClass());
				if (!bpfv__CallFunc_DoesImplementInterface_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 42:
			{
				(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(b0l__CallFunc_Array_Get_Item__pf, bpv__EquippedWeapon__pf);
				if (!bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 43:
			{
				(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if ( b0l__CallFunc_Array_Get_Item__pf && b0l__CallFunc_Array_Get_Item__pf->GetClass()->ImplementsInterface(UBPI_InteractWithWeapon_C::StaticClass()) )
				{
					b0l__K2Node_DynamicCast_AsBPI_Interact_with_Weapon__pf.SetObject(b0l__CallFunc_Array_Get_Item__pf);
					void* IAddress = b0l__CallFunc_Array_Get_Item__pf->GetInterfaceAddress(UBPI_InteractWithWeapon_C::StaticClass());
					b0l__K2Node_DynamicCast_AsBPI_Interact_with_Weapon__pf.SetInterface(IAddress);
				}
				else
				{
					b0l__K2Node_DynamicCast_AsBPI_Interact_with_Weapon__pf.SetObject(nullptr);
				}
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsBPI_Interact_with_Weapon__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 45;
					break;
				}
			}
		case 44:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Interact_with_Weapon__pf))
				{
					IBPI_InteractWithWeapon_C::Execute_bpf__PickUp__pf(b0l__K2Node_DynamicCast_AsBPI_Interact_with_Weapon__pf.GetObject() );
				}
			}
		case 45:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 46:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 38;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_11(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_SphereTraceSingleForObjects_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	FString bpfv__CallFunc_GetDisplayName_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 23:
			{
				__CurrentState = 24;
				break;
			}
		case 24:
			{
				if (!bpv__TargetLocked__pf)
				{
					__CurrentState = 28;
					break;
				}
			}
		case 25:
			{
				bpv__TargetLocked__pf = false;
			}
		case 26:
			{
				bUseControllerRotationYaw = false;
			}
		case 27:
			{
				bpv__LockedOnTarget__pf = ((AActor*)nullptr);
				__CurrentState = -1;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				if(::IsValid(bpv__FollowCamera__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue_2__pf = bpv__FollowCamera__pf->USceneComponent::GetForwardVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_2__pf, 1000.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf);
				bpfv__CallFunc_SphereTraceSingleForObjects_ReturnValue__pf = UKismetSystemLibrary::SphereTraceSingleForObjects(this, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, 300.000000, bpv__TargetType__pf, false, b0l__Temp_object_Variable_1__pf, EDrawDebugTrace::Persistent, /*out*/ b0l__CallFunc_SphereTraceSingleForObjects_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 29:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_SphereTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd_1__pf);
				bpfv__CallFunc_GetDisplayName_ReturnValue__pf = UKismetSystemLibrary::GetDisplayName(b0l__CallFunc_BreakHitResult_HitActor_1__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_GetDisplayName_ReturnValue__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 30:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_SphereTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd_1__pf);
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_BreakHitResult_HitActor_1__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 31:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_SphereTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd_1__pf);
				bpv__LockedOnTarget__pf = b0l__CallFunc_BreakHitResult_HitActor_1__pf;
			}
		case 32:
			{
				bpv__TargetLocked__pf = true;
			}
		case 33:
			{
				bUseControllerRotationYaw = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_12(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	float bpfv__CallFunc_PlayAnimMontage_ReturnValue_3__pf{};
	float bpfv__CallFunc_PlayAnimMontage_ReturnValue_4__pf{};
	float bpfv__CallFunc_PlayAnimMontage_ReturnValue_5__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				bpv__ReadyToAttackx__pfzy = true;
			}
		case 4:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = false;
			}
		case 5:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				__CurrentState = 10;
				break;
			}
		case 10:
			{
				bpv__AttackCounter__pf = 0;
			}
		case 11:
			{
				bpv__Attackingx__pfzy = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				__CurrentState = 48;
				break;
			}
		case 48:
			{
				if (!bpv__WeaponDrawnx__pfzy)
				{
					__CurrentState = 56;
					break;
				}
			}
		case 49:
			{
				if (!bpv__ReadyToAttackx__pfzy)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 50:
			{
				if (!bpv__Attackingx__pfzy)
				{
					__CurrentState = 52;
					break;
				}
			}
		case 51:
			{
				bpv__SaveAttack__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				bpv__Attackingx__pfzy = true;
			}
		case 53:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__AttackCounter__pf, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 54;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__AttackCounter__pf, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 66;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__AttackCounter__pf, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 68;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 54:
			{
				bpv__AttackCounter__pf = 1;
			}
		case 55:
			{
				bpfv__CallFunc_PlayAnimMontage_ReturnValue_3__pf = PlayAnimMontage(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed), 1.000000, FName(TEXT("None")));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 56:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__EquippedWeapon__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 57:
			{
				__StateStack.Push(62);
			}
		case 58:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable_1__pf)
				{
					__CurrentState = 59;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 59:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = true;
			}
		case 60:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 61:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 62:
			{
				if (!b0l__Temp_bool_IsClosed_Variable_1__pf)
				{
					__CurrentState = 63;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 63:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = true;
			}
		case 64:
			{
				b0l__CallFunc_PlayAnimMontage_ReturnValue_1__pf = PlayAnimMontage(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed), 1.000000, FName(TEXT("None")));
			}
		case 65:
			{
				UKismetSystemLibrary::Delay(this, b0l__CallFunc_PlayAnimMontage_ReturnValue_1__pf, FLatentActionInfo(2, -985081442, TEXT("ExecuteUbergraph_ThirdPersonCharacter_12"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 66:
			{
				bpv__AttackCounter__pf = 2;
			}
		case 67:
			{
				bpfv__CallFunc_PlayAnimMontage_ReturnValue_4__pf = PlayAnimMontage(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed), 1.000000, FName(TEXT("None")));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 68:
			{
				bpv__AttackCounter__pf = 0;
			}
		case 69:
			{
				bpfv__CallFunc_PlayAnimMontage_ReturnValue_5__pf = PlayAnimMontage(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed), 1.000000, FName(TEXT("None")));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 168:
			{
				__CurrentState = 169;
				break;
			}
		case 169:
			{
				if (!bpv__SaveAttack__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 170:
			{
				bpv__SaveAttack__pf = false;
			}
		case 171:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__AttackCounter__pf, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 53;
					break;
				}
			}
		case 172:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(9, -1836554521, TEXT("ExecuteUbergraph_ThirdPersonCharacter_12"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 173:
			{
				__CurrentState = 49;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_13(int32 bpp__EntryPoint__pf)
{
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf{};
	float bpfv__CallFunc_Montage_Play_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 167);
	// optimized KCST_UnconditionalGoto
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
	}
	if(::IsValid(bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf))
	{
		bpfv__CallFunc_Montage_Play_ReturnValue_1__pf = bpfv__CallFunc_GetAnimInstance_ReturnValue_1__pf->UAnimInstance::Montage_Play(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed), 1.000000, EMontagePlayReturnType::MontageLength, 0.000000, true);
	}
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_14(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 6:
			{
				__CurrentState = 7;
				break;
			}
		case 7:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = false;
			}
		case 8:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 70:
			{
				__CurrentState = 71;
				break;
			}
		case 71:
			{
				if (!bpv__WeaponDrawnx__pfzy)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 72:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__EquippedWeapon__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 73:
			{
				__StateStack.Push(78);
			}
		case 74:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 75;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 75:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 76:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 77:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 78:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 79;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 79:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 80:
			{
				bpv__ReadyToAttackx__pfzy = false;
			}
		case 81:
			{
				b0l__CallFunc_PlayAnimMontage_ReturnValue_2__pf = PlayAnimMontage(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed), 1.000000, FName(TEXT("None")));
			}
		case 82:
			{
				UKismetSystemLibrary::Delay(this, b0l__CallFunc_PlayAnimMontage_ReturnValue_2__pf, FLatentActionInfo(6, 1863421516, TEXT("ExecuteUbergraph_ThirdPersonCharacter_14"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_1__pf;
	if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
	{
		(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__TP_MaxCrouchSpeed__pf;
	}
	bpv__isCrouching__pf = true;
	if(::IsValid(bpv__T_Crouching__pf))
	{
		bpv__T_Crouching__pf->UTimelineComponent::Play();
	}
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_16(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 119:
			{
				__CurrentState = 120;
				break;
			}
		case 120:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_2__pf;
			}
		case 121:
			{
				if (!bpv__isSprinting__pf)
				{
					__CurrentState = 122;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 122:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__TP_MaxWalkSpeed__pf;
				}
			}
		case 123:
			{
				bpv__isCrouching__pf = false;
			}
		case 124:
			{
				if(::IsValid(bpv__T_Crouching__pf))
				{
					bpv__T_Crouching__pf->UTimelineComponent::Reverse();
				}
				__CurrentState = -1;
				break;
			}
		case 144:
			{
				__CurrentState = 123;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 164);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__EquippedWeapon__pf))
	{
		bpv__EquippedWeapon__pf->AActor::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("weapon_back")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true);
	}
	bpv__WeaponDrawnx__pfzy = false;
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_18(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 161);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__EquippedWeapon__pf))
	{
		bpv__EquippedWeapon__pf->AActor::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("weapon_hand_right")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true);
	}
	bpv__WeaponDrawnx__pfzy = true;
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_19(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 141:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__TP_MaxWalkSpeed__pf;
				}
			}
		case 142:
			{
				bpv__isSprinting__pf = false;
				__CurrentState = -1;
				break;
			}
		case 147:
			{
				if (!bpv__isCrouching__pf)
				{
					__CurrentState = 141;
					break;
				}
			}
		case 148:
			{
				bpv__isSprinting__pf = false;
				__CurrentState = -1;
				break;
			}
		case 159:
			{
				__CurrentState = 160;
				break;
			}
		case 160:
			{
				b0l__Temp_struct_Variable_4__pf = b0l__K2Node_InputActionEvent_Key_4__pf;
				__CurrentState = 147;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_20(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 139:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__TP_SprintSpeed__pf;
				}
			}
		case 140:
			{
				bpv__isSprinting__pf = true;
				__CurrentState = -1;
				break;
			}
		case 146:
			{
				bpf__StopCrouching__pf();
				__CurrentState = 139;
				break;
			}
		case 149:
			{
				if (!bpv__isCrouching__pf)
				{
					__CurrentState = 139;
					break;
				}
				__CurrentState = 146;
				break;
			}
		case 157:
			{
				__CurrentState = 158;
				break;
			}
		case 158:
			{
				b0l__Temp_struct_Variable_4__pf = b0l__K2Node_InputActionEvent_Key_3__pf;
				__CurrentState = 149;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_21(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 155);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_3__pf = b0l__K2Node_InputActionEvent_Key_9__pf;
	// optimized KCST_UnconditionalGoto
	StopJumping();
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_22(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 17);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__CameraBoom__pf))
	{
		bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf = bpv__CameraBoom__pf->USceneComponent::GetForwardVector();
	}
	if(::IsValid(bpv__CameraBoom__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpv__CameraBoom__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf, 500.000000);
	bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
	bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf = UKismetSystemLibrary::SphereTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, 2.000000, ETraceTypeQuery::TraceTypeQuery1, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::ForDuration, /*out*/ b0l__CallFunc_SphereTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
	UGameplayStatics::BreakHitResult(b0l__CallFunc_SphereTraceSingle_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
	if (!b0l__CallFunc_BreakHitResult_bBlockingHit__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	UGameplayStatics::BreakHitResult(b0l__CallFunc_SphereTraceSingle_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
	bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(b0l__CallFunc_BreakHitResult_HitActor__pf, UBPI_Interaction_C::StaticClass());
	if (!bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	UGameplayStatics::BreakHitResult(b0l__CallFunc_SphereTraceSingle_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
	if ( b0l__CallFunc_BreakHitResult_HitActor__pf && b0l__CallFunc_BreakHitResult_HitActor__pf->GetClass()->ImplementsInterface(UBPI_Interaction_C::StaticClass()) )
	{
		b0l__K2Node_DynamicCast_AsBPI_Interaction__pf.SetObject(b0l__CallFunc_BreakHitResult_HitActor__pf);
		void* IAddress = b0l__CallFunc_BreakHitResult_HitActor__pf->GetInterfaceAddress(UBPI_Interaction_C::StaticClass());
		b0l__K2Node_DynamicCast_AsBPI_Interaction__pf.SetInterface(IAddress);
	}
	else
	{
		b0l__K2Node_DynamicCast_AsBPI_Interaction__pf.SetObject(nullptr);
	}
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBPI_Interaction__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Interaction__pf))
	{
		IBPI_Interaction_C::Execute_bpf__Interact__pf(b0l__K2Node_DynamicCast_AsBPI_Interaction__pf.GetObject() );
	}
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_23(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 153);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_3__pf = b0l__K2Node_InputActionEvent_Key_8__pf;
	// optimized KCST_UnconditionalGoto
	Jump();
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_24(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 150);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_2__pf = b0l__K2Node_InputTouchEvent_Location_1__pf;
	b0l__Temp_byte_Variable__pf = b0l__K2Node_InputTouchEvent_FingerIndex_1__pf;
	// optimized KCST_UnconditionalGoto
	StopJumping();
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_25(int32 bpp__EntryPoint__pf)
{
	UInventory_C__pf2670873798* bpfv__CallFunc_Create_ReturnValue__pf{};
	UWidget_PlayerUI_C__pf2670873798* bpfv__CallFunc_Create_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 89:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UInventory_C__pf2670873798>(UWidgetBlueprintLibrary::Create(this, UInventory_C__pf2670873798::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 90:
			{
				bpv__InventoryWG__pf = bpfv__CallFunc_Create_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 102:
			{
				bpfv__CallFunc_Create_ReturnValue_1__pf = CastChecked<UWidget_PlayerUI_C__pf2670873798>(UWidgetBlueprintLibrary::Create(this, UWidget_PlayerUI_C__pf2670873798::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 103:
			{
				if(::IsValid(bpfv__CallFunc_Create_ReturnValue_1__pf))
				{
					bpfv__CallFunc_Create_ReturnValue_1__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 104:
			{
				bpv__UMG_Healthbar__pf = bpfv__CallFunc_Create_ReturnValue_1__pf;
				__CurrentState = 89;
				break;
			}
		case 131:
			{
				__CurrentState = 132;
				break;
			}
		case 132:
			{
				__StateStack.Push(133);
				__CurrentState = 102;
				break;
			}
		case 133:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__TP_MaxWalkSpeed__pf;
				}
			}
		case 134:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->JumpZVelocity = bpv__TP_JumpZVelocity__pf;
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
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_26(int32 bpp__EntryPoint__pf)
{
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	float bpfv__CallFunc_Montage_Play_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	UParticleSystemComponent* bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 99);
	// optimized KCST_UnconditionalGoto
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
	}
	if(::IsValid(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf))
	{
		bpfv__CallFunc_Montage_Play_ReturnValue__pf = bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->UAnimInstance::Montage_Play(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AThirdPersonCharacter_C__pf2222656877::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed), 1.000000, EMontagePlayReturnType::MontageLength, 0.000000, true);
	}
	if(::IsValid(bpv__SpecialAttack__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__SpecialAttack__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf = UGameplayStatics::SpawnEmitterAtLocation(this, ((UParticleSystem*)nullptr), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000), true, EPSCPoolMethod::None, true);
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_27(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 135);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_2__pf = b0l__K2Node_InputTouchEvent_Location__pf;
	b0l__Temp_byte_Variable__pf = b0l__K2Node_InputTouchEvent_FingerIndex__pf;
	// optimized KCST_UnconditionalGoto
	Jump();
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_28(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 105);
	// optimized KCST_UnconditionalGoto
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(0.000000, EOrientPositionSelector::OrientationAndPosition);
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_29(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	check(bpp__EntryPoint__pf == 127);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue__pf, bpv__BaseLookUpRate__pf);
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue_1__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue_1__pf);
	AddControllerPitchInput(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf);
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_30(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 125);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue_1__pf, bpv__BaseTurnRate__pf);
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf);
	AddControllerYawInput(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf);
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_31(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 114);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_MakeRotator_ReturnValue__pf);
	AddMovementInput(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, b0l__K2Node_InputAxisEvent_AxisValue_3__pf, false);
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_32(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 116);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpfv__CallFunc_MakeRotator_ReturnValue__pf);
	AddMovementInput(bpfv__CallFunc_GetRightVector_ReturnValue__pf, b0l__K2Node_InputAxisEvent_AxisValue_2__pf, false);
	return; //KCST_EndOfThread
}
void AThirdPersonCharacter_C__pf2222656877::bpf__GetHIt__pf()
{
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_0(190);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_6(185);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf)
{
	typedef UDamageType*  T__Local__86;
	T__Local__86& bpp__DamageType__pf = *const_cast<T__Local__86 *>(&bpp__DamageType__pf__const);
	b0l__K2Node_Event_Damage__pf = bpp__Damage__pf;
	b0l__K2Node_Event_DamageType__pf = bpp__DamageType__pf;
	b0l__K2Node_Event_InstigatedBy__pf = bpp__InstigatedBy__pf;
	b0l__K2Node_Event_DamageCauser__pf = bpp__DamageCauser__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_1(174);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__AttackPlayer__pf()
{
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_12(173);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__AttackCombo__pf()
{
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_12(168);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__SheatheTact__pf()
{
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_17(164);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__DrawTact__pf()
{
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_18(161);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__StopCrouching__pf()
{
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_16(144);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_25(131);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_29(127);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_30(125);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_32(116);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_31(114);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_4__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_8(111);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_40__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_5__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_9(108);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_I_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_2(91);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_G_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_7(86);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_G_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_5(83);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_14(70);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_12(47);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_E_K2Node_InputKeyEvent_5__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_10(34);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_Tab_K2Node_InputKeyEvent_6__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_11(23);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_Interact_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_22(17);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_Crouch_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_15(12);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_Crouch_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_16(119);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_Sprint_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_20(157);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_Sprint_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_19(159);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_Backflip_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_13(167);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_SpecialAttack_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_26(99);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_28(105);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpTchEvt_Pressed__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf)
{
	b0l__K2Node_InputTouchEvent_FingerIndex__pf = bpp__FingerIndex__pf;
	b0l__K2Node_InputTouchEvent_Location__pf = bpp__Location__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_27(135);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpTchEvt_Released__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf)
{
	b0l__K2Node_InputTouchEvent_FingerIndex_1__pf = bpp__FingerIndex__pf;
	b0l__K2Node_InputTouchEvent_Location_1__pf = bpp__Location__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_24(150);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_Jump_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_8__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_23(153);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__InpActEvt_Jump_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_9__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_21(155);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__T_Crouching__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_4(188);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__T_Crouching__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_3(189);
}
void AThirdPersonCharacter_C__pf2222656877::bpf__BlockxAnglexCheck__pfTT(/*out*/ bool& bpp__FacingAIx__pfzy)
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
PRAGMA_DISABLE_OPTIMIZATION
void AThirdPersonCharacter_C__pf2222656877::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Thrust_1.A_Thrust_1 
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Mei/Mesh/Character/Mei/old/SK_Mei_v2.SK_Mei_v2 
		{160, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/Material/Pickups/Tact/S_Tact.S_Tact 
		{164, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  TextureRenderTarget2D /Game/Mei/UI/Minimap/RT_Minimap.RT_Minimap 
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Attacked_Montage.Attacked_Montage 
		{168, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Thrust_combo1_Montage.Thrust_combo1_Montage 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Draw_weapon_Montage.Draw_weapon_Montage 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Thrust_combo2_Montage.Thrust_combo2_Montage 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Thrust_combo3_Montage.Thrust_combo3_Montage 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Backflip_Montage.Backflip_Montage 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Sheathe_weapon_Montage.Sheathe_weapon_Montage 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Thrust_1_Montage.Thrust_1_Montage 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AThirdPersonCharacter_C__pf2222656877::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{365, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/BPI_ThirdPersonCharacter.BPI_ThirdPersonCharacter_C 
		{157, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{158, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{159, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{161, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIPerceptionStimuliSourceComponent 
		{162, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AISense_Sight 
		{163, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneCaptureComponent2D 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{71, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{165, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{145, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{56, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{30, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{155, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{177, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Mei/Mesh/Character/Mei/SK_Mei_Skeleton.SK_Mei_Skeleton 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByBool 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SaveCachedPose 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_UseCachedPose 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{131, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Mei/Anim/Mei/BS_Mei.BS_Mei 
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_WeaponHold.A_WeaponHold 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/Mei/Anim/Mei/BS_Mei_1D.BS_Mei_1D 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jump_end.A_Jump_end 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jump_loop.A_Jump_loop 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jump_start.A_Jump_start 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Guard.A_Guard 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpectatorPawn 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Mei/UI/M_Avatar.M_Avatar 
		{185, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Mei/UI/M_AvatarShadow.M_AvatarShadow 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Mei/UI/M_StaminaBar.M_StaminaBar 
		{187, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Mei/UI/M_TextFont.M_TextFont 
		{188, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Mei/UI/T_money_icon.T_money_icon 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{189, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameSession 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{190, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder 
		{191, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Mei/BP/Pickup/self/Throw/M_PredictionPath.M_PredictionPath 
		{192, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/test/umbrella/SM_Umbrella.SM_Umbrella 
		{193, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineComponent 
		{194, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature 
		{195, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimMontage 
		{196, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraSystem 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMovementMode 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Standing_Aim_Recoil_Montage.Standing_Aim_Recoil_Montage 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{201, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Rolling_Montage.Rolling_Montage 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{202, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Attack_Charge_ChargePart_Montage.Attack_Charge_ChargePart_Montage 
		{203, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Mei/Sound/audio/power_charge.power_charge 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{204, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/Charge/FX_Charge.FX_Charge 
		{205, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/BP/Pickup/self/Bow/Bow_Montage.Bow_Montage 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{206, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.SlateBlueprintLibrary 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{207, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/Weapon/Hit/FX_HIt.FX_Hit 
		{208, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Mei/Sound/audio/hit_robot1.hit_robot1 
		{209, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/Shield/FX_Shield.FX_Shield 
		{210, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Braced_Hang_To_Crouch_Montage.Braced_Hang_To_Crouch_Montage 
		{211, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EDrawDebugTrace 
		{212, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MovementComponent 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{213, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/HeavyThrust_Montage.HeavyThrust_Montage 
		{214, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Attack_Charge_AttackPart_Montage.Attack_Charge_AttackPart_Montage 
		{215, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Glide.A_Glide 
		{216, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Mei/Mesh/Character/Mei/SK_Mei.SK_Mei 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{217, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{218, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Props/MaterialSphere.MaterialSphere 
		{219, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{220, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/BP/Pickup/self/Bow/SM_Arrow.SM_Arrow 
		{221, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Mei/UI/crosshair.crosshair 
		{222, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Mei/BP/Pickup/self/Bow/SK_Bow.SK_Bow 
		{223, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Mei/BP/Pickup/self/Bow/Bow_Skeleton.Bow_Skeleton 
		{224, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Mei/BP/Pickup/self/Throw/M_PredictionEnd.M_PredictionEnd 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{225, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.DetourCrowdAIController 
		{226, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Mei/UI/T_Target.T_Target 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Can_Build.MI_Can_Build 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_CanNot_Build.MI_CanNot_Build 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{227, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{228, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraModifier_CameraShake 
		{229, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/AdvancedLocomotionV4/Data/Curves/CameraBlendCurves/CameraLerp_1.CameraLerp_1 
		{230, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/AdvancedLocomotionV4/Data/Curves/CameraBlendCurves/CameraLerp_2.CameraLerp_2 
		{231, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Mei/BP/CameraSystem/Mei_Camera_Skeleton.Mei_Camera_Skeleton 
		{232, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum 
		{233, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_ModifyCurve 
		{234, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/PhysicsCore.EPhysicalSurface 
		{235, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_ModifyBone 
		{236, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Mei/Sound/cue/Rock_Cue.Rock_Cue 
		{237, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Mei/Sound/cue/Grass_Cue.Grass_Cue 
		{238, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Mei/Sound/cue/Dirt_01.Dirt_01 
		{239, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK 
		{240, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase 
		{241, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator 
		{242, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByInt 
		{243, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/KawaiiPhysics.AnimNode_KawaiiPhysics 
		{244, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_ConvertLocalToComponentSpace 
		{245, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_ConvertComponentToLocalSpace 
		{246, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Throw.A_Throw 
		{247, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jogging.A_Jogging 
		{248, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Braced_Hang_Shimmy_Left.A_Braced_Hang_Shimmy_Left 
		{249, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Braced_Hang_Shimmy_Right.A_Braced_Hang_Shimmy_Right 
		{250, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Crouch_Walk.A_Crouch_Walk 
		{251, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Crouch_Idle.A_Crouch_Idle 
		{252, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Sprinting.A_Sprinting 
		{253, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Standing_Aim_Walk_Forward.A_Standing_Aim_Walk_Forward 
		{254, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jogging_Old.A_Jogging_Old 
		{255, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Guard_WeaponDrawn_Loop.A_Guard_WeaponDrawn_Loop 
		{256, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Idle.A_Idle 
		{257, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/EngineMeshes/MaterialSphere.MaterialSphere 
		{258, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{259, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{260, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{261, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{262, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{263, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{264, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{265, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{266, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{267, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{268, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/Vanish/FX_Vanish.FX_Vanish 
		{269, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{270, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{271, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.PawnSensingComponent 
		{272, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{273, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Mei/BP/CameraSystem/Mei_Camera.Mei_Camera 
		{274, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETraceTypeQuery 
		{275, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/AdvancedLocomotionV4/Blueprints/CameraSystem/Camera_Skeleton.Camera_Skeleton 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETextGender 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/Mei/BP/BuildingSystem/DataTables/DT_Mei_BuildingObjects.DT_Mei_BuildingObjects 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Landscape.Landscape 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleActor 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleMesh 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/BuildingSystem/Dummy/Dummy.Dummy 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/Mesh/BuildingSystem/Structures/Dummy/SM_Dummy_Foundation.SM_Dummy_Foundation 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Dummy_Structures_Base.MI_Dummy_Structures_Base 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionResponse 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBoxSlot 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBox 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{276, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Mei/Sound/audio/Elven_Harmonies.Elven_Harmonies 
		{277, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Mei/Sound/audio/Fantasy_Adventure.Fantasy_Adventure 
		{366, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/Inventory.Inventory_C 
		{333, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/Widget_PlayerUI.Widget_PlayerUI_C 
		{367, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/test/Doors/BPI_Interaction.BPI_Interaction_C 
		{279, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/Pickup/old/BPI_InteractWithWeapon.BPI_InteractWithWeapon_C 
		{368, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Mei/BP/Character/old/ABP_Mei_v2.ABP_Mei_v2_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AThirdPersonCharacter_C__pf2222656877
{
	FRegisterHelper__AThirdPersonCharacter_C__pf2222656877()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/ThirdPersonBP/Blueprints/ThirdPersonCharacter"), &AThirdPersonCharacter_C__pf2222656877::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AThirdPersonCharacter_C__pf2222656877 Instance;
};
FRegisterHelper__AThirdPersonCharacter_C__pf2222656877 FRegisterHelper__AThirdPersonCharacter_C__pf2222656877::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
