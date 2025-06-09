#include "Interaction/Inv_HighlightableStaticMesh.h"

void UInv_HighlightableStaticMesh::HighLight_Implementation()
{
	SetOverlayMaterial(HighlightMaterial);
}

void UInv_HighlightableStaticMesh::UnHighLight_Implementation()
{
	SetOverlayMaterial(nullptr);
}
