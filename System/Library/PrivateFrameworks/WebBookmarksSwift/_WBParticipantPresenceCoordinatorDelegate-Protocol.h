//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, _WBParticipantPresenceCoordinator;

@protocol _WBParticipantPresenceCoordinatorDelegate
- (void)participantPresenceCoordinator:(_WBParticipantPresenceCoordinator *)arg1 didUpdateActiveParticipants:(NSSet *)arg2 inTabWithIdentifier:(NSString *)arg3;
- (void)participantPresenceCoordinator:(_WBParticipantPresenceCoordinator *)arg1 didUpdateActiveParticipants:(NSSet *)arg2 inTabGroupWithIdentifier:(NSString *)arg3;
@end

