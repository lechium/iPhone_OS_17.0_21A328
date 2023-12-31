//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSMutableArray, NSString, SUUIChartColumnsView, SUUIChartsTemplateViewElement, SUUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SUUIChartsDocumentViewController : SUUIViewController
{
    SUUIChartColumnsView *_chartsView;	// 8 = 0x8
    NSMutableArray *_columnViewControllers;	// 16 = 0x10
    SUUIChartsTemplateViewElement *_templateElement;	// 24 = 0x18
    SUUIResourceLoader *_resourceLoader;	// 32 = 0x20
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x0010000000025ca0
- (void).cxx_destruct;	// IMP=0x0000000000026feb
- (id)_resourceLoader;	// IMP=0x0000000000026f14
- (long long)_visibleColumnCountForWidth:(double)arg1;	// IMP=0x0000000000026ee8
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;	// IMP=0x0000000000026787
- (id)_columnViewControllers;	// IMP=0x0000000000026740
- (struct UIEdgeInsets)_chartInsets;	// IMP=0x000000000002669a
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;	// IMP=0x00000000000265b4
- (void)resourceLoaderDidBeginLoading:(id)arg1;	// IMP=0x0000000000026520
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000261d3
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000025ec7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000025dda
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x0000000000025d8f
- (void)loadView;	// IMP=0x0000000000025cf8
- (id)contentScrollView;	// IMP=0x0000000000025ca8
- (void)suui_viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000025b2d
- (void)documentMediaQueriesDidUpdate:(id)arg1;	// IMP=0x00000000000259fe
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000000257b9
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x000000000002574b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

