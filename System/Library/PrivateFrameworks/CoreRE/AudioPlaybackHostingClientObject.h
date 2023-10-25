//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AudioPlaybackHostingClientObject : NSObject
{
    unsigned long long _connectionIdentifier;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003590c3
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly) unsigned long long connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
- (void)start;	// IMP=0x000000000035909f
- (id)initWithConnection:(id)arg1 connectionIdentifier:(unsigned long long)arg2;	// IMP=0x0000000000359014

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
