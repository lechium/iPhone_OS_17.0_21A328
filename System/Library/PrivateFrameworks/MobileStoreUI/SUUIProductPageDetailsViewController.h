//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, NSOperationQueue, NSString, SUUIClientContext, SUUILayoutCache, SUUIProductPage, SUUIProductPageHeaderViewController, SUUIProductPageTableHeaderOnlySection, SUUIProductPageTableTextBoxSection, SUUIProductPageTableViewController, SUUIResourceLoader, UIScrollView;
@protocol SUUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUIProductPageDetailsViewController : UIViewController
{
    _Bool _askPermission;	// 8 = 0x8
    SUUIClientContext *_clientContext;	// 16 = 0x10
    SUUIProductPageTableHeaderOnlySection *_copyrightSection;	// 24 = 0x18
    id <SUUIProductPageChildViewControllerDelegate> _delegate;	// 32 = 0x20
    SUUIProductPageTableTextBoxSection *_descriptionSection;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    SUUIProductPage *_productPage;	// 56 = 0x38
    SUUIResourceLoader *_resourceLoader;	// 64 = 0x40
    SUUIProductPageTableHeaderOnlySection *_screenshotsSection;	// 72 = 0x48
    NSMutableArray *_sections;	// 80 = 0x50
    SUUIProductPageTableTextBoxSection *_storeNotesSection;	// 88 = 0x58
    SUUIProductPageTableViewController *_tableViewController;	// 96 = 0x60
    SUUILayoutCache *_textLayoutCache;	// 104 = 0x68
    SUUIProductPageTableTextBoxSection *_whatsNewSection;	// 112 = 0x70
}

+ (double)defaultPageWidthForUserInterfaceIdiom:(long long)arg1;	// IMP=0x0010000000323d9e
- (void).cxx_destruct;	// IMP=0x0000000000327767
@property(readonly, nonatomic) SUUIProductPage *productPage; // @synthesize productPage=_productPage;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <SUUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) _Bool askPermission; // @synthesize askPermission=_askPermission;
- (id)_whatsNewSection;	// IMP=0x00000000003274dc
- (id)_textLayoutRequestWithText:(id)arg1 widthOffset:(double)arg2;	// IMP=0x000000000032741c
- (id)_tableViewController;	// IMP=0x00000000003272ba
- (id)_storeNotesSection;	// IMP=0x00000000003270bf
- (id)_screenshotsSection;	// IMP=0x0000000000326e94
- (id)_resourceLoader;	// IMP=0x0000000000326dd2
- (id)_parentBundlesSection;	// IMP=0x00000000003269f4
- (id)_infoSection;	// IMP=0x000000000032671c
- (id)_featuresSection;	// IMP=0x0000000000326491
- (id)_descriptionSection;	// IMP=0x00000000003262c1
- (id)_copyrightSection;	// IMP=0x00000000003260c3
- (void)_configureSwooshSection:(id)arg1;	// IMP=0x0000000000325dc0
- (id)_bundledAppsSection;	// IMP=0x0000000000325908
- (void)_addTapRecognizerForView:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000325833
- (void)_expandSection:(id)arg1;	// IMP=0x0000000000325592
- (id)tableViewForTableViewSection:(id)arg1;	// IMP=0x0000000000325575
- (void)itemStateCenterRestrictionsChanged:(id)arg1;	// IMP=0x000000000032526d
- (void)screenshotsWillBeginDragging:(id)arg1;	// IMP=0x00000000003251ba
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(retain, nonatomic) SUUIProductPageHeaderViewController *headerViewController;
- (void)loadView;	// IMP=0x000000000032420a
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000323d55
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000323d0c
- (void)dealloc;	// IMP=0x0000000000323b77
- (id)initWithProductPage:(id)arg1;	// IMP=0x0000000000323ac9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
