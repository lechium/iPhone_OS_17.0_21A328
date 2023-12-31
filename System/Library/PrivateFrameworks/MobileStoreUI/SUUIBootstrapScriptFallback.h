//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SUUIBootstrapScriptFallback : NSObject
{
    NSURL *_cacheFolder;	// 8 = 0x8
    NSString *_cacheFilename;	// 16 = 0x10
    double _maximumAge;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)cacheFilenameForStoreFrontIdentifier:(id)arg1;	// IMP=0x00100000001802b5
+ (id)defaultCacheFolder;	// IMP=0x0010000000180118
- (void).cxx_destruct;	// IMP=0x0000000000181ba3
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property double maximumAge; // @synthesize maximumAge=_maximumAge;
@property(readonly, copy, nonatomic) NSString *cacheFilename; // @synthesize cacheFilename=_cacheFilename;
@property(readonly, nonatomic) NSURL *cacheFolder; // @synthesize cacheFolder=_cacheFolder;
- (_Bool)_setCacheAge:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000181977
- (void)_runWhenBackgroundWorkFinished:(CDUnknownBlockType)arg1;	// IMP=0x00000000001818e4
- (void)_logError:(id)arg1 forOperation:(id)arg2;	// IMP=0x0000000000181711
@property(readonly, nonatomic) long long _unsynchronizedState;
- (void)_createCacheDirectoriesIfNeeded;	// IMP=0x000000000018147b
- (void)invalidate;	// IMP=0x0000000000180f5e
- (void)scriptEvaluated:(id)arg1;	// IMP=0x0000000000180df6
- (id)retrieveScript:(id *)arg1;	// IMP=0x0000000000180998
- (_Bool)canFallbackForError:(id)arg1;	// IMP=0x0000000000180778
@property(readonly) _Bool isBagAvailable;
@property(readonly, copy, nonatomic) NSURL *cachedFileLocation;
@property(readonly) long long state;
- (id)init;	// IMP=0x0000000000180517
- (id)initWithFilename:(id)arg1;	// IMP=0x00000000001804a1
- (id)initWithCacheFolder:(id)arg1 filename:(id)arg2;	// IMP=0x0000000000180334

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

