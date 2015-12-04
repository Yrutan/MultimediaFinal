// Fill out your copyright notice in the Description page of Project Settings.

#include "MultimediaFinal.h"
#include "PickUp.h"


// Sets default values
APickUp::APickUp()
{

   SphereContact = CreateDefaultSubobject<USphereComponent>(TEXT("SphereContactComponent"));
   SphereContact->SetSphereRadius(20.f, false);
   RootComponent = SphereContact;

   VitesseRotation = 180.f; // 180 degrés par seconde

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUp::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

   FRotator rotation = GetActorRotation();
   rotation.Roll += VitesseRotation * DeltaTime;
   SetActorRotation(rotation);

}

