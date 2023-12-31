//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFMailboxUid, NSSet;

@interface MFMailboxResultsGenerator
{
    MFMailboxUid *_mailboxUid;	// 8 = 0x8
    NSSet *_pushedMailboxUids;	// 16 = 0x10
}

+ (id)resultsDictionaryFromMailboxUid:(id)arg1 forKeys:(id)arg2;	// IMP=0x00400000000872bd
- (void).cxx_destruct;	// IMP=0x002000000008774d
@property(retain, nonatomic) NSSet *pushedMailboxUids; // @synthesize pushedMailboxUids=_pushedMailboxUids;
@property(retain, nonatomic) MFMailboxUid *mailboxUid; // @synthesize mailboxUid=_mailboxUid;
- (id)_pushState:(id)arg1;	// IMP=0x00100000000876a7
- (id)_level:(id)arg1;	// IMP=0x001000000008765a
- (id)_type:(id)arg1;	// IMP=0x001000000008760c
- (id)_relativePath:(id)arg1;	// IMP=0x00100000000875df
- (id)_displayName:(id)arg1;	// IMP=0x00100000000875b2
- (CDUnknownBlockType)blockForKey:(id)arg1;	// IMP=0x0010000000087392

@end

