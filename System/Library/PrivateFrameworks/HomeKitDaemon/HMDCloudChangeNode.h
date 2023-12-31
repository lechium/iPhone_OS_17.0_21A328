//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCloudChange, NSMapTable, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCloudChangeNode : HMFObject
{
    _Bool _forceDelete;	// 8 = 0x8
    _Bool _orphaned;	// 9 = 0x9
    NSString *_recordName;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    NSUUID *_parentUuid;	// 32 = 0x20
    NSString *_type;	// 40 = 0x28
    HMDCloudChangeNode *_parent;	// 48 = 0x30
    HMDCloudChange *_change;	// 56 = 0x38
    NSMapTable *_children;	// 64 = 0x40
}

+ (id)shortDescription;	// IMP=0x0060000000296cde
- (void).cxx_destruct;	// IMP=0x0000000000296c5a
@property(retain, nonatomic) NSMapTable *children; // @synthesize children=_children;
@property(retain, nonatomic) HMDCloudChange *change; // @synthesize change=_change;
@property(nonatomic) __weak HMDCloudChangeNode *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) _Bool orphaned; // @synthesize orphaned=_orphaned;
@property(readonly, nonatomic) _Bool forceDelete; // @synthesize forceDelete=_forceDelete;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSUUID *parentUuid; // @synthesize parentUuid=_parentUuid;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
- (void)_markBranchOrphaned;	// IMP=0x0000000000296a31
- (id)_allNodesInBranch;	// IMP=0x0000000000296886
- (void)deleteChildren;	// IMP=0x00000000002965f6
- (void)_updateWithCloudRecord:(id)arg1;	// IMP=0x0000000000296499
- (void)_updateWithChange:(id)arg1;	// IMP=0x0000000000295f9c
- (void)_updateWithModel:(id)arg1;	// IMP=0x0000000000295b8e
- (void)updateRecordMapping:(id)arg1;	// IMP=0x0000000000295841
- (void)removeChild:(id)arg1;	// IMP=0x00000000002957a2
- (void)addChild:(id)arg1;	// IMP=0x00000000002956fc
- (void)logChangeTreeWithIndent:(id)arg1;	// IMP=0x00000000002954ed
- (id)description;	// IMP=0x0000000000295481
- (id)shortDescription;	// IMP=0x000000000029530a
- (id)initWithCloudRecord:(id)arg1;	// IMP=0x000000000029528c
- (id)initWithChange:(id)arg1;	// IMP=0x0000000000295173
- (id)initWithModel:(id)arg1;	// IMP=0x0000000000294f68
- (id)initWithRecordMapping:(id)arg1;	// IMP=0x0000000000294e7d
- (id)_initWithUUID:(id)arg1 parentUUID:(id)arg2 recordName:(id)arg3 type:(id)arg4 change:(id)arg5;	// IMP=0x0000000000294d02
- (id)init;	// IMP=0x0000000000294c5a

@end

