//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSMutableArray, NSString, SUUIActivityIndicatorView, SUUIChartsTemplateViewElement, SUUILayoutCache, SUUIModernChartsView, SUUIResourceLoader, SUUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SUUIModernChartsDocumentViewController : SUUIViewController
{
    SUUIActivityIndicatorView *_activityIndicatorView;	// 8 = 0x8
    SUUIModernChartsView *_chartsView;	// 16 = 0x10
    NSMutableArray *_columnViewControllers;	// 24 = 0x18
    SUUILayoutCache *_layoutCache;	// 32 = 0x20
    SUUIChartsTemplateViewElement *_templateElement;	// 40 = 0x28
    SUUIViewElementLayoutContext *_viewLayoutContext;	// 48 = 0x30
    SUUIResourceLoader *_resourceLoader;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002ae9f8
- (id)_resourceLoader;	// IMP=0x00000000002ae921
- (id)_viewLayoutContext;	// IMP=0x00000000002ae7d4
- (struct CGRect)_computedFrameForActivityIndicatorView;	// IMP=0x00000000002ae6bc
- (void)_showActivityIndicator;	// IMP=0x00000000002ae481
- (void)_reloadWithTemplateElement:(id)arg1;	// IMP=0x00000000002ae21d
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;	// IMP=0x00000000002adb83
- (id)_layoutCache;	// IMP=0x00000000002adb42
- (void)_hideActivityIndicator;	// IMP=0x00000000002adb0a
- (struct UIEdgeInsets)_contentInset;	// IMP=0x00000000002ada56
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;	// IMP=0x00000000002ad970
- (void)resourceLoaderDidBeginLoading:(id)arg1;	// IMP=0x00000000002ad8dc
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002ad818
- (void)loadView;	// IMP=0x00000000002ad758
- (id)contentScrollView;	// IMP=0x00000000002ad750
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ad363
- (void)documentMediaQueriesDidUpdate:(id)arg1;	// IMP=0x00000000002ad234
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000002ad1af
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x00000000002ad147

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

