//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface DRPasteAnnouncer : NSObject
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000beb7
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000bda1
- (void)setupWithAnnouncement:(id)arg1 orMessage:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b9ff
- (void)announcePaste:(id)arg1;	// IMP=0x001000000000b915
- (void)requestAuthorizationForPaste:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b8fe
- (void)announceDeniedPaste;	// IMP=0x001000000000b833
- (id)init;	// IMP=0x001000000000b79f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

