//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKChallengeCompletedBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00400000001d5aef
- (void)handleAction:(id)arg1;	// IMP=0x00400000001d7bbb
- (unsigned long long)launchEventType;	// IMP=0x00100000001d7bb0
- (void)assembleBulletin;	// IMP=0x00100000001d774d
- (void)notifyClient:(id)arg1;	// IMP=0x00100000001d75a5
- (id)init;	// IMP=0x00100000001d5ac0

@end

