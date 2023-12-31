//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SFScreenTimeOverlayViewController, TabDocument, _SFBrowserView, _SFLinkPreviewHeader;

__attribute__((visibility("hidden")))
@interface LinkPreviewViewController : UIViewController
{
    SFScreenTimeOverlayViewController *_screenTimeOverlayViewController;	// 8 = 0x8
    TabDocument *_previewTabDocument;	// 16 = 0x10
    _SFBrowserView *_browserView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000091540
@property(readonly, nonatomic) _SFBrowserView *browserView; // @synthesize browserView=_browserView;
@property(readonly, nonatomic) __weak TabDocument *previewTabDocument; // @synthesize previewTabDocument=_previewTabDocument;
@property(retain, nonatomic) SFScreenTimeOverlayViewController *screenTimeOverlayViewController; // @synthesize screenTimeOverlayViewController=_screenTimeOverlayViewController;
- (void)fluidProgressRocketAnimationDidComplete;	// IMP=0x00000000000914eb
- (id)currentFluidProgressStateSource;	// IMP=0x00000000000914d2
- (void)displayHostedScreenTimeView;	// IMP=0x0000000000091321
- (void)willCommitPreviewedWebView;	// IMP=0x0000000000091208
- (void)updatePreviewLoadingUIWithURLString:(id)arg1;	// IMP=0x00000000000911eb
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000091121
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000910c3
@property(readonly, nonatomic) _SFLinkPreviewHeader *previewHeader;
- (void)loadView;	// IMP=0x0000000000090cd6
- (id)initWithTabDocument:(id)arg1;	// IMP=0x0000000000090c0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

