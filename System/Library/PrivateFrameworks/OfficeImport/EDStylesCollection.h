//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EDStylesCollection
{
    unsigned long long mDefaultWorkbookStyleIndex;	// 16 = 0x10
}

- (void)setDefaultWorkbookStyleIndex:(unsigned long long)arg1;	// IMP=0x000000000011b378
- (unsigned long long)defaultWorkbookStyleIndex;	// IMP=0x00000000003a8be6
- (id)defaultWorkbookStyle;	// IMP=0x00000000001240af
- (void)removeAllObjects;	// IMP=0x00000000003a8bb7
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003a8b88
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000003a8b82
- (unsigned long long)addObject:(id)arg1;	// IMP=0x000000000011cc93
- (id)init;	// IMP=0x0000000000115dc2

@end

