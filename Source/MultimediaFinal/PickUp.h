// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "PickUp.generated.h"

UCLASS()
class MULTIMEDIAFINAL_API APickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUp();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
   /** Sphere de contact */
   UPROPERTY(VisibleDefaultsOnly, Category = "SourceEnergie")
   class USphereComponent* SphereContact;

   /** VitesseRotation */
   UPROPERTY(EditDefaultsOnly, Category = "SourceEnergie")
      float VitesseRotation;

};
