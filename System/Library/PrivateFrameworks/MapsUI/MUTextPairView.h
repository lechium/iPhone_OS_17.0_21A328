//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MUTextPairViewModel, NSArray, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MUTextPairView : UIView
{
    UILabel *_leftLabel;	// 8 = 0x8
    UILabel *_rightLabel;	// 16 = 0x10
    NSArray *_constraints;	// 24 = 0x18
    _Bool _stacked;	// 32 = 0x20
    MUTextPairViewModel *_viewModel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a84ae
@property(retain, nonatomic) MUTextPairViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic, getter=isStacked) _Bool stacked; // @synthesize stacked=_stacked;
- (void)_contentSizeDidChange;	// IMP=0x00000000000a83da
- (void)_updateAppearance;	// IMP=0x00000000000a8330
- (void)_updateConstraints;	// IMP=0x00000000000a79e4
- (_Bool)shouldStackForProposedWidth:(double)arg1;	// IMP=0x00000000000a7957
- (void)_setupSubviews;	// IMP=0x00000000000a7784
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a76c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

