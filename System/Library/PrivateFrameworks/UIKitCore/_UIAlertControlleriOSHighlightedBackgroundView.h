//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIAlertControlleriOSHighlightedBackgroundView : UIView
{
    UIVisualEffectView *_effectView;	// 8 = 0x8
    long long _style;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000112c979
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)setPressed:(_Bool)arg1;	// IMP=0x000000000112c962
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000112c931
- (void)setRoundedCornerPosition:(unsigned long long)arg1;	// IMP=0x000000000112c8e5
- (void)setCornerRadius:(double)arg1;	// IMP=0x000000000112c896
- (void)_configureWithStyle:(long long)arg1;	// IMP=0x000000000112c6ba
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000112c642
- (id)init;	// IMP=0x000000000112c62e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
