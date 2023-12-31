//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSObject, NSString, SUUIActivityIndicatorView, SUUIActivityIndicatorViewElement, SUUILayoutCache, SUUILoadingTemplateViewElement, SUUIViewElementLayoutContext;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SUUILoadingDocumentViewController : SUUIViewController
{
    SUUIActivityIndicatorViewElement *_activityIndicatorElement;	// 8 = 0x8
    SUUIActivityIndicatorView *_activityIndicatorView;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_delayTimer;	// 24 = 0x18
    SUUILayoutCache *_layoutCache;	// 32 = 0x20
    SUUILoadingTemplateViewElement *_templateElement;	// 40 = 0x28
    SUUIViewElementLayoutContext *_viewLayoutContext;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000023737a
- (id)_viewLayoutContext;	// IMP=0x0000000000237201
- (struct CGRect)_computedFrameForActivityIndicatorView;	// IMP=0x000000000023707a
- (void)_showActivityIndicator;	// IMP=0x0000000000236e15
- (void)_reloadViewStyling;	// IMP=0x0000000000236cea
- (id)_layoutCache;	// IMP=0x0000000000236ca9
- (id)_activityIndicator;	// IMP=0x0000000000236c61
- (void)documentDidUpdate:(id)arg1;	// IMP=0x0000000000236c13
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000236b92
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000236b2d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002369d9
- (void)loadView;	// IMP=0x00000000002368d1
- (void)dealloc;	// IMP=0x0000000000236871
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x0000000000236803
- (id)initWithActivityIndicatorElement:(id)arg1;	// IMP=0x0000000000236795

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

