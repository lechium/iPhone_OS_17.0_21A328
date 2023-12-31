//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSOperationQueue, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, TSUURLTrackerDelegate;

__attribute__((visibility("hidden")))
@interface TSUURLTrackerFilePresenter : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    _Bool _hasStarted;	// 16 = 0x10
    NSURL *_URLIfAvailable;	// 24 = 0x18
    NSData *_bookmarkDataIfAvailable;	// 32 = 0x20
    NSError *_latestError;	// 40 = 0x28
    id <TSUURLTrackerDelegate> _delegate;	// 48 = 0x30
    NSOperationQueue *_presentedItemOperationQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002ac90c
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(readonly, copy) NSString *description;
- (id)_description;	// IMP=0x00000000002ac78c
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;	// IMP=0x00000000002ac6bd
- (void)presentedItemDidMoveToURL:(id)arg1;	// IMP=0x00000000002ac5bf
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ac534
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ac4b9
@property(readonly, copy) NSURL *presentedItemURL;
- (id)_bookmarkDataAndReturnError:(id *)arg1;	// IMP=0x00000000002ac20c
- (id)bookmarkDataAndReturnError:(id *)arg1;	// IMP=0x00000000002ac06c
- (void)stop;	// IMP=0x00000000002abf8d
- (void)pause;	// IMP=0x00000000002abe8b
- (void)startOrResume;	// IMP=0x00000000002abd69
- (id)_bookmarkData;	// IMP=0x00000000002abc95
@property(readonly) NSData *bookmarkData;
- (id)_URLAndReturnError:(id *)arg1;	// IMP=0x00000000002ab860
- (id)URLAndReturnError:(id *)arg1;	// IMP=0x00000000002ab69b
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000002ab545
- (id)init;	// IMP=0x00000000002ab41c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

