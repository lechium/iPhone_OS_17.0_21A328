//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKTurnBasedMultiplayerClearBulletin
{
    long long _clearType;	// 72 = 0x48
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c12a7
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001c129f
@property long long clearType; // @synthesize clearType=_clearType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001c18dc
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001c16eb
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00100000001c14ea

@end

