//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSProgress, NSSet;

@interface FullSearchOperation
{
    NSProgress *_progress;	// 96 = 0x60
    struct os_unfair_lock_s _accountsLock;	// 104 = 0x68
    NSSet *_accounts;	// 112 = 0x70
    struct os_unfair_lock_s _remoteSearchCoordinatorsByAccountIdentifierLock;	// 120 = 0x78
    NSMutableDictionary *_remoteSearchCoordinatorsByAccountIdentifier;	// 128 = 0x80
}

+ (id)fullSearchForManager:(id)arg1 searchContext:(id)arg2 mailboxes:(id)arg3;	// IMP=0x00400000000d5b92
- (void).cxx_destruct;	// IMP=0x00200000000d8cce
- (id)_orderedMailboxesForAccount:(id)arg1;	// IMP=0x00100000000d86fe
- (id)_orderedEnumeratorForMailboxes:(id)arg1 withAccount:(id)arg2;	// IMP=0x00100000000d818a
- (void)_performRemoteSearchForAccount:(id)arg1 coordinator:(id)arg2;	// IMP=0x00100000000d7ee2
- (id)_performRemoteSearchesForAccount:(id)arg1;	// IMP=0x00100000000d756b
- (id)_performRemoteSearchesWithMailboxes:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000000d70fb
- (void)performRemoteSearches;	// IMP=0x00100000000d6b9a
- (id)_searchableMailboxesByAccount;	// IMP=0x00100000000d67ba
- (void)accountsChanged:(id)arg1;	// IMP=0x00100000000d6753
- (void)updateWithAccounts:(id)arg1;	// IMP=0x00100000000d631c
- (id)accounts;	// IMP=0x00100000000d62d8
- (void)main;	// IMP=0x00100000000d6027
- (void)cancel;	// IMP=0x00100000000d5f78
- (id)progress;	// IMP=0x00100000000d5f63
- (id)initWithManager:(id)arg1 mailboxes:(id)arg2 searchContext:(id)arg3;	// IMP=0x00100000000d5c42

@end
