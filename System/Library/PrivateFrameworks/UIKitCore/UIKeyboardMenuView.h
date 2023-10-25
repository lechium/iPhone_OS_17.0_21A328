//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, NSTimer, UIDimmingView, UIInputSwitcherSelectionExtraView, UIInputSwitcherShadowView, UIInputSwitcherTableView, UIKBKeyView, UIKBTree, UIKeyboardLayoutStar, UISelectionFeedbackGenerator;

__attribute__((visibility("hidden")))
@interface UIKeyboardMenuView : UIView
{
    UIInputSwitcherTableView *m_table;	// 8 = 0x8
    UIInputSwitcherShadowView *m_shadowView;	// 16 = 0x10
    UIInputSwitcherSelectionExtraView *m_selExtraView;	// 24 = 0x18
    struct CGRect m_referenceRect;	// 32 = 0x20
    double m_pointerOffset;	// 64 = 0x40
    _Bool m_scrollable;	// 72 = 0x48
    _Bool m_startAutoscroll;	// 73 = 0x49
    _Bool m_scrolling;	// 74 = 0x4a
    _Bool m_shouldFade;	// 75 = 0x4b
    struct CGPoint m_point;	// 80 = 0x50
    double m_scrollStartTime;	// 96 = 0x60
    int m_scrollDirection;	// 104 = 0x68
    NSTimer *m_scrollTimer;	// 112 = 0x70
    unsigned long long m_visibleRows;	// 120 = 0x78
    unsigned long long m_firstVisibleRow;	// 128 = 0x80
    long long m_mode;	// 136 = 0x88
    UIDimmingView *m_dimmingView;	// 144 = 0x90
    UIView *m_inputView;	// 152 = 0x98
    struct CGPoint m_referenceLocation;	// 160 = 0xa0
    UIKBKeyView *m_backgroundKeyView;	// 176 = 0xb0
    double m_timeDismissed;	// 184 = 0xb8
    UISelectionFeedbackGenerator *m_slideBehavior;	// 192 = 0xc0
    _Bool _usesStraightLeftEdge;	// 200 = 0xc8
    _Bool _usesDarkTheme;	// 201 = 0xc9
    _Bool _showingCapsLockSwitcher;	// 202 = 0xca
    long long _indexForSelectedFastSwitchMode;	// 208 = 0xd0
    long long _indexForUnselectedFastSwitchMode;	// 216 = 0xd8
    UIKBTree *_referenceKey;	// 224 = 0xe0
    UIKeyboardLayoutStar *_layout;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0000000000af9822
@property(nonatomic) UIKeyboardLayoutStar *layout; // @synthesize layout=_layout;
@property(nonatomic) UIKBTree *referenceKey; // @synthesize referenceKey=_referenceKey;
@property(nonatomic) long long indexForUnselectedFastSwitchMode; // @synthesize indexForUnselectedFastSwitchMode=_indexForUnselectedFastSwitchMode;
@property(nonatomic) long long indexForSelectedFastSwitchMode; // @synthesize indexForSelectedFastSwitchMode=_indexForSelectedFastSwitchMode;
@property(nonatomic) _Bool showingCapsLockSwitcher; // @synthesize showingCapsLockSwitcher=_showingCapsLockSwitcher;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic) _Bool usesStraightLeftEdge; // @synthesize usesStraightLeftEdge=_usesStraightLeftEdge;
@property(nonatomic) long long mode; // @synthesize mode=m_mode;
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000af9706
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000af96f9
- (id)fontForItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000af96e7
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000af96df
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000af96cd
- (id)titleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000af96c0
- (void)didSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000af96ba
- (_Bool)shouldSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000af96b2
- (struct CGSize)preferredSize;	// IMP=0x0000000000af969c
- (unsigned long long)defaultSelectedIndex;	// IMP=0x0000000000af9694
- (unsigned long long)numberOfItems;	// IMP=0x0000000000af968c
- (void)willFadeForSelectionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000af9686
- (void)willFade;	// IMP=0x0000000000af9680
- (void)didShow;	// IMP=0x0000000000af967a
- (void)willShow;	// IMP=0x0000000000af962d
- (_Bool)shouldShow;	// IMP=0x0000000000af9625
- (struct CGRect)popupRect;	// IMP=0x0000000000af95e7
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000af94c1
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000af94af
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000af93d9
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000af9372
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000af930b
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000af92ad
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000af9251
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000af91cc
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000af90d5
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000af90c7
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000af9003
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000af8f96
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000af8f84
- (void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000af889b
- (void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(_Bool)arg2;	// IMP=0x0000000000af85fd
- (void)selectItemAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000af856a
- (_Bool)shouldShowSelectionExtraViewForIndexPath:(id)arg1;	// IMP=0x0000000000af84d9
- (void)highlightRow:(unsigned long long)arg1;	// IMP=0x0000000000af8279
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000af7d06
- (struct CGRect)interactiveBounds;	// IMP=0x0000000000af7a80
- (id)indexPathForInputSwitcherCellIncludingInteractiveInsetsAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000af77f0
- (void)autoscrollTimerFired:(id)arg1;	// IMP=0x0000000000af73a3
- (void)stopAnyAutoscrolling;	// IMP=0x0000000000af7290
- (void)endScrolling:(id)arg1;	// IMP=0x0000000000af7229
- (void)setNeedsDisplay;	// IMP=0x0000000000af7091
- (void)setNeedsDisplayForTopBottomCells;	// IMP=0x0000000000af6fcb
- (void)setNeedsDisplayForCell:(id)arg1;	// IMP=0x0000000000af6f8b
- (void)hide;	// IMP=0x0000000000af6e93
- (void)removeFromSuperview;	// IMP=0x0000000000af6e55
- (_Bool)launchedFromKeyboard;	// IMP=0x0000000000af6e11
- (void)clear;	// IMP=0x0000000000af6d27
- (void)fadeWithDelay:(double)arg1 forSelectionAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000af6b1c
- (void)fadeWithDelay:(double)arg1;	// IMP=0x0000000000af6b00
- (void)fade;	// IMP=0x0000000000af6acc
- (void)_delayedFade;	// IMP=0x0000000000af682f
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;	// IMP=0x0000000000af63e8
- (unsigned long long)_internationalKeyRoundedCornerInLayout:(id)arg1;	// IMP=0x0000000000af6352
- (double)minYOfLastTableCellForSelectionExtraView;	// IMP=0x0000000000af6232
- (id)maskForShadowViewBlurredBackground;	// IMP=0x0000000000af5f5e
- (id)containerView;	// IMP=0x0000000000af5c59
- (void)showAsHUD;	// IMP=0x0000000000af5c29
- (void)showAsHUDFromLocation:(struct CGPoint)arg1 withInputView:(id)arg2 touchBegan:(double)arg3;	// IMP=0x0000000000af5aaf
- (id)_renderConfig;	// IMP=0x0000000000af59c1
- (void)setupShadowViewWithSize:(struct CGSize)arg1;	// IMP=0x0000000000af5879
- (void)setupBackgroundKeyViewWithSize:(struct CGSize)arg1;	// IMP=0x0000000000af5309
- (void)show;	// IMP=0x0000000000af4537
- (void)insertSelExtraView;	// IMP=0x0000000000af44cc
- (_Bool)usesShadowView;	// IMP=0x0000000000af44b3
- (_Bool)usesDimmingView;	// IMP=0x0000000000af44ab
- (void)returnToKeyboardIfNeeded;	// IMP=0x0000000000af44a5
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x0000000000af4477
- (id)dimmingView;	// IMP=0x0000000000af4319
- (id)inputView;	// IMP=0x0000000000af4304
- (void)setKeyboardDimmed:(_Bool)arg1;	// IMP=0x0000000000af421c
- (void)performShowAnimation;	// IMP=0x0000000000af419a
- (_Bool)isVisible;	// IMP=0x0000000000af4167
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000af3f92
- (id)font;	// IMP=0x0000000000af3f71
- (id)subtitleFont;	// IMP=0x0000000000af3f50
- (void)applicationWillSuspend:(id)arg1;	// IMP=0x0000000000af3f3e
- (_Bool)centerPopUpOverKey;	// IMP=0x0000000000af3f36
@property(readonly) _Bool usesTable;
- (id)table;	// IMP=0x0000000000af3f19
- (void)dealloc;	// IMP=0x0000000000af3e97
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000af3c19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
