//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIFocusSystem.h"

@protocol UIFocusEnvironment, _UIHostedFocusSystemDelegate;

__attribute__((visibility("hidden")))
@interface _UIHostedFocusSystem : UIFocusSystem
{
    _Bool _didSetFocusSoundGenerator;	// 8 = 0x8
    id <UIFocusEnvironment> _hostEnvironment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000008471fa
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> hostEnvironment; // @synthesize hostEnvironment=_hostEnvironment;
- (_Bool)_isEligibleForFocusOcclusion;	// IMP=0x0000000000847156
- (_Bool)_isEligibleForFocusInteraction;	// IMP=0x00000000008470cd
- (_Bool)_focusSystemIsValid;	// IMP=0x0000000000847054
- (_Bool)_prefersDeferralForFocusUpdateInContext:(id)arg1;	// IMP=0x000000000084704c
- (_Bool)_postsFocusUpdateNotifications;	// IMP=0x0000000000847044
- (_Bool)_requiresFocusedItemToHaveContainingView;	// IMP=0x000000000084703c
- (void)_setFocusSoundGenerator:(id)arg1;	// IMP=0x0000000000847002
- (id)_focusSoundGenerator;	// IMP=0x0000000000846f60
- (id)_hostFocusSystem;	// IMP=0x0000000000846ee4
- (_Bool)containsChildOfHostEnvironment:(id)arg1;	// IMP=0x0000000000846df3
@property(nonatomic, getter=_delegate, setter=_setDelegate:) __weak id <_UIHostedFocusSystemDelegate> delegate;
- (id)_initWithHostEnvironment:(id)arg1;	// IMP=0x0000000000846a55

@end

