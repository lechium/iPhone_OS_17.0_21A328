//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCharacteristicEventDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFEventTrigger, MKFHome, MKFService;

__attribute__((visibility("hidden")))
@interface _MKFCharacteristicEvent
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000cbdec9
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000cbde15
+ (Class)cd_modelClass;	// IMP=0x0010000000040f43
+ (id)fetchRequest;	// IMP=0x0010000000d352d2
@property(readonly) id <MKFHome> home;
- (id)castIfCharacteristicEvent;	// IMP=0x0000000000cbddbc
@property(readonly, copy, nonatomic) MKFCharacteristicEventDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x0000000000cbdcea

// Remaining properties
@property(copy, nonatomic) NSNumber *characteristicID; // @dynamic characteristicID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *endEvent;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) id <MKFService> service; // @dynamic service;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFEventTrigger> trigger;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

