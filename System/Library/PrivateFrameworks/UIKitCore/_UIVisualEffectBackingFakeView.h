//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSString, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewParticipating;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectBackingFakeView : UIView
{
    UIView<_UIVisualEffectViewParticipating> *_containedView;	// 128 = 0x80
    NSArray *_filters;	// 136 = 0x88
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;	// 144 = 0x90
    NSArray *_viewEffects;	// 152 = 0x98
    UIView *_clientView;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000097a214
@property(nonatomic) __weak UIView *clientView; // @synthesize clientView=_clientView;
@property(copy, nonatomic) NSArray *viewEffects; // @synthesize viewEffects=_viewEffects;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // @synthesize primaryCaptureGroup=_primaryCaptureGroup;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView; // @synthesize containedView=_containedView;
- (void)_receiveVisitor:(id)arg1;	// IMP=0x000000000097a0ff
- (void)applyRequestedViewEffects;	// IMP=0x000000000097a023
- (void)applyIdentityViewEffects;	// IMP=0x0000000000979f4e
- (void)applyRequestedFilterEffects;	// IMP=0x0000000000979d07
- (void)applyIdentityFilterEffects;	// IMP=0x0000000000979ac3
- (id)initWithClientView:(id)arg1;	// IMP=0x00000000009794d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

