//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableAttributedString;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationTyping
{
    struct _NSRange _replacementRange;	// 32 = 0x20
    NSMutableAttributedString *_attributedString;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000001428dc1
- (_Bool)supportsCoalescing;	// IMP=0x0000000001428db9
- (void)undoRedo;	// IMP=0x0000000001428a2c
- (_Bool)coalesceAffectedRange:(struct _NSRange)arg1 replacementRange:(struct _NSRange)arg2 selectedRange:(struct _NSRange)arg3 textStorage:(id)arg4;	// IMP=0x00000000014288d9
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2 replacementRange:(struct _NSRange)arg3;	// IMP=0x00000000014287b4

@end

