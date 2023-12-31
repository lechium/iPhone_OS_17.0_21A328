//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScrollView.h>

@class NSString;
@protocol QLPreviewScrollViewZoomDelegate;

__attribute__((visibility("hidden")))
@interface QLPreviewScrollView : UIScrollView
{
    _Bool _inSizeChange;	// 8 = 0x8
    struct CGSize _lastUpdatedSize;	// 16 = 0x10
    _Bool _readyToCancelPanGesture;	// 32 = 0x20
    _Bool _needsZoomUpdate;	// 33 = 0x21
    _Bool _preventZoomUpdate;	// 34 = 0x22
    _Bool _shouldFit;	// 35 = 0x23
    double _minZoomScale;	// 40 = 0x28
    double _maxZoomScale;	// 48 = 0x30
    double _pinchMaxZoomScale;	// 56 = 0x38
    double _fillZoomScale;	// 64 = 0x40
    double _fitZoomScale;	// 72 = 0x48
    double _contentIsSmallerThanView;	// 80 = 0x50
    id <QLPreviewScrollViewZoomDelegate> _zoomDelegate;	// 88 = 0x58
    struct CGSize _contentViewSize;	// 96 = 0x60
    struct UIEdgeInsets _peripheryInsetsLandscape;	// 112 = 0x70
    struct UIEdgeInsets _peripheryInsetsPortrait;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000005c176
@property struct UIEdgeInsets peripheryInsetsPortrait; // @synthesize peripheryInsetsPortrait=_peripheryInsetsPortrait;
@property struct UIEdgeInsets peripheryInsetsLandscape; // @synthesize peripheryInsetsLandscape=_peripheryInsetsLandscape;
@property _Bool shouldFit; // @synthesize shouldFit=_shouldFit;
@property(nonatomic) _Bool preventZoomUpdate; // @synthesize preventZoomUpdate=_preventZoomUpdate;
@property __weak id <QLPreviewScrollViewZoomDelegate> zoomDelegate; // @synthesize zoomDelegate=_zoomDelegate;
@property(readonly) double contentIsSmallerThanView; // @synthesize contentIsSmallerThanView=_contentIsSmallerThanView;
@property(readonly) double fitZoomScale; // @synthesize fitZoomScale=_fitZoomScale;
@property(readonly) double fillZoomScale; // @synthesize fillZoomScale=_fillZoomScale;
@property(readonly) double pinchMaxZoomScale; // @synthesize pinchMaxZoomScale=_pinchMaxZoomScale;
@property(readonly) double maxZoomScale; // @synthesize maxZoomScale=_maxZoomScale;
@property(readonly) double minZoomScale; // @synthesize minZoomScale=_minZoomScale;
@property(nonatomic) struct CGSize contentViewSize; // @synthesize contentViewSize=_contentViewSize;
@property(nonatomic) _Bool needsZoomUpdate; // @synthesize needsZoomUpdate=_needsZoomUpdate;
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x000000000005bf85
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000005bee8
- (void)scrollViewDidZoom:(id)arg1;	// IMP=0x000000000005be4b
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;	// IMP=0x000000000005bd5d
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;	// IMP=0x000000000005bca5
- (struct CGRect)zoomRectForScale:(double)arg1 withCenter:(struct CGPoint)arg2;	// IMP=0x000000000005bbfa
- (void)resetZoomScale;	// IMP=0x000000000005bbac
- (void)updateZoomScalesWithSize:(struct CGSize)arg1;	// IMP=0x000000000005b40d
- (void)updateZoomScales;	// IMP=0x000000000005b3c4
- (double)_maxZoomScaleForContentSize:(struct CGSize)arg1;	// IMP=0x000000000005b36f
- (void)_updateScrollViewZomming;	// IMP=0x000000000005b2ef
- (void)layoutSubviews;	// IMP=0x000000000005b241
- (id)init;	// IMP=0x000000000005b073

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

