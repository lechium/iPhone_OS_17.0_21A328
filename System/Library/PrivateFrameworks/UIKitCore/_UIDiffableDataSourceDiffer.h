//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSIndexSet, _UIIdentifierDiffer;
@protocol _UIDiffableDataSourceState;

__attribute__((visibility("hidden")))
@interface _UIDiffableDataSourceDiffer : NSObject
{
    id <_UIDiffableDataSourceState> _beforeDataSourceState;	// 8 = 0x8
    id <_UIDiffableDataSourceState> _afterDataSourceState;	// 16 = 0x10
    NSArray *_updates;	// 24 = 0x18
    _UIIdentifierDiffer *_itemIdentifierDiffer;	// 32 = 0x20
    _UIIdentifierDiffer *_sectionIdentifierDiffer;	// 40 = 0x28
    NSIndexSet *_deletedSections;	// 48 = 0x30
    NSIndexSet *_insertedSections;	// 56 = 0x38
    NSHashTable *_affectedSectionIdentifiers;	// 64 = 0x40
}

+ (id)differWithBeforeDataSourceState:(id)arg1 afterDataSourceState:(id)arg2 itemIdentifierDiffer:(id)arg3;	// IMP=0x00100000003b0999
+ (id)differWithBeforeDataSourceState:(id)arg1 afterDataSourceState:(id)arg2;	// IMP=0x00100000003b0928
- (void).cxx_destruct;	// IMP=0x00000000003b3dd5
@property(retain, nonatomic) NSHashTable *affectedSectionIdentifiers; // @synthesize affectedSectionIdentifiers=_affectedSectionIdentifiers;
@property(retain, nonatomic) NSIndexSet *insertedSections; // @synthesize insertedSections=_insertedSections;
@property(retain, nonatomic) NSIndexSet *deletedSections; // @synthesize deletedSections=_deletedSections;
@property(retain, nonatomic) _UIIdentifierDiffer *sectionIdentifierDiffer; // @synthesize sectionIdentifierDiffer=_sectionIdentifierDiffer;
@property(retain, nonatomic) _UIIdentifierDiffer *itemIdentifierDiffer; // @synthesize itemIdentifierDiffer=_itemIdentifierDiffer;
@property(retain, nonatomic) NSArray *updates; // @synthesize updates=_updates;
@property(retain, nonatomic) id <_UIDiffableDataSourceState> afterDataSourceState; // @synthesize afterDataSourceState=_afterDataSourceState;
@property(retain, nonatomic) id <_UIDiffableDataSourceState> beforeDataSourceState; // @synthesize beforeDataSourceState=_beforeDataSourceState;
@property(readonly, nonatomic) _Bool hasDifferences;
@property(readonly, nonatomic) _Bool snapshotsAreRelated;
- (_Bool)_verifyForUpdates:(id)arg1;	// IMP=0x00000000003b22ba
- (id)_sectionUpdatesForDiffResults:(id)arg1 deletedSections:(id)arg2 insertedSections:(id)arg3;	// IMP=0x00000000003b1c3b
- (id)_itemUpdatesForDiffResults:(id)arg1 sectionBoundaryMoves:(id)arg2 deletedSections:(id)arg3 insertedSections:(id)arg4;	// IMP=0x00000000003b120c
- (id)_computeSectionBoundaryMovesForItemDiffer:(id)arg1;	// IMP=0x00000000003b113a
- (id)_computeUpdatesForIdentifierBasedDiff;	// IMP=0x00000000003b0a57
- (void)_computeUpdates;	// IMP=0x00000000003b0a25
- (id)description;	// IMP=0x00000000003b0323
- (id)initWithBeforeDataSource:(id)arg1 afterDataSource:(id)arg2 itemIdentifierDiffer:(id)arg3;	// IMP=0x00000000003b0258

@end

