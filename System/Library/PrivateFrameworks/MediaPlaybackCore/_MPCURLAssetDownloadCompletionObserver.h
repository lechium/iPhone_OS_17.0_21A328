//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVURLAsset;

__attribute__((visibility("hidden")))
@interface _MPCURLAssetDownloadCompletionObserver : NSObject
{
    AVURLAsset *_asset;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011afa4
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) __weak AVURLAsset *asset; // @synthesize asset=_asset;
- (void)_notifyCompletionHandlerWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000011aef1
- (void)_downloadCompleteFailedNotification:(id)arg1;	// IMP=0x000000000011ae74
- (void)_downloadCompleteSuccessNotification:(id)arg1;	// IMP=0x000000000011ae5b
- (void)dealloc;	// IMP=0x000000000011ad8e
- (id)initWithAsset:(id)arg1;	// IMP=0x000000000011acb3

@end

