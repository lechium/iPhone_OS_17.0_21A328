//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _NSTextAttributeStorage
{
}

- (void)enumerateAttributesFromLocation:(id)arg1 reverse:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000079a5
- (_Bool)setAttributes:(id)arg1 forTextRange:(id)arg2;	// IMP=0x000000000000798d
- (_Bool)_setAttributes:(id)arg1 forTextRange:(id)arg2 checkForChange:(_Bool)arg3;	// IMP=0x00000000000078cd
- (_Bool)_attributesInTextRange:(id)arg1 areEqualToAttributes:(id)arg2;	// IMP=0x00000000000075ea
- (_Bool)removeAttribute:(id)arg1 forTextRange:(id)arg2;	// IMP=0x00000000000075d3
- (_Bool)addAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;	// IMP=0x00000000000075c1
- (_Bool)setAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;	// IMP=0x0000000000006dc6

@end
