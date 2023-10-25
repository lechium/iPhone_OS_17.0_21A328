//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCharacteristicBulletinRegistrationDatabaseID, NSArray, NSDate, NSString, NSUUID;
@protocol MKFCharacteristic, MKFHome, MKFUser;

__attribute__((visibility("hidden")))
@interface _MKFCharacteristicBulletinRegistration
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000b1c874
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000b1c7c0
+ (id)fetchRequest;	// IMP=0x0010000000d352b2
@property(readonly) id <MKFHome> home;
- (id)castIfCharacteristicBulletinRegistration;	// IMP=0x0000000000b1c8bb
@property(readonly, copy, nonatomic) MKFCharacteristicBulletinRegistrationDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) id <MKFCharacteristic> characteristic; // @dynamic characteristic;
@property(readonly, retain, nonatomic) NSArray *conditions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *deviceIdsDestination;
@property(copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFUser> user;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
