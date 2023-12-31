//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface BCSNotificationService : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000018cda
- (void)stopNFCReader;	// IMP=0x0000000000018cd4
- (void)startNFCReaderWithDelegate:(id)arg1;	// IMP=0x0000000000018cce
- (void)_didReceiveNotificationResponse:(id)arg1;	// IMP=0x0000000000018c61
- (void)didReceiveNotificationResponse:(id)arg1;	// IMP=0x0000000000018bbb
- (void)_cancelNotificationsForCodeType:(long long)arg1;	// IMP=0x0000000000018b55
- (void)cancelNotificationsForCodeType:(long long)arg1;	// IMP=0x0000000000018ae9
- (void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000018675
- (id)initWithConnection:(id)arg1;	// IMP=0x00000000000185f7

@end

