//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EFDebouncer;
@protocol EFCancelable;

@interface FavoriteItem_UnifiedMailbox
{
    int _mailboxType;	// 104 = 0x68
    id <EFCancelable> _unreadCountToken;	// 112 = 0x70
    EFDebouncer *_badgeCountDebouncer;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000018182
@property(retain) EFDebouncer *badgeCountDebouncer; // @synthesize badgeCountDebouncer=_badgeCountDebouncer;
@property(retain) id <EFCancelable> unreadCountToken; // @synthesize unreadCountToken=_unreadCountToken;
- (id)analyticsKey;	// IMP=0x00100000000180bc
- (id)description;	// IMP=0x0010000000017ed5
- (id)persistentIDForMigration;	// IMP=0x0010000000017eb0
- (id)displayName;	// IMP=0x0010000000017de8
- (_Bool)_displayNameShouldBeRedacted;	// IMP=0x0010000000017de0
- (id)dictionaryRepresentation;	// IMP=0x0010000000017d26
- (_Bool)acceptsMessageTransfers;	// IMP=0x0010000000017cf2
- (_Bool)isVisible;	// IMP=0x0010000000017c58
- (id)representingMailboxes;	// IMP=0x0010000000017a1d
- (id)itemURLString;	// IMP=0x001000000001799d
- (id)itemID;	// IMP=0x0010000000017916
- (int)mailboxType;	// IMP=0x0010000000017906
- (unsigned long long)hash;	// IMP=0x00100000000178f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001787d
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000001779e
- (id)initWithMailboxType:(int)arg1;	// IMP=0x0010000000017757

@end

