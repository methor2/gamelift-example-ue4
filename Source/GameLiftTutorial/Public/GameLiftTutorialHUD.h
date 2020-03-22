// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameLiftTutorialHUD.generated.h"

class UUserWidget;
class UGameLiftTutorialWidget;
/**
 * 
 */
UCLASS()
class GAMELIFTTUTORIAL_API AGameLiftTutorialHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGameLiftTutorialHUD();

	void SetTeamName(FString TeamName);

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	TSubclassOf<UUserWidget> TeamWidgetClass;

	UGameLiftTutorialWidget* TeamWidget;
};