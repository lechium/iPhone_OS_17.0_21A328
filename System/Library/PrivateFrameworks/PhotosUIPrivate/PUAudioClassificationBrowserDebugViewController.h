//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSMutableDictionary, PUAudioClassificationAssetBrowserDebugViewController;

__attribute__((visibility("hidden")))
@interface PUAudioClassificationBrowserDebugViewController : UITableViewController
{
    NSArray *_audioClassificationNames;	// 8 = 0x8
    NSMutableDictionary *_assetsByAudioClassificationName;	// 16 = 0x10
    PUAudioClassificationAssetBrowserDebugViewController *_assetCollectionViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004d1655
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000004d145a
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000004d143d
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00000000004d1437
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00000000004d142f
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x00000000004d1427
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x00000000004d1421
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000004d1413
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000004d1215
- (void)_fetchAudioClassifications;	// IMP=0x00000000004d0a4a
- (void)viewDidLoad;	// IMP=0x00000000004d0947

@end

