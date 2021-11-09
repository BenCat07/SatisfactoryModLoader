// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGAmbientVolume.h"
#include "Components/BrushComponent.h"
#include "AkAudio/Classes/AkComponent.h"

#if WITH_EDITOR
void AFGAmbientVolume::CheckForErrors(){ Super::CheckForErrors(); }
#endif 
AFGAmbientVolume::AFGAmbientVolume() : Super() {
	this->mAmbientSettings = nullptr;
	this->mAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
	this->mAdditionalAttenuationDistance = 300.0;
	this->mSignificanceRange = 25000.0;
	this->mAudioComponent->SetupAttachment(GetBrushComponent());
}
void AFGAmbientVolume::BeginPlay(){ }
void AFGAmbientVolume::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGAmbientVolume::GainedSignificance_Implementation(){ }
void AFGAmbientVolume::LostSignificance_Implementation(){ }
void AFGAmbientVolume::GainedSignificance_Native(){ }
void AFGAmbientVolume::LostSignificance_Native(){ }
float AFGAmbientVolume::GetSignificanceRange(){ return float(); }
const UFGAmbientSettings* AFGAmbientVolume::GetAmbientSettings() const{ return nullptr; }
void AFGAmbientVolume::SetCameraIsClose(bool close){ }
void AFGAmbientVolume::SetCameraIsInside(bool inside){ }
void AFGAmbientVolume::PostUnregisterAllComponents(void){ }
void AFGAmbientVolume::PostRegisterAllComponents(){ }
void AFGAmbientVolume::AddVolume(){ }
void AFGAmbientVolume::RemoveVolume(){ }
