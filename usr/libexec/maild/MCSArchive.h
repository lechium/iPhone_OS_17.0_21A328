//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCSMessageOperation, MISSING_TYPE;

@interface MCSArchive
{
    MCSMessageOperation *_seenOrTransferOperation;	// 16 = 0x10
    MCSMessageOperation *_deleteOperation;	// 24 = 0x18
    MISSING_TYPE *_isDeleteInPlace;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000043010
- (id)localizedShortOperationDescription;	// IMP=0x0010000000042f90
- (id)localizedErrorTitleForMessageCount:(unsigned long long)arg1;	// IMP=0x0010000000042f73
- (id)localizedErrorDescriptionForMessageCount:(unsigned long long)arg1;	// IMP=0x0010000000042f56
- (_Bool)willFlag;	// IMP=0x0010000000042efb
- (_Bool)willUnflag;	// IMP=0x0010000000042ea0
- (_Bool)willMarkUnread;	// IMP=0x0010000000042e45
- (_Bool)willMarkRead;	// IMP=0x0010000000042dea
- (_Bool)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x0010000000042cae
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x0010000000042b98
- (id)initWithStore:(id)arg1;	// IMP=0x0010000000042927

@end
