//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDSStyle;

@interface GQDWPLink
{
    GQDSStyle *mCharStyle;	// 16 = 0x10
    struct __CFString *mHref;	// 24 = 0x18
}

- (struct __CFString *)href;	// IMP=0x000000000002137a
- (id)characterStyle;	// IMP=0x0000000000021369
- (void)dealloc;	// IMP=0x0000000000021312
- (int)readStyleFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x000000000002138b

@end
