//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCSMessageOperation
{
}

- (id)localizedShortOperationDescription;	// IMP=0x0040000000046594
- (id)localizedErrorTitleForMessageCount:(unsigned long long)arg1;	// IMP=0x0010000000046561
- (id)localizedErrorDescriptionForMessageCount:(unsigned long long)arg1;	// IMP=0x001000000004652e
- (_Bool)willUnflag;	// IMP=0x00100000000464fb
- (_Bool)willFlag;	// IMP=0x00100000000464c8
- (_Bool)willMarkUnread;	// IMP=0x0010000000046495
- (_Bool)willMarkRead;	// IMP=0x0010000000046462
- (_Bool)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x00100000000463d2

@end

