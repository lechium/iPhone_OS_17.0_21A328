//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIStepper.h>

@class MISSING_TYPE;

@interface _TtCC8Freeform18CRLiOSValueControl14StepperControl : UIStepper
{
    MISSING_TYPE *isTrackingTouch;	// 8 = 0x8
}

- (id)initWithCoder:(id)arg1;	// IMP=0x0040000000b78a90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000b78a70
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic) double maximumValue;
@property(nonatomic) double minimumValue;
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0010000000b788a0
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000b78880
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000b78830

@end
