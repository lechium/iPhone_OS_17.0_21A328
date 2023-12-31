//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, NSArray, NSMutableDictionary, NSNumber, NSString;

@interface CKDAssetRecord : NSObject
{
    NSString *_recordType;	// 8 = 0x8
    CKRecordID *_recordID;	// 16 = 0x10
    NSMutableDictionary *_itemsByRecordKey;	// 24 = 0x18
    NSMutableDictionary *_rereferencedItemsByRecordKey;	// 32 = 0x20
    NSMutableDictionary *_sectionItemsByRecordKey;	// 40 = 0x28
    NSNumber *_sizeUpperBoundNumber;	// 48 = 0x30
    NSNumber *_rerefSizeUpperBoundNumber;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003b7d6
@property(retain, nonatomic) NSNumber *rerefSizeUpperBoundNumber; // @synthesize rerefSizeUpperBoundNumber=_rerefSizeUpperBoundNumber;
@property(retain, nonatomic) NSNumber *sizeUpperBoundNumber; // @synthesize sizeUpperBoundNumber=_sizeUpperBoundNumber;
@property(retain, nonatomic) NSMutableDictionary *sectionItemsByRecordKey; // @synthesize sectionItemsByRecordKey=_sectionItemsByRecordKey;
@property(retain, nonatomic) NSMutableDictionary *rereferencedItemsByRecordKey; // @synthesize rereferencedItemsByRecordKey=_rereferencedItemsByRecordKey;
@property(retain, nonatomic) NSMutableDictionary *itemsByRecordKey; // @synthesize itemsByRecordKey=_itemsByRecordKey;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
- (_Bool)isEmptyOfRereferencesAssets;	// IMP=0x000000000003b71e
- (_Bool)isEmpty;	// IMP=0x000000000003b6c3
- (_Bool)isAssetRecord;	// IMP=0x000000000003b6a6
- (_Bool)isPackageSectionRecord;	// IMP=0x000000000003b689
- (id)firstMMCSSectionItemError;	// IMP=0x000000000003b4ed
- (id)firstMMCSItemError;	// IMP=0x000000000003b32c
- (id)allRegularAndSectionAndRereferenceItems;	// IMP=0x000000000003b129
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)arg1;	// IMP=0x000000000003b01e
- (id)allMMCSAndSectionItems;	// IMP=0x000000000003aebc
- (id)allRecordKeys;	// IMP=0x000000000003ad5e
@property(readonly, nonatomic) NSArray *allMMCSSectionItems;
- (id)allRereferenceMMCSItems;	// IMP=0x000000000003ab70
@property(readonly, nonatomic) NSArray *allMMCSItems;
@property(readonly) unsigned int rerefSizeUpperBound;
@property(readonly) unsigned int sizeUpperBound;
- (void)addMMCSSectionItem:(id)arg1;	// IMP=0x000000000003a675
- (void)addRereferencedMMCSItem:(id)arg1;	// IMP=0x000000000003a576
- (void)addMMCSItem:(id)arg1;	// IMP=0x000000000003a411
- (id)description;	// IMP=0x000000000003a3ff
- (id)CKPropertiesDescription;	// IMP=0x000000000003a205
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;	// IMP=0x000000000003a120

@end

