//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEORelatedSearchSuggestion, MapsThemeButton, NSDate, NSMutableArray, NSString, NSTimer, RelatedSearchSuggestion, UIScrollView, UIVisualEffectView;
@protocol RelatedSearchSuggestionViewControllerDelegate;

@interface RelatedSearchSuggestionViewController
{
    _Bool _accessibilityEnabled;	// 8 = 0x8
    UIVisualEffectView *_blurView;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    MapsThemeButton *_closeButton;	// 32 = 0x20
    NSMutableArray *_componentViews;	// 40 = 0x28
    _Bool _forceDismiss;	// 48 = 0x30
    NSDate *_suggestionShownDate;	// 56 = 0x38
    NSTimer *_hideSuggestionViewTimer;	// 64 = 0x40
    double _hideSuggestionViewTimeoutInSeconds;	// 72 = 0x48
    double _lastSuggestionScrollOffset;	// 80 = 0x50
    _Bool _suggestionScrollViewScrollingLeft;	// 88 = 0x58
    _Bool _suggestionScrollViewScrollingRight;	// 89 = 0x59
    id <RelatedSearchSuggestionViewControllerDelegate> _delegate;	// 96 = 0x60
    RelatedSearchSuggestion *_suggestion;	// 104 = 0x68
    GEORelatedSearchSuggestion *_pdSuggestion;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000031d342
@property(readonly, nonatomic) GEORelatedSearchSuggestion *pdSuggestion; // @synthesize pdSuggestion=_pdSuggestion;
@property(retain, nonatomic) RelatedSearchSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic) __weak id <RelatedSearchSuggestionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetData;	// IMP=0x001000000031d2df
- (void)dismissWithReason:(unsigned long long)arg1;	// IMP=0x001000000031d1cc
- (void)dismiss;	// IMP=0x001000000031d1b5
- (void)updateSuggestionPositionWithOffset:(double)arg1;	// IMP=0x001000000031d0ea
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x001000000031d024
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x001000000031cff1
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x001000000031cfdf
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000031cd8f
@property(nonatomic, getter=isHidden) _Bool hidden;
- (id)suggestionView;	// IMP=0x001000000031cd16
- (void)_resetTimer;	// IMP=0x001000000031cc9c
- (void)_hideSuggestionViewTimerFired:(id)arg1;	// IMP=0x001000000031cc69
- (void)_clearTimer;	// IMP=0x001000000031cc31
- (id)_createMapsThemeLabelWithTitle:(id)arg1;	// IMP=0x001000000031cb1a
- (id)_createMapsThemeButtonWithTitle:(id)arg1;	// IMP=0x001000000031c9ab
- (void)_componentButtonTapped:(id)arg1;	// IMP=0x001000000031c809
- (void)_loadSuggestions;	// IMP=0x001000000031c230
- (void)preferredContentSizeChanged:(id)arg1;	// IMP=0x001000000031c19d
- (void)viewDidLoad;	// IMP=0x001000000031be8b
- (void)loadView;	// IMP=0x001000000031bde2
- (void)dealloc;	// IMP=0x001000000031bda4
- (id)init;	// IMP=0x001000000031bcf5
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000031bced

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

