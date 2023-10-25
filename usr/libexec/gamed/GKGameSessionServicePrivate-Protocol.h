//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GKGameSessionService-Protocol.h"

@class NSArray, NSString;

@protocol GKGameSessionServicePrivate <GKGameSessionService>
- (oneway void)saveConnectionStateForLostPlayerWithCloudID:(NSString *)arg1 sessionIdentifier:(NSString *)arg2 handler:(void (^)(NSError *))arg3;
- (oneway void)sendInvitePushForSessionWithID:(NSString *)arg1 userMessage:(NSString *)arg2 recipientIDs:(NSArray *)arg3 handler:(void (^)(NSError *))arg4;
- (oneway void)getFriendPlayersWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getZonesWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
@end
