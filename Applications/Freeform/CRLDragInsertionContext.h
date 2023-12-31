//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLDragInsertionContext
{
    _Bool _preferredCenterRequired;	// 8 = 0x8
    _Bool _shouldEndEditing;	// 9 = 0x9
    _Bool _fromDragToInsertController;	// 10 = 0xa
    _Bool _insertFloating;	// 11 = 0xb
    unsigned long long _targetZOrder;	// 16 = 0x10
    struct CGPoint _preferredCenter;	// 24 = 0x18
}

- (unsigned long long)targetZOrder;	// IMP=0x00200000002ac4ab
- (_Bool)insertFloating;	// IMP=0x00100000002ac49b
- (_Bool)fromDragToInsertController;	// IMP=0x00100000002ac48b
- (_Bool)shouldEndEditing;	// IMP=0x00100000002ac47b
- (struct CGPoint)preferredCenter;	// IMP=0x00100000002ac463
- (_Bool)isPreferredCenterRequired;	// IMP=0x00100000002ac453
- (id)insertionContextFromInsertionContextWithNextZOrder;	// IMP=0x00100000002ac3b5
- (id)insertionContextFromInsertionContextWithZOrder:(unsigned long long)arg1;	// IMP=0x00100000002ac330
- (_Bool)isInteractive;	// IMP=0x00100000002ac328
- (_Bool)insertInline;	// IMP=0x00100000002ac320
- (_Bool)insertFromDrag;	// IMP=0x00100000002ac318
- (_Bool)hasPreferredCenter;	// IMP=0x00100000002ac310
- (id)initWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 shouldEndEditing:(_Bool)arg3 fromDragToInsertController:(_Bool)arg4 insertFloating:(_Bool)arg5 targetZOrder:(unsigned long long)arg6;	// IMP=0x00100000002ac262

@end

