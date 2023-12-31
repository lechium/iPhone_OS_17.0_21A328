//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/SFFluidCollectionViewInteraction.h>

@class NSIndexPath, NSString, SFFluidCollectionViewLayoutAttributes, UIPinchGestureRecognizer;
@protocol SFFluidCollectionViewTrackedUpdateToken;

__attribute__((visibility("hidden")))
@interface SFFluidTabOverviewPinchInteraction : SFFluidCollectionViewInteraction
{
    struct CGPoint _pinchStartLocation;	// 8 = 0x8
    double _targetScale;	// 24 = 0x18
    SFFluidCollectionViewLayoutAttributes *_initialAttributes;	// 32 = 0x20
    id <SFFluidCollectionViewTrackedUpdateToken> _trackedUpdateToken;	// 40 = 0x28
    UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 48 = 0x30
    NSIndexPath *_pinchedItemIndexPath;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001eafc1
@property(readonly, nonatomic) NSIndexPath *pinchedItemIndexPath; // @synthesize pinchedItemIndexPath=_pinchedItemIndexPath;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000001eaf16
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000001eae76
- (id)transformLayoutAttributes:(id)arg1;	// IMP=0x00000000001eabb3
- (void)_didReceivePinch:(id)arg1;	// IMP=0x00000000001ea786
- (void)cancelInteraction;	// IMP=0x00000000001ea750
@property(readonly, nonatomic) long long pinchDirection;
- (id)gestureRecognizers;	// IMP=0x00000000001ea5ba
- (id)init;	// IMP=0x00000000001ea514

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

