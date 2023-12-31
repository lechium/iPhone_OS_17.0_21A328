//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFTimePeriodBulletinConditionDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFBulletinRegistration, MKFBulletinTimeSpecification, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFTimePeriodBulletinCondition
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000002faac7
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000002faa13
+ (id)fetchRequest;	// IMP=0x0010000000d35c32
- (void)removeStartElementObject:(id)arg1;	// IMP=0x00000000002faf63
- (void)addStartElementObject:(id)arg1;	// IMP=0x00000000002faf47
- (id)findStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002faf24
- (id)createStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002faf01
- (id)materializeOrCreateStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000002faedb
- (id)findStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002faeb8
- (id)createStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002fae95
- (id)materializeOrCreateStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000002fae6f
- (id)createStartElementRelationOfType:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000002fadf4
- (id)materializeOrCreateStartElementRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(_Bool *)arg3;	// IMP=0x00000000002fad73
- (void)removeEndElementObject:(id)arg1;	// IMP=0x00000000002fad57
- (void)addEndElementObject:(id)arg1;	// IMP=0x00000000002fad3b
- (id)findEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002fad18
- (id)createEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002facf5
- (id)materializeOrCreateEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000002faccf
- (id)findEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002facac
- (id)createEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002fac89
- (id)materializeOrCreateEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000002fac63
- (id)createEndElementRelationOfType:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000002fabe8
- (id)materializeOrCreateEndElementRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(_Bool *)arg3;	// IMP=0x00000000002fab67
@property(readonly) id <MKFHome> home;
- (id)castIfTimePeriodBulletinCondition;	// IMP=0x00000000002fab0e
@property(readonly, copy, nonatomic) MKFTimePeriodBulletinConditionDatabaseID *databaseID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFBulletinRegistration> bulletinRegistration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MKFBulletinTimeSpecification> endElement; // @dynamic endElement;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) id <MKFBulletinTimeSpecification> startElement; // @dynamic startElement;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

