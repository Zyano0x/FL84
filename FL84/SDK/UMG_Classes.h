#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class UMG.Visual
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVisual : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Widget
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UWidget : public UVisual
	{
	public:
		class UPanelSlot*                                          Slot;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      bIsEnabledDelegate;                                      // 0x0030(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FText                                                ToolTipText;                                             // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ToolTipTextDelegate;                                     // 0x0058(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class UWidget*                                             ToolTipWidget;                                           // 0x0068(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ToolTipWidgetDelegate;                                   // 0x0070(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      VisibilityDelegate;                                      // 0x0080(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FWidgetTransform                                    RenderTransform;                                         // 0x0090(0x001C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           RenderTransformPivot;                                    // 0x00AC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsVariable : 1;                                         // 0x00B4(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreatedByConstructionScript : 1;                        // 0x00B4(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled : 1;                                          // 0x00B4(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_Cursor : 1;                                    // 0x00B4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IRZ1[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateAccessibleWidgetData*                          AccessibleWidgetData;                                    // 0x00B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsVolatile : 1;                                         // 0x00C0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMouseCursor                                               Cursor;                                                  // 0x00C1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWidgetClipping                                            Clipping;                                                // 0x00C2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           Visibility;                                              // 0x00C3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RenderOpacity;                                           // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateDetailMode                                           DetailMode;                                              // 0x00C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectedDetailModeOnly;                                 // 0x00C9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5C4[0x2];                                   // 0x00CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WidthDivisor;                                            // 0x00CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeightDivisor;                                           // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHXK[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetNavigation*                                   Navigation;                                              // 0x00D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFlowDirectionPreference                                   FlowDirectionPreference;                                 // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBVI[0x47];                                  // 0x00E1(0x0047) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPropertyBinding*>                            NativeBindings;                                          // 0x0128(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetWidthHeightDivisors(int32_t InWidthDivisor, int32_t InHeightDivisor);
		void SetVisibility(ESlateVisibility InVisibility);
		void SetUserFocus(class APlayerController* PlayerController);
		void SetToolTipText(const class FText& InToolTipText);
		void SetToolTip(class UWidget* Widget);
		void SetSelectedDetailModeOnly(bool InSelectedDetailModeOnly);
		void SetRenderTranslation(const struct FVector2D& Translation);
		void SetRenderTransformPivot(const struct FVector2D& Pivot);
		void SetRenderTransformAngle(float Angle);
		void SetRenderTransform(const struct FWidgetTransform& InTransform);
		void SetRenderShear(const struct FVector2D& Shear);
		void SetRenderScale(const struct FVector2D& Scale);
		void SetRenderOpacity(float InOpacity);
		void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget);
		void SetNavigationRuleCustomBoundary(EUINavigation Direction, const class FScriptDelegate& InCustomDelegate);
		void SetNavigationRuleCustom(EUINavigation Direction, const class FScriptDelegate& InCustomDelegate);
		void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);
		void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const class FName& WidgetToFocus);
		void SetKeyboardFocus();
		void SetIsEnabled(bool bInIsEnabled);
		void SetFocus();
		void SetDetailMode(ESlateDetailMode InDetailMode);
		void SetCursor(EMouseCursor InCursor);
		void SetClipping(EWidgetClipping InClipping);
		void SetAllNavigationRules(EUINavigationRule Rule, const class FName& WidgetToFocus);
		void ResetCursor();
		void RemoveFromParent();
		struct FEventReply OnReply__DelegateSignature();
		struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		bool IsVisible();
		bool IsHovered();
		void InvalidateLayoutAndVolatility();
		bool HasUserFocusedDescendants(class APlayerController* PlayerController);
		bool HasUserFocus(class APlayerController* PlayerController);
		bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);
		bool HasMouseCapture();
		bool HasKeyboardFocus();
		bool HasFocusedDescendants();
		bool HasAnyUserFocus();
		class UWidget* GetWidget__DelegateSignature();
		ESlateVisibility GetVisibility();
		struct FGeometry GetTickSpaceGeometry();
		class FText GetText__DelegateSignature();
		ESlateVisibility GetSlateVisibility__DelegateSignature();
		struct FSlateColor GetSlateColor__DelegateSignature();
		struct FSlateBrush GetSlateBrush__DelegateSignature();
		float GetRenderTransformAngle();
		float GetRenderOpacity();
		class UPanelWidget* GetParent();
		struct FGeometry GetPaintSpaceGeometry();
		class APlayerController* GetOwningPlayer();
		class ULocalPlayer* GetOwningLocalPlayer();
		EMouseCursor GetMouseCursor__DelegateSignature();
		struct FLinearColor GetLinearColor__DelegateSignature();
		bool GetIsEnabled();
		int32_t GetInt32__DelegateSignature();
		class UGameInstance* GetGameInstance();
		float GetFloat__DelegateSignature();
		struct FVector2D GetDesiredSize();
		EWidgetClipping GetClipping();
		ECheckBoxState GetCheckBoxState__DelegateSignature();
		struct FGeometry GetCachedGeometry();
		bool GetBool__DelegateSignature();
		class UWidget* GenerateWidgetForString__DelegateSignature(const class FString& Item);
		class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
		void ForceVolatile(bool bForce);
		void ForceLayoutPrepass();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserWidget
	 * Size -> 0x0128 (FullSize[0x0260] - InheritedSize[0x0138])
	 */
	class UUserWidget : public UWidget
	{
	public:
		unsigned char                                              UnknownData_0BH7[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0140(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x0150(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x0160(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ForegroundColorDelegate;                                 // 0x0188(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0198(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<class UUMGSequencePlayer*>                          ActiveSequencePlayers;                                   // 0x01A8(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UUMGSequencePlayer*>                          StoppedSequencePlayers;                                  // 0x01B8(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNamedSlotBinding>                           NamedSlotBindings;                                       // 0x01C8(0x0010) ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetTree*                                         WidgetTree;                                              // 0x01D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x01E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsKeyboardFocus : 1;                              // 0x01E4(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFocusable : 1;                                        // 0x01E4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopAction : 1;                                         // 0x01E4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasScriptImplementedTick : 1;                           // 0x01E4(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasScriptImplementedPaint : 1;                          // 0x01E4(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CC6K[0xB];                                   // 0x01E5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EWidgetTickFrequency                                       TickFrequency;                                           // 0x01F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7EP3[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputComponent*                                     InputComponent;                                          // 0x01F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAnimationEventBinding>                      AnimationCallbacks;                                      // 0x0200(0x0010) ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TZ0B[0x50];                                  // 0x0210(0x0050) MISSED OFFSET (PADDING)

	public:
		void UnregisterInputComponent();
		void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate);
		void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate);
		void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);
		void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void StopListeningForInputAction(const class FName& ActionName, EInputEvent EventType);
		void StopListeningForAllInputActions();
		void StopAnimationsAndLatentActions();
		void StopAnimation(class UWidgetAnimation* InAnimation);
		void StopAllAnimations();
		void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
		void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
		void SetPadding(const struct FMargin& InPadding);
		void SetOwningPlayer(class APlayerController* LocalPlayerController);
		void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);
		void SetInputActionPriority(int32_t NewPriority);
		void SetInputActionBlocking(bool bShouldBlock);
		void SetForegroundColor(const struct FSlateColor& InForegroundColor);
		void SetDesiredSizeInViewport(const struct FVector2D& Size);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetAnchorsInViewport(const struct FAnchors& Anchors);
		void SetAlignmentInViewport(const struct FVector2D& Alignment);
		void ReverseAnimation(class UWidgetAnimation* InAnimation);
		void RemoveFromViewport();
		void RegisterInputComponent();
		void PreConstruct(bool IsDesignTime);
		void PlaySound(class USoundBase* SoundToPlay);
		void PlayEnterAnim();
		class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState);
		class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
		class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
		class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState);
		float PauseAnimation(class UWidgetAnimation* InAnimation);
		struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
		struct FEventReply OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnPaint(struct FPaintContext* Context);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseCaptureLost();
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
		struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
		void OnInitialized();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnAnimationStarted(class UWidgetAnimation* Animation);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void ListenForInputAction(const class FName& ActionName, EInputEvent EventType, bool bConsume, const class FScriptDelegate& Callback);
		bool IsPlayingAnimation();
		bool IsListeningForInputAction(const class FName& ActionName);
		bool IsInViewport();
		bool IsInteractable();
		bool IsAnyAnimationPlaying();
		bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
		bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
		class APawn* GetOwningPlayerPawn();
		class AHUD* GetOwningHUD();
		bool GetIsVisible();
		float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
		struct FAnchors GetAnchorsInViewport();
		struct FVector2D GetAlignmentInViewport();
		void DoPlayEnterAnim(bool InPlayFlag);
		void Destruct();
		void Construct();
		void CancelLatentActions();
		void BindToAnimationStarted(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate);
		void BindToAnimationFinished(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate);
		void BindToAnimationEvent(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate, EWidgetAnimationEvent AnimationEvent, const class FName& UserTag);
		void AddToViewport(int32_t ZOrder);
		bool AddToPlayerScreen(int32_t ZOrder);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Slider
	 * Size -> 0x0460 (FullSize[0x0598] - InheritedSize[0x0138])
	 */
	class USlider : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0138(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x013C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x014C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0150(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16IC[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSliderStyle                                        WidgetStyle;                                             // 0x0158(0x03A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x04F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JS8[0x3];                                   // 0x04F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SliderBarColor;                                          // 0x04FC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x050C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SliderHandleOffset;                                      // 0x051C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CommitTouchStartValue;                                   // 0x0524(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IndentHandle;                                            // 0x0525(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x0526(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MouseUsesStep;                                           // 0x0527(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresControllerLock;                                  // 0x0528(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KD6D[0x3];                                   // 0x0529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StepSize;                                                // 0x052C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0530(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9O93[0x7];                                   // 0x0531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseCaptureBegin;                                     // 0x0538(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMouseCaptureEnd;                                       // 0x0548(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureBegin;                                // 0x0558(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureEnd;                                  // 0x0568(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKBK[0x10];                                  // 0x0588(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetValue(float InValue);
		void SetStepSize(float InValue);
		void SetSliderHandleOffset(const struct FVector2D& InValue);
		void SetSliderHandleColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetNormalBarImage(const struct FSlateBrush& InImage);
		void SetMinValue(float InValue);
		void SetMaxValue(float InValue);
		void SetLocked(bool InValue);
		void SetIndentHandle(bool InValue);
		void SetHoveredBarImage(const struct FSlateBrush& InImage);
		void SetBarThickness(float InValue);
		float GetValue();
		float GetNormalizedValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PanelWidget
	 * Size -> 0x0018 (FullSize[0x0150] - InheritedSize[0x0138])
	 */
	class UPanelWidget : public UWidget
	{
	public:
		TArray<class UPanelSlot*>                                  Slots;                                                   // 0x0138(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8GLX[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)

	public:
		bool RemoveChildAt(int32_t Index);
		bool RemoveChild(class UWidget* Content);
		bool HasChild(class UWidget* Content);
		bool HasAnyChildren();
		int32_t GetChildrenCount();
		int32_t GetChildIndex(class UWidget* Content);
		class UWidget* GetChildAt(int32_t Index);
		TArray<class UWidget*> GetAllChildren();
		void ClearChildren();
		class UPanelSlot* AddChild(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetSwitcher
	 * Size -> 0x0018 (FullSize[0x0168] - InheritedSize[0x0150])
	 */
	class UWidgetSwitcher : public UPanelWidget
	{
	public:
		int32_t                                                    ActiveWidgetIndex;                                       // 0x0150(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RGT[0x14];                                  // 0x0154(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetActiveWidgetIndex(int32_t Index);
		void SetActiveWidget(class UWidget* Widget);
		class UWidget* GetWidgetAtIndex(int32_t Index);
		int32_t GetNumWidgets();
		int32_t GetActiveWidgetIndex();
		class UWidget* GetActiveWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ContentWidget
	 * Size -> 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
	 */
	class UContentWidget : public UPanelWidget
	{
	public:
		class UPanelSlot* SetContent(class UWidget* Content);
		class UPanelSlot* GetContentSlot();
		class UWidget* GetContent();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Border
	 * Size -> 0x0160 (FullSize[0x02B0] - InheritedSize[0x0150])
	 */
	class UBorder : public UContentWidget
	{
	public:
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0150(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0151(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowEffectWhenDisabled : 1;                             // 0x0152(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8QIV[0x1];                                   // 0x0153(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ContentColorAndOpacity;                                  // 0x0154(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ContentColorAndOpacityDelegate;                          // 0x0164(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0174(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGUG[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Background;                                              // 0x0188(0x0098) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BackgroundDelegate;                                      // 0x0220(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        BrushColor;                                              // 0x0230(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BrushColorDelegate;                                      // 0x0240(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           DesiredSizeScale;                                        // 0x0250(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipForRightToLeftFlowDirection;                        // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHR5[0x3];                                   // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x025C(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonUpEvent;                                    // 0x026C(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseMoveEvent;                                        // 0x027C(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseDoubleClickEvent;                                 // 0x028C(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34YD[0x14];                                  // 0x029C(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetDesiredSizeScale(const struct FVector2D& InScale);
		void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
		void SetBrushFromTexture(class UTexture2D* Texture);
		void SetBrushFromMaterial(class UMaterialInterface* Material);
		void SetBrushFromAsset(class USlateBrushAsset* Asset);
		void SetBrushColor(const struct FLinearColor& InBrushColor);
		void SetBrush(const struct FSlateBrush& InBrush);
		class UMaterialInstanceDynamic* GetDynamicMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.DynamicEntryBoxBase
	 * Size -> 0x00C0 (FullSize[0x01F8] - InheritedSize[0x0138])
	 */
	class UDynamicEntryBoxBase : public UWidget
	{
	public:
		EDynamicBoxType                                            EntryBoxType;                                            // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L9T7[0x3];                                   // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           EntrySpacing;                                            // 0x013C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RZTA[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                                   SpacingPattern;                                          // 0x0148(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSlateChildSize                                     EntrySizeRule;                                           // 0x0158(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       EntryHorizontalAlignment;                                // 0x0160(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         EntryVerticalAlignment;                                  // 0x0161(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8OY6[0x2];                                   // 0x0162(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxElementSize;                                          // 0x0164(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QUFW[0x10];                                  // 0x0168(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUserWidgetPool                                     EntryWidgetPool;                                         // 0x0178(0x0080) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetEntrySpacing(const struct FVector2D& InEntrySpacing);
		int32_t GetNumEntries();
		TArray<class UUserWidget*> GetAllEntries();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Button
	 * Size -> 0x0348 (FullSize[0x0498] - InheritedSize[0x0150])
	 */
	class UButton : public UContentWidget
	{
	public:
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0150(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FButtonStyle                                        WidgetStyle;                                             // 0x0158(0x02B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0410(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0420(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonClickMethod                                         ClickMethod;                                             // 0x0430(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonTouchMethod                                         TouchMethod;                                             // 0x0431(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonPressMethod                                         PressMethod;                                             // 0x0432(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0433(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZZW[0x4];                                   // 0x0434(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0438(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x0448(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x0458(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x0468(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x0478(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUE0[0x10];                                  // 0x0488(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTouchMethod(EButtonTouchMethod InTouchMethod);
		void SetStyle(const struct FButtonStyle& InStyle);
		void SetPressMethod(EButtonPressMethod InPressMethod);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetClickMethod(EButtonClickMethod InClickMethod);
		void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
		bool IsPressed();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextLayoutWidget
	 * Size -> 0x0028 (FullSize[0x0160] - InheritedSize[0x0138])
	 */
	class UTextLayoutWidget : public UWidget
	{
	public:
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x0138(0x0003) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		ETextJustify                                               Justification;                                           // 0x013B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETextWrappingPolicy                                        WrappingPolicy;                                          // 0x013C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AutoWrapText : 1;                                        // 0x013D(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DV5I[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WrapTextAt;                                              // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMargin                                             Margin;                                                  // 0x0144(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		float                                                      LineHeightPercentage;                                    // 0x0154(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AlwaysKeepJustification : 1;                             // 0x0158(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_48DW[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetJustification(ETextJustify InJustification);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextBlock
	 * Size -> 0x0198 (FullSize[0x02F8] - InheritedSize[0x0160])
	 */
	class UTextBlock : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0160(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0178(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0188(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x01B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x01C0(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         StrikeBrush;                                             // 0x0220(0x0098) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x02B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x02C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ShadowColorAndOpacityDelegate;                           // 0x02D0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinDesiredWidth;                                         // 0x02E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWrapWithInvalidationPanel;                              // 0x02E4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoWrapText;                                           // 0x02E5(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextTransformPolicy                                       TextTransformPolicy;                                     // 0x02E6(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimpleTextMode;                                         // 0x02E7(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3UCE[0x10];                                  // 0x02E8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
		void SetText(const class FText& InText);
		void SetStrikeBrush(const struct FSlateBrush& InStrikeBrush);
		void SetShadowOffset(const struct FVector2D& InShadowOffset);
		void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
		void SetOpacity(float InOpacity);
		void SetMinDesiredWidth(float InMinDesiredWidth);
		void SetFont(const struct FSlateFontInfo& InFontInfo);
		void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
		void SetAutoWrapText(bool InAutoTextWrap);
		class FText GetText();
		class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
		class UMaterialInstanceDynamic* GetDynamicFontMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBox
	 * Size -> 0x0830 (FullSize[0x0980] - InheritedSize[0x0150])
	 */
	class UScrollBox : public UPanelWidget
	{
	public:
		struct FScrollBoxStyle                                     WidgetStyle;                                             // 0x0150(0x0268) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FScrollBarStyle                                     WidgetBarStyle;                                          // 0x03B8(0x0560) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0918(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              BarStyle;                                                // 0x0920(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0928(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           ScrollBarVisibility;                                     // 0x0929(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConsumeMouseWheel                                         ConsumeMouseWheel;                                       // 0x092A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GIG[0x1];                                   // 0x092B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScrollbarThickness;                                      // 0x092C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarPadding;                                        // 0x0934(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       AlwaysShowScrollbar;                                     // 0x0944(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlwaysShowScrollbarTrack;                                // 0x0945(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowOverscroll;                                         // 0x0946(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateWheelScrolling;                                  // 0x0947(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDescendantScrollDestination                               NavigationDestination;                                   // 0x0948(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKPP[0x3];                                   // 0x0949(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NavigationScrollPadding;                                 // 0x094C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScrollWhenFocusChanges                                    ScrollWhenFocusChanges;                                  // 0x0950(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowRightClickDragScrolling;                           // 0x0951(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XT6[0x2];                                   // 0x0952(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WheelScrollMultiplier;                                   // 0x0954(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUserScrolled;                                          // 0x0958(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DT9[0x18];                                  // 0x0968(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
		void SetScrollOffset(float NewScrollOffset);
		void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
		void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
		void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);
		void SetOrientation(EOrientation NewOrientation);
		void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);
		void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
		void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
		void SetAllowOverscroll(bool NewAllowOverscroll);
		void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding);
		void ScrollToStart();
		void ScrollToEnd();
		float GetViewOffsetFraction();
		float GetScrollOffsetOfEnd();
		float GetScrollOffset();
		void EndInertialScrolling();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Image
	 * Size -> 0x0118 (FullSize[0x0250] - InheritedSize[0x0138])
	 */
	class UImage : public UWidget
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0138(0x0098) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BrushDelegate;                                           // 0x01D0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x01E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x01F0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFlipForRightToLeftFlowDirection;                        // 0x0200(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1XK[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x0204(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Z3A[0x3C];                                  // 0x0214(0x003C) MISSED OFFSET (PADDING)

	public:
		void SetOpacity(float InOpacity);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetBrushTintColor(const struct FSlateColor& TintColor);
		void SetBrushSize(const struct FVector2D& DesiredSize);
		void SetBrushResourceObject(class UObject* ResourceObject);
		void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
		void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
		void SetBrushFromSoftTexture(bool bMatchSize);
		void SetBrushFromSoftMaterial();
		void SetBrushFromMaterial(class UMaterialInterface* Material);
		void SetBrushFromAtlasInterface(bool bMatchSize);
		void SetBrushFromAsset(class USlateBrushAsset* Asset);
		void SetBrush(const struct FSlateBrush& InBrush);
		class UMaterialInstanceDynamic* GetDynamicMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ListViewBase
	 * Size -> 0x0690 (FullSize[0x07C8] - InheritedSize[0x0138])
	 */
	class UListViewBase : public UWidget
	{
	public:
		class UClass*                                              EntryWidgetClass;                                        // 0x0138(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WheelScrollMultiplier;                                   // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableScrollAnimation;                                  // 0x0144(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableFixedLineOffset;                                  // 0x0145(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClampScroll;                                            // 0x0146(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDisableScroll;                                          // 0x0147(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FixedLineScrollOffset;                                   // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YC9G[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BP_OnEntryGenerated;                                     // 0x0150(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnEntryReleased;                                      // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		struct FUserWidgetPool                                     EntryWidgetPool;                                         // 0x0170(0x0080) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FScrollBarStyle                                     WidgetBarStyle;                                          // 0x01F0(0x0560) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ESlateVisibility                                           ScrollBarVisibility;                                     // 0x0750(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QDDW[0x3];                                   // 0x0751(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScrollbarThickness;                                      // 0x0754(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarPadding;                                        // 0x075C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       AlwaysShowScrollbar;                                     // 0x076C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlwaysShowScrollbarTrack;                                // 0x076D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZK9J[0x5A];                                  // 0x076E(0x005A) MISSED OFFSET (PADDING)

	public:
		void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
		void SetScrollOffset(float InScrollOffset);
		void SetScrollBarVisibility(ESlateVisibility InVisibility);
		void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
		void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);
		void SetEnableScrollAnimation(bool bNewEnableScrollAnimation);
		void SetDisableScroll(bool bInDisableScroll);
		void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
		void ScrollToTop();
		void ScrollToBottom();
		void RequestRefresh();
		void RegenerateAllEntries();
		float GetScrollOffset();
		TArray<class UUserWidget*> GetDisplayedEntryWidgets();
		bool GetDisableScroll();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ListView
	 * Size -> 0x0188 (FullSize[0x0950] - InheritedSize[0x07C8])
	 */
	class UListView : public UListViewBase
	{
	public:
		unsigned char                                              UnknownData_JL72[0xC0];                                  // 0x07C8(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EOrientation                                               Orientation;                                             // 0x0888(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESelectionMode                                             SelectionMode;                                           // 0x0889(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EConsumeMouseWheel                                         ConsumeMouseWheel;                                       // 0x088A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClearSelectionOnClick;                                  // 0x088B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsFocusable;                                            // 0x088C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VOF8[0x3];                                   // 0x088D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EntrySpacing;                                            // 0x0890(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReturnFocusToSelection;                                 // 0x0894(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2SWU[0x3];                                   // 0x0895(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ListItemStartPosOffset;                                  // 0x0898(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BWYB[0x4];                                   // 0x089C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     ListItems;                                               // 0x08A0(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BMY7[0x10];                                  // 0x08B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       EnableDelayAdd;                                          // 0x08C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V8D2[0x3];                                   // 0x08C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayAddInterval;                                        // 0x08C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumInPanel;                                              // 0x08C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5W7E[0x4];                                   // 0x08CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     DelayAddedListItems;                                     // 0x08D0(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DelayAddAnimFlag;                                        // 0x08E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AR9V[0x7];                                   // 0x08E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BP_OnEntryInitialized;                                   // 0x08E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemClicked;                                        // 0x08F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemDoubleClicked;                                  // 0x0908(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemIsHoveredChanged;                               // 0x0918(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemSelectionChanged;                               // 0x0928(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemScrolledIntoView;                               // 0x0938(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I4ZI[0x8];                                   // 0x0948(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSelectionMode(ESelectionMode SelectionMode);
		void SetSelectedIndex(int32_t Index);
		void ScrollIndexIntoView(int32_t Index);
		void RemoveItem(class UObject* Item);
		void NavigateToIndex(int32_t Index);
		bool IsRefreshPending();
		int32_t GetNumItems();
		TArray<class UObject*> GetListItems();
		class UObject* GetItemAt(int32_t Index);
		int32_t GetIndexForItem(class UObject* Item);
		TArray<class UObject*> GetDelayAddedListItems();
		void ClearListItems();
		void BP_SetSelectedItem(class UObject* Item);
		void BP_SetListItems(TArray<class UObject*> InListItems);
		void BP_SetItemSelection(class UObject* Item, bool bSelected);
		void BP_SetDelayAddListItems(TArray<class UObject*> InListItems);
		void BP_ScrollItemIntoView(class UObject* Item);
		void BP_NavigateToItem(class UObject* Item);
		bool BP_IsItemVisible(class UObject* Item);
		bool BP_GetSelectedItems(TArray<class UObject*>* Items);
		class UObject* BP_GetSelectedItem();
		int32_t BP_GetNumItemsSelected();
		void BP_DoDelayAddTick(float DeltaTime);
		void BP_ClearSelection();
		void BP_CancelScrollIntoView();
		void AddItem(class UObject* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PanelSlot
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPanelSlot : public UVisual
	{
	public:
		class UPanelWidget*                                        Parent;                                                  // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             Content;                                                 // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RichTextBlock
	 * Size -> 0x05C0 (FullSize[0x0720] - InheritedSize[0x0160])
	 */
	class URichTextBlock : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0160(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		class UDataTable*                                          TextStyleSet;                                            // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      DecoratorClasses;                                        // 0x0180(0x0010) Edit, ZeroConstructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideDefaultStyle;                                   // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HPPT[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockStyle                                     DefaultTextStyleOverride;                                // 0x0198(0x02A8) Edit, Protected, NativeAccessSpecifierProtected
		float                                                      MinDesiredWidth;                                         // 0x0440(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETextTransformPolicy                                       TextTransformPolicy;                                     // 0x0444(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0QI8[0x3];                                   // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockStyle                                     DefaultTextStyle;                                        // 0x0448(0x02A8) Transient, Protected, NativeAccessSpecifierProtected
		TArray<class URichTextBlockDecorator*>                     InstanceDecorators;                                      // 0x06F0(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2BTV[0x20];                                  // 0x0700(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
		void SetTextStyleSet(class UDataTable* NewTextStyleSet);
		void SetText(const class FText& InText);
		void SetMinDesiredWidth(float InMinDesiredWidth);
		void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);
		void SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush);
		void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset);
		void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
		void SetDefaultFont(const struct FSlateFontInfo& InFontInfo);
		void SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
		void SetAutoWrapText(bool InAutoTextWrap);
		class FText GetText();
		class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);
		void ClearAllDefaultStyleOverrides();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TileView
	 * Size -> 0x0020 (FullSize[0x0970] - InheritedSize[0x0950])
	 */
	class UTileView : public UListView
	{
	public:
		float                                                      EntryHeight;                                             // 0x0950(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EntryWidth;                                              // 0x0954(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EListItemAlignment                                         TileAlignment;                                           // 0x0958(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWrapHorizontalNavigation;                               // 0x0959(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YGEA[0x16];                                  // 0x095A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetEntryWidth(float NewWidth);
		void SetEntryHeight(float NewHeight);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TreeView
	 * Size -> 0x0058 (FullSize[0x09A8] - InheritedSize[0x0950])
	 */
	class UTreeView : public UListView
	{
	public:
		unsigned char                                              UnknownData_6629[0x10];                                  // 0x0950(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      BP_OnGetItemChildren;                                    // 0x0960(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemExpansionChanged;                               // 0x0970(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LQKM[0x28];                                  // 0x0980(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetItemExpansion(class UObject* Item, bool bExpandItem);
		void ExpandAll();
		void CollapseAll();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Overlay
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	class UOverlay : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_N52I[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (PADDING)

	public:
		class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.OverlaySlot
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UOverlaySlot : public UPanelSlot
	{
	public:
		unsigned char                                              UnknownData_43RG[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TA5M[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SizeBox
	 * Size -> 0x0038 (FullSize[0x0188] - InheritedSize[0x0150])
	 */
	class USizeBox : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_8XHU[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WidthOverride;                                           // 0x0160(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightOverride;                                          // 0x0164(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredWidth;                                         // 0x0168(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredHeight;                                        // 0x016C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDesiredWidth;                                         // 0x0170(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDesiredHeight;                                        // 0x0174(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAspectRatio;                                          // 0x0178(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAspectRatio;                                          // 0x017C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_WidthOverride : 1;                             // 0x0180(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_HeightOverride : 1;                            // 0x0180(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_MinDesiredWidth : 1;                           // 0x0180(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_MinDesiredHeight : 1;                          // 0x0180(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_MaxDesiredWidth : 1;                           // 0x0180(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_MaxDesiredHeight : 1;                          // 0x0180(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_MinAspectRatio : 1;                            // 0x0180(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_MaxAspectRatio : 1;                            // 0x0180(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TDCI[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetWidthOverride(float InWidthOverride);
		void SetMinDesiredWidth(float InMinDesiredWidth);
		void SetMinDesiredHeight(float InMinDesiredHeight);
		void SetMinAspectRatio(float InMinAspectRatio);
		void SetMaxDesiredWidth(float InMaxDesiredWidth);
		void SetMaxDesiredHeight(float InMaxDesiredHeight);
		void SetMaxAspectRatio(float InMaxAspectRatio);
		void SetHeightOverride(float InHeightOverride);
		void ClearWidthOverride();
		void ClearMinDesiredWidth();
		void ClearMinDesiredHeight();
		void ClearMinAspectRatio();
		void ClearMaxDesiredWidth();
		void ClearMaxDesiredHeight();
		void ClearMaxAspectRatio();
		void ClearHeightOverride();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NamedSlot
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	class UNamedSlot : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_QCSW[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CanvasPanel
	 * Size -> 0x0018 (FullSize[0x0168] - InheritedSize[0x0150])
	 */
	class UCanvasPanel : public UPanelWidget
	{
	public:
		int32_t                                                    ReservedLayerSpace;                                      // 0x0150(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FZF[0x14];                                  // 0x0154(0x0014) MISSED OFFSET (PADDING)

	public:
		class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RichTextBlockDecorator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URichTextBlockDecorator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CheckBox
	 * Size -> 0x06E0 (FullSize[0x0830] - InheritedSize[0x0150])
	 */
	class UCheckBox : public UContentWidget
	{
	public:
		ECheckBoxState                                             CheckedState;                                            // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X3P5[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CheckedStateDelegate;                                    // 0x0154(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4UL6[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCheckBoxStyle                                      WidgetStyle;                                             // 0x0168(0x0610) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0778(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UncheckedImage;                                          // 0x0780(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UncheckedHoveredImage;                                   // 0x0788(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UncheckedPressedImage;                                   // 0x0790(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    CheckedImage;                                            // 0x0798(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    CheckedHoveredImage;                                     // 0x07A0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    CheckedPressedImage;                                     // 0x07A8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UndeterminedImage;                                       // 0x07B0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UndeterminedHoveredImage;                                // 0x07B8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    UndeterminedPressedImage;                                // 0x07C0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x07C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Q1W[0x3];                                   // 0x07C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x07CC(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q68Y[0x4];                                   // 0x07DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         BorderBackgroundColor;                                   // 0x07E0(0x0028) Deprecated, NativeAccessSpecifierPublic
		EButtonClickMethod                                         ClickMethod;                                             // 0x0808(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonTouchMethod                                         TouchMethod;                                             // 0x0809(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonPressMethod                                         PressMethod;                                             // 0x080A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x080B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNKC[0x4];                                   // 0x080C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCheckStateChanged;                                     // 0x0810(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4VL[0x10];                                  // 0x0820(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTouchMethod(EButtonTouchMethod InTouchMethod);
		void SetPressMethod(EButtonPressMethod InPressMethod);
		void SetIsChecked(bool InIsChecked);
		void SetClickMethod(EButtonClickMethod InClickMethod);
		void SetCheckedState(ECheckBoxState InCheckedState);
		bool IsPressed();
		bool IsChecked();
		ECheckBoxState GetCheckedState();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.DragDropOperation
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UDragDropOperation : public UObject
	{
	public:
		class FString                                              Tag;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Payload;                                                 // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             DefaultDragVisual;                                       // 0x0040(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDragPivot                                                 Pivot;                                                   // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QBQ6[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Offset;                                                  // 0x004C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5OT[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDrop;                                                  // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDragCancelled;                                         // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDragged;                                               // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void Drop(const struct FPointerEvent& PointerEvent);
		void Dragged(const struct FPointerEvent& PointerEvent);
		void DragCancelled(const struct FPointerEvent& PointerEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetComponent
	 * Size -> 0x0124 (FullSize[0x069C] - InheritedSize[0x0578])
	 */
	class UWidgetComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_ELGM[0x8];                                   // 0x0578(0x0008) Fix Super Size
		class UClass*                                              WidgetClass;                                             // 0x0580(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIntPoint                                           DrawSize;                                                // 0x0588(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bManuallyRedraw;                                         // 0x0590(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRedrawRequested;                                        // 0x0591(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GB4Q[0x2];                                   // 0x0592(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RedrawTime;                                              // 0x0594(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LU21[0x8];                                   // 0x0598(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           CurrentDrawSize;                                         // 0x05A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawAtDesiredSize;                                      // 0x05A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A19K[0x3];                                   // 0x05A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Pivot;                                                   // 0x05AC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReceiveHardwareInput;                                   // 0x05B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWindowFocusable;                                        // 0x05B5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWindowVisibility                                          WindowVisibility;                                        // 0x05B6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bApplyGammaCorrection;                                   // 0x05B7(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULocalPlayer*                                        OwnerPlayer;                                             // 0x05B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        BackgroundColor;                                         // 0x05C0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        TintColorAndOpacity;                                     // 0x05D0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OpacityFromTexture;                                      // 0x05E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWidgetBlendMode                                           BlendMode;                                               // 0x05E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsTwoSided;                                             // 0x05E5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       TickWhenOffscreen;                                       // 0x05E6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZH12[0x1];                                   // 0x05E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         Widget;                                                  // 0x05E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F9Z4[0x20];                                  // 0x05F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          BodySetup;                                               // 0x0610(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  TranslucentMaterial;                                     // 0x0618(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  TranslucentMaterial_OneSided;                            // 0x0620(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  OpaqueMaterial;                                          // 0x0628(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  OpaqueMaterial_OneSided;                                 // 0x0630(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  MaskedMaterial;                                          // 0x0638(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  MaskedMaterial_OneSided;                                 // 0x0640(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0648(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            MaterialInstance;                                        // 0x0650(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAddedToScreen;                                          // 0x0658(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEditTimeUsable;                                         // 0x0659(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DGY2[0x2];                                   // 0x065A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SharedLayerName;                                         // 0x065C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LayerZOrder;                                             // 0x0664(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWidgetGeometryMode                                        GeometryMode;                                            // 0x0668(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FRD4[0x3];                                   // 0x0669(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CylinderArcAngle;                                        // 0x066C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JD0L[0x2C];                                  // 0x0670(0x002C) Fix size for supers

	public:
		void SetWindowVisibility(EWindowVisibility InVisibility);
		void SetWindowFocusable(bool bInWindowFocusable);
		void SetWidgetSpace(EWidgetSpace NewSpace);
		void SetWidget(class UUserWidget* Widget);
		void SetTwoSided(bool bWantTwoSided);
		void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
		void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
		void SetRedrawTime(float InRedrawTime);
		void SetPivot(const struct FVector2D& InPivot);
		void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
		void SetManuallyRedraw(bool bUseManualRedraw);
		void SetGeometryMode(EWidgetGeometryMode InGeometryMode);
		void SetDrawSize(const struct FVector2D& Size);
		void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
		void SetCylinderArcAngle(float InCylinderArcAngle);
		void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
		void RequestRedraw();
		EWindowVisibility GetWindowVisiblility();
		bool GetWindowFocusable();
		EWidgetSpace GetWidgetSpace();
		class UUserWidget* GetUserWidgetObject();
		bool GetTwoSided();
		bool GetTickWhenOffscreen();
		class UTextureRenderTarget2D* GetRenderTarget();
		float GetRedrawTime();
		struct FVector2D GetPivot();
		class ULocalPlayer* GetOwnerPlayer();
		class UMaterialInstanceDynamic* GetMaterialInstance();
		bool GetManuallyRedraw();
		EWidgetGeometryMode GetGeometryMode();
		struct FVector2D GetDrawSize();
		bool GetDrawAtDesiredSize();
		float GetCylinderArcAngle();
		struct FVector2D GetCurrentDrawSize();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.AsyncTaskDownloadImage
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAsyncTaskDownloadImage* STATIC_DownloadImage(const class FString& URL);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BackgroundBlur
	 * Size -> 0x00D8 (FullSize[0x0228] - InheritedSize[0x0150])
	 */
	class UBackgroundBlur : public UContentWidget
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0150(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0160(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0161(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlurOnce;                                               // 0x0162(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlurState;                                              // 0x0163(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyAlphaToBlur;                                       // 0x0164(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHIL[0x3];                                   // 0x0165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlurStrength;                                            // 0x0168(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAutoRadiusCalculation;                          // 0x016C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KB6K[0x3];                                   // 0x016D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BlurRadius;                                              // 0x0170(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75BO[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         LowQualityFallbackBrush;                                 // 0x0178(0x0098) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ELL[0x18];                                  // 0x0210(0x0018) MISSED OFFSET (PADDING)

	public:
		void StopOnFirstBlur();
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetBlurStrength(float InStrength);
		void SetBlurState(bool BlurState, bool RefreshCount);
		void SetBlurRadius(int32_t InBlurRadius);
		void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BackgroundBlurSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UBackgroundBlurSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ACET[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PropertyBinding
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UPropertyBinding : public UObject
	{
	public:
		TWeakObjectPtr<class UObject>                              SourceObject;                                            // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDynamicPropertyPath                                SourcePath;                                              // 0x0030(0x0028) NativeAccessSpecifierPublic
		class FName                                                DestinationProperty;                                     // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BoolBinding
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBoolBinding : public UPropertyBinding
	{
	public:
		bool GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BorderSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UBorderSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_88KK[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BrushBinding
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBrushBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_WGG2[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FSlateBrush GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ButtonSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UButtonSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NFP[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CanvasPanelSlot
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UCanvasPanelSlot : public UPanelSlot
	{
	public:
		struct FAnchorData                                         LayoutData;                                              // 0x0038(0x002C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAutoSize;                                               // 0x0064(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXQH[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ZOrder;                                                  // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MAQA[0xC];                                   // 0x006C(0x000C) MISSED OFFSET (PADDING)

	public:
		void SetZOrder(int32_t InZOrder);
		void SetSize(const struct FVector2D& InSize);
		void SetPosition(const struct FVector2D& InPosition);
		void SetOffsets(const struct FMargin& InOffset);
		void SetMinimum(const struct FVector2D& InMinimumAnchors);
		void SetMaximum(const struct FVector2D& InMaximumAnchors);
		void SetLayout(const struct FAnchorData& InLayoutData);
		void SetAutoSize(bool InbAutoSize);
		void SetAnchors(const struct FAnchors& InAnchors);
		void SetAlignment(const struct FVector2D& InAlignment);
		int32_t GetZOrder();
		struct FVector2D GetSize();
		struct FVector2D GetPosition();
		struct FMargin GetOffsets();
		struct FAnchorData GetLayout();
		bool GetAutoSize();
		struct FAnchors GetAnchors();
		struct FVector2D GetAlignment();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CheckedStateBinding
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UCheckedStateBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_7DCH[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		ECheckBoxState GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CircularThrobber
	 * Size -> 0x00C8 (FullSize[0x0200] - InheritedSize[0x0138])
	 */
	class UCircularThrobber : public UWidget
	{
	public:
		int32_t                                                    NumberOfPieces;                                          // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Period;                                                  // 0x013C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XO1H[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateBrushAsset*                                    PieceImage;                                              // 0x0148(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Image;                                                   // 0x0150(0x0098) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bEnableRadius;                                           // 0x01E8(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I6N6[0x17];                                  // 0x01E9(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetRadius(float InRadius);
		void SetPeriod(float InPeriod);
		void SetNumberOfPieces(int32_t InNumberOfPieces);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ColorBinding
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UColorBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_0K00[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FSlateColor GetSlateValue();
		struct FLinearColor GetLinearValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ComboBox
	 * Size -> 0x0038 (FullSize[0x0170] - InheritedSize[0x0138])
	 */
	class UComboBox : public UWidget
	{
	public:
		TArray<class UObject*>                                     Items;                                                   // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnGenerateWidgetEvent;                                   // 0x0148(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsFocusable;                                            // 0x0158(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RE6P[0x17];                                  // 0x0159(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ComboBoxString
	 * Size -> 0x0E40 (FullSize[0x0F78] - InheritedSize[0x0138])
	 */
	class UComboBoxString : public UWidget
	{
	public:
		TArray<class FString>                                      DefaultOptions;                                          // 0x0138(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              SelectedOption;                                          // 0x0148(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FComboBoxStyle                                      WidgetStyle;                                             // 0x0158(0x0450) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTableRowStyle                                      ItemStyle;                                               // 0x05A8(0x08A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             ContentPadding;                                          // 0x0E50(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxListHeight;                                           // 0x0E60(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasDownArrow;                                            // 0x0E64(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableGamepadNavigationMode;                             // 0x0E65(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LI1W[0x2];                                   // 0x0E66(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0E68(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x0EC8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsFocusable;                                            // 0x0EF0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XU7[0x3];                                   // 0x0EF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnGenerateWidgetEvent;                                   // 0x0EF4(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5KL[0x4];                                   // 0x0F04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0F08(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnOpening;                                               // 0x0F18(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8R2[0x50];                                  // 0x0F28(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetSelectedOption(const class FString& Option);
		void SetSelectedIndex(int32_t Index);
		bool RemoveOption(const class FString& Option);
		void RefreshOptions();
		void OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnOpeningEvent__DelegateSignature();
		bool IsOpen();
		class FString GetSelectedOption();
		int32_t GetSelectedIndex();
		int32_t GetOptionCount();
		class FString GetOptionAtIndex(int32_t Index);
		int32_t FindOptionIndex(const class FString& Option);
		void ClearSelection();
		void ClearOptions();
		void AddOption(const class FString& Option);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.DynamicEntryBox
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UDynamicEntryBox : public UDynamicEntryBoxBase
	{
	public:
		class UClass*                                              EntryWidgetClass;                                        // 0x01F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Reset(bool bDeleteWidgets);
		void RemoveEntry(class UUserWidget* EntryWidget);
		class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);
		class UUserWidget* BP_CreateEntry();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.EditableText
	 * Size -> 0x0398 (FullSize[0x04D0] - InheritedSize[0x0138])
	 */
	class UEditableText : public UWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0138(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0150(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0160(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0178(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FEditableTextStyle                                  WidgetStyle;                                             // 0x0188(0x0258) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x03E0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    BackgroundImageSelected;                                 // 0x03E8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    BackgroundImageComposing;                                // 0x03F0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    CaretImage;                                              // 0x03F8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0400(0x0060) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0460(0x0028) Deprecated, NativeAccessSpecifierPublic
		bool                                                       IsReadOnly;                                              // 0x0488(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPassword;                                              // 0x0489(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGRH[0x2];                                   // 0x048A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDesiredWidth;                                     // 0x048C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCaretMovedWhenGainFocus;                               // 0x0490(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextWhenFocused;                                // 0x0491(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RevertTextOnEscape;                                      // 0x0492(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x0493(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x0494(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x0495(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardType                                       KeyboardType;                                            // 0x0496(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x0497(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardTrigger                                    VirtualKeyboardTrigger;                                  // 0x0498(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x0499(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               Justification;                                           // 0x049A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x049B(0x0003) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CNL6[0x2];                                   // 0x049E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x04A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x04B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3UK[0x10];                                  // 0x04C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetJustification(ETextJustify InJustification);
		void SetIsReadOnly(bool InbIsReadyOnly);
		void SetIsPassword(bool InbIsPassword);
		void SetHintText(const class FText& InHintText);
		void OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.EditableTextBox
	 * Size -> 0x0A10 (FullSize[0x0B48] - InheritedSize[0x0138])
	 */
	class UEditableTextBox : public UWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0138(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0150(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x0160(0x08D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0A30(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0A38(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0A50(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0A60(0x0060) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ForegroundColor;                                         // 0x0AC0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0AD0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ReadOnlyForegroundColor;                                 // 0x0AE0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsReadOnly;                                              // 0x0AF0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPassword;                                              // 0x0AF1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1O6I[0x2];                                   // 0x0AF2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDesiredWidth;                                     // 0x0AF4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0AF8(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsCaretMovedWhenGainFocus;                               // 0x0B08(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextWhenFocused;                                // 0x0B09(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RevertTextOnEscape;                                      // 0x0B0A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x0B0B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x0B0C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x0B0D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardType                                       KeyboardType;                                            // 0x0B0E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x0B0F(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardTrigger                                    VirtualKeyboardTrigger;                                  // 0x0B10(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x0B11(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               Justification;                                           // 0x0B12(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x0B13(0x0003) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5TL[0x2];                                   // 0x0B16(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0B18(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0B28(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GQB[0x10];                                  // 0x0B38(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetJustification(ETextJustify InJustification);
		void SetIsReadOnly(bool bReadOnly);
		void SetIsPassword(bool bIsPassword);
		void SetHintText(const class FText& InText);
		void SetError(const class FText& InError);
		void OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		bool HasError();
		class FText GetText();
		void ClearError();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ExpandableArea
	 * Size -> 0x0260 (FullSize[0x0398] - InheritedSize[0x0138])
	 */
	class UExpandableArea : public UWidget
	{
	public:
		unsigned char                                              UnknownData_1Q7U[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpandableAreaStyle                                Style;                                                   // 0x0140(0x0140) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BorderBrush;                                             // 0x0280(0x0098) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSlateColor                                         BorderColor;                                             // 0x0318(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsExpanded;                                             // 0x0340(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XL9[0x3];                                   // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxHeight;                                               // 0x0344(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             HeaderPadding;                                           // 0x0348(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             AreaPadding;                                             // 0x0358(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExpansionChanged;                                      // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UWidget*                                             HeaderContent;                                           // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidget*                                             BodyContent;                                             // 0x0380(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SVPZ[0x10];                                  // 0x0388(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetIsExpanded_Animated(bool IsExpanded);
		void SetIsExpanded(bool IsExpanded);
		bool GetIsExpanded();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.FloatBinding
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UFloatBinding : public UPropertyBinding
	{
	public:
		float GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.GridPanel
	 * Size -> 0x0030 (FullSize[0x0180] - InheritedSize[0x0150])
	 */
	class UGridPanel : public UPanelWidget
	{
	public:
		TArray<float>                                              ColumnFill;                                              // 0x0150(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              RowFill;                                                 // 0x0160(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YBIU[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetRowFill(int32_t ColumnIndex, float Coefficient);
		void SetColumnFill(int32_t ColumnIndex, float Coefficient);
		class UGridSlot* AddChildToGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.GridSlot
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UGridSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_000E[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Row;                                                     // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RowSpan;                                                 // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Column;                                                  // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColumnSpan;                                              // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Layer;                                                   // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Nudge;                                                   // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADFJ[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetRowSpan(int32_t InRowSpan);
		void SetRow(int32_t InRow);
		void SetPadding(const struct FMargin& InPadding);
		void SetNudge(const struct FVector2D& InNudge);
		void SetLayer(int32_t InLayer);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetColumnSpan(int32_t InColumnSpan);
		void SetColumn(int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.HorizontalBox
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	class UHorizontalBox : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_2Q5Y[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (PADDING)

	public:
		class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.HorizontalBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UHorizontalBoxSlot : public UPanelSlot
	{
	public:
		unsigned char                                              UnknownData_MKMH[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateChildSize                                     Size;                                                    // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0059(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LL28[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetSize(const struct FSlateChildSize& InSize);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.InputKeySelector
	 * Size -> 0x0678 (FullSize[0x07B0] - InheritedSize[0x0138])
	 */
	class UInputKeySelector : public UWidget
	{
	public:
		struct FButtonStyle                                        WidgetStyle;                                             // 0x0138(0x02B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x03F0(0x02A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FInputChord                                         SelectedKey;                                             // 0x0698(0x0020) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x06B8(0x0060) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Margin;                                                  // 0x0718(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0728(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                KeySelectionText;                                        // 0x0738(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                NoKeySpecifiedText;                                      // 0x0750(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bAllowModifierKeys;                                      // 0x0768(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowGamepadKeys;                                       // 0x0769(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4MYW[0x6];                                   // 0x076A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKey>                                        EscapeKeys;                                              // 0x0770(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKeySelected;                                           // 0x0780(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsSelectingKeyChanged;                                 // 0x0790(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G72S[0x10];                                  // 0x07A0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTextBlockVisibility(ESlateVisibility InVisibility);
		void SetSelectedKey(const struct FInputChord& InSelectedKey);
		void SetNoKeySpecifiedText(const class FText& InNoKeySpecifiedText);
		void SetKeySelectionText(const class FText& InKeySelectionText);
		void SetEscapeKeys(TArray<struct FKey> InKeys);
		void SetAllowModifierKeys(bool bInAllowModifierKeys);
		void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
		void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		void OnIsSelectingKeyChanged__DelegateSignature();
		bool GetIsSelectingKey();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Int32Binding
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UInt32Binding : public UPropertyBinding
	{
	public:
		int32_t GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.InvalidationBox
	 * Size -> 0x0018 (FullSize[0x0168] - InheritedSize[0x0150])
	 */
	class UInvalidationBox : public UContentWidget
	{
	public:
		bool                                                       bCanCache;                                               // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       CacheRelativeTransforms;                                 // 0x0151(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OSIV[0x16];                                  // 0x0152(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetCanCache(bool CanCache);
		void InvalidateCache();
		bool GetCanCache();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserListEntry
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUserListEntry : public UInterface
	{
	public:
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BP_OnEntryReleased();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserListEntryLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUserListEntryLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsListItemSelected();
		bool STATIC_IsListItemExpanded();
		class UListViewBase* STATIC_GetOwningListView();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserObjectListEntry
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUserObjectListEntry : public UUserListEntry
	{
	public:
		void OnListItemObjectSet(class UObject* ListItemObject);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserObjectListEntryLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UObject* STATIC_GetListItemObject();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ListViewDesignerPreviewItem
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UListViewDesignerPreviewItem : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MenuAnchor
	 * Size -> 0x0040 (FullSize[0x0190] - InheritedSize[0x0150])
	 */
	class UMenuAnchor : public UContentWidget
	{
	public:
		class UClass*                                              MenuClass;                                               // 0x0150(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnGetMenuContentEvent;                                   // 0x0158(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		EMenuPlacement                                             Placement;                                               // 0x0168(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFitInWindow;                                            // 0x0169(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldDeferPaintingAfterWindowContent;                   // 0x016A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseApplicationMenuStack;                                 // 0x016B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XX0[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMenuOpenChanged;                                       // 0x0170(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PY32[0x10];                                  // 0x0180(0x0010) MISSED OFFSET (PADDING)

	public:
		void ToggleOpen(bool bFocusOnOpen);
		bool ShouldOpenDueToClick();
		void SetPlacement(EMenuPlacement InPlacement);
		void Open(bool bFocusMenu);
		bool IsOpen();
		bool HasOpenSubMenus();
		struct FVector2D GetMenuPosition();
		void FitInWindow(bool bFit);
		void Close();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MouseCursorBinding
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMouseCursorBinding : public UPropertyBinding
	{
	public:
		EMouseCursor GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieScene2DTransformSection
	 * Size -> 0x0470 (FullSize[0x0550] - InheritedSize[0x00E0])
	 */
	class UMovieScene2DTransformSection : public UMovieSceneSection
	{
	public:
		struct FMovieScene2DTransformMask                          TransformMask;                                           // 0x00E0(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WG1Z[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             Translation[0x2];                                        // 0x00E8(0x0140) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Rotation;                                                // 0x0228(0x00A0) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Scale[0x2];                                              // 0x02C8(0x0140) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Shear[0x2];                                              // 0x0408(0x0140) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9UNM[0x8];                                   // 0x0548(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieScene2DTransformTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneMarginSection
	 * Size -> 0x0280 (FullSize[0x0360] - InheritedSize[0x00E0])
	 */
	class UMovieSceneMarginSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneFloatChannel                             TopCurve;                                                // 0x00E0(0x00A0) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             LeftCurve;                                               // 0x0180(0x00A0) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             RightCurve;                                              // 0x0220(0x00A0) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             BottomCurve;                                             // 0x02C0(0x00A0) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneMarginTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneWidgetMaterialTrack
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
	{
	public:
		TArray<class FName>                                        BrushPropertyNamePath;                                   // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                TrackName;                                               // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MultiLineEditableText
	 * Size -> 0x0388 (FullSize[0x04E8] - InheritedSize[0x0160])
	 */
	class UMultiLineEditableText : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0160(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0178(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0190(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     WidgetStyle;                                             // 0x01A0(0x02A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsReadOnly;                                             // 0x0448(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EVID[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0450(0x0060) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextWhenFocused;                                // 0x04B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearTextSelectionOnFocusLoss;                           // 0x04B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RevertTextOnEscape;                                      // 0x04B2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x04B3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x04B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x04B5(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x04B6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VEG[0x1];                                   // 0x04B7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x04B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x04C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3YS[0x10];                                  // 0x04D8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);
		void SetText(const class FText& InText);
		void SetIsReadOnly(bool bReadOnly);
		void SetHintText(const class FText& InHintText);
		void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		class FText GetHintText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MultiLineEditableTextBox
	 * Size -> 0x0C88 (FullSize[0x0DE8] - InheritedSize[0x0160])
	 */
	class UMultiLineEditableTextBox : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0160(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0178(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0190(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x01A0(0x08D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0A70(0x02A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsReadOnly;                                             // 0x0D18(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x0D19(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x0D1A(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x0D1B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OC0[0x4];                                   // 0x0D1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0D20(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0D28(0x0060) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ForegroundColor;                                         // 0x0D88(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0D98(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ReadOnlyForegroundColor;                                 // 0x0DA8(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0DB8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0DC8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PD2A[0x10];                                  // 0x0DD8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTextStyle(const struct FTextBlockStyle& InTextStyle);
		void SetText(const class FText& InText);
		void SetIsReadOnly(bool bReadOnly);
		void SetHintText(const class FText& InHintText);
		void SetError(const class FText& InError);
		void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		class FText GetHintText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NamedSlotInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNamedSlotInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NativeWidgetHost
	 * Size -> 0x0010 (FullSize[0x0148] - InheritedSize[0x0138])
	 */
	class UNativeWidgetHost : public UWidget
	{
	public:
		unsigned char                                              UnknownData_EOBA[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ProgressBar
	 * Size -> 0x0240 (FullSize[0x0378] - InheritedSize[0x0138])
	 */
	class UProgressBar : public UWidget
	{
	public:
		struct FProgressBarStyle                                   WidgetStyle;                                             // 0x0138(0x01D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0308(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    BackgroundImage;                                         // 0x0310(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    FillImage;                                               // 0x0318(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateBrushAsset*                                    MarqueeImage;                                            // 0x0320(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Percent;                                                 // 0x0328(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProgressBarFillType                                       BarFillType;                                             // 0x032C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMarquee;                                              // 0x032D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1YX[0x2];                                   // 0x032E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           BorderPadding;                                           // 0x0330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      PercentDelegate;                                         // 0x0338(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        FillColorAndOpacity;                                     // 0x0348(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      FillColorAndOpacityDelegate;                             // 0x0358(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2J32[0x10];                                  // 0x0368(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetPercent(float InPercent);
		void SetIsMarquee(bool InbIsMarquee);
		void SetFillColorAndOpacity(const struct FLinearColor& InColor);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RetainerBox
	 * Size -> 0x0030 (FullSize[0x0180] - InheritedSize[0x0150])
	 */
	class URetainerBox : public UContentWidget
	{
	public:
		bool                                                       bRetainRender;                                           // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       RenderOnInvalidation;                                    // 0x0151(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RenderOnPhase;                                           // 0x0152(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5OZ[0x1];                                   // 0x0153(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Phase;                                                   // 0x0154(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhaseCount;                                              // 0x0158(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I0K6[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  EffectMaterial;                                          // 0x0160(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TextureParameter;                                        // 0x0168(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YOLK[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTextureParameter(const class FName& TextureParameter);
		void SetRetainRendering(bool bInRetainRendering);
		void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);
		void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
		void RequestRender();
		class UMaterialInstanceDynamic* GetEffectMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RichTextBlockImageDecorator
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class URichTextBlockImageDecorator : public URichTextBlockDecorator
	{
	public:
		class UDataTable*                                          ImageSet;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SafeZone
	 * Size -> 0x0018 (FullSize[0x0168] - InheritedSize[0x0150])
	 */
	class USafeZone : public UContentWidget
	{
	public:
		bool                                                       PadLeft;                                                 // 0x0150(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PadRight;                                                // 0x0151(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PadTop;                                                  // 0x0152(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PadBottom;                                               // 0x0153(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMO8[0x14];                                  // 0x0154(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SafeZoneSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class USafeZoneSlot : public UPanelSlot
	{
	public:
		bool                                                       bIsTitleSafe;                                            // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HPI[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             SafeAreaScale;                                           // 0x003C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HAlign;                                                  // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VAlign;                                                  // 0x004D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8PEK[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScaleBox
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	class UScaleBox : public UContentWidget
	{
	public:
		EStretch                                                   Stretch;                                                 // 0x0150(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStretchDirection                                          StretchDirection;                                        // 0x0151(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HJC[0x2];                                   // 0x0152(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UserSpecifiedScale;                                      // 0x0154(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreInheritedScale;                                    // 0x0158(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUM2[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IgnoreSlightScaleModificationPercent;                    // 0x015C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81SD[0x10];                                  // 0x0160(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetUserSpecifiedScale(float InUserSpecifiedScale);
		void SetStretchDirection(EStretchDirection InStretchDirection);
		void SetStretch(EStretch InStretch);
		void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScaleBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UScaleBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I03K[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBar
	 * Size -> 0x0598 (FullSize[0x06D0] - InheritedSize[0x0138])
	 */
	class UScrollBar : public UWidget
	{
	public:
		struct FScrollBarStyle                                     WidgetStyle;                                             // 0x0138(0x0560) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0698(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysShowScrollbar;                                    // 0x06A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysShowScrollbarTrack;                               // 0x06A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x06A2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D7UD[0x1];                                   // 0x06A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Thickness;                                               // 0x06A4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x06AC(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJHI[0x14];                                  // 0x06BC(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetState(float InOffsetFraction, float InThumbSizeFraction);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBoxSlot
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UScrollBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFKX[0xE];                                   // 0x004A(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SizeBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class USizeBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5GT[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0059(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2OUA[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_WidgetGlobalPostionToSubWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenUIPosition, struct FVector2D* OutLocalUIPostion);
		struct FVector2D STATIC_TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector);
		struct FVector2D STATIC_TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector);
		float STATIC_TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar);
		float STATIC_TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar);
		void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition);
		void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition);
		void STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
		void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
		struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
		bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
		struct FVector2D STATIC_GetLocalTopLeft(const struct FGeometry& Geometry);
		struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
		struct FVector2D STATIC_GetAbsoluteSize(const struct FGeometry& Geometry);
		bool STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
		void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
		struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateVectorArtData
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class USlateVectorArtData : public UObject
	{
	public:
		TArray<struct FSlateMeshVertex>                            VertexData;                                              // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<uint32_t>                                           IndexData;                                               // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  Material;                                                // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           ExtentMin;                                               // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           ExtentMax;                                               // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateAccessibleWidgetData
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class USlateAccessibleWidgetData : public UObject
	{
	public:
		bool                                                       bCanChildrenBeAccessible;                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateAccessibleBehavior                                   AccessibleBehavior;                                      // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateAccessibleBehavior                                   AccessibleSummaryBehavior;                               // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBBQ[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                AccessibleText;                                          // 0x0030(0x0018) NativeAccessSpecifierPublic
		class FScriptDelegate                                      AccessibleTextDelegate;                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FText                                                AccessibleSummaryText;                                   // 0x0058(0x0018) NativeAccessSpecifierPublic
		class FScriptDelegate                                      AccessibleSummaryTextDelegate;                           // 0x0070(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Spacer
	 * Size -> 0x0018 (FullSize[0x0150] - InheritedSize[0x0138])
	 */
	class USpacer : public UWidget
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0138(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8QOY[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSize(const struct FVector2D& InSize);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SpinBox
	 * Size -> 0x0470 (FullSize[0x05A8] - InheritedSize[0x0138])
	 */
	class USpinBox : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0138(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x013C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZHM[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpinBoxStyle                                       WidgetStyle;                                             // 0x0150(0x0338) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0488(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinFractionalDigits;                                     // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxFractionalDigits;                                     // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysUsesDeltaSnap;                                    // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZD5[0x3];                                   // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Delta;                                                   // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliderExponent;                                          // 0x04A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_302B[0x4];                                   // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x04A8(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               Justification;                                           // 0x0508(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOT6[0x3];                                   // 0x0509(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDesiredWidth;                                         // 0x050C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x0510(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x0511(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E48O[0x6];                                   // 0x0512(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         ForegroundColor;                                         // 0x0518(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0540(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueCommitted;                                        // 0x0550(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeginSliderMovement;                                   // 0x0560(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndSliderMovement;                                     // 0x0570(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bOverride_MinValue : 1;                                  // 0x0580(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverride_MaxValue : 1;                                  // 0x0580(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverride_MinSliderValue : 1;                            // 0x0580(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverride_MaxSliderValue : 1;                            // 0x0580(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GJSL[0x3];                                   // 0x0581(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinValue;                                                // 0x0584(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxValue;                                                // 0x0588(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinSliderValue;                                          // 0x058C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSliderValue;                                          // 0x0590(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GD06[0x14];                                  // 0x0594(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetValue(float NewValue);
		void SetMinValue(float NewValue);
		void SetMinSliderValue(float NewValue);
		void SetMinFractionalDigits(int32_t NewValue);
		void SetMaxValue(float NewValue);
		void SetMaxSliderValue(float NewValue);
		void SetMaxFractionalDigits(int32_t NewValue);
		void SetForegroundColor(const struct FSlateColor& InForegroundColor);
		void SetDelta(float NewValue);
		void SetAlwaysUsesDeltaSnap(bool bNewValue);
		void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void OnSpinBoxBeginSliderMovement__DelegateSignature();
		float GetValue();
		float GetMinValue();
		float GetMinSliderValue();
		int32_t GetMinFractionalDigits();
		float GetMaxValue();
		float GetMaxSliderValue();
		int32_t GetMaxFractionalDigits();
		float GetDelta();
		bool GetAlwaysUsesDeltaSnap();
		void ClearMinValue();
		void ClearMinSliderValue();
		void ClearMaxValue();
		void ClearMaxSliderValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextBinding
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UTextBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_KFLA[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		class FText GetTextValue();
		class FString GetStringValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Throbber
	 * Size -> 0x00B8 (FullSize[0x01F0] - InheritedSize[0x0138])
	 */
	class UThrobber : public UWidget
	{
	public:
		int32_t                                                    NumberOfPieces;                                          // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateHorizontally;                                    // 0x013C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateVertically;                                      // 0x013D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateOpacity;                                         // 0x013E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPI4[0x1];                                   // 0x013F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateBrushAsset*                                    PieceImage;                                              // 0x0140(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Image;                                                   // 0x0148(0x0098) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B4V3[0x10];                                  // 0x01E0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetNumberOfPieces(int32_t InNumberOfPieces);
		void SetAnimateVertically(bool bInAnimateVertically);
		void SetAnimateOpacity(bool bInAnimateOpacity);
		void SetAnimateHorizontally(bool bInAnimateHorizontally);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UMGSequencePlayer
	 * Size -> 0x0780 (FullSize[0x07A8] - InheritedSize[0x0028])
	 */
	class UUMGSequencePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_9M99[0x3E0];                                 // 0x0028(0x03E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetAnimation*                                    Animation;                                               // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VONS[0x398];                                 // 0x0410(0x0398) MISSED OFFSET (PADDING)

	public:
		void SetUserTag(const class FName& InUserTag);
		class FName GetUserTag();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UniformGridPanel
	 * Size -> 0x0028 (FullSize[0x0178] - InheritedSize[0x0150])
	 */
	class UUniformGridPanel : public UPanelWidget
	{
	public:
		struct FMargin                                             SlotPadding;                                             // 0x0150(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinDesiredSlotWidth;                                     // 0x0160(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredSlotHeight;                                    // 0x0164(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHJV[0x10];                                  // 0x0168(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSlotPadding(const struct FMargin& InSlotPadding);
		void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
		void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
		class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UniformGridSlot
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UUniformGridSlot : public UPanelSlot
	{
	public:
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0039(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTIC[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Row;                                                     // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Column;                                                  // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZX0Y[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetRow(int32_t InRow);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetColumn(int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VerticalBox
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	class UVerticalBox : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_OEY6[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (PADDING)

	public:
		class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VerticalBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UVerticalBoxSlot : public UPanelSlot
	{
	public:
		struct FSlateChildSize                                     Size;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVYG[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0059(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PAKJ[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetSize(const struct FSlateChildSize& InSize);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Viewport
	 * Size -> 0x0028 (FullSize[0x0178] - InheritedSize[0x0150])
	 */
	class UViewport : public UContentWidget
	{
	public:
		struct FLinearColor                                        BackgroundColor;                                         // 0x0150(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YRDD[0x18];                                  // 0x0160(0x0018) MISSED OFFSET (PADDING)

	public:
		class AActor* Spawn(class UClass* ActorClass);
		void SetViewRotation(const struct FRotator& Rotation);
		void SetViewLocation(const struct FVector& Location);
		struct FRotator GetViewRotation();
		class UWorld* GetViewportWorld();
		struct FVector GetViewLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VisibilityBinding
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UVisibilityBinding : public UPropertyBinding
	{
	public:
		ESlateVisibility GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetAnimation
	 * Size -> 0x0038 (FullSize[0x0380] - InheritedSize[0x0348])
	 */
	class UWidgetAnimation : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWidgetAnimationBinding>                     AnimationBindings;                                       // 0x0350(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLegacyFinishOnStop;                                     // 0x0360(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PX13[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayLabel;                                            // 0x0368(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESlateDetailMode                                           DetailMode;                                              // 0x0378(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PQWE[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (PADDING)

	public:
		void UnbindFromAnimationStarted(class UUserWidget* Widget, const class FScriptDelegate& Delegate);
		void UnbindFromAnimationFinished(class UUserWidget* Widget, const class FScriptDelegate& Delegate);
		void UnbindAllFromAnimationStarted(class UUserWidget* Widget);
		void UnbindAllFromAnimationFinished(class UUserWidget* Widget);
		void SetDetailMode(ESlateDetailMode InDetailMode);
		float GetStartTime();
		float GetEndTime();
		void BindToAnimationStarted(class UUserWidget* Widget, const class FScriptDelegate& Delegate);
		void BindToAnimationFinished(class UUserWidget* Widget, const class FScriptDelegate& Delegate);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetAnimationDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
	{
	public:
		TArray<struct FBlueprintWidgetAnimationDelegateBinding>    WidgetAnimationDelegateBindings;                         // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetAnimationPlayCallbackProxy
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UWidgetAnimationPlayCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             Finished;                                                // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQNR[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
		class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBinding
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UWidgetBinding : public UPropertyBinding
	{
	public:
		class UWidget* GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBlueprintGeneratedClass
	 * Size -> 0x0040 (FullSize[0x0368] - InheritedSize[0x0328])
	 */
	class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		class UWidgetTree*                                         WidgetTree;                                              // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bClassRequiresNativeTick : 1;                            // 0x0330(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PXSV[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDelegateRuntimeBinding>                     Bindings;                                                // 0x0338(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UWidgetAnimation*>                            Animations;                                              // 0x0348(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        NamedSlots;                                              // 0x0358(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);
		struct FEventReply STATIC_Unhandled();
		void STATIC_SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
		void STATIC_SetWindowTitleBarOnCloseClickedDelegate(const class FScriptDelegate& Delegate);
		void STATIC_SetWindowTitleBarCloseButtonActive(bool bActive);
		struct FEventReply STATIC_SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers);
		struct FEventReply STATIC_SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition);
		void STATIC_SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
		void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
		void STATIC_SetInputMode_GameOnly(class APlayerController* PlayerController);
		void STATIC_SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
		void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
		bool STATIC_SetHardwareCursor(class UObject* WorldContextObject, EMouseCursor CursorShape, const class FName& CursorName, const struct FVector2D& HotSpot);
		void STATIC_SetFocusToGameViewport();
		void STATIC_SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
		void STATIC_SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture);
		void STATIC_SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material);
		void STATIC_RestorePreviousWindowTitleBarState();
		struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
		struct FEventReply STATIC_ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks);
		void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
		struct FSlateBrush STATIC_NoResourceBrush();
		struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height);
		struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height);
		struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
		struct FEventReply STATIC_LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
		bool STATIC_IsDragDropping();
		struct FEventReply STATIC_Handled();
		void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);
		struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
		class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);
		class UDragDropOperation* STATIC_GetDragDroppingContent();
		class UTexture2D* STATIC_GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush);
		class UMaterialInterface* STATIC_GetBrushResourceAsMaterial(const struct FSlateBrush& Brush);
		class UObject* STATIC_GetBrushResource(const struct FSlateBrush& Brush);
		void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* Interface, bool TopLevelOnly);
		void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
		struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
		void STATIC_DrawTextFormatted(struct FPaintContext* Context, const class FText& Text, const struct FVector2D& Position, class UFont* Font, int32_t FontSize, const class FName& FontTypeFace, const struct FLinearColor& Tint);
		void STATIC_DrawText(struct FPaintContext* Context, const class FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint);
		void STATIC_DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
		void STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
		void STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint);
		void STATIC_DismissAllMenus();
		struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
		struct FEventReply STATIC_DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
		class UDragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);
		class UUserWidget* STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
		struct FEventReply STATIC_ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers);
		struct FEventReply STATIC_CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
		struct FEventReply STATIC_CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
		void STATIC_CancelDragDrop();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetInteractionComponent
	 * Size -> 0x01F8 (FullSize[0x0510] - InheritedSize[0x0318])
	 */
	class UWidgetInteractionComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnHoveredWidgetChanged;                                  // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3PW[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VirtualUserIndex;                                        // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointerIndex;                                            // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          TraceChannel;                                            // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4IT[0x3];                                   // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InteractionDistance;                                     // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWidgetInteractionSource                                   InteractionSource;                                       // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHitTesting;                                       // 0x0349(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDebug;                                              // 0x034A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_43Y4[0x1];                                   // 0x034B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DebugColor;                                              // 0x034C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F49H[0x7C];                                  // 0x035C(0x007C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CustomHitResult;                                         // 0x03D8(0x0088) Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FVector2D                                           LocalHitLocation;                                        // 0x0460(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           LastLocalHitLocation;                                    // 0x0468(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetComponent*                                    HoveredWidgetComponent;                                  // 0x0470(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FHitResult                                          LastHitResult;                                           // 0x0478(0x0088) Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsHoveredWidgetInteractable;                            // 0x0500(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsHoveredWidgetFocusable;                               // 0x0501(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsHoveredWidgetHitTestVisible;                          // 0x0502(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UA8O[0xD];                                   // 0x0503(0x000D) MISSED OFFSET (PADDING)

	public:
		void SetFocus(class UWidget* FocusWidget);
		void SetCustomHitResult(const struct FHitResult& HitResult);
		bool SendKeyChar(const class FString& Characters, bool bRepeat);
		void ScrollWheel(float ScrollDelta);
		void ReleasePointerKey(const struct FKey& Key);
		bool ReleaseKey(const struct FKey& Key);
		void PressPointerKey(const struct FKey& Key);
		bool PressKey(const struct FKey& Key, bool bRepeat);
		bool PressAndReleaseKey(const struct FKey& Key);
		bool IsOverInteractableWidget();
		bool IsOverHitTestVisibleWidget();
		bool IsOverFocusableWidget();
		struct FHitResult GetLastHitResult();
		class UWidgetComponent* GetHoveredWidgetComponent();
		struct FVector2D Get2DHitLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetLayoutLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UWrapBoxSlot* STATIC_SlotAsWrapBoxSlot(class UWidget* Widget);
		class UWidgetSwitcherSlot* STATIC_SlotAsWidgetSwitcherSlot(class UWidget* Widget);
		class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
		class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
		class USizeBoxSlot* STATIC_SlotAsSizeBoxSlot(class UWidget* Widget);
		class UScrollBoxSlot* STATIC_SlotAsScrollBoxSlot(class UWidget* Widget);
		class UScaleBoxSlot* STATIC_SlotAsScaleBoxSlot(class UWidget* Widget);
		class USafeZoneSlot* STATIC_SlotAsSafeBoxSlot(class UWidget* Widget);
		class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);
		class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
		class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
		class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
		class UBorderSlot* STATIC_SlotAsBorderSlot(class UWidget* Widget);
		void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
		bool STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative);
		struct FGeometry STATIC_GetViewportWidgetGeometry(class UObject* WorldContextObject);
		struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
		float STATIC_GetViewportScale(class UObject* WorldContextObject);
		struct FGeometry STATIC_GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
		bool STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
		struct FVector2D STATIC_GetMousePositionOnViewport(class UObject* WorldContextObject);
		struct FVector2D STATIC_GetMousePositionOnPlatform();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetNavigation
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UWidgetNavigation : public UObject
	{
	public:
		struct FWidgetNavigationData                               Up;                                                      // 0x0028(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Down;                                                    // 0x004C(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Left;                                                    // 0x0070(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Right;                                                   // 0x0094(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Next;                                                    // 0x00B8(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Previous;                                                // 0x00DC(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetSwitcherSlot
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UWidgetSwitcherSlot : public UPanelSlot
	{
	public:
		unsigned char                                              UnknownData_XVUP[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7MEC[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetTree
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UWidgetTree : public UObject
	{
	public:
		class UWidget*                                             RootWidget;                                              // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WindowTitleBarArea
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	class UWindowTitleBarArea : public UContentWidget
	{
	public:
		bool                                                       bWindowButtonsEnabled;                                   // 0x0150(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoubleClickTogglesFullscreen;                           // 0x0151(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QB6I[0x1E];                                  // 0x0152(0x001E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WindowTitleBarAreaSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UWindowTitleBarAreaSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FFR7[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WrapBox
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	class UWrapBox : public UPanelWidget
	{
	public:
		struct FVector2D                                           InnerSlotPadding;                                        // 0x0150(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WrapWidth;                                               // 0x0158(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExplicitWrapWidth;                                      // 0x015C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1GV[0x13];                                  // 0x015D(0x0013) MISSED OFFSET (PADDING)

	public:
		void SetInnerSlotPadding(const struct FVector2D& InPadding);
		class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WrapBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UWrapBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFillEmptySpace;                                         // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O3LJ[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FillSpanWhenLessThan;                                    // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0OV[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
		void SetFillEmptySpace(bool InbFillEmptySpace);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
