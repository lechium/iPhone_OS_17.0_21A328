//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeManagerHomeHandle, MKFHomeManagerHomeDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFHomeManager;

__attribute__((visibility("hidden")))
@interface _MKFHomeManagerHome
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000001c364b
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000001c3597
+ (Class)cd_modelClass;	// IMP=0x00100000002f6d53
+ (id)fetchRequest;	// IMP=0x0010000000d357b2
- (id)castIfHomeManagerHome;	// IMP=0x00000000001c3692
@property(readonly, copy, nonatomic) MKFHomeManagerHomeDatabaseID *databaseID;
- (id)hmd_modelsWithChangeType:(unsigned long long)arg1 detached:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000002f6c63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSNumber *deleted; // @dynamic deleted;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) HMDHomeManagerHomeHandle *handle; // @dynamic handle;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHomeManager> homeManager; // @dynamic homeManager;
@property(retain, nonatomic) id <MKFHomeManager> homeManagerPrimary; // @dynamic homeManagerPrimary;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end
