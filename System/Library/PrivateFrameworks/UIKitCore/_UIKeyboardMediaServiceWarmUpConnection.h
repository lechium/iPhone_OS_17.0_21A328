//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKeyboardMediaServiceWarmUpConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedConnection;	// IMP=0x00600000012721d4
+ (void)warmUp;	// IMP=0x0060000001272190
- (void).cxx_destruct;	// IMP=0x00000000012726fe
- (void)warmUp;	// IMP=0x0000000001272229

@end

