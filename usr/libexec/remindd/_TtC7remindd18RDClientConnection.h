//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC7remindd18RDClientConnection : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *clientIdentity;	// 24 = 0x18
    MISSING_TYPE *xpcDaemon;	// 72 = 0x48
    MISSING_TYPE *isUserInteractive;	// 88 = 0x58
    MISSING_TYPE *xpcConnection;	// 96 = 0x60
    MISSING_TYPE *notificationSubscriptionQueue;	// 104 = 0x68
    MISSING_TYPE *keepAliveTransaction;	// 112 = 0x70
    MISSING_TYPE *cancellables;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x004000000053c270
- (id)init;	// IMP=0x001000000053d0b0
@property(nonatomic, readonly) NSString *description;
- (void)dealloc;	// IMP=0x001000000053c220

@end

