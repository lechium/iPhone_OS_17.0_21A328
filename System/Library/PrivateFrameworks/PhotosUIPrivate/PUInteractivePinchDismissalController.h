//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PUChangeDirectionValueFilter, PUPinchedTileTracker, UIPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUInteractivePinchDismissalController
{
    _Bool _handlingPinchGestureRecognizer;	// 8 = 0x8
    UIPinchGestureRecognizer *__pinchGestureRecognizer;	// 16 = 0x10
    PUChangeDirectionValueFilter *__scaleDirectionValueFilter;	// 24 = 0x18
    PUPinchedTileTracker *__pinchedTileTracker;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002d3025
@property(retain, nonatomic, setter=_setPinchedTileTracker:) PUPinchedTileTracker *_pinchedTileTracker; // @synthesize _pinchedTileTracker=__pinchedTileTracker;
@property(retain, nonatomic, setter=_setScaleDirectionValueFilter:) PUChangeDirectionValueFilter *_scaleDirectionValueFilter; // @synthesize _scaleDirectionValueFilter=__scaleDirectionValueFilter;
@property(nonatomic, getter=_isHandlingPinchGestureRecognizer, setter=_setHandlingPinchGestureRecognizer:) _Bool handlingPinchGestureRecognizer; // @synthesize handlingPinchGestureRecognizer=_handlingPinchGestureRecognizer;
@property(retain, nonatomic, setter=_setPinchGestureRecognizer:) UIPinchGestureRecognizer *_pinchGestureRecognizer; // @synthesize _pinchGestureRecognizer=__pinchGestureRecognizer;
- (id)pinchedTiledTracker:(id)arg1 finalLayoutInfoForInitialLayoutInfo:(id)arg2;	// IMP=0x00000000002d2e6e
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x00000000002d2d4e
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000002d2cba
- (void)_handlePinchGestureRecognizer:(id)arg1;	// IMP=0x00000000002d2923
- (void)updateGestureRecognizersWithHostingView:(id)arg1;	// IMP=0x00000000002d276c
- (void)dealloc;	// IMP=0x00000000002d2721

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

