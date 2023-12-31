//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSData, NSString, UIImage, UITapGestureRecognizer, VKCLookupButton, VKCVisualSearchResultItem;
@protocol VKCVisualSearchResultItemViewDelegate;

__attribute__((visibility("hidden")))
@interface VKCVisualSearchResultItemView
{
    _Bool _pulsing;	// 8 = 0x8
    _Bool _automaticallyShowVisualSearchResults;	// 9 = 0x9
    _Bool _didProcessResult;	// 10 = 0xa
    _Bool _isShowingVisualResultsPane;	// 11 = 0xb
    _Bool _observingInteractionDidFinish;	// 12 = 0xc
    _Bool _shouldShowDots;	// 13 = 0xd
    UIImage *_tintedImageForButton;	// 16 = 0x10
    long long _interfaceOrientation;	// 24 = 0x18
    id <VKCVisualSearchResultItemViewDelegate> _delegate;	// 32 = 0x20
    VKCVisualSearchResultItem *_visualSearchResultItem;	// 40 = 0x28
    NSData *_userReportPayload;	// 48 = 0x30
    UITapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
    VKCLookupButton *_lookupButton;	// 64 = 0x40
    CALayer *_iconInLookupButtonLayer;	// 72 = 0x48
    long long _status;	// 80 = 0x50
    CALayer *_pinLayer;	// 88 = 0x58
    CALayer *_pulsingLayer;	// 96 = 0x60
    NSString *_currentRVItemID;	// 104 = 0x68
    struct CGSize _cachedDotSize;	// 112 = 0x70
    struct CGRect _currentImageRectForLayerContents;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000c07af
@property(nonatomic) struct CGRect currentImageRectForLayerContents; // @synthesize currentImageRectForLayerContents=_currentImageRectForLayerContents;
@property(nonatomic) _Bool shouldShowDots; // @synthesize shouldShowDots=_shouldShowDots;
@property(nonatomic) _Bool observingInteractionDidFinish; // @synthesize observingInteractionDidFinish=_observingInteractionDidFinish;
@property(retain, nonatomic) NSString *currentRVItemID; // @synthesize currentRVItemID=_currentRVItemID;
@property(nonatomic) _Bool isShowingVisualResultsPane; // @synthesize isShowingVisualResultsPane=_isShowingVisualResultsPane;
@property(nonatomic) _Bool didProcessResult; // @synthesize didProcessResult=_didProcessResult;
@property(retain, nonatomic) CALayer *pulsingLayer; // @synthesize pulsingLayer=_pulsingLayer;
@property(retain, nonatomic) CALayer *pinLayer; // @synthesize pinLayer=_pinLayer;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) struct CGSize cachedDotSize; // @synthesize cachedDotSize=_cachedDotSize;
@property(retain, nonatomic) CALayer *iconInLookupButtonLayer; // @synthesize iconInLookupButtonLayer=_iconInLookupButtonLayer;
@property(retain, nonatomic) VKCLookupButton *lookupButton; // @synthesize lookupButton=_lookupButton;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool automaticallyShowVisualSearchResults; // @synthesize automaticallyShowVisualSearchResults=_automaticallyShowVisualSearchResults;
@property(nonatomic) _Bool pulsing; // @synthesize pulsing=_pulsing;
@property(retain, nonatomic) NSData *userReportPayload; // @synthesize userReportPayload=_userReportPayload;
@property(retain, nonatomic) VKCVisualSearchResultItem *visualSearchResultItem; // @synthesize visualSearchResultItem=_visualSearchResultItem;
@property(nonatomic) __weak id <VKCVisualSearchResultItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showLookupUIPaneForResultItem;	// IMP=0x00000000000c0203
- (id)_queryForProcessingResult;	// IMP=0x00000000000bf9a6
- (id)_queryString;	// IMP=0x00000000000bf94e
- (void)didDismissVisualResultsPane;	// IMP=0x00000000000bf85e
- (void)_didDismissVisualResultsPane:(id)arg1;	// IMP=0x00000000000bf6a2
- (void)showVisualResultsPane;	// IMP=0x00000000000bf586
- (void)performLookup;	// IMP=0x00000000000bf574
- (void)hideDots;	// IMP=0x00000000000bf522
- (void)didFinishAnimatingDots;	// IMP=0x00000000000bf464
- (struct CATransform3D)_initialDotAnimationTransform;	// IMP=0x00000000000bf3bf
- (void)beginAnimatingDotAfterDelay:(double)arg1;	// IMP=0x00000000000bf005
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000000bef66
- (void)didDismissViewController;	// IMP=0x00000000000bef54
- (void)didTap:(id)arg1;	// IMP=0x00000000000bee80
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000bee11
- (_Bool)containsVisualSearchItemAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000000becf4
- (id)trianglePathForPinBubbleWithDirection:(long long)arg1 withRadius:(double)arg2;	// IMP=0x00000000000be277
- (id)circlePathForPinBubbleWithDirection:(long long)arg1 withRadius:(double)arg2;	// IMP=0x00000000000be1d0
- (struct CGPoint)_offsetForPinBubbleFrameWithDirection:(long long)arg1 pinBubbleBounds:(struct CGRect)arg2;	// IMP=0x00000000000bdfa8
- (void)updatePinLayerFrame;	// IMP=0x00000000000bde85
- (long long)_pinArrowDirection;	// IMP=0x00000000000bdd54
- (double)_screenZoomScale;	// IMP=0x00000000000bdcbe
- (struct CGSize)_pinSizeForViewScale;	// IMP=0x00000000000bdc41
- (struct CGRect)_pinButtonRect;	// IMP=0x00000000000bdc27
- (void)showPinForTappedDot;	// IMP=0x00000000000bd7cc
- (void)setImageContentsInLayer:(id)arg1 withMaterialLayer:(id)arg2 withRect:(struct CGRect)arg3;	// IMP=0x00000000000bd6ee
- (void)setImageContentsInLayer:(id)arg1 withRect:(struct CGRect)arg2;	// IMP=0x00000000000bd490
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000000bd23f
- (struct CATransform3D)_pinEndTransform;	// IMP=0x00000000000bd015
- (void)_animatePin:(_Bool)arg1;	// IMP=0x00000000000bcb2e
- (struct CATransform3D)_transformForButtonScale;	// IMP=0x00000000000bca84
- (void)animateToVisualResultsPane:(_Bool)arg1;	// IMP=0x00000000000bc50c
- (void)removePulsing;	// IMP=0x00000000000bc4c0
- (void)updatePulsingLayer;	// IMP=0x00000000000bc4ba
- (id)_defaultSymbolName;	// IMP=0x00000000000bc4ad
- (id)_symbolNameForItem;	// IMP=0x00000000000bc45d
@property(readonly, nonatomic) UIImage *tintedImageForButton; // @synthesize tintedImageForButton=_tintedImageForButton;
@property(readonly, nonatomic) UIImage *imageForButton;
- (struct CGRect)_rectForViewSpace:(struct CGRect)arg1;	// IMP=0x00000000000bc0bb
- (void)updateIndicatorDotForState;	// IMP=0x00000000000bba91
- (struct CGRect)rectForIndicatorDot;	// IMP=0x00000000000bb998
- (void)_updateLayout;	// IMP=0x00000000000bb8ef
- (void)layoutSubviews;	// IMP=0x00000000000bb8ae
- (void)deviceOrientationDidChange:(id)arg1;	// IMP=0x00000000000bb833
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (struct CGPoint)pointForVisualSearchIcon;	// IMP=0x00000000000bb49f
- (struct CGRect)boundsFromVisualSearchResult;	// IMP=0x00000000000bae72
- (double)contentSizeScaleFactor;	// IMP=0x00000000000bae1a
- (double)lookupButtonSize;	// IMP=0x00000000000badff
- (id)initWithVisualSearchResultItem:(id)arg1;	// IMP=0x00000000000ba90e
- (void)dealloc;	// IMP=0x00000000000ba766

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

