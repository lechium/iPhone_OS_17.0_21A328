//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CRLWPFontVerificationCache : NSObject
{
    NSMutableDictionary *_verifiedFonts;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000005a93aa
- (id)filterFontNames:(id)arg1 withoutStatus:(long long)arg2;	// IMP=0x00100000005a92ba
- (id)filterFontNames:(id)arg1 withStatusInSet:(id)arg2;	// IMP=0x00100000005a918b
- (id)filterFontNames:(id)arg1 withStatus:(long long)arg2;	// IMP=0x00100000005a9094
- (id)fontNamesWithStatusInSet:(id)arg1;	// IMP=0x00100000005a8fd8
- (id)fontNamesWithStatus:(long long)arg1;	// IMP=0x00100000005a8f2c
- (void)reset;	// IMP=0x00100000005a8f16
- (void)resetFontNames:(id)arg1 withStatusInSet:(id)arg2;	// IMP=0x00100000005a8ea1
- (void)resetFontNames:(id)arg1 withStatus:(long long)arg2;	// IMP=0x00100000005a8e26
- (void)setStatus:(long long)arg1 forFontNames:(id)arg2;	// IMP=0x00100000005a8c77
- (void)setStatus:(long long)arg1 forFontName:(id)arg2;	// IMP=0x00100000005a8bcd
- (long long)statusForFontName:(id)arg1;	// IMP=0x00100000005a8b7c
- (id)init;	// IMP=0x00100000005a8b26

@end

