// Fill out your copyright notice in the Description page of Project Settings.

#include "HuntMeIfYouCan.h"
#include "ArcherCharacter.h"
#include "HMIYCGameInstance.h"

AArcherCharacter::AArcherCharacter()
{

}

void AArcherCharacter::BeginPlay()
{
    AAssassinCharacter::BeginPlay();
    GEngine->AddOnScreenDebugMessage( -1, 4.5f, FColor::Green, "Archer spawn" );
}

FString AArcherCharacter::GetUIPath()
{
    return FString( "/Game/Blueprints/Widgets/Characters/BP_ArcherUI.BP_ArcherUI_C" );
}
