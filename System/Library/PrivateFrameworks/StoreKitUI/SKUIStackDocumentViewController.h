//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewController.h"

@class IKAppDocument, NSArray, NSMapTable, NSString, SKUIIndexBarControlController, SKUIResourceLoader, SKUIStackTemplateElement, SKUIStorePageSectionsViewController;

__attribute__((visibility("hidden")))
@interface SKUIStackDocumentViewController : SKUIViewController
{
    IKAppDocument *_document;	// 8 = 0x8
    NSArray *_entryListControllers;	// 16 = 0x10
    _Bool _hasResetState;	// 24 = 0x18
    SKUIIndexBarControlController *_indexBarControlController;	// 32 = 0x20
    long long _lastNeedsMoreCount;	// 40 = 0x28
    long long _layoutStyle;	// 48 = 0x30
    SKUIResourceLoader *_resourceLoader;	// 56 = 0x38
    SKUIStackTemplateElement *_templateElement;	// 64 = 0x40
    NSMapTable *_viewElementToEntryListController;	// 72 = 0x48
    SKUIStorePageSectionsViewController *_sectionsViewController;	// 80 = 0x50
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x00100000000a0b25
- (void).cxx_destruct;	// IMP=0x00000000000a4223
@property(readonly, nonatomic) SKUIStorePageSectionsViewController *sectionsViewController; // @synthesize sectionsViewController=_sectionsViewController;
- (void)_updateIndexBarVisibility;	// IMP=0x00000000000a411a
- (void)_updateEntryListControllersWithReload:(_Bool)arg1;	// IMP=0x00000000000a3a6d
- (_Bool)_tryToScrollToSectionAtIndexPath:(id)arg1;	// IMP=0x00000000000a3240
- (_Bool)_shouldShowIndexBar;	// IMP=0x00000000000a30ac
- (id)_resourceLoader;	// IMP=0x00000000000a2fd5
- (void)_resetStateForDocumentNotification:(id)arg1;	// IMP=0x00000000000a2f6f
- (void)_resetState;	// IMP=0x00000000000a2f5a
- (id)_pullToRefreshElement;	// IMP=0x00000000000a2f38
- (long long)_pinningTransitionStyle;	// IMP=0x00000000000a2ee5
- (id)_pageSplitsDescription;	// IMP=0x00000000000a2677
- (id)_pageComponentsWithViewElements:(id)arg1;	// IMP=0x00000000000a2480
- (long long)_maxGlobalIndex;	// IMP=0x00000000000a23b9
- (id)_indexPathFromGlobalIndex:(long long)arg1;	// IMP=0x00000000000a22c3
- (id)_indexBarViewElement;	// IMP=0x00000000000a22a6
- (id)_indexBarControlController;	// IMP=0x00000000000a2114
- (long long)_globalIndexFromIndexPath:(id)arg1;	// IMP=0x00000000000a1feb
- (void)_configureIndexBarControl:(id)arg1;	// IMP=0x00000000000a1ddf
- (id)_colorScheme;	// IMP=0x00000000000a1d28
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;	// IMP=0x00000000000a1c42
- (void)resourceLoaderDidBeginLoading:(id)arg1;	// IMP=0x00000000000a1bae
- (void)sectionsViewController:(id)arg1 willScrollToOffset:(struct CGPoint)arg2 visibleRange:(struct SKUIIndexPathRange)arg3;	// IMP=0x00000000000a1a27
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;	// IMP=0x00000000000a199c
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a1703
- (void)refresh:(id)arg1 refreshControl:(id)arg2;	// IMP=0x00000000000a15aa
- (void)indexBarEntryListControllerDidInvalidate:(id)arg1;	// IMP=0x00000000000a150d
- (void)indexBarControlControllerDidSelectBeyondTop:(id)arg1;	// IMP=0x00000000000a144f
- (void)indexBarControlControllerDidSelectBeyondBottom:(id)arg1;	// IMP=0x00000000000a136e
- (void)indexBarControlController:(id)arg1 didSelectEntryDescriptorAtIndexPath:(id)arg2;	// IMP=0x00000000000a11f8
- (long long)numberOfSectionsInIndexBarControlController:(id)arg1;	// IMP=0x00000000000a11ca
- (long long)indexBarControlController:(id)arg1 numberOfEntryDescriptorsInSection:(long long)arg2;	// IMP=0x00000000000a1167
- (id)indexBarControlController:(id)arg1 entryDescriptorAtIndexPath:(id)arg2;	// IMP=0x00000000000a10a8
- (id)impressionableViewElements;	// IMP=0x00000000000a108b
- (void)documentMediaQueriesDidUpdate:(id)arg1;	// IMP=0x00000000000a106e
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000000a0fce
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x00000000000a0f6e
- (void)loadView;	// IMP=0x00000000000a0b2d
- (void)skui_viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000a0ad1
- (void)documentDidUpdate:(id)arg1 withTemplate:(id)arg2;	// IMP=0x00000000000a049e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000a0455
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000a040c
- (void)dealloc;	// IMP=0x00000000000a0249
- (id)initWithTemplateElement:(id)arg1 layoutStyle:(long long)arg2;	// IMP=0x00000000000a0120

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

