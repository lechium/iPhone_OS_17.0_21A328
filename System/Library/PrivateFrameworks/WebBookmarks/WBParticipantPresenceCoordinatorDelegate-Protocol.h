//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebBookmarks/NSObject-Protocol.h>

@class NSSet, NSString, WBParticipantPresenceCoordinator;

@protocol WBParticipantPresenceCoordinatorDelegate <NSObject>

@optional
- (void)participantPresenceCoordinator:(WBParticipantPresenceCoordinator *)arg1 didUpdateActiveParticipants:(NSSet *)arg2 inTabWithIdentifier:(NSString *)arg3;
- (void)participantPresenceCoordinator:(WBParticipantPresenceCoordinator *)arg1 didUpdateActiveParticipants:(NSSet *)arg2 inTabGroupWithIdentifier:(NSString *)arg3;
@end

