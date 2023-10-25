//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCSBusinessQueryController, NSString, NSXPCConnection, NSXPCListener;

@interface BCDXPCDaemonServer : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    BCSBusinessQueryController *_queryController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000205d
@property(retain, nonatomic) BCSBusinessQueryController *queryController; // @synthesize queryController=_queryController;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000001ecf
- (id)initWithServiceName:(id)arg1 queryController:(id)arg2;	// IMP=0x0010000000001d6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
