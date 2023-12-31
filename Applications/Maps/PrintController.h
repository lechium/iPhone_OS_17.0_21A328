//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, NSString, UIPrintInteractionController, UIView;
@protocol PrintControllerDelegate;

@interface PrintController : NSObject
{
    id <PrintControllerDelegate> _delegate;	// 8 = 0x8
    MKMapView *_mapView;	// 16 = 0x10
    struct CGRect _presentationRect;	// 24 = 0x18
    UIView *_presentationView;	// 56 = 0x38
    _Bool _isShowingPopover;	// 64 = 0x40
    _Bool _shouldShowPopoverAfterOrientationChange;	// 65 = 0x41
    unsigned long long _printTaskBackgroundIdentifier;	// 72 = 0x48
    UIPrintInteractionController *_pic;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000385d4e
@property(retain, nonatomic) UIView *presentationView; // @synthesize presentationView=_presentationView;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <PrintControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)printInteractionControllerDidFinishJob:(id)arg1;	// IMP=0x0010000000385cdf
- (void)printInteractionControllerWillStartJob:(id)arg1;	// IMP=0x0010000000385c40
- (void)printInteractionControllerDidPresentPrinterOptions:(id)arg1;	// IMP=0x0010000000385c0a
- (id)_printInfoForSearchString:(id)arg1 route:(id)arg2 title:(id)arg3;	// IMP=0x0010000000385a7f
- (id)_rendererForSearchResults:(id)arg1 title:(id)arg2 subTitle:(id)arg3;	// IMP=0x0010000000385996
- (id)_rendererForRoute:(id)arg1;	// IMP=0x0010000000385939
- (_Bool)_searchResults:(id)arg1 areFarAwayFromView:(id)arg2;	// IMP=0x0010000000385708
- (id)mapRegion:(id)arg1 insetLat:(double)arg2 insetLng:(double)arg3;	// IMP=0x0010000000385570
- (void)orientationDidChange;	// IMP=0x00100000003854a8
- (void)orientationWillChange;	// IMP=0x0010000000385377
- (void)print;	// IMP=0x0010000000385361
- (void)printSearchString:(id)arg1 searchResults:(id)arg2 title:(id)arg3 subTitle:(id)arg4;	// IMP=0x0010000000385319
- (void)_print:(id)arg1;	// IMP=0x0010000000385113
- (void)printRoute:(id)arg1 searchString:(id)arg2;	// IMP=0x00100000003850cb
- (id)_printControllerForSearchString:(id)arg1 searchResults:(id)arg2 title:(id)arg3 subTitle:(id)arg4;	// IMP=0x0010000000384f88
- (id)_printControllerForRoute:(id)arg1 searchString:(id)arg2;	// IMP=0x0010000000384e8d
- (void)_endBackgroundTask;	// IMP=0x0010000000384dc5
- (_Bool)_isInBackground;	// IMP=0x0010000000384d2c
@property(readonly, nonatomic) _Bool isPrinting;
- (id)initWithMapView:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000384c7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

