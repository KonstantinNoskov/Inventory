#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Inv_PlayerController.generated.h"

class UInv_HUDWidget;
class UInputAction;
class UInputMappingContext;

UCLASS()
class INVENTORY_SYSTEM_API AInv_PlayerController : public APlayerController
{
	GENERATED_BODY()

	AInv_PlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	virtual void Tick(float DeltaTime) override;
	

private:

	void PrimaryInteract();
	void CreateHUDWidget();
	void TraceForItem();

	
	//  INPUT
	// ===============================================================================================================
 
	UPROPERTY(EditDefaultsOnly, Category = "Inventory|Input")
	TArray<TObjectPtr<UInputMappingContext>> DefaultIMCs;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory|Input")
	TObjectPtr<UInputAction> PrimaryInteractAction;

	
	//  UI
	// ===============================================================================================================
	
	UPROPERTY(EditDefaultsOnly, Category = "Inventory|UI")
	TSubclassOf<UInv_HUDWidget> HUDWidgetClass;

	UPROPERTY()
	TObjectPtr<UInv_HUDWidget> HUDWidget;


	//  INTERACTION
	// ===============================================================================================================
 
	UPROPERTY(EditDefaultsOnly, Category = "Inventory|Interaction")
	double TraceLength = 10000;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory|Interaction")
	TEnumAsByte<ECollisionChannel> ItemTraceChannel;

	TWeakObjectPtr<AActor> ThisActor;
	TWeakObjectPtr<AActor> LastActor;
};
