//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonButton.h"

@class AMSDialogAction, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface AMSUIMessageButton : AMSUICommonButton
{
    _Bool _isFooterButton;	// 8 = 0x8
    AMSDialogAction *_dialogAction;	// 16 = 0x10
    UIFont *_preferredFont;	// 24 = 0x18
    unsigned long long _messageStyle;	// 32 = 0x20
}

+ (id)_defaultConfiguration;	// IMP=0x00600000000452fc
- (void).cxx_destruct;	// IMP=0x00000000000455d0
@property(nonatomic) _Bool isFooterButton; // @synthesize isFooterButton=_isFooterButton;
@property(nonatomic) unsigned long long messageStyle; // @synthesize messageStyle=_messageStyle;
@property(retain, nonatomic) UIFont *preferredFont; // @synthesize preferredFont=_preferredFont;
@property(readonly, nonatomic) AMSDialogAction *dialogAction; // @synthesize dialogAction=_dialogAction;
- (void)_axSettingsDidUpdate:(id)arg1;	// IMP=0x0000000000045546
@property(retain, nonatomic) UIColor *preferredBackgroundColor;
@property(retain, nonatomic) UIColor *preferredForegroundColor;
- (id)_closeImage;	// IMP=0x000000000004526e
- (id)_chevronImage;	// IMP=0x00000000000451a1
- (id)_symbolConfiguration;	// IMP=0x0000000000044f1c
- (_Bool)isDefaultCloseButton;	// IMP=0x0000000000044e2b
- (void)_setAXSettings;	// IMP=0x0000000000044d67
- (void)setFooterStyle;	// IMP=0x0000000000044b3a
- (void)_setImagePadding;	// IMP=0x000000000004491a
- (id)_appendChevronToString:(id)arg1;	// IMP=0x00000000000446ca
- (void)_endObservations;	// IMP=0x000000000004466a
- (void)_startObservations;	// IMP=0x0000000000044603
- (void)_refresh;	// IMP=0x0000000000044586
- (void)_setAccessibilityIdentifier;	// IMP=0x0000000000044522
- (void)_setupWithDialogAction:(id)arg1;	// IMP=0x0000000000043d5b
- (_Bool)canBecomeFocused;	// IMP=0x0000000000043d53
- (void)layoutSubviews;	// IMP=0x0000000000043d12
- (void)dealloc;	// IMP=0x0000000000043cd4
- (id)initWithDialogAction:(id)arg1 messageStyle:(unsigned long long)arg2;	// IMP=0x0000000000043bfc

@end

