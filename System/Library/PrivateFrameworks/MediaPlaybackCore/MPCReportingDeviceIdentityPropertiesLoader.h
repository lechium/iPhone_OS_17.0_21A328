//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCReportingDeviceIdentityPropertiesLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialWorkQueue;	// 16 = 0x10
}

+ (id)sharedLoader;	// IMP=0x0010000000160c7b
- (void).cxx_destruct;	// IMP=0x0000000000160932
- (void)loadReportingIdentityPropertiesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001608a5
- (id)init;	// IMP=0x000000000016082c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

