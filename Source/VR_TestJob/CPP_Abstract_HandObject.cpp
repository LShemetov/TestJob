// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Abstract_HandObject.h"

// Sets default values
ACPP_Abstract_HandObject::ACPP_Abstract_HandObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Abstract_HandObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Abstract_HandObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

