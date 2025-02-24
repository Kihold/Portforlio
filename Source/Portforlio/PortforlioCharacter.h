// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "MyAbilitySystemComponent.h"//�����Ƽ �ý���
#include "MyAttributeSet.h"//��Ʈ��Ʈ
#include "PortforlioCharacter.generated.h"

class UMyAbilitySystemComponent;//Ŭ���� ���� ����
class UMyAttributeSet;
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class APortforlioCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

public:
	APortforlioCharacter();
	
public://���� ����
	//�����Ƽ �ý��� ������Ʈ �߰�
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GASGamePlayAbility")
	class UMyAbilitySystemComponent* AbilitySystemComponent;
	//Get�Լ�
	virtual class UMyAbilitySystemComponent* GetAbilitySystemComponent() const;
	
	//ĳ���� ���� ����(HP, MP, Damage�� ����)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GASGamePlayAbility")
	const class UAttributeSet* AttributeSetVar;

	//EditDefaultOnly �����Ϳ��� �ʱ⿡ ĳ������ ��ų �߰�
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GASGamePlayAbility")
	TArray<TSubclassOf<class UGameplayAbility>> InitialAbilities;

	//��ų ���� ���� �����Ƽ, �ʱ� �ɷ�ġ ����
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "GASGamePlayAbility")
	TArray<TSubclassOf<class UGameplayEffect>> DefaultAttributes;

public: //��ų ���� �Լ�

	//��ų �����Ƽ �ϳ� �ʱ�ȭ
	UFUNCTION(BlueprintCallable, Category = "GASGamePlayAbilitySkill")
	void InitalizeAbility(TSubclassOf<class UGameplayAbility> AbilityToget, int32 AbilityLevel);

	//��ų �����Ƽ �ѹ��� ������ �ʱ�ȭ
	UFUNCTION(BlueprintCallable, Category = "GASGamePlayAbilitySkill")
	void InitalizeAbilityMulti(TArray<TSubclassOf<class UGameplayAbility>> AbilityToAcquire, int32 AbilityLevel);

public: //�����Ƽ �±� �ý��� ����,

	//FGameplayTagContainer�� �±� ������ ������ ����.
	//�±� ����
	UFUNCTION(BlueprintCallable, Category = "GASGamePlayAbility")
	void RemoveAbilityWithTags(FGameplayTagContainer TagContainer);

	//�±� ���
	UFUNCTION(BlueprintCallable, Category = "GASGamePlayAbility")
	void CancelAbilityWithTags(FGameplayTagContainer WIthTag, FGameplayTagContainer WithoutTag);

	//�±� �ϳ��� �߰�
	UFUNCTION(BlueprintCallable, Category = "GASGamePlayAbility")
	void AddLooseGamePlayTag(FGameplayTag TagToAdd);

	//�±� �ϳ��� ����
	UFUNCTION(BlueprintCallable, Category = "GASGamePlayAbility")
	void RemoveLooseGameplayTag(FGameplayTag TagToAddRemove);

	//�±� ���� ���� ������ LOL�� ġ�� ��ų����, QWER
	UFUNCTION(BlueprintCallable, Category = "GASGamePlayAbility")
	void ChangeAbilityLevelWithTags(FGameplayTagContainer TagContainer, int32 Level);

public: //ĳ���� �Ӽ� ���� ��� �߰�

	UFUNCTION() //ü���� ����ɶ� �ҷ����� �Լ�
	void OnHealthChagneNative(float Health, int32 StackCount);

	//BlueprintImplementableEvent �������Ʈ���� �̺�Ʈ �߻�
	//��� C++���� �ȸ���� ���� Native�� C++������
	UFUNCTION(BlueprintImplementableEvent, Category = "GASGamePlayAbility")
	void OnHealthChagne(float Health, int32 StackCount);

	//���� ü���� �ٷ� �������°�, Pure�� ���� ����
	UFUNCTION(BlueprintPure, Category = "GASGamePlayAbility")
	void HealthValues(float& Health, float& MaxHealth);

	//�׳� �θ�
	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "GASGameplayAbility")
	float GetMaxHealth() const;

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			

protected:
	// To add mapping context
	virtual void BeginPlay();

	virtual void NotifyControllerChanged() override;

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

