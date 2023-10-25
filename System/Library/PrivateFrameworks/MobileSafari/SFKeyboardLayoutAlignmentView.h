//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSNotification;

__attribute__((visibility("hidden")))
@interface SFKeyboardLayoutAlignmentView : UIView
{
    NSNotification *_keyboardChangeNotificationForUpdateConstraints;	// 8 = 0x8
    struct CGRect lastKnownKeyboardRect;	// 16 = 0x10
    NSLayoutConstraint *bottomConstraint;	// 48 = 0x30
    NSLayoutConstraint *widthConstraint;	// 56 = 0x38
    NSLayoutConstraint *heightConstraint;	// 64 = 0x40
    NSLayoutConstraint *disambiguatingLeftConstraint;	// 72 = 0x48
    _Bool _automaticKeyboardFrameTrackingDisabled;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000002ea17
@property(nonatomic) _Bool automaticKeyboardFrameTrackingDisabled; // @synthesize automaticKeyboardFrameTrackingDisabled=_automaticKeyboardFrameTrackingDisabled;
- (void)_startObservingKeyboardNotificationsForScreen:(id)arg1;	// IMP=0x000000000002e971
- (void)_stopObservingKeyboardNotifications;	// IMP=0x000000000002e911
- (void)dealloc;	// IMP=0x000000000002e8d3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002e85d
- (void)_removeConstraints;	// IMP=0x000000000002e799
- (void)_addConstraints;	// IMP=0x000000000002e6f5
- (void)_matchInitialKeyboardFrame;	// IMP=0x000000000002e658
- (void)didMoveToWindow;	// IMP=0x000000000002e493
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000002e414
- (void)_keyboardChanged:(id)arg1;	// IMP=0x000000000002e402
- (void)_updateConstraintsForKeyboardNotification:(id)arg1;	// IMP=0x000000000002df22
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect)arg1;	// IMP=0x000000000002de4b
- (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1;	// IMP=0x000000000002dccd

@end
