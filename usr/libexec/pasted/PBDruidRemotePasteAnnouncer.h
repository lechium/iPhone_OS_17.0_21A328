//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DRPasteAnnouncement, NSString, NSXPCConnection;

@interface PBDruidRemotePasteAnnouncer : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    DRPasteAnnouncement *_announcement;	// 16 = 0x10
}

+ (void)announceDeniedPaste;	// IMP=0x0020000000017722
+ (void)announcePaste:(id)arg1;	// IMP=0x001000000001757e
- (void).cxx_destruct;	// IMP=0x0020000000017947
@property(readonly) DRPasteAnnouncement *announcement; // @synthesize announcement=_announcement;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;	// IMP=0x00100000000178a5
- (void)invalidate;	// IMP=0x0010000000017524
- (void)requestAuthorizationForPaste:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017050

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

