//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDMessagingRelayMessage, CSDRelayIDSMessenger, IDSDestination, IDSDevice, NSArray;

@protocol CSDRelayIDSMessengerDelegate <NSObject>
- (void)messengerConnectionCouldNotEstablishLink:(CSDRelayIDSMessenger *)arg1 forIdentifiers:(NSArray *)arg2 didStartConnecting:(_Bool)arg3;
- (void)messengerConnectionFailed:(CSDRelayIDSMessenger *)arg1 forIdentifiers:(NSArray *)arg2 didStartConnecting:(_Bool)arg3;
- (void)messengerConnectionEnded:(CSDRelayIDSMessenger *)arg1 forIdentifiers:(NSArray *)arg2 didStartConnecting:(_Bool)arg3;
- (void)messenger:(CSDRelayIDSMessenger *)arg1 handledMessage:(CSDMessagingRelayMessage *)arg2 fromDestination:(IDSDestination *)arg3 device:(IDSDevice *)arg4;
@end
