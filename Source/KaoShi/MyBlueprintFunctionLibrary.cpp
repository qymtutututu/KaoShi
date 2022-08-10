// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

void UMyBlueprintFunctionLibrary::GetLocal(FString& TheIP, FString& ThePort)
{
	if (!GConfig)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("return")));
		return;
	}
	GConfig->GetString(
		TEXT("UDP"),
		TEXT("ServerIP"),
		TheIP,
		GGameIni
	);
	GConfig->GetString(
		TEXT("UDP"),
		TEXT("ThePort"),
		ThePort,
		GGameIni
	);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("C++ Print")));
}

