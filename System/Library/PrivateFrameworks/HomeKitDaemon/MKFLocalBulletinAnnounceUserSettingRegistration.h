//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface MKFLocalBulletinAnnounceUserSettingRegistration
{
}

+ (id)fetchAnnounceRegistrationWithHomeUUID:(id)arg1 managedObjectContext:(id)arg2;	// IMP=0x0080000000ae8c3c
+ (id)fetchRequest;	// IMP=0x0080000000d34e72

// Remaining properties
@property(nonatomic) long long announceNotificationMode; // @dynamic announceNotificationMode;
@property(copy, nonatomic) NSUUID *homeUUID; // @dynamic homeUUID;

@end

