//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMessageCriterion, MISSING_TYPE, NSArray, NSDictionary, NSNumber, NSPredicate, NSString;

@interface FavoriteItem : NSObject
{
    long long _type;	// 8 = 0x8
    _Bool _expanded;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 20 = 0x14
    NSString *_syncKey;	// 24 = 0x18
    NSString *_itemID;	// 32 = 0x20
    NSString *_itemUUID;	// 40 = 0x28
    NSString *_collectionID;	// 48 = 0x30
    MISSING_TYPE *_selected;	// 56 = 0x38
    _Bool _shouldSync;	// 57 = 0x39
    _Bool _showUnreadCount;	// 58 = 0x3a
    MFMessageCriterion *_criterion;	// 64 = 0x40
    NSNumber *_badgeCount;	// 72 = 0x48
    NSDictionary *_scrollableHint;	// 80 = 0x50
    NSArray *_subItems;	// 88 = 0x58
    NSString *_analyticsKey;	// 96 = 0x60
}

+ (id)itemFromDictionary:(id)arg1;	// IMP=0x00200000000140b1
+ (_Bool)_defaultShouldExpand;	// IMP=0x0010000000013da8
+ (_Bool)_defaultShouldSync;	// IMP=0x0010000000013da0
+ (id)itemForOutbox;	// IMP=0x0010000000013d87
+ (id)itemForVIP:(id)arg1 selected:(_Bool)arg2;	// IMP=0x0010000000013cfb
+ (id)itemForSharedMailboxWithType:(unsigned long long)arg1 selected:(_Bool)arg2;	// IMP=0x0010000000013c8f
+ (id)itemForUnifiedMailboxWithType:(int)arg1 selected:(_Bool)arg2;	// IMP=0x0010000000013c25
+ (id)itemForInboxWithAccount:(id)arg1 selected:(_Bool)arg2;	// IMP=0x0010000000013b99
+ (id)itemForMailbox:(id)arg1 selected:(_Bool)arg2 shouldSync:(_Bool)arg3;	// IMP=0x0010000000013af7
+ (id)itemForMailbox:(id)arg1 selected:(_Bool)arg2;	// IMP=0x0010000000013acf
+ (id)itemForAccount:(id)arg1;	// IMP=0x0010000000013a71
+ (id)log;	// IMP=0x0010000000013994
- (void).cxx_destruct;	// IMP=0x002000000001510e
@property(readonly, copy, nonatomic) NSString *analyticsKey; // @synthesize analyticsKey=_analyticsKey;
@property(nonatomic) _Bool showUnreadCount; // @synthesize showUnreadCount=_showUnreadCount;
@property(copy) NSArray *subItems; // @synthesize subItems=_subItems;
@property(copy, nonatomic) NSDictionary *scrollableHint; // @synthesize scrollableHint=_scrollableHint;
@property _Bool shouldSync; // @synthesize shouldSync=_shouldSync;
@property(getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain) NSNumber *badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) unsigned long long sourceType;
- (id)_descriptionFullyRedacted:(_Bool)arg1;	// IMP=0x0010000000014de5
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(getter=isExpanded) _Bool expanded;
@property(readonly, getter=isExpandableInEditMode) _Bool expandableInEditMode;
@property(readonly, getter=isExpandable) _Bool expandable;
@property(readonly) _Bool acceptsMessageTransfers;
- (id)persistentIDForMigration;	// IMP=0x0010000000014bf8
- (void)wasChangedExternally;	// IMP=0x0010000000014bf2
- (void)wasRemovedFromCollecion:(id)arg1;	// IMP=0x0010000000014bd8
- (void)wasAddedToCollection:(id)arg1;	// IMP=0x0010000000014b78
- (id)syncValue;	// IMP=0x0010000000014b70
- (id)syncKey;	// IMP=0x0010000000014b68
- (_Bool)isVisible;	// IMP=0x0010000000014b60
- (id)representingMailboxes;	// IMP=0x0010000000014ab8
- (id)representingMailbox;	// IMP=0x0010000000014ab0
- (id)account;	// IMP=0x0010000000014aa8
@property(readonly) NSPredicate *additionalPredicate;
- (id)serverCountMailboxScope;	// IMP=0x00100000000149ee
- (id)countQueryPredicate;	// IMP=0x0010000000014866
- (id)badgeCountString;	// IMP=0x001000000001474a
- (id)displayName;	// IMP=0x0010000000014717
- (_Bool)_displayNameShouldBeRedacted;	// IMP=0x001000000001470f
@property(readonly, nonatomic) NSString *parentItemID;
@property(readonly, nonatomic) NSString *itemURLString;
@property(readonly, nonatomic) NSString *itemUUID;
@property(readonly, nonatomic) NSString *itemID;
- (id)dictionaryRepresentationRemovingSyncKeys;	// IMP=0x00100000000144d9
- (id)dictionaryRepresentation;	// IMP=0x001000000001420b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000013e3e
- (id)initWithType:(long long)arg1;	// IMP=0x0010000000013db0

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

