#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Inv_HighlightInterface.generated.h"

UINTERFACE()
class UInv_HighlightInterface : public UInterface
{
	GENERATED_BODY()
};

class INVENTORY_SYSTEM_API IInv_HighlightInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, Category = "Inventory")
	void HighLight();

	UFUNCTION(BlueprintNativeEvent, Category = "Inventory")
	void UnHighLight();
};
