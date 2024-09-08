// Fill out your copyright notice in the Description page of Project Settings.


#include "VictoryBox.h"
#include"Components/BoxComponent.h"
#include "Final_Proj_HanselCharacter.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AVictoryBox::AVictoryBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);

	//Set the BoxExtent property for the CollisionBox to 60 units in all axes
	//this will cause the BoxComponent to double the size .
	CollisionBox->SetBoxExtent(FVector(60.0F, 60.0F, 60.0F));

	//Offset the reative position by 120 units by the z axis
	CollisionBox->SetRelativeLocation(FVector(0.0F, 0.0F, 120.0F));

	//Bind the OnbeginOverlap fn we wrote to the BoxComponent's onComponentbegin Overlap
	//CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AVictoryBox::OnBeginOverlap);


}

// Called when the game starts or when spawned
void AVictoryBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVictoryBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//
//void AVictoryBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	//If the Actor is overlapped we should quit the game 
//	if (Cast< AFinal_Proj_HanselCharacter>(OtherActor))
//	{
//		UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
//	}
//}

