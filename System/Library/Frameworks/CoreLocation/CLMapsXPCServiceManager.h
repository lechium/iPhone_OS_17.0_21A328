//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CLMapsXPCServiceManager : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000008af65
+ (id)sharedInstance;	// IMP=0x006000000008ad12
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)clearMemoryAndExitHelperProcessCleanly;	// IMP=0x000000000008c14a
- (void)collectMapDataOfType:(long long)arg1 aroundCoordinate:(struct CLLocationCoordinate2D)arg2 inRadius:(double)arg3 allowNetwork:(_Bool)arg4 WithReply:(CDUnknownBlockType)arg5;	// IMP=0x000000000008b440
- (void)dealloc;	// IMP=0x000000000008b263
- (void)createConnection;	// IMP=0x000000000008af89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008af80

@end

