//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _NSUndoBeginMark
{
    id _groupIdentifier;	// 32 = 0x20
    _Bool _isDiscardable;	// 40 = 0x28
}

- (id)description;	// IMP=0x0000000000749a11
- (_Bool)isBeginMark;	// IMP=0x0000000000749a09
- (void)setDiscardable:(_Bool)arg1;	// IMP=0x00000000007499f9
- (_Bool)isDiscardable;	// IMP=0x00000000007499e9
- (id)groupIdentifier;	// IMP=0x00000000007499cb
- (void)setGroupIdentifier:(id)arg1;	// IMP=0x0000000000749970
- (void)dealloc;	// IMP=0x000000000074990b

@end
