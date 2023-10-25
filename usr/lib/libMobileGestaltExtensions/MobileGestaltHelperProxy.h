//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol MobileGestaltHelper;

@interface MobileGestaltHelperProxy : NSObject
{
    int _error;	// 8 = 0x8
    id <MobileGestaltHelper> _helper;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
}

+ (id)proxy;	// IMP=0x0060000000001f03
@property int error; // @synthesize error=_error;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly) id <MobileGestaltHelper> helper; // @synthesize helper=_helper;
- (_Bool)proxySetCacheSentinel;	// IMP=0x0000000000001e41
- (_Bool)proxyRebuildCache;	// IMP=0x0000000000001d6c
- (void)invalidate;	// IMP=0x0000000000001d4a
- (id)init;	// IMP=0x0000000000001adb
- (void)dealloc;	// IMP=0x0000000000001a80

@end
