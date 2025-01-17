// Copyright 2022 Eidos-Montreal / Eidos-Sherbrooke

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http ://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rendering/VdbDenoiser.h"
#include "VdbBlueprintLibrary.generated.h"

UCLASS(MinimalAPI, meta=(ScriptName="VdbLibrary"))
class UVdbBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Set number of samples per pixel
	UFUNCTION(BlueprintCallable, Category="SparseVolumetrics")
	static void SetRaymarchingSampleCount(int SampleCount = 1);

	// Set maximum number of ray bounces/iterations during raymarching
	UFUNCTION(BlueprintCallable, Category="SparseVolumetrics")
	static void SetMaximumRayDepth(int Depth = 1);

	// Set denoising method
	UFUNCTION(BlueprintCallable, Category="SparseVolumetrics")
	static void SetDenoiserMethod(EVdbDenoiserMethod Method);
};
