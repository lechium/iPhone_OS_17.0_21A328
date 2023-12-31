//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MFDiskFreeSpaceMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_freeSpaceStatusQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_freeSpaceStatusTimerSource;	// 16 = 0x10
    NSLock *_freeSpaceStatusLock;	// 24 = 0x18
    unsigned long long _freeSpaceStatus;	// 32 = 0x20
}

+ (id)defaultMonitor;	// IMP=0x0020000000074984
- (void).cxx_destruct;	// IMP=0x0020000000075032
- (void)handleDidPurgeSpace:(id)arg1;	// IMP=0x001000000007501e
@property(readonly, nonatomic) _Bool hasAdequateFreeSpace;
@property(readonly, nonatomic) _Bool isFreeSpaceCritical;
- (void)getFreeSpaceStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000074ee2
- (unsigned long long)_retrieveFreeSpaceStatus:(id *)arg1;	// IMP=0x0010000000074cc9
@property(nonatomic) unsigned long long freeSpaceStatus; // @synthesize freeSpaceStatus=_freeSpaceStatus;
- (id)init;	// IMP=0x00100000000749d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

