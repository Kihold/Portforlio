 // Fill out your copyright notice in the Description page of Project Settings.


#include "MyAttributeSet.h"
#include "Net/UnrealNetwork.h" //�𸮾� ��Ʈ��ũ ���
#include "GameplayEffect.h" //�ɷ�ġ ���޿� ����Ʈ, �±� �׷��� ���� �����
#include "GameplayEffectExtension.h" //Ȯ���

UMyAttributeSet::UMyAttributeSet()
{
}

void UMyAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSet, Health, OldHealth);
}

void UMyAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OldLifetimeProps) const
{
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSet, Health, COND_None, REPNOTIFY_Always);
}

void UMyAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	if (Data.EvaluatedData.Attribute == GetHealthAttribute()) //ü���� ����ȰŸ� ��
	{
		//GetHealth() ���� ����� �� ��
		SetHealth(FMath::Clamp(GetHealth(), 0.f, 1000.f));; //0~1000���̷� ü�� ����
		HealthChangeDelegate.Broadcast(GetHealth(), Data.EffectSpec.StackCount);
		//ü�� ����� ��������Ʈ�� �ִ� ��� �Լ��� ü�� ���� ��Ƽ�Խ�Ʈ
	}
}
