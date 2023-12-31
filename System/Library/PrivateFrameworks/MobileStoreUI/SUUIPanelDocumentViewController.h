//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSString, SUUILayoutCache, SUUIMetricsImpressionSession, SUUIPanelTemplateViewElement, SUUIPanelView, SUUIViewElementLayoutContext, UIImageView, UIScrollView;

__attribute__((visibility("hidden")))
@interface SUUIPanelDocumentViewController : SUUIViewController
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
    _Bool _didAttemptBecomeFirstResponder;	// 16 = 0x10
    struct CGRect _keyboardFrame;	// 24 = 0x18
    long long _lastContentWidth;	// 56 = 0x38
    SUUIViewElementLayoutContext *_layoutContext;	// 64 = 0x40
    SUUIMetricsImpressionSession *_metricsImpressionSession;	// 72 = 0x48
    SUUIPanelView *_panelView;	// 80 = 0x50
    SUUILayoutCache *_textLayoutCache;	// 88 = 0x58
    UIScrollView *_scrollView;	// 96 = 0x60
    SUUIPanelTemplateViewElement *_templateElement;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000037e659
- (id)_templateBackgroundColor;	// IMP=0x000000000037e59f
- (void)_requestPanelViewLayoutWithContentWidth:(long long)arg1 forced:(_Bool)arg2;	// IMP=0x000000000037e4bf
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize)arg1;	// IMP=0x000000000037e35a
- (void)_reloadContentSize;	// IMP=0x000000000037e12c
- (void)_reloadBackgroundImageView;	// IMP=0x000000000037df55
- (void)_layoutScrollView;	// IMP=0x000000000037dead
- (id)_layoutContext;	// IMP=0x000000000037dcfa
- (void)_layoutBackgroundImageView;	// IMP=0x000000000037dabd
- (id)_imageForBackgroundImageElement:(id)arg1;	// IMP=0x000000000037d853
- (id)_activeBackgroundColor;	// IMP=0x000000000037d7e1
- (void)_keyboardWillChangeNotification:(id)arg1;	// IMP=0x000000000037d71b
- (void)_keyboardHideNotification:(id)arg1;	// IMP=0x000000000037d6cf
- (void)layoutCacheDidFinishBatch:(id)arg1;	// IMP=0x000000000037d61b
- (id)impressionableViewElements;	// IMP=0x000000000037d5fe
- (void)documentDidUpdate:(id)arg1;	// IMP=0x000000000037d495
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x000000000037d33a
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000037d2b8
- (void)viewWillLayoutSubviews;	// IMP=0x000000000037d247
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000037d1eb
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000037d140
- (void)viewDidLayoutSubviews;	// IMP=0x000000000037d0c2
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000037cf0f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000037cd73
- (void)loadView;	// IMP=0x000000000037cb81
- (id)contentScrollView;	// IMP=0x000000000037cb6c
- (void)dealloc;	// IMP=0x000000000037ca5a
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x000000000037c91d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

