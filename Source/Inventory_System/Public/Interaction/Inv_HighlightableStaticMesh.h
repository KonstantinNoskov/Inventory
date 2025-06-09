

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Interfaces/Inv_HighlightInterface.h"
#include "Inv_HighlightableStaticMesh.generated.h"

UCLASS()
class INVENTORY_SYSTEM_API UInv_HighlightableStaticMesh : public UStaticMeshComponent, public IInv_HighlightInterface
{
	GENERATED_BODY()

public:
	
	virtual void HighLight_Implementation() override;
	virtual void UnHighLight_Implementation() override;

private:

	UPROPERTY(EditAnywhere, Category = "Inventory")
	TObjectPtr<UMaterialInterface> HighlightMaterial;
};
