//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ICDocCamPhysicalCaptureRecognizer : UIGestureRecognizer
{
    _Bool _suspended;	// 8 = 0x8
    long long _activeButton;	// 16 = 0x10
    NSArray *_desiredButtons;	// 24 = 0x18
    long long _physicalButtonType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004bfc7
@property(nonatomic) long long physicalButtonType; // @synthesize physicalButtonType=_physicalButtonType;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(copy, nonatomic) NSArray *desiredButtons; // @synthesize desiredButtons=_desiredButtons;
@property(nonatomic) long long activeButton; // @synthesize activeButton=_activeButton;
- (long long)_captureButtonForPhysicalButtonType:(long long)arg1;	// IMP=0x000000000004bf2c
- (void)reset;	// IMP=0x000000000004bee4
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000004bea7
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000004be6a
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000004bbe7
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000004bbaa
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000004bb69
- (void)_updateApplicationButtonStatus;	// IMP=0x000000000004b9ac
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000004b8b2

@end
