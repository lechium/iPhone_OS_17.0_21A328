//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIColor;
@protocol _UIButtonMaskAnimationViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIButtonMaskAnimationView : UIView
{
    unsigned long long _hardEdge;	// 128 = 0x80
    UIView *_hardEdgeLine;	// 136 = 0x88
    id <_UIButtonMaskAnimationViewDelegate> _delegate;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000099d130
@property(nonatomic) id <_UIButtonMaskAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000099d02e
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000000099cfbd
@property unsigned long long hardEdge;
@property(nonatomic) UIColor *borderColor;
@property double borderWidth;
- (void)layoutSubviews;	// IMP=0x000000000099cd10
- (struct CGRect)_frameForLine;	// IMP=0x000000000099cb24
- (id)init;	// IMP=0x000000000099ca83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
