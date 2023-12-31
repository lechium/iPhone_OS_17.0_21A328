//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFMailboxUid, NSString, NSURL;

@interface MFNanoBridgeSettingsAccountSpecificMailbox
{
    MFMailboxUid *_mailboxUid;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSURL *_mailboxURL;	// 24 = 0x18
    NSString *_accountUniqueIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000098dba
- (void).cxx_destruct;	// IMP=0x00200000000997bf
@property(readonly, nonatomic) NSURL *mailboxURL; // @synthesize mailboxURL=_mailboxURL;
@property(readonly, nonatomic) NSString *accountUniqueIdentifier; // @synthesize accountUniqueIdentifier=_accountUniqueIdentifier;
- (id)_mailboxUid;	// IMP=0x001000000009945a
@property(readonly, nonatomic) NSString *mailboxId;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000992dc
- (unsigned long long)hash;	// IMP=0x0010000000099284
- (_Bool)isValid;	// IMP=0x0010000000099251
- (unsigned long long)level;	// IMP=0x00100000000991d8
- (id)icon;	// IMP=0x001000000009908b
- (id)displayName;	// IMP=0x001000000009901e
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000098e9f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000098dc2
@property(readonly, nonatomic) long long type;
- (void)invalidateCachedData;	// IMP=0x0010000000098d41
- (unsigned long long)mailboxFilterType;	// IMP=0x0010000000098d36
- (id)initWithAccountUniqueIdentifier:(id)arg1 mailboxURL:(id)arg2;	// IMP=0x0010000000098c5a
- (id)initWithMailboxUid:(id)arg1 account:(id)arg2;	// IMP=0x0010000000098ac1

@end

