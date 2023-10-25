//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBAuditTokenInfo;

@interface PBCFUserNotificationPasteAnnouncer : NSObject
{
    struct __CFUserNotification *_userNotification;	// 8 = 0x8
    CDUnknownBlockType _replyBlock;	// 16 = 0x10
    PBAuditTokenInfo *_auditTokenInfo;	// 24 = 0x18
}

+ (void)announcePaste:(id)arg1;	// IMP=0x002000000001a8a3
+ (void)announceDeniedPaste;	// IMP=0x001000000001a811
- (void).cxx_destruct;	// IMP=0x002000000001a95d
- (void)dealloc;	// IMP=0x001000000001a8fc
- (void)authorizationDidCompleteWithPasteAllowed:(_Bool)arg1;	// IMP=0x001000000001a7cf
- (void)invalidate;	// IMP=0x001000000001a791
- (void)requestAuthorizationForPaste:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a37a
- (id)initWithAuditTokenInfo:(id)arg1;	// IMP=0x001000000001a30f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
