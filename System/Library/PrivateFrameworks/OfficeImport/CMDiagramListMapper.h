//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CMDiagramListMapper
{
    float mMaxLineCount;	// 228 = 0xe4
}

- (float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 level:(int)arg3;	// IMP=0x00000000001ff9cf
- (void)setDefaultFonSize;	// IMP=0x00000000001ff771
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000045e731
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001ffd13
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001ff276
- (struct CGSize)textSize;	// IMP=0x00000000001ffc47
- (void)mapListItemAt:(id)arg1 index:(unsigned long long)arg2 withState:(id)arg3;	// IMP=0x00000000001ffdbf
- (id)suggestedBoundsForHListItemWithIndex:(unsigned long long)arg1;	// IMP=0x00000000001fff76

@end
