//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@protocol _UIPressGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPressGestureRecognizer : UIGestureRecognizer
{
    struct {
        unsigned int shouldAllowPress:1;
    } _delegateRespondsTo;	// 16 = 0x10
}

- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ec2be6
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ec2ba0
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ec2b5a
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x0000000000ec2afd
- (_Bool)_shouldReceivePress:(id)arg1;	// IMP=0x0000000000ec2a4d
@property(nonatomic) __weak id <_UIPressGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

