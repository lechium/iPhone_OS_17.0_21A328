//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKitFocusableViewResponderItemBase.h"

@class MISSING_TYPE, NSArray, NSString, UIFocusEffect;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _TtC7SwiftUIP33_B6A2D4E72E5722B5103497ADB7778B5F31UIKitFocusableViewResponderItem : UIKitFocusableViewResponderItemBase
{
    MISSING_TYPE *base;	// 8 = 0x8
    MISSING_TYPE *host;	// 16 = 0x10
    MISSING_TYPE *frame;	// 24 = 0x18
    MISSING_TYPE *contentPath;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_defaultFocusGroupIdentifier;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000017a7193
- (id)init;	// IMP=0x00000000017a7150
@property(nonatomic, readonly) UIFocusEffect *focusEffect;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000017a67d8
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000017a651d
- (void)updateFocusIfNeeded;	// IMP=0x00000000017a6406
- (void)setNeedsFocusUpdate;	// IMP=0x00000000017a639b
@property(nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property(nonatomic, readonly) NSString *swiftui_focusGroupIdentifier;
@property(nonatomic, readonly) _Bool canBecomeFocused;
@property(nonatomic) struct CGRect frame; // @synthesize frame;

@end

