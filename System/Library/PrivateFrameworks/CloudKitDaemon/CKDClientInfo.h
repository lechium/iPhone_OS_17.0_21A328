//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CKDClientInfo : NSObject
{
    NSString *_cachedHostname;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_hostCallbackQueue;	// 16 = 0x10
    struct MGNotificationTokenStruct *_hostNotificationToken;	// 24 = 0x18
}

+ (id)sharedClientInfo;	// IMP=0x0000000000162363
- (void).cxx_destruct;	// IMP=0x00000000001627fb
@property(readonly, nonatomic) NSString *hostname;
- (void)_refreshHostname;	// IMP=0x0000000000162668
- (void)dealloc;	// IMP=0x000000000016262e
- (id)initInternal;	// IMP=0x0000000000162475
- (id)init;	// IMP=0x00000000001623c8

@end

