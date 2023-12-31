//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDHeadersFooters : NSObject
{
    _Bool mHasDateTime;	// 8 = 0x8
    _Bool mHasNowDateTime;	// 9 = 0x9
    _Bool mHasUserDateTime;	// 10 = 0xa
    _Bool mHasSlideNumber;	// 11 = 0xb
    _Bool mHasHeader;	// 12 = 0xc
    _Bool mHasFooter;	// 13 = 0xd
    int mDateTimeFormat;	// 16 = 0x10
    NSString *mUserDateTime;	// 24 = 0x18
    NSString *mHeader;	// 32 = 0x20
    NSString *mFooter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004407ff
- (void)setFooter:(id)arg1;	// IMP=0x00000000004407a7
- (id)footer;	// IMP=0x0000000000440799
- (void)setHeader:(id)arg1;	// IMP=0x0000000000440741
- (id)header;	// IMP=0x0000000000440733
- (void)setUserDateTime:(id)arg1;	// IMP=0x00000000004406db
- (id)userDateTime;	// IMP=0x00000000004406cd
- (void)setHasFooter:(_Bool)arg1;	// IMP=0x00000000004406c4
- (_Bool)hasFooter;	// IMP=0x00000000004406bb
- (void)setHasHeader:(_Bool)arg1;	// IMP=0x00000000004406b2
- (_Bool)hasHeader;	// IMP=0x00000000004406a9
- (void)setHasSlideNumber:(_Bool)arg1;	// IMP=0x00000000004406a0
- (_Bool)hasSlideNumber;	// IMP=0x0000000000440697
- (void)setHasUserDateTime:(_Bool)arg1;	// IMP=0x000000000044068e
- (_Bool)hasUserDateTime;	// IMP=0x0000000000440685
- (void)setHasNowDateTime:(_Bool)arg1;	// IMP=0x000000000044067c
- (_Bool)hasNowDateTime;	// IMP=0x0000000000440673
- (void)setHasDateTime:(_Bool)arg1;	// IMP=0x000000000044066a
- (_Bool)hasDateTime;	// IMP=0x0000000000440661

@end

