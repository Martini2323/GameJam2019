// Fill out your copyright notice in the Description page of Project Settings.


#include "DatabaseConnection.h"

// Sets default values
ADatabaseConnection::ADatabaseConnection()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADatabaseConnection::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADatabaseConnection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

