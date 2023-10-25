//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _OSLogCatalogFilter : NSObject
{
    NSMutableSet *_pidAccept;	// 8 = 0x8
    NSMutableSet *_processLookupSubstr;	// 16 = 0x10
    NSMutableSet *_senderLookupSubstr;	// 24 = 0x18
    NSMutableSet *_subsysSubstrAccept;	// 32 = 0x20
    NSMutableSet *_uuidAccept;	// 40 = 0x28
    char *_uuidtext_path;	// 48 = 0x30
    _Bool _hasItems;	// 56 = 0x38
    _Bool _hasSharedCacheItems;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x0000000000028ecd
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x0000000000028ecc
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x0000000000028ecb
- (void)visitPredicate:(id)arg1;	// IMP=0x0000000000028e7a
- (void)processComparisonPredicate:(id)arg1;	// IMP=0x0000000000028dd2
- (void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2;	// IMP=0x0000000000028c3c
- (void)readDSCUUIDs;	// IMP=0x0000000000028b1e
- (void)handleDSOFile:(struct _ftsent *)arg1;	// IMP=0x0000000000028838
- (void)readDSOUUIDs;	// IMP=0x00000000000286b4
- (void)generateUUIDSet;	// IMP=0x0000000000028644
- (_Bool)containsSenderLookupSubstr:(id)arg1;	// IMP=0x00000000000284e8
- (_Bool)containsProcessLookupSubstr:(id)arg1;	// IMP=0x000000000002838c
- (void)addSenderLookupSubstr:(id)arg1;	// IMP=0x0000000000028377
- (void)addProcessLookupSubstr:(id)arg1;	// IMP=0x0000000000028362
- (_Bool)containsUUID:(id)arg1;	// IMP=0x0000000000028351
- (void)addUUID:(id)arg1;	// IMP=0x0000000000028340
- (_Bool)containsSubsystemSubstr:(id)arg1;	// IMP=0x00000000000281e4
- (void)addSubsystem:(id)arg1;	// IMP=0x00000000000281cf
- (_Bool)containsProcessID:(id)arg1;	// IMP=0x00000000000281be
- (void)addProcessID:(id)arg1;	// IMP=0x00000000000281a9
- (_Bool)isKeptCatalog:(struct catalog_s *)arg1;	// IMP=0x0000000000027faf
- (void)dealloc;	// IMP=0x0000000000027f75
- (id)initWithPredicate:(id)arg1 collection:(id)arg2;	// IMP=0x0000000000027ce2

@end
