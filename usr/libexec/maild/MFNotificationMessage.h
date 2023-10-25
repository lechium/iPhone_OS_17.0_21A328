//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, MFLibraryMessage, MFMailboxUid, MailAccount, NSDate, NSSet, NSString;
@protocol EMVIPReader, MFFavoritesReader;

@interface MFNotificationMessage : NSObject
{
    _Bool _isVIP;	// 8 = 0x8
    _Bool _isFavoriteMailbox;	// 9 = 0x9
    _Bool _isRemindMe;	// 10 = 0xa
    int _mailboxType;	// 12 = 0xc
    MFLibraryMessage *_libraryMessage;	// 16 = 0x10
    MailAccount *_account;	// 24 = 0x18
    NSDate *_dateReceived;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_subtitle;	// 48 = 0x30
    NSString *_summary;	// 56 = 0x38
    NSString *_senderAddress;	// 64 = 0x40
    NSSet *_suppressionContexts;	// 72 = 0x48
    NSString *_accountID;	// 80 = 0x50
    NSString *_nanoMessageId;	// 88 = 0x58
    NSDate *_remindMeDate;	// 96 = 0x60
    id <MFFavoritesReader> _favoritesReader;	// 104 = 0x68
    id <EMVIPReader> _vipReader;	// 112 = 0x70
    MFMailboxUid *_mailbox;	// 120 = 0x78
    NSString *_subject;	// 128 = 0x80
    NSString *_senderCommentedAddress;	// 136 = 0x88
    CNContactStore *_contactStore;	// 144 = 0x90
    NSString *_senderFullAddress;	// 152 = 0x98
}

+ (id)notificationIDForMessage:(id)arg1;	// IMP=0x00200000000b3423
- (void).cxx_destruct;	// IMP=0x00200000000b4f4c
@property(copy, nonatomic) NSString *senderFullAddress; // @synthesize senderFullAddress=_senderFullAddress;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, copy, nonatomic) NSString *senderCommentedAddress; // @synthesize senderCommentedAddress=_senderCommentedAddress;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
@property(retain, nonatomic) id <EMVIPReader> vipReader; // @synthesize vipReader=_vipReader;
@property(retain, nonatomic) id <MFFavoritesReader> favoritesReader; // @synthesize favoritesReader=_favoritesReader;
@property(readonly, copy, nonatomic) NSDate *remindMeDate; // @synthesize remindMeDate=_remindMeDate;
@property(readonly, nonatomic) _Bool isRemindMe; // @synthesize isRemindMe=_isRemindMe;
@property(readonly, nonatomic) _Bool isFavoriteMailbox; // @synthesize isFavoriteMailbox=_isFavoriteMailbox;
@property(readonly, nonatomic) _Bool isVIP; // @synthesize isVIP=_isVIP;
@property(readonly, nonatomic) int mailboxType; // @synthesize mailboxType=_mailboxType;
@property(readonly, copy, nonatomic) NSString *nanoMessageId; // @synthesize nanoMessageId=_nanoMessageId;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, copy, nonatomic) NSSet *suppressionContexts; // @synthesize suppressionContexts=_suppressionContexts;
@property(readonly, copy, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(readonly, copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(retain, nonatomic) MailAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) MFLibraryMessage *libraryMessage; // @synthesize libraryMessage=_libraryMessage;
@property(readonly, nonatomic) unsigned long long status;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isNotifiedThread;
@property(readonly, copy, nonatomic) NSString *coalesceThreadID;
@property(readonly, copy, nonatomic) NSSet *topicIdentifiers;
@property(readonly, copy, nonatomic) NSString *notificationID;
@property(readonly, copy, nonatomic) NSString *messageReference;
- (_Bool)_isInFavoriteMailbox;	// IMP=0x00100000000b4632
- (id)_displaySubject;	// IMP=0x00100000000b44fa
- (id)_displaySender;	// IMP=0x00100000000b409f
- (id)_summaryForRemindMe;	// IMP=0x00100000000b3fa0
- (id)initWithFavoritesReader:(id)arg1 vipReader:(id)arg2 libraryMessage:(id)arg3 contactStore:(id)arg4 remindMeDate:(id)arg5;	// IMP=0x00100000000b3a4a
- (id)initWithFavoritesReader:(id)arg1 vipReader:(id)arg2 libraryMessage:(id)arg3 contactStore:(id)arg4 suppressionContexts:(id)arg5 summary:(id)arg6;	// IMP=0x00100000000b3500

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
