//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUEditPlugin, PUEditPluginManager, UINavigationController, UIViewController;
@protocol PUEditPluginSessionDataSource, PUEditPluginSessionDelegate, PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUEditPluginSession : NSObject
{
    PUEditPluginManager *_pluginManager;	// 8 = 0x8
    UINavigationController *_pluginNavigationController;	// 16 = 0x10
    _Bool _isAvailable;	// 24 = 0x18
    id <PUEditPluginSessionDataSource> _dataSource;	// 32 = 0x20
    id <PUEditPluginSessionDelegate> _delegate;	// 40 = 0x28
    id <PUEditableAsset> _asset;	// 48 = 0x30
    long long _adjustmentType;	// 56 = 0x38
    PUEditPlugin *_currentPlugin;	// 64 = 0x40
    UIViewController *_hostViewController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001ee052
@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(retain, nonatomic) PUEditPlugin *currentPlugin; // @synthesize currentPlugin=_currentPlugin;
@property(nonatomic) long long adjustmentType; // @synthesize adjustmentType=_adjustmentType;
@property(retain, nonatomic) id <PUEditableAsset> asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(nonatomic) __weak id <PUEditPluginSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUEditPluginSessionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)editPluginHostViewController:(id)arg1 didFinishWithCompletionType:(unsigned long long)arg2;	// IMP=0x00000000001edec4
- (void)editPluginHostViewController:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ede36
- (void)editPluginHostViewController:(id)arg1 loadItemProviderWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001edc24
- (void)_launchPlugin:(id)arg1 afterDismissingViewController:(id)arg2;	// IMP=0x00000000001ed791
- (void)presentAlertController:(id)arg1;	// IMP=0x00000000001ed69b
- (void)shouldLaunchPlugin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ed688
- (void)editExtensionActivityViewController:(id)arg1 didSelectActivity:(id)arg2;	// IMP=0x00000000001ed418
- (id)_localizedEditorListTitle;	// IMP=0x00000000001ed3dc
- (void)dismissSession;	// IMP=0x00000000001ed3d6
- (void)_beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3 includeMarkupInList:(_Bool)arg4;	// IMP=0x00000000001ecf14
- (void)beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3 includeMarkupInList:(_Bool)arg4;	// IMP=0x00000000001ece2c
- (id)_linkPresentationImage;	// IMP=0x00000000001ecd4d
- (void)_beginMarkupSessionWithAsset:(id)arg1 fromViewController:(id)arg2;	// IMP=0x00000000001eca84
- (void)beginMarkupSessionWithAsset:(id)arg1 fromViewController:(id)arg2;	// IMP=0x00000000001ec993
- (void)_unlockScreenIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ec525
@property(readonly, nonatomic) _Bool markupIsAvailable;
- (void)updateAvailability;	// IMP=0x00000000001ec385
- (void)_pluginManagerPluginsDidChange:(id)arg1;	// IMP=0x00000000001ec373
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ec2f9
- (unsigned long long)pluginManagerMediaType;	// IMP=0x00000000001ec27c
- (void)dealloc;	// IMP=0x00000000001ec207
- (void)updatePluginManager;	// IMP=0x00000000001ec14e
- (id)init;	// IMP=0x00000000001ec102

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

