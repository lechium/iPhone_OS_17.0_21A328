//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCListener;

@interface SDXPCSession : NSObject
{
    NSXPCListener *_xpcManagerListener;	// 8 = 0x8
    NSMutableArray *_connections;	// 16 = 0x10
}

+ (id)sharedSession;	// IMP=0x00200000000ebbaf
- (void).cxx_destruct;	// IMP=0x00200000000ebe6a
@property(retain) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain) NSXPCListener *xpcManagerListener; // @synthesize xpcManagerListener=_xpcManagerListener;
- (void)connectionManagerDidInvalidate:(id)arg1;	// IMP=0x00100000000ebe0e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000ebd76
- (void)stop;	// IMP=0x00100000000ebd27
- (void)start;	// IMP=0x00100000000ebc71
- (id)init;	// IMP=0x00100000000ebc04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

