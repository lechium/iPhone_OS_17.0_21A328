//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, UITapGestureRecognizer, VKCVisualSearchResult, VKCVisualSearchResultItem;
@protocol VKCCornerLookupButtonDelegate;

__attribute__((visibility("hidden")))
@interface VKCCornerLookupButton
{
    _Bool _isShowingVisualResultsPane;	// 8 = 0x8
    _Bool _observingInteractionDidFinish;	// 9 = 0x9
    _Bool _didProcessResult;	// 10 = 0xa
    _Bool _shouldShowResultWhenVisible;	// 11 = 0xb
    UITapGestureRecognizer *_tapGestureRecognizer;	// 16 = 0x10
    VKCVisualSearchResultItem *_resultItem;	// 24 = 0x18
    VKCVisualSearchResult *_result;	// 32 = 0x20
    UIButton *_button;	// 40 = 0x28
    id <VKCCornerLookupButtonDelegate> _delegate;	// 48 = 0x30
    NSString *_currentRVItemID;	// 56 = 0x38
    double _buttonWidth;	// 64 = 0x40
    double _buttonHeight;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000003b4e
@property(nonatomic) double buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(nonatomic) _Bool shouldShowResultWhenVisible; // @synthesize shouldShowResultWhenVisible=_shouldShowResultWhenVisible;
@property(nonatomic) _Bool didProcessResult; // @synthesize didProcessResult=_didProcessResult;
@property(nonatomic) _Bool observingInteractionDidFinish; // @synthesize observingInteractionDidFinish=_observingInteractionDidFinish;
@property(retain, nonatomic) NSString *currentRVItemID; // @synthesize currentRVItemID=_currentRVItemID;
@property(nonatomic) _Bool isShowingVisualResultsPane; // @synthesize isShowingVisualResultsPane=_isShowingVisualResultsPane;
@property(nonatomic) __weak id <VKCCornerLookupButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) VKCVisualSearchResult *result; // @synthesize result=_result;
@property(retain, nonatomic) VKCVisualSearchResultItem *resultItem; // @synthesize resultItem=_resultItem;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void)_didDismissVisualResultsPane:(id)arg1;	// IMP=0x00000000000037b9
- (void)showLookupUIPaneForResultItem;	// IMP=0x00000000000033f0
- (id)queryForProcessingResult;	// IMP=0x0000000000002b42
- (id)_queryString;	// IMP=0x0000000000002aea
- (void)didDismissVisualResultsPane;	// IMP=0x0000000000002a84
- (void)showVisualSearchResultView;	// IMP=0x00000000000029f7
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000000028ea
- (void)didTap;	// IMP=0x0000000000002875
- (void)updateIndicatorDotForState;	// IMP=0x00000000000027e2
- (void)_updateImage;	// IMP=0x0000000000002778
- (double)contentSizeScaleFactor;	// IMP=0x0000000000002720
- (double)cornerButtonSize;	// IMP=0x00000000000026e1
- (void)_setupButton;	// IMP=0x00000000000024c7
- (id)_backgroundColorBehindText;	// IMP=0x00000000000024ae
- (id)_defaultSymbolName;	// IMP=0x00000000000024a1
- (id)_symbolNameForItem;	// IMP=0x0000000000002451
- (id)imageForButton;	// IMP=0x0000000000002373
- (void)_setupGestures;	// IMP=0x000000000000231d
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x00000000000022bf
- (void)didMoveToWindow;	// IMP=0x0000000000002176
- (id)initWithFrame:(struct CGRect)arg1 resultItem:(id)arg2;	// IMP=0x0000000000001ffc
- (void)dealloc;	// IMP=0x0000000000001eb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

