//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SFWebAppDataProvider;

__attribute__((visibility("hidden")))
@interface SFAddToHomeScreenServiceViewController : UIViewController
{
    SFWebAppDataProvider *_provider;	// 8 = 0x8
}

+ (id)_exportedInterface;	// IMP=0x00100000001a22b9
+ (id)_remoteViewControllerInterface;	// IMP=0x00100000001a2299
- (void).cxx_destruct;	// IMP=0x00000000001a2867
- (void)dataProvider:(id)arg1 didFinishWithResult:(_Bool)arg2;	// IMP=0x00000000001a281d
- (void)didFetchWebClipMetadata:(id)arg1;	// IMP=0x00000000001a2755
- (void)didFetchManifestData:(id)arg1;	// IMP=0x00000000001a268d
- (void)loadURL:(id)arg1;	// IMP=0x00000000001a2670
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a25a5
- (void)viewDidLoad;	// IMP=0x00000000001a2414

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

