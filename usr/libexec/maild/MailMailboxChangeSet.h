//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCSMailboxOperation;

@interface MailMailboxChangeSet
{
    MCSMailboxOperation *_mailboxOperation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003d453
- (_Bool)allowOtherChange:(id)arg1;	// IMP=0x001000000003d3c6
- (id)stores;	// IMP=0x001000000003d3be
- (id)accounts;	// IMP=0x001000000003d319
- (id)mailboxParentForMove;	// IMP=0x001000000003d2fc
- (id)mailboxToMoveOrRename;	// IMP=0x001000000003d2df
- (id)mailboxToRemove;	// IMP=0x001000000003d2c2
- (id)modifiedMailboxName;	// IMP=0x001000000003d2a5
- (id)description;	// IMP=0x001000000003d204
- (id)localizedErrorTitle;	// IMP=0x001000000003d1e7
- (id)localizedErrorDescription;	// IMP=0x001000000003d1ca
- (_Bool)revert;	// IMP=0x001000000003d184
- (_Bool)commit;	// IMP=0x001000000003d07c
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x001000000003d074
- (id)initWithOperation:(id)arg1;	// IMP=0x001000000003cfe3

@end
